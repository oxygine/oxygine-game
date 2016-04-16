#include "GameScene.h"
#include "MainMenuScene.h"
#include "MyButton.h"
#include "res.h"
#include "GameMenu.h"

spGameScene GameScene::instance;

GameScene::GameScene()
{
    //create game actor
    _game = new Game;
    _game->init();
    _game->attachTo(_view);

    //Game Actor would have own Clock.
    //clock is internal time of each Actor
    //by default own clock has only Stage
    //clock could be paused and all children of this Actor would be paused to
    _game->setClock(new Clock);

    //create menu button
    spActor btn = initActor(new MyButton,
                            arg_resAnim = res::ui.getResAnim("menu"),
                            arg_anchor = Vector2(0.5f, 0.5f),
                            arg_attachTo = _view);

    //align it to top right
    btn->setX(_view->getWidth() - btn->getWidth() / 2);
    btn->setY(btn->getHeight() / 2);

    //handle click to menu
    btn->addEventListener(TouchEvent::CLICK, CLOSURE(this, &GameScene::onEvent));
}

void GameScene::onEvent(Event* ev)
{
    if (ev->type == TouchEvent::CLICK)
    {
        //menu button clicked
        //pause game by pausing it's clock
        _game->getClock()->pause();

        //show GameMenu dialog
		flow::show(GameMenu::instance, [=](Event* ev){

			//"Continue" button was clicked
			//dialog already hidden
			//just resume Clock to continue game
			_game->getClock()->resume();

			if (ev->target->getName() == "Exit")
				finish();
		});
    }
}
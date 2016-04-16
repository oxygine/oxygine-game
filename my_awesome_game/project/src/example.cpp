#include "oxygine-framework.h"
#include "oxygine-sound.h"
#include "res.h"
#include "Game.h"
#include "MainMenuScene.h"
#include "GameScene.h"
#include "GameMenu.h"
using namespace oxygine;


SoundPlayer player;

void example_preinit()
{
}

void example_init()
{
    SoundSystem::create()->init(16);
    //load resources
    res::load();

	flow::init();
    //create all scenes
    GameMenu::instance = new GameMenu;
    GameScene::instance = new GameScene;
    MainMenuScene::instance = new MainMenuScene;

    //show main menu
    flow::show(MainMenuScene::instance);
}

void example_update()
{
    SoundSystem::get()->update();
    player.update();
	flow::update();
}

void example_destroy()
{
    MainMenuScene::instance = 0;
    GameScene::instance = 0;
    GameMenu::instance = 0;

    res::free();

    SoundSystem::free();
	flow::free();
}
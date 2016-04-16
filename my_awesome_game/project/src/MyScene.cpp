#include "MyScene.h"

MyScene::MyScene()
{
    _view = new Actor;
    _view->setSize(getStage()->getSize());
	_holder->addChild(_view);
}
#include "Scene.h"

Scene::Scene()
{
    _view = new Actor;
    _view->setSize(getStage()->getSize());
	_holder->addChild(_view);
}
#pragma once
#include "MyScene.h"
#include "Game.h"

DECLARE_SMART(GameScene, spGameScene);
class GameScene: public MyScene
{
public:
    static spGameScene instance;
    GameScene();


private:
    void onEvent(Event* ev);
    spGame _game;
};

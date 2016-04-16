#pragma once
#include "MyScene.h"

DECLARE_SMART(MainMenuScene, spMainMenuScene);
class MainMenuScene: public MyScene
{
public:
    static spMainMenuScene instance;

    MainMenuScene();

private:
    void onEvent(Event* ev);
};
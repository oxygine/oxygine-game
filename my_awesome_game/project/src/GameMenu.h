#pragma once
#include "Scene.h"

DECLARE_SMART(GameMenu, spGameMenu);
class GameMenu: public Scene
{
public:
    static spGameMenu instance;

    GameMenu();

private:
    void showButtons(Event* ev);
	void preShowing(Event*);

    spBox9Sprite _bg;
    spActor _buttons;
};
#pragma once
#include "oxygine-framework.h"
#include "oxygine-flow.h"

#include <vector>
using namespace oxygine;
using namespace std;

DECLARE_SMART(Scene, spScene);
class MyScene: public flow::Scene
{
public:
    MyScene();

    spActor getView() const {return _view;}

protected:
    spActor _view;
};




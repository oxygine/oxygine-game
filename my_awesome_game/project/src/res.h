#pragma once
#include "oxygine-framework.h"
#include <unordered_map>
#include "ResSound.h"

using namespace oxygine;
using namespace std;

namespace res
{
    extern Resources ui;
    void load();
    void free();
}


void playSound(const string& id);

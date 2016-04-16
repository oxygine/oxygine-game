#include "res.h"
#include "oxygine-sound.h"

extern  SoundPlayer player;

namespace res
{
    Resources ui;
    unordered_map<string, ResSound*> sounds;

    void load()
    {
        ui.loadXML("xmls/ui.xml");
        sounds["click"] = ResSound::create("sounds/button_click.ogg", false);
		sounds["bomb_match"] = ResSound::create("sounds/bomb_match.ogg", false);
    }

    void free()
    {
        ui.free();

        delete sounds["click"];
    }
}


void playSound(const string& id)
{
    player.play(res::sounds[id]);
}
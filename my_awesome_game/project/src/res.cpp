#include "res.h"
#include "oxygine-sound.h"
#include <map>
extern  SoundPlayer player;

namespace res
{
    Resources ui;
	typedef std::map<string, ResSound*> Sounds;
	Sounds sounds;

    void load()
    {
        ui.loadXML("xmls/ui.xml");
        sounds["click"] = ResSound::create("sounds/button_click.ogg", false);
		sounds["bomb_match"] = ResSound::create("sounds/bomb_match.ogg", false);
    }

    void free()
    {
        ui.free();

		for (Sounds::iterator i = sounds.begin(); i != sounds.end(); ++i)
		{
			delete i->second;
		}
    }
}


void playSound(const string& id)
{
    player.play(res::sounds[id]);
}
#ifndef Match3Quest_Match3QuestDelegate_h
#define Match3Quest_Match3QuestDelegate_h


#import "../../../SDL/src/video/uikit/SDL_uikitappdelegate.h"

@interface SDLUIKitDelegate(AppDelegate)

@end

@interface AppDelegate : SDLUIKitDelegate

    @property(strong, nonatomic) UIWindow* window;
@end


#endif

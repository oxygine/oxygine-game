#import <Foundation/Foundation.h>
//#import <FBSDKCoreKit/FBSDKCoreKit.h>

#import "AppDelegate.h"


@implementation SDLUIKitDelegate (AppDelegate)

+ (NSString *)getAppDelegateClassName
{
    return @"AppDelegate";
}

@end

@implementation AppDelegate

@synthesize window=_window;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
//    [[FBSDKApplicationDelegate sharedInstance] application:application
//                             didFinishLaunchingWithOptions:launchOptions];
    
    return [super application:application didFinishLaunchingWithOptions:launchOptions];
}
/*
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    return [[FBSDKApplicationDelegate sharedInstance] application:application
                                                          openURL:url
                                                sourceApplication:sourceApplication
                                                       annotation:annotation
            ];
}
*/

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    [super applicationDidBecomeActive:application];
    
//    [FBSDKAppEvents activateApp];
}


@end

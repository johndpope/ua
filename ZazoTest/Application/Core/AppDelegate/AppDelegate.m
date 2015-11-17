//
//  AppDelegate.m
//  ZazoTest
//
//  Created by UAwan on 11/11/15.
//  Copyright © 2015 UAwan. All rights reserved.
//

#import "AppDelegate.h"
#import "ZTAppDependenices.h"

@interface AppDelegate ()

@property (nonatomic, strong) ZTAppDependenices * appDependencies;

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [self.appDependencies initialApplicationSetup:application launchOptions:launchOptions];

    return YES;
}
- (void)applicationDidBecomeActive:(UIApplication *)application {

    [self.appDependencies handleApplicationDidBecomeActive];

}

- (void)applicationWillTerminate:(UIApplication *)application {

    [self.appDependencies handleApplicationWillTerminate:application];

}

#pragma mark - Private

- (ZTAppDependenices *)appDependencies
{
    if (!_appDependencies)
    {
        _appDependencies = [[ZTAppDependenices alloc] init];
    }
    return _appDependencies;
}

@end

//
//  GradientViewExampleAppDelegate.h
//  GradientViewExample
//
//  Created by Christopher Motl on 10/4/10.
//  Copyright 2010 cmotl.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GradientViewExampleViewController;

@interface GradientViewExampleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    GradientViewExampleViewController *viewController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet GradientViewExampleViewController *viewController;

@end


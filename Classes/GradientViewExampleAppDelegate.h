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

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet GradientViewExampleViewController *viewController;

@end


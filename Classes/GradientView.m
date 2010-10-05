//
//  GradientView.m
//  GradientViewExample
//
//  Created by Christopher Motl on 10/4/10.
//  Copyright 2010 cmotl.com. All rights reserved.
//

#import "GradientView.h"
#import "CMGradientLayer.h"

@implementation GradientView

+(Class)layerClass{
	return [CMGradientLayer class];
}


- (id)initWithFrame:(CGRect)frame {
    if ((self = [super initWithFrame:frame])) {
		self.backgroundColor = [UIColor clearColor];
    }
    return self;
}

// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}


- (void)dealloc {
    [super dealloc];
}


@end

//
//  SmudgeLayer.h
//  test
//
//  Created by Rex on 12/7/14.
//  Copyright (c) 2014 galf.cc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SmudgeLayer : CAShapeLayer
- (void)appear;
- (void)disappear;
- (void)updateWithTouch:(UITouch *)touch;
@end

@interface SmudgeLayer ()

@property CGPoint velocity;
@property CGPoint previousPosition;

@end
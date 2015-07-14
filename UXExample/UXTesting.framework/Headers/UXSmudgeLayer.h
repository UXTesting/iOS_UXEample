//
//  SmudgeLayer.h
//  test
//
//  Created by Rex on 12/7/14.
//  Copyright (c) 2014 galf.cc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UXSmudgeLayer : CAShapeLayer
- (void)appear;
- (void)disappear;
- (void)updateWithTouch:(UITouch *)touch;
@end

@interface UXSmudgeLayer ()

@property CGPoint velocity;
@property CGPoint previousPosition;

@end
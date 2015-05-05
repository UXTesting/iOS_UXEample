//
//  SmudgeContainerLayer.h
//  test
//
//  Created by Rex on 12/7/14.
//  Copyright (c) 2014 galf.cc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SmudgeLayer.h"

@interface SmudgeContainerLayer : CALayer
- (void)updateWithEvent:(UIEvent *)event;
@end

@interface SmudgeContainerLayer ()

@property (readonly,nonatomic) NSMutableDictionary *touchSmudgeTable;

@end

//
//  UXRecordingRedDot.h
//  UXTestingFramework
//
//  Created by David Tseng on 5/15/15.
//  Copyright (c) 2015 galf.cc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UXRecordingRedDot : UIView

+ (id)sharedInstance;

-(void)show;
-(void)stop;

@end

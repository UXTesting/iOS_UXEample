//
//  UXMessageView.h
//  UXTestingFramework
//
//  Created by David Tseng on 6/22/15.
//  Copyright (c) 2015 galf.cc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UXMessageView : UIView

+(void)showWithString:(NSString*)string;
+(void)showErrorWithString:(NSString*)string;

@end

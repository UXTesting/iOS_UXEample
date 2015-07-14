//
//  UXRecordingView.h
//  UXTestingFramework
//
//  Created by David Tseng on 5/15/15.
//  Copyright (c) 2015 galf.cc. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^CompletionBlock)(void);

@interface UXRecordingView : UIView

+ (id)sharedInstance;

- (void)showEndIndicator;
- (void)showStartCountDownCompletion:(CompletionBlock)completion;

@end

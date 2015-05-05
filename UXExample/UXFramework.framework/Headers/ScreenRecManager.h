//
//  ScreenRecManager.h
//  ScreenRec
//
//  Created by David Tseng on 2/10/15.
//  Copyright (c) 2015 Trenzink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^VIDEOBLOCK)(NSData* videoData,int videoLength);

@interface ScreenRecManager : NSObject

@property (nonatomic,readwrite) BOOL isHiddingMode;
@property (nonatomic,readwrite) BOOL isRecording;
@property (nonatomic,readwrite) int currentSecond;
@property (nonatomic,readwrite) int insertFrames;
@property (nonatomic,strong) NSArray *remainVideoSegementPath;
@property (nonatomic,readwrite) int limitSecond;
@property (nonatomic,strong) NSArray *currentPointArray;

+ (id)sharedInstance;
-(void)setToHiddingMode;
-(void)setUnHiddingMode;
-(void)assignLimitSecond:(int)integer;
-(void)mergeRemainingVideoWithComplete:(VIDEOBLOCK)block;
-(BOOL)checkIfThereAreRemainingVideosSegments;
-(void)tempStop;
-(void)tempStart;
-(void)start;
-(void)stop;
-(void)stop:(VIDEOBLOCK)block;
//-(NSString*)stopWithVideoResultPath;


@end

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
typedef void(^UXBlock)(void);

@interface UXScreenRecorder : NSObject

@property (nonatomic,readwrite) BOOL isRecording;
@property (nonatomic,readwrite) BOOL isBackground;
@property (nonatomic,readwrite) int currentSecond;
@property (nonatomic,readwrite) int insertFrames;
@property (nonatomic,strong) NSArray *remainVideoSegementPath;
@property (nonatomic,readwrite) int limitSecond;
@property (nonatomic,strong) NSArray *currentPointArray;


+ (id)sharedInstance;
-(void)assignLimitSecond:(int)integer;
-(void)mergeRemainingVideoWithCaseID:(NSString*)caseID withComplete:(UXBlock)block;
//-(UXFileStatus)checkStatusInCaseID:(NSString*)caseID;
//-(BOOL)checkIfThereAreRemainingVideosSegmentsWithCaseID:(NSString*)caseID;
-(void)tempStop;
-(void)start;
-(void)stop:(UXBlock)block;

-(void)pause;
-(void)resume;


-(UIImage*)screenCapture;
//-(NSString*)stopWithVideoResultPath;


@end

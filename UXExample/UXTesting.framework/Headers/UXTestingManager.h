//
//  UXTestingManager.h
//  UXTestingFramework
//
//  Created by David Tseng on 5/6/15.
//  Copyright (c) 2015 galf.cc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UXTestingWindow.h"
#import "UXTestingService.h"
#import "UXTestingCamera.h"
#import "UXScreenRecorder.h"
#import "DTDeviceInfo.h"
#import "UXMessageView.h"
#import "UXRecordingRedDot.h"
#import "UXRecordingView.h"
#import "UXSmudgeContainerLayer.h"
#import "UXSmudgeLayer.h"

//#define UXTESTING_LOG 1

typedef void (^UXTestingKeyValidated)(void);
typedef void (^UXBlock)(void);
typedef void (^UXBoolBlock)(BOOL success);

@interface UXTestingManager : NSObject

@property (nonatomic,strong) NSString* appKey;
@property (nonatomic,strong) UXTestingWindow* testingWindw;
@property (nonatomic,readonly) BOOL isKeyValid;
@property (nonatomic,readonly) BOOL isRecording;
@property (nonatomic,readonly) BOOL isTurnoff;

/*!
 * @discussion A block function that trigger when key get validated.
 */
@property (copy) UXTestingKeyValidated onceKeyValidated;

/*!
 * @param isHiddingMode It is false by default. If set to true, every disiplay UI will be disable, and you will have to call start / end in code to start recording.
 */
@property (nonatomic,readwrite) BOOL isHiddingMode;

/*!
 * @param isFrontCameraRecording True by default.
 */
@property (nonatomic,readwrite) BOOL isFrontCameraRecording;

/*!
 * @param isStoryBoardEnable True by default.
 */
@property (nonatomic,readwrite) BOOL isStoryBoardEnable;
@property (nonatomic,strong) NSString* caseID;
@property(nonatomic,strong) NSOperationQueue* serviceQueue;

/*!
 * @discussion Simple share instance.
 */
+(UXTestingManager*) sharedInstance;

/*!
 * @discussion Get current version of SDK.
 * @return A version string.
 */
+(NSString*)version;

/*!
 * @discussion Disable all funcion of UXTesting.
 */
-(void)turnoff;

/*!
 * @discussion Enables funcions of UXTesting.
 */
-(void)turnon;


/*!
 * @discussion Start recording with a tag name.
 * @param name A tag name show with video.
 */
-(void)startWithTagName:(NSString*)name;

/*!
 * @discussion Start recording.
 */
-(void)start;

/*!
 * @discussion Stop recording
 */
-(void)stop;

/*!
 * @discussion Set the name of screen video.
 * @param name is a string.
 */
-(void)setVideoTagName:(NSString*)name;

//HeatMap

/*!
 * @discussion Start recording touch points. The screenshot will be take when this called.
 */
-(void)heatMapStartWithViewName:(NSString*)name;

/*!
 * @discussion Finish recording touch points.
 */
-(void)heatMapEnd;

//StoryBoard
/*!
 * @discussion Insert this line to viewDidAppered, so that view counts every time you entered. Also, the screenshot will be take after at the first time in same page.
 * @param viewName A String you set.
 */
-(void)enterViewWithName:(NSString*)viewName andDetailName:(NSString*)detailName;

//Events
/*!
 * @discussion Insert thin line to where the event happens.
 * @param eventName A string.
 */
-(void)customEvent:(NSString*)eventName;

/*!
 * @discussion Get event names in array.
 * @return Array of event names.
 */
-(NSArray*)getEventArray;

/*!
 * @discussion Cancel all event logs.
 */
-(void)removeFirstEvent;

@end

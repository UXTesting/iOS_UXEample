//
//  UXTestingCameraObjC.h
//  UXTestingFramework
//
//  Created by David Tseng on 5/12/15.
//  Copyright (c) 2015 galf.cc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreFoundation/CoreFoundation.h>

typedef void (^ VideoFinishBlock )( void );

@interface UXTestingCamera : NSObject<AVCaptureFileOutputRecordingDelegate>{
    
    AVCaptureSession *captureSession;
    AVCaptureDeviceInput *videoInputDevice;
    AVCaptureDeviceInput *audioInputDevice;
    AVCaptureMovieFileOutput *movieFileOutput;
}
@property(nonatomic,readwrite) BOOL isRecording;
//@property (nonatomic, copy) UXTestingCameraFileComplete fileComplete;
@property (nonatomic, readwrite) BOOL isHighQuality;

+ (UXTestingCamera*)sharedManager;

-(void)mergeSegmentWithCaseID:(NSString*)caseID withComplete:(VideoFinishBlock)videoPathBlock;

-(void)start;
-(void)stop;

@end

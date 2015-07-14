//
//  UXTestingService.h
//  UXTestingFramework
//
//  Created by David Tseng on 5/12/15.
//  Copyright (c) 2015 galf.cc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface UXTestingService : NSObject

//+ (UXTestingService*)sharedManager;

//By Case ==================================================================
+(void)uploadCaseByKey:(NSString*)key
             andcaseID:(NSString*)caseID
                 appID:(NSString *)appID
              deviceID:(NSString *)deviceID
 screenVideoCompletion:(void (^)(NSString *videoID))completion1
    frontCamCompletion:(void (^)(void))completion2
    eventLogCompletion:(void (^)(void))completion3
     heatMapCompletion:(void (^)(void))completion4
  storyboardCompletion:(void (^)(void))completion5
         allCompletion:(void (^)(void))completion6
               failure:(void(^)(NSError *))failure;


+(void)uploadCaseWithVideoID:(NSString*)videoID
                         key:(NSString*)key
             andcaseID:(NSString*)caseID
                 appID:(NSString *)appID
              deviceID:(NSString *)deviceID
    frontCamCompletion:(void (^)(void))completion2
    eventLogCompletion:(void (^)(void))completion3
     heatMapCompletion:(void (^)(void))completion4
  storyboardCompletion:(void (^)(void))completion5
         allCompletion:(void (^)(void))completion6
               failure:(void(^)(NSError *))failure;

+ (void)uploadHeatMapWithCaseID:(NSString*)caseID
                          appID:(NSString *)appID
                        videoID:(NSString *)videoID
                       deviceID:(NSString *)deviceID
                     completion:(void (^)(void))completion
                        failure:(void (^ )(NSError *error))failure;

+(void)uploadStoryboardWithCaseID:(NSString*)caseID
                            appID:(NSString * )appID
                          videoID:(NSString *) videoID
                         deviceID:(NSString *) deviceID
                       completion:(void (^ )(NSString* storyBoardID))completion
                          failure:(void (^ )(NSError *error))failure;


//By Case ==================================================================

//Service
+(void)syncTestingByKey:(NSString*)key
     andScreenVideoData:(NSData*)screenVideoData
   andFrontCamVideoData:(NSData*)frontCamVideoData
  screenVideoCompletion:(void (^)(NSString *videoID))completion1
     frontCamCompletion:(void (^)(void))completion2
  eventUploadCompletion:(void (^)(void))completion3
                failure:(void(^)(NSError *))failure;

//http://www.uxtesting.io/api/v1/check_key
+ (void)validAppKey:(NSString*)key
         completion:(void (^)(NSString*appID , NSString* appName ))completion
            failure:(void(^)(NSError *))failure;

//http://www.uxtesting.io/api/v1/upload2
+ (void)uploadVideo:(NSString*)key
               data:(NSData * )data
           duration:(int32_t)duration
         completion:(void (^)(NSString* videoID))completion
            failure:(void(^)(NSError *error))failure;

//http://www.uxtesting.io/api/v1/facevideo
+ (void)uploadFrontCamera:(NSString *)videoID
                     data:(NSData *)data
               completion:(void (^)(void))completion
                  failure:(void(^)(NSError *error))failure;

//http://www.uxtesting.io/api/v1/logs
+ (void)uploadEvent:(NSString * )eventName
          startTime:(NSString * )startTime
            videoID:(NSString * )videoID
         completion:(void (^ )(void))completion
            failure:(void (^ )(NSError *error))failure;

+(void)uploadAllEventRecursiveWithVideoID:(NSString* )vid
                               completion:(void (^ )(void))completion
                                  failure:(void (^ )(NSError *error))allFailure;

//http://www.uxtesting.io/api/v1/heatmap
+ (void)uploadHeatMapWithAppID:(NSString *)appID
                       videoID:(NSString *)videoID
                      deviceID:(NSString *)deviceID
                     imageData:(NSData *)data
                    imageWidth:(NSString*)width
                   imageHeight:(NSString*)height
                      withPath:(NSString*)path
                    completion:(void (^)(void))completion
                       failure:(void (^ )(NSError *error))failure;


//StoryBoard

//http://www.uxtesting.io/api/v1/storyboard
+ (void)uploadStoryBoardNames:(NSString * )flow
                        appID:(NSString * )appID
                      videoID:(NSString *) videoID
                     deviceID:(NSString *) deviceID
                   completion:(void (^ )(NSString* storyBoardID))completion
                      failure:(void (^ )(NSError *error))failure;

//http://www.uxtesting.io/api/v1/storyboardScreens
+ (void)uploadStoryBoardScreensWith:(NSString *)name
                         detailName:(NSString *)detailName
                       storyBoardID:(NSString *)storyBoardID
                          imageData:(NSData *)data
                         completion:(void (^)(void))completion;


//DeviceInformation

//http://www.uxtesting.io/api/v1/deviceinfo
+ (void)uploadDeviceInfo:(NSString * )deviceType
                deviceID:(NSString * )deviceID
               modelName:(NSString * )modelName
           systemVersion:(NSString * )systemVersion
              screenSize:(NSString * )screenSize
              deviceName:(NSString * )deviceName
                   email:(NSString * )email
                   completion:(void (^ )(NSString* deviceID))completion
                      failure:(void (^ )(NSError *error))failure;


//+ (void)uploadAllEventRecursiveWithVideoID:(NSString * )vid
//                                completion:(void (^ )(void))completion
//                                   failure:(void (^ )(NSError * ))failure;

@end

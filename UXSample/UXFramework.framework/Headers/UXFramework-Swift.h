// Generated by Swift version 1.1 (swift-600.0.57.4)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import AVFoundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSCoder;

SWIFT_CLASS("_TtC11UXFramework15RecordingRedDot")
@interface RecordingRedDot : UIView
+ (RecordingRedDot *)sharedInstance;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)show;
- (void)stop;
- (void)drawRect:(CGRect)rect;
@end


SWIFT_CLASS("_TtC11UXFramework13RecordingView")
@interface RecordingView : UIView
+ (RecordingView *)sharedInstance;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)showWithText:(NSString *)text;
- (void)setNeedsDisplay;
- (void)drawRect:(CGRect)rect;
@end


SWIFT_CLASS("_TtC11UXFramework15UXTestingCamera")
@interface UXTestingCamera : NSObject
+ (UXTestingCamera *)sharedInstance;
- (void)start;
- (void)stop;
- (instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSError;
@class NSData;

SWIFT_CLASS("_TtC11UXFramework16UXTestingManager")
@interface UXTestingManager : NSObject
+ (UXTestingManager *)sharedInstance;
@property (nonatomic) BOOL isHiddingMode;
@property (nonatomic) BOOL debugMode;
@property (nonatomic, copy) NSString * appKey;
- (void)start;
- (void)stop;
- (void)leaveAction;
- (void)backAction;
- (void)terminatedAction;
- (void)customEventByName:(NSString *)name;
- (void)mergeVideosIfExistRemainingVideos;
- (BOOL)checkIfVideoSegmentsRemains;
- (void)mergeRemainingVideos;
- (void)validAppKey:(NSString *)key completion:(void (^)(BOOL))completion failure:(void (^)(NSError *))failure;
- (void)uploadVideo:(NSString *)key data:(NSData *)data duration:(int32_t)duration completion:(void (^)(BOOL))completion;
- (void)uploadFrontCamera:(NSString *)videoID data:(NSData *)data completion:(void (^)(BOOL))completion;
- (void)uploadEvent:(NSString *)eventName startTime:(NSString *)startTime videoID:(NSString *)videoID completion:(void (^)(BOOL))completion failure:(void (^)(NSError *))failure;
- (void)uploadAllEventRecursiveWithVideoID:(NSString *)vid completion:(void (^)(void))completion failure:(void (^)(NSError *))failure;
- (void)clearEvents;
- (NSDictionary *)getDictionaryByKey:(NSString *)x;
- (NSArray *)getArrayByKey:(NSString *)x;
- (NSArray *)deleteFirstArrayByKey:(NSString *)x;
- (void)writeBool:(BOOL)x withKey:(NSString *)withKey;
- (void)writeString:(NSString *)x withKey:(NSString *)withKey;
- (void)writeArray:(NSArray *)x withKey:(NSString *)withKey;
- (void)writeDictionary:(NSDictionary *)x withKey:(NSString *)withKey;
- (BOOL)checkBoolValue:(NSString *)key;
@end

@class UIEvent;
@class AVCaptureFileOutput;
@class NSURL;

SWIFT_CLASS("_TtC11UXFramework15UXTestingWindow")
@interface UXTestingWindow : UIWindow <AVCaptureFileOutputRecordingDelegate>
- (instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)sendEvent:(UIEvent *)event;
- (BOOL)canBecomeFirstResponder;
- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event;
- (void)startTesting;
- (void)endTesting;
- (void)captureOutput:(AVCaptureFileOutput *)captureOutput didFinishRecordingToOutputFileAtURL:(NSURL *)outputFileURL fromConnections:(NSArray *)connections error:(NSError *)error;
@end

#pragma clang diagnostic pop

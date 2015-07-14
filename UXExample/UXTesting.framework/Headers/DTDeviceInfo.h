//
//  DTDeviceInformation.h
//  DTDeviceInfoProject
//
//  Created by David Tseng on 7/1/15.
//  Copyright (c) 2015 David Tseng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DTDeviceInfo : NSObject

/*!
 * @discussion Injay's iPhone
 */

+ (NSString *) name;
/*!
 * @discussion iPhone / iPad
 */
+ (NSString *) model;

/*!
 * @discussion 8.4
 */
+ (NSString *) systemVersion;

/*!
 * @discussion UDID-like unique string.
 */
+ (NSString *) identifierForVendor;

/*!
 * @discussion Screen size in widthxheight format.
 */
+ (NSString*) screenSize;
/*!
 * @discussion iPhone 6 / iPhone 6 Plus. Need to update when we have new device.
 */
+ (NSString *) platformString;

+ (NSString *) platform;

+ (NSString *) localizedModel;

@end

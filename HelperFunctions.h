//
//  HelperFunctions.h
//  Familien Jul
//
//  Created by Gurpreet Singh on 23/06/14.
//  Copyright (c) 2014 Gurpreet Singh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HelperFunctions : NSObject

void        alert(NSString* Title, NSString* Message);

NSString*   DocumentDirectory();

NSString*   xibName(NSString* name);

NSArray *   listOfFilesAtPath(NSString *path);

UIImage*    imageFromView(UIView* view) ;

UIImage*    drawImageOverImage(UIImage* fgImage, UIImage* bgImage, CGPoint point);

UIImage*    resizeImage(UIImage* originalImage, float _scale);

BOOL        saveImageAtPath(UIImage* image, NSString* path);

BOOL        isValidEmail(NSString* email);

BOOL        isInternetAvaliable();

BOOL        isFileExistAtPath(NSString* path);

BOOL        deleteFileAtPath(NSString* path);

BOOL        isImage(NSString *file);

BOOL        isSound(NSString *file);

float       scale (CGSize size, BOOL landscape);

float       scaleMIN (CGSize size, BOOL landscape);

float       scaleMAX (CGSize size, BOOL landscape);

float       scaleX (CGSize size, BOOL landscape);

float       scaleY (CGSize size, BOOL landscape);

UIColor*    RgbToUIColor(float r,float g,float b);

NSString*   getUniqueIdentifier();

void        userDefaults_setObject(id object, NSString* key);

id          userDefaults_getObject(NSString* key);

NSString*   getFileNameFromPath(NSString* path);

BOOL        isBothStringEqual(NSString* first, NSString* second);

NSUserDefaults* userDefaults();

@end

#pragma mark- customFontCategory 
@interface UIFont (customFont)
+ (instancetype)GPHennyPennyFontWithSize:(CGFloat)size;
@end


//-- This category is used to fix orientation problen after clicking.
#pragma mark- UIImage Category
@interface UIImage (fixOrientation)
- (UIImage *)fixOrientation;
@end

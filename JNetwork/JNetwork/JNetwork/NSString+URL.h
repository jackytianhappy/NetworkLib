//
//  NSString+URL.h
//  SohuHouse
//
//  Created by jacky on 16/6/15.
//  Copyright © 2016年 jacky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (URL)

//字典转url参数字符串 dict -> string
+ (NSString*)URLParamStringFromDictionary:(NSDictionary*)dict;

//url参数字符串转字典 string -> dict
+ (NSDictionary*)URLParamStringToDictionary:(NSString*)url;

//字典转url字符串
+ (NSString*)URLString:(NSString*)url fromDictionary:(NSDictionary*)dict;

//字典转字符串，编码URL
+ (NSString*)encodeUrlString:(NSString*)url fromDictionary:(NSDictionary*)dict;

+ (NSString*)URLString:(NSString *)url keyvalue:(NSString *)keyvalue;

//url字符串拼接固定参数
- (NSString*)urlStringWithParamString:(NSString*)keyValue;

//url字符串包含给定文本
- (BOOL)isContainString:(NSString*)textString;

@end

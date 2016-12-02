//
//  NSString+URL.m
//  SohuHouse
//
//  Created by sohu on 16/6/15.
//  Copyright © 2016年 focus.cn. All rights reserved.
//

#import "NSString+URL.h"

@implementation NSString (URL)

//字典转url参数字符串 dict -> string
+ (NSString*)URLParamStringFromDictionary:(NSDictionary*)dict
{
    
    NSMutableArray *mArray = [[NSMutableArray alloc] init];
    if (dict != nil)
    {
        for (NSString *key in dict.allKeys) {
            NSString *value = [NSString stringWithFormat:@"%@",[dict objectForKey:key]];
            if ((value != nil) && ([value isEqualToString:@""] == NO)) {
                NSString * keyValue = [NSString stringWithFormat:@"%@=%@",key,value];
                [mArray addObject:keyValue];
            }
        }
    }
    
    //拼装
    if (mArray.count >0) {
        return [mArray componentsJoinedByString:@"&"];
    }
    
    
    return nil;
}

//url参数字符串转字典 string -> dict
+ (NSDictionary*)URLParamStringToDictionary:(NSString*)url
{
     NSArray *params = [url componentsSeparatedByString:@"?"];
    if (params.count > 1) {
        NSString *keyValues = params[1];
        //获取key，value键值对
        NSArray *params = [keyValues componentsSeparatedByString:@"&"];
        if (params.count > 0) {
            NSMutableDictionary *mDict = [[NSMutableDictionary alloc] init];
            for (NSString *keyValue in params) {
                NSArray *kv = [keyValue componentsSeparatedByString:@"="];
                if (kv.count > 1) {
                    [mDict setObject:kv[1] forKey:kv[0]];
                }
            }
            return mDict;
        }
        
    }
    
    return nil;
}

//字典转url字符串
+ (NSString*)URLString:(NSString*)url fromDictionary:(NSDictionary*)dict
{
    NSString *param = [self URLParamStringFromDictionary:dict];
    NSString *urlString = [NSString stringWithFormat:@"%@%@",url,param];
    
    return urlString;
}

//字典转字符串，编码URL
+ (NSString*)encodeUrlString:(NSString*)url fromDictionary:(NSDictionary*)dict
{
    NSString *urlString = [self URLString:url fromDictionary:dict];
    urlString = [urlString stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    
    return urlString;
}

//url字符串拼接固定参数
- (NSString*)urlStringWithParamString:(NSString*)keyValue
{
    NSString *url = nil;

    if ([self rangeOfString:@"?"].location != NSNotFound) {
        //包含？
        if ([self hasSuffix:@"&"]) {
            //keyValue
            url = [NSString stringWithFormat:@"%@%@", self, keyValue];
        }
        else
        {
            //&keyValue
            url = [NSString stringWithFormat:@"%@&%@", self, keyValue];
        }
        
    }
    else
    {
        //?keyValue
        url = [NSString stringWithFormat:@"%@?%@", self, keyValue];
    }
    
    return url;
    
}

//url字符串包含给定文本
- (BOOL)isContainString:(NSString*)textString
{
    if (self) {
        if ([self rangeOfString:textString].location != NSNotFound) {
            //包含
            return YES;
            
        }
        else
        {
            return NO;
        }
    }
    
    return NO;
    
}

+ (NSString*)URLString:(NSString *)url keyvalue:(NSString *)keyvalue
{
    if (url.length ==0 || keyvalue.length == 0 || [url isEqualToString:@""] || [keyvalue isEqualToString:@""]) {
        return url;
    }
    
    return [url urlStringWithParamString:keyvalue];
}

@end

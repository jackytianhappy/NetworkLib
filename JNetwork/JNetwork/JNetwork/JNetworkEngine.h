//
//  JNetworkEngine.h
//  JNetwork
//
//  Created by Jacky on 16/12/2.
//  Copyright © 2016年 jacky. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NSString * (^HCReqMessageBodyBlock)(id parameters);

@interface JNetworkEngine : NSObject

//make the class to be a singleton
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;


//initial http engine
+ (JNetworkEngine *)sharedEngine;

/**
 *	@brief	get请求
 *
 */
- (void)getReqWithUrl:(NSString*)url
              success:(void (^)(id operation, id responseObject))success
              failure:(void (^)(id operation, NSError *error))failure;

/**
 *	@brief	get请求
 
 */
- (void)getReqWithUrl:(NSString*)url
         headerFields:(NSDictionary*)headerFields
              success:(void (^)(id operation, id responseObject))success
              failure:(void (^)(id operation, NSError *error))failure;

/**
 *	@brief	post请求
 *
 */
- (void)postReqWithUrl:(NSString*)url
            parameters:(id)parameters
               success:(void (^)(id operation, id responseObject))success
               failure:(void (^)(id operation, NSError *error))failure;

//post
- (void)postReqWithUrl:(NSString*)url
                  body:(id)body
               success:(void (^)(id operation, id responseObject))success
               failure:(void (^)(id operation, NSError *error))failure;

/**
 *	@brief	post请求
 *  headerFields 消息请求头
 */
- (void)postReqWithUrl:(NSString*)url
          headerFields:(NSDictionary*)headerFields
                  body:(id)body
               success:(void (^)(id operation, id responseObject))success
               failure:(void (^)(id operation, NSError *error))failure;

/**
 *	@brief	post请求 全参数Post请求接口
 *  headerFields 消息请求头
 */
- (void)postRequestUrl:(NSString*)url
          headerFields:(NSDictionary*)headerFields
                  body:(id)body
               success:(void (^)(id operation, id responseObject))success
               failure:(void (^)(id operation, NSError *error))failure;

/**
 *	@brief	post请求 全参数Post请求接口
 *  contentTypes:post响应类型
 *  headerFields 消息请求头
 */
- (void)postRequestUrl:(NSString*)url
          headerFields:(NSDictionary*)headerFields
          contentTypes:(NSSet *)set
                  body:(id)body
             bodyBlock:(HCReqMessageBodyBlock)bodyBlock
               success:(void (^)(id operation, id responseObject))success
               failure:(void (^)(id operation, NSError *error))failure;

/**
 *	@brief	上传图片
 *
 */
- (void)uploadImageWithUrl:(NSString*)url
                  fileData:(NSData*)fileData
                      path:(NSString *)path
                parameters:(NSDictionary*)parameters
                   success:(void (^)(id operation, id responseObject))success
                   failure:(void (^)(id operation, NSError *error))failure;

/**
 *	@brief	下载图片
 *
 */
- (void)downloadImageWithUrl:(NSString*)url
                     success:(void (^)(id operation, id responseObject))success
                     failure:(void (^)(id operation, NSError *error))failure;





@end

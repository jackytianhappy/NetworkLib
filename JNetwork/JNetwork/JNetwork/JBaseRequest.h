//
//  JBaseRequest.h
//  JNetwork
//
//  Created by Jacky on 16/12/2.
//  Copyright © 2016年 jacky. All rights reserved.
//

#import <Foundation/Foundation.h>

//set the net method
typedef NS_ENUM(NSUInteger, JRequestMethod){
    JRequestMethodGET = 0,
    JRequestMethodPOST,
    JRequestMethodHEAD,
    JRequestMethodPUT,
    JRequestMethodDELETE,
    JRequestMethodPATCH
};



@interface JBaseRequest : NSObject

//inital the requst api
@property (nonatomic,copy) NSString *requstApi;

//set the requst method
@property (nonatomic,assign) JRequestMethod jRequestMethod;


//start the request
-(void)start;

//stop the request
-(void)stop;



@end

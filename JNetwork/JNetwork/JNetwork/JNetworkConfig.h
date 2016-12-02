//
//  JNetworkConfig.h
//  JNetwork
//
//  Created by Jacky on 16/12/2.
//  Copyright © 2016年 jacky. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AFSecurityPolicy;

@interface JNetworkConfig : NSObject

//make the class to be a singleton
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

//inital the config
+ (JNetworkConfig *)sharedConfig;

//add the total base url fomain. default is empty string
@property (nonatomic, copy) NSString *baseUrl;

//SSL certificates Name only cer . “app.bishe.com.cer”==“app.bishe.com”
@property (nonatomic,copy) NSString *certName;

//support three kind od NSURLSessionConfiguration
@property (nonatomic,strong) NSURLSessionConfiguration *sessionConfiguration;

//make the policy be adjust to the af
@property (nonatomic,strong) AFSecurityPolicy *securityPolicy;


@end

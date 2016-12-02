//
//  JNetworkConfig.m
//  JNetwork
//
//  Created by Jacky on 16/12/2.
//  Copyright © 2016年 jacky. All rights reserved.
//

#import "JNetworkConfig.h"
#import "AFNetworking.h"


@interface JNetworkConfig(){
    
}

@end

@implementation JNetworkConfig

+ (JNetworkConfig *)sharedConfig{
    static JNetworkConfig *jNetworkConfig = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        jNetworkConfig = [[self alloc] init];
    });
    
    return jNetworkConfig;
}


- (instancetype)init{
    self = [super init];
    if (self) {
        _baseUrl = @"";
    }
    return self;
}



@end

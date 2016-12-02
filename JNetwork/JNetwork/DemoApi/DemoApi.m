//
//  DemoApi.m
//  JNetwork
//
//  Created by Jacky on 16/12/2.
//  Copyright © 2016年 jacky. All rights reserved.
//

#import "DemoApi.h"

@implementation DemoApi

-(instancetype)initWithParams:(NSString *)params{
    if (self = [super init]) {
        
    }
    
    return self;
}


-(NSString *)requstApi{
    return @"/hello";
}

@end

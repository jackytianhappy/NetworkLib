//
//  JRequest.m
//  JNetwork
//
//  Created by Jacky on 16/12/2.
//  Copyright © 2016年 jacky. All rights reserved.
//

#import "JRequest.h"
#import "JNetworkEngine.h"

@interface JRequest(){
    
}

@end

@implementation JRequest

//begin the request
-(void)start{
    if (self.jRequestMethod == JRequestMethodGET) {
        NSLog(@"这边执行get方法了");
    }
}

@end

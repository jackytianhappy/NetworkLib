//
//  ViewController.m
//  JNetwork
//
//  Created by Jacky on 16/12/2.
//  Copyright © 2016年 jacky. All rights reserved.
//

#import "ViewController.h"
#import "JNetworkConfig.h"
#import "DemoApi.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    DemoApi *demoApi = [[DemoApi alloc]initWithParams:@""];
    
    [demoApi start];
    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

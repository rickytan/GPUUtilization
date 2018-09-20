//
//  RTAppDelegate.m
//  GPUUtilization
//
//  Created by rickytan on 09/20/2018.
//  Copyright (c) 2018 rickytan. All rights reserved.
//

#import "RTAppDelegate.h"

#import <GPUUtilization/GPUUtilization.h>

@implementation RTAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        UILabel * gpuLabel = [[UILabel alloc] init];
        gpuLabel.backgroundColor = [UIColor whiteColor];
        gpuLabel.font = [UIFont fontWithName:@"Courier" size:14];
        gpuLabel.text = @"GPU:  0%";
        gpuLabel.autoresizingMask = UIViewAutoresizingFlexibleBottomMargin | UIViewAutoresizingFlexibleRightMargin;
        [gpuLabel sizeToFit];
        
        CGRect rect = gpuLabel.frame;
        rect.origin.x = 100.f;
        rect.origin.y = application.statusBarFrame.size.height;
        gpuLabel.frame = rect;
        [self.window addSubview:gpuLabel];
        
        NSTimer *timer = [NSTimer timerWithTimeInterval:0.5
                                                repeats:YES
                                                  block:^(NSTimer * timer) {
                                                      [GPUUtilization fetchCurrentUtilization:^(GPUUtilization *current) {
                                                          gpuLabel.text = [NSString stringWithFormat:@"GPU: %2zd%%", current.deviceUtilization];
                                                      }];
                                                  }];
        [[NSRunLoop mainRunLoop] addTimer:timer forMode:NSRunLoopCommonModes];
    });
    return YES;
}

@end

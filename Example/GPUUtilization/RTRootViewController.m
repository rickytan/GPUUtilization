//
//  RTRootViewController.m
//  GPUUtilization_Example
//
//  Created by Ricky on 2018/9/20.
//  Copyright © 2018年 rickytan. All rights reserved.
//

#import "RTRootViewController.h"
#import "RTTableViewController.h"

@interface RTRootViewController ()

@end

@implementation RTRootViewController


#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if ([[segue destinationViewController] isKindOfClass:[RTTableViewController class]]) {
        RTTableViewController *tableVC = [segue destinationViewController];
        tableVC.cellIdentifier = [self.tableView cellForRowAtIndexPath:self.tableView.indexPathForSelectedRow].textLabel.text;
    }
}

@end

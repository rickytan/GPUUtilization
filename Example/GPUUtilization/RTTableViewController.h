//
//  RTTableViewController.h
//  GPUUtilization_Example
//
//  Created by Ricky on 2018/9/20.
//  Copyright © 2018年 rickytan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Outlet)
@property (nonatomic, strong) IBOutlet UIView *maskView;
@end

@interface RTTableViewController : UITableViewController
@property (nonatomic, copy) NSString *cellIdentifier;
@end

//
//  RTGradientView.h
//  GPUUtilization_Example
//
//  Created by ricky on 2018/9/20.
//  Copyright © 2018年 rickytan. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface RTGradientView : UIView
@property (nonatomic, readonly, strong) CAGradientLayer *layer;
@property (nonatomic, strong) IBInspectable UIColor *startColor;
@property (nonatomic, strong) IBInspectable UIColor *endColor;
@property (nonatomic, assign) IBInspectable CGPoint startPoint;
@property (nonatomic, assign) IBInspectable CGPoint endPoint;
@end

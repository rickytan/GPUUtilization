//
//  RTGradientView.m
//  GPUUtilization_Example
//
//  Created by ricky on 2018/9/20.
//  Copyright © 2018年 rickytan. All rights reserved.
//

#import "RTGradientView.h"

@implementation RTGradientView
@dynamic layer;

+ (Class)layerClass
{
    return [CAGradientLayer class];
}

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        self.layer.locations = @[@0, @1];
        self.startPoint = CGPointZero;
        self.endPoint = CGPointMake(0, 1);
    }
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        self.layer.locations = @[@0, @1];
        self.startPoint = CGPointZero;
        self.endPoint = CGPointMake(0, 1);
    }
    return self;
}

- (void)awakeFromNib
{
    [super awakeFromNib];
}

- (void)setStartColor:(UIColor *)startColor
{
    _startColor = startColor;
    self.layer.colors = @[(id)(self.startColor ?: [UIColor clearColor]).CGColor,
                          (id)(self.endColor ?: [UIColor clearColor]).CGColor];
}

- (void)setEndColor:(UIColor *)endColor
{
    _endColor = endColor;
    self.layer.colors = @[(id)(self.startColor ?: [UIColor clearColor]).CGColor,
                          (id)(self.endColor ?: [UIColor clearColor]).CGColor];
}

- (void)setStartPoint:(CGPoint)startPoint
{
    self.layer.startPoint = startPoint;
}

- (CGPoint)startPoint { return self.layer.startPoint; }

- (void)setEndPoint:(CGPoint)endPoint
{
    self.layer.endPoint = endPoint;
}

- (CGPoint)endPoint { return self.layer.endPoint; }

@end

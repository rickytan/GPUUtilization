// GPUUtilization.h
// 
// Copyright (c) 2018年 xcoder.tips
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

#ifndef NS_NOESCAPE
#define NS_NOESCAPE
#endif

/**
 @warning DO NOT INTEGRATE THIS IN APPSTORE VERSION, it will be @b rejected!
 */
@interface GPUUtilization : NSObject
@property (nonatomic, readonly) NSInteger deviceUtilization;    // percent
@property (nonatomic, readonly) NSInteger rendererUtilization;  // percent
@property (nonatomic, readonly) NSInteger tilerUtilization;     // percent
@property (nonatomic, readonly) int64_t hardwareWaitTime;                   // nano second
@property (nonatomic, readonly) int64_t finishGLWaitTime;                   // nano second
@property (nonatomic, readonly) int64_t freeToAllocGPUAddressWaitTime;      // nano second
@property (nonatomic, readonly) NSInteger contextGLCount;
@property (nonatomic, readonly) NSInteger renderCount;
@property (nonatomic, readonly) NSInteger recoveryCount;
@property (nonatomic, readonly) NSInteger textureCount;
#if __has_feature(objc_class_property)
@property (nonatomic, class, readonly) float gpuUsage;
#else
+ (float)gpuUsage;
#endif

+ (void)fetchCurrentUtilization:(void(NS_NOESCAPE^)(GPUUtilization *current))block;

@end

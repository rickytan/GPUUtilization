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

//{
//    CommandBufferRenderCount = 213;
//    "Device Utilization %" = 27;
//    "Renderer Utilization %" = 21;
//    SplitSceneCount = 0;
//    TiledSceneBytes = 151552;
//    "Tiler Utilization %" = 27;
//    agpTextureCreationBytes = 524288;
//    agprefTextureCreationBytes = 16384;
//    contextGLCount = 0;
//    finishGLWaitTime = 0;
//    freeToAllocGPUAddressWaitTime = 0;
//    gartMapInBytesPerSample = 688128;
//    gartMapOutBytesPerSample = 8257536;
//    gartUsedBytes = 34521088;
//    hardwareWaitTime = 0;
//    iosurfaceTextureCreationBytes = 0;
//    oolTextureCreationBytes = 0;
//    recoveryCount = 0;
//    stdTextureCreationBytes = 0;
//    textureCount = 1259;
//}




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

@property (nonatomic, class, readonly) float gpuUsage;

+ (void)fetchCurrentUtilization:(NS_NOESCAPE void(^)(GPUUtilization *current))block;

@end

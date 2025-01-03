/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface CHChannelColor : CHChannelColorNoAlpha

+ (bool)_isOZChannelClassOK:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
+ (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;

- (id)alphaChannel;
- (double)alphaCurveValueAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (double)alphaValueAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)getColorAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 curveRed:(double*)arg2 curveGreen:(double*)arg3 curveBlue:(double*)arg4 curveAlpha:(double*)arg5;
- (void)getColorAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 red:(double*)arg2 green:(double*)arg3 blue:(double*)arg4 alpha:(double*)arg5 inColorSpace:(struct CGColorSpace { }*)arg6;
- (void)getDefaultCurveRed:(double*)arg1 curveGreen:(double*)arg2 curveBlue:(double*)arg3 curveAlpha:(double*)arg4;
- (void*)ozChannel;
- (void)setAlphaAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 curveAlpha:(double)arg2 options:(unsigned int)arg3;
- (void)setColorAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 curveRed:(double)arg2 curveGreen:(double)arg3 curveBlue:(double)arg4 curveAlpha:(double)arg5 options:(unsigned int)arg6;
- (void)setDefaultCurveRed:(double)arg1 curveGreen:(double)arg2 curveBlue:(double)arg3 curveAlpha:(double)arg4;

@end

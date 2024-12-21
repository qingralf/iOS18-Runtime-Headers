/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface CHChannelEnum : CHChannel

+ (bool)_isOZChannelClassOK:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
+ (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;

- (int)defaultIntValue;
- (id)enabledStateForStrings;
- (int)intValue;
- (int)intValueAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)intValueForIndex:(int)arg1;
- (id)intValuesForStrings;
- (void*)ozChannel;
- (void)setCurveIntValue:(int)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 options:(unsigned int)arg3;
- (void)setCurveStringValue:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 options:(unsigned int)arg3;
- (void)setDefaultIntValue:(int)arg1;
- (void)setEnabledStateForStrings:(id)arg1;
- (void)setIntValue:(int)arg1;
- (void)setIntValuesForStrings:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setStrings:(id)arg1;
- (void)setStringsFromChannel:(id)arg1;
- (void)setStringsWithArray:(id)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (unsigned long long)stringCount;
- (id)stringValue;
- (id)stringValueAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)stringValuesRemapped;
- (id)strings;

@end
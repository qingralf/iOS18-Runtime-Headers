/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface CHChannel : CHChannelBase

+ (bool)_isOZChannelClassOK:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;

- (void)adjustSegmentSpeed:(void*)arg1 offset:(double)arg2;
- (void)appendKeyframes:(unsigned int)arg1 times:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 values:(double*)arg3;
- (void)beginPlayback:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 scope:(unsigned int)arg2 mode:(unsigned int)arg3 resolution:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)beginRecording:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)createCurveSegment:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 maxTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 deltaTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 ease:(bool)arg4;
- (unsigned int)curveExtrapolation:(unsigned int)arg1;
- (unsigned int)curveInterpolation;
- (double)curveValueAsDoubleAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (double)defaultCurveValueAsDouble;
- (void)endPlayback:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)endRecording:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (unsigned int)fadeInCurve;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fadeInOffset;
- (unsigned int)fadeOutCurve;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fadeOutOffset;
- (double)fadeRatio:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void*)firstKeyframe;
- (bool)getFirstKeyframeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 curveValueAsDouble:(double*)arg2;
- (bool)getKeyframe:(void*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (bool)getKeyframe:(void*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 value:(double*)arg3;
- (bool)getKeyframeAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 curveValueAsDouble:(double*)arg3;
- (bool)getKeyframeBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 curveValueAsDouble:(double*)arg3;
- (void)getKeyframeInputTangents:(void*)arg1 inTanTime:(double*)arg2 inTanValue:(double*)arg3;
- (void)getKeyframeOutputTangents:(void*)arg1 outTanTime:(double*)arg2 outTanValue:(double*)arg3;
- (void)getKeyframes:(void**)arg1 enabledOnly:(bool)arg2;
- (bool)getLastKeyframeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 curveValueAsDouble:(double*)arg2;
- (bool)getTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 forCurveDoubleValue:(double)arg2 inRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 options:(unsigned int)arg5;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })globalToLocalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)hasDifferentValuesForRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)hasFadeHandles;
- (bool)hasKeyframeAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (double)initialCurveValueAsDouble;
- (bool)isPlayingWithScope:(unsigned int*)arg1 mode:(unsigned int*)arg2 resolution:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (bool)isRecording;
- (void*)keyframeAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (unsigned long long)keyframeCount;
- (void*)lastKeyframe;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })localToGlobalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (double)maxCurveValueAsDouble;
- (double)minCurveValueAsDouble;
- (bool)moveKeyframe:(void*)arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 constrainToOtherKeys:(bool)arg3;
- (bool)moveKeyframeAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void*)nextKeyframe:(void*)arg1;
- (void*)nextKeyframeFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)offsetKeyframesInTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct OZChannel { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; }*)ozChannel;
- (void*)previousKeyframe:(void*)arg1;
- (void*)previousKeyframeFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)registerRecordingCallback:(int (*)arg1 context:(void*)arg2;
- (void)removeAllKeyframes:(unsigned long long)arg1;
- (bool)removeKeyframe:(void*)arg1;
- (bool)removeKeyframeAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)retimeKeyframesWithScale:(double)arg1;
- (double)scale;
- (unsigned int)segmentInterpolation:(void*)arg1;
- (unsigned int)segmentSpeed:(void*)arg1;
- (void)setCurveExtrapolation:(unsigned int)arg1 direction:(unsigned int)arg2;
- (void)setCurveInterpolation:(unsigned int)arg1;
- (void)setCurveValueWithDouble:(double)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 options:(unsigned int)arg3;
- (void)setFadeInCurve:(unsigned int)arg1;
- (void)setFadeInOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFadeOutCurve:(unsigned int)arg1;
- (void)setFadeOutOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInitialCurveValueWithDouble:(double)arg1;
- (void)setKeyframeInputTangents:(void*)arg1 inTanTime:(double)arg2 inTanValue:(double)arg3;
- (void)setKeyframeOutputTangents:(void*)arg1 outTanTime:(double)arg2 outTanValue:(double)arg3;
- (void)setScale:(double)arg1;
- (void)setSegmentInterpolation:(void*)arg1 interpolation:(unsigned int)arg2;
- (void)setSegmentSpeed:(void*)arg1 speed:(unsigned int)arg2;
- (void)setSliderTransformerName:(id)arg1;
- (void)setSuffix:(id)arg1;
- (id)sliderTransformerName;
- (id)suffix;
- (void)unregisterRecordingCallback:(int (*)arg1 context:(void*)arg2;
- (double)valueAsDoubleAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end

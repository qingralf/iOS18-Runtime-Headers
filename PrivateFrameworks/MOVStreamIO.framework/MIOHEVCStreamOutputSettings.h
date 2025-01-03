/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOHEVCStreamOutputSettings : MOVStreamOutputSettings

+ (id)AVEEncoderTypeLosslessMasteringLookUp;
+ (id)AVEEncoderTypeProfileLevelLookUp;
+ (id)AVEEncoderTypeRequiresCustomEncodingLookUp;
+ (void)adjustAVFCompressionProperties:(id)arg1 encoderType:(int)arg2;
+ (void)applyHighPerfSettings:(id)arg1;
+ (id)avfEncoderSpecForEncoderType:(int)arg1;
+ (id)encoderSpecification;
+ (id)hevcAVFSettingsWithProfileLevel:(id)arg1 encoderType:(int)arg2 frameRate:(double)arg3 dimensions:(struct { int x1; int x2; })arg4 mastery:(id)arg5 enableAVEHighPerformanceProfile:(bool)arg6;
+ (id)hevcSettingsWithProfileLevel:(id)arg1 encoderType:(int)arg2 frameRate:(double)arg3 mastery:(id)arg4 enableAVEHighPerformanceProfile:(bool)arg5;
+ (id)masteryFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; bool x17; id x18; struct { long long x_19_1_1; int x_19_1_2; unsigned int x_19_1_3; long long x_19_1_4; } x19; unsigned long long x20; id x21; long long x22; int x23; id x24; int x25; unsigned char x26; }*)arg1 withFrameRate:(double)arg2;
+ (id)outputBitDepthIfRequiredForEncoderType:(int)arg1;
+ (id)outputSettings:(int)arg1 frameRate:(double)arg2 dimensions:(struct { int x1; int x2; })arg3 mastery:(id)arg4 preferEncoderConfig:(bool)arg5 enableAVEHighPerformanceProfile:(bool)arg6;
+ (id)outputSettingsWithConfig:(id)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 defaultFrameRate:(double)arg3 preferEncoderConfig:(bool)arg4 enableAVEHighPerformanceProfile:(bool)arg5;
+ (bool)requiresSWEncoder:(int)arg1;
+ (bool)supportsEncoderType:(int)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOProResStreamOutputSettings : MOVStreamOutputSettings

+ (unsigned int)cmCodecTypeFromAVCodecType:(id)arg1;
+ (id)outputSettingsProResEncoderType:(int)arg1 quality:(long long)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 preferEncoderConfig:(bool)arg4;
+ (id)outputSettingsWithConfig:(id)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 defaultFrameRate:(double)arg3 preferEncoderConfig:(bool)arg4 enableAVEHighPerformanceProfile:(bool)arg5;
+ (bool)supportsEncoderType:(int)arg1;

@end
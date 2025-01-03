/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVCaptionOutputSettings : AVOutputSettings {
    NSDictionary * _captionSettingsDictionary;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } captionTimeCodeFrameDuration;
@property (nonatomic, readonly) bool useDropFrameTimeCode;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (bool)supportsEmptyOutputSettingsDictionary;

- (bool)canFullySpecifyOutputFormatReturningReason:(id*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })captionTimeCodeFrameDuration;
- (id)compatibleMediaTypes;
- (bool)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1;
- (id)initWithCaptionSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (bool)useDropFrameTimeCode;
- (bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2;
- (bool)willYieldCompressedSamples;

@end

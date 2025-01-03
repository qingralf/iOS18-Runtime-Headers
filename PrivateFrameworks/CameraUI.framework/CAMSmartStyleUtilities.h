/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSmartStyleUtilities : NSObject

+ (id)_validatedSystemStyleForStyle:(id)arg1;
+ (struct CGPoint { double x1; double x2; })colorAndToneBiasForSlider2DValue:(struct CGPoint { double x1; double x2; })arg1 limitRangeForSystemStyles:(bool)arg2;
+ (double)colorOrToneBiasForSlider2DValue:(double)arg1 limitRangeForSystemStyles:(bool)arg2;
+ (id)readAVCaptureSystemStyle;
+ (id)readAVCaptureSystemStyleBypassXPC:(bool)arg1;
+ (double)slider2DValueForColorOrToneBias:(double)arg1 limitRangeForSystemStyles:(bool)arg2;
+ (struct CGPoint { double x1; double x2; })slider2DValueForStyle:(id)arg1 limitRangeForSystemStyles:(bool)arg2;
+ (void)writeAVCaptureSystemStyle:(id)arg1;

@end

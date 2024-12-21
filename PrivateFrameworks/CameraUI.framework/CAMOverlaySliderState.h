/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMOverlaySliderState : NSObject {
    double  __normalizedButtonOffset;
    long long  __sliderMode;
}

@property (nonatomic, readonly) double _normalizedButtonOffset;
@property (nonatomic, readonly) bool _presented;
@property (nonatomic, readonly) long long _sliderMode;

+ (id)hiddenState;
+ (id)hintWithNormalizedButtonOffset:(double)arg1;
+ (id)presentedState;

- (double)_effectiveNormalizedButtonOffsetFromState:(id)arg1;
- (id)_modeDescription;
- (double)_normalizedButtonOffset;
- (bool)_presented;
- (long long)_sliderMode;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToState:(id)arg1;

@end
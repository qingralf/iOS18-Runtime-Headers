/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFluidParallaxTransitionSettings : PTSettings {
    UIViewSpringAnimationBehaviorSettings * _interactiveSpring;
    UIViewSpringAnimationBehaviorSettings * _noninteractiveSpring;
    bool  _roundedCorners;
    double  _rubberBandExtent;
}

@property (nonatomic, readonly) UIViewSpringAnimationBehaviorSettings *interactiveSpring;
@property (nonatomic, readonly) UIViewSpringAnimationBehaviorSettings *noninteractiveSpring;
@property (nonatomic) bool roundedCorners;
@property (nonatomic) double rubberBandExtent;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)interactiveSpring;
- (id)noninteractiveSpring;
- (bool)roundedCorners;
- (double)rubberBandExtent;
- (void)setDefaultValues;
- (void)setRoundedCorners:(bool)arg1;
- (void)setRubberBandExtent:(double)arg1;

@end

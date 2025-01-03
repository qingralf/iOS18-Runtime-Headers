/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFluidSliderInteraction : NSObject <UIInteraction, _UIFluidSliderDrivable> {
    <_UIFluidSliderDriving> * __activeDriver;
    UIViewFloatAnimatableProperty * __animatedValue;
    unsigned long long  __axis;
    NSArray * __drivers;
    _UIFluidSliderFeedbackConductor * __feedbackConductor;
    id /* block */  __handler;
    struct { 
        double value; 
        double scale; 
        long long state; 
        long long type; 
        double currentSnappingTarget; 
    }  __lastDriverUpdate;
    struct CGSize { 
        double width; 
        double height; 
    }  __normalizedTrackSize;
    <_UIFluidSliderDirectDriving> * __panDriver;
    bool  __shouldScaleOnIndirectInput;
    long long  __state;
    UIViewFloatAnimatableProperty * __trackLength;
    UIViewFloatAnimatableProperty * __trackScale;
    UIViewFloatAnimatableProperty * __trackWidth;
    <_UIFluidSliderVolumeButtonDriving> * __volumeButtonDriver;
    _UIFluidSliderInteractionConfiguration * _configuration;
    <_UIFluidSliderDirectDrivingDelegate> * _directDrivingDelegate;
    long long  _elasticity;
    bool  _feedbackEnabled;
    bool  _locked;
    double  _lockedValue;
    double  _presentationValue;
    bool  _userInteractionEnabled;
    UIView * _view;
}

@property (nonatomic) <_UIFluidSliderDriving> *_activeDriver;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *_animatedValue;
@property (nonatomic) unsigned long long _axis;
@property (setter=_setDirectDrivingDelegate:, nonatomic) <_UIFluidSliderDirectDrivingDelegate> *_directDrivingDelegate;
@property (nonatomic, retain) NSArray *_drivers;
@property (setter=_setElasticity:, nonatomic) long long _elasticity;
@property (nonatomic, retain) _UIFluidSliderFeedbackConductor *_feedbackConductor;
@property (setter=_setFeedbackEnabled:, nonatomic) bool _feedbackEnabled;
@property (nonatomic, copy) id /* block */ _handler;
@property (nonatomic) struct { double x1; double x2; long long x3; long long x4; double x5; } _lastDriverUpdate;
@property (nonatomic) double _lockedValue;
@property (nonatomic) struct CGSize { double x1; double x2; } _normalizedTrackSize;
@property (nonatomic) <_UIFluidSliderDirectDriving> *_panDriver;
@property (nonatomic, readonly) UIPanGestureRecognizer *_panGestureRecognizer;
@property (setter=_setShouldScaleOnIndirectInput:, nonatomic) bool _shouldScaleOnIndirectInput;
@property (nonatomic) long long _state;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *_trackLength;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *_trackScale;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *_trackWidth;
@property (nonatomic) <_UIFluidSliderVolumeButtonDriving> *_volumeButtonDriver;
@property (nonatomic, readonly) _UIPhysicalButtonInteraction *_volumeButtonInteraction;
@property (nonatomic, copy) _UIFluidSliderInteractionConfiguration *configuration;
@property (nonatomic, readonly) double currentTrackLength;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, readonly) double presentationValue;
@property (nonatomic, readonly) unsigned long long stepCount;
@property (readonly) Class superclass;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) double value;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_activeDriver;
- (void)_animate:(id /* block */)arg1 withSpring:(id)arg2;
- (id)_animatedValue;
- (unsigned long long)_axis;
- (void)_cancelDriversExcludingDriver:(id)arg1;
- (id)_directDrivingDelegate;
- (double)_driftFactor;
- (id)_drivers;
- (long long)_elasticity;
- (id)_feedbackConductor;
- (bool)_feedbackEnabled;
- (double)_feedbackEpsilon;
- (id /* block */)_handler;
- (void)_issueUpdate;
- (struct { double x1; double x2; long long x3; long long x4; double x5; })_lastDriverUpdate;
- (double)_lockedValue;
- (double)_minSquishedWidthForWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })_normalizedTrackSize;
- (id)_panDriver;
- (id)_panGestureRecognizer;
- (void)_rebuildDrivers;
- (void)_removeAllDrivers;
- (void)_setDirectDrivingDelegate:(id)arg1;
- (void)_setElasticity:(long long)arg1;
- (void)_setFeedbackEnabled:(bool)arg1;
- (void)_setShouldScaleOnIndirectInput:(bool)arg1;
- (bool)_shouldScaleOnIndirectInput;
- (long long)_state;
- (void)_targetNewScale:(double)arg1;
- (void)_targetNewValue:(double)arg1;
- (id)_trackLength;
- (id)_trackScale;
- (id)_trackWidth;
- (id)_volumeButtonDriver;
- (id)_volumeButtonInteraction;
- (id)configuration;
- (double)currentTrackLength;
- (id)description;
- (void)didMoveToView:(id)arg1;
- (void)fluidSliderDriver:(id)arg1 didGenerateUpdate:(struct { double x1; double x2; long long x3; long long x4; double x5; })arg2;
- (id)initWithConfiguration:(id)arg1 handler:(id /* block */)arg2;
- (bool)isLocked;
- (bool)isUserInteractionEnabled;
- (double)presentationValue;
- (void)setConfiguration:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(double)arg1;
- (void)set_activeDriver:(id)arg1;
- (void)set_animatedValue:(id)arg1;
- (void)set_axis:(unsigned long long)arg1;
- (void)set_drivers:(id)arg1;
- (void)set_feedbackConductor:(id)arg1;
- (void)set_handler:(id /* block */)arg1;
- (void)set_lastDriverUpdate:(struct { double x1; double x2; long long x3; long long x4; double x5; })arg1;
- (void)set_lockedValue:(double)arg1;
- (void)set_normalizedTrackSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_panDriver:(id)arg1;
- (void)set_state:(long long)arg1;
- (void)set_trackLength:(id)arg1;
- (void)set_trackScale:(id)arg1;
- (void)set_trackWidth:(id)arg1;
- (void)set_volumeButtonDriver:(id)arg1;
- (unsigned long long)stepCount;
- (double)value;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlElasticSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlSliderGestureTransformerDelegate, UIGestureRecognizerDelegate> {
    double  _activeGestureValue;
    unsigned long long  _activeGestureValueType;
    HUElasticApplier * _controlHorizontalCompressionApplier;
    HUDisplayLinkApplier * _controlVerticalStretchingApplier;
    bool  _firstTouchDown;
    HUQuickControlSliderGestureTransformer * _gestureTransformer;
    bool  _hasSecondaryValue;
    NSDate * _interactableStartTime;
    struct { 
        double minimum; 
        double maximum; 
    }  _modelValue;
    UILongPressGestureRecognizer * _panGestureRecognizer;
    HUElasticApplier * _primaryValueSmoothingApplier;
    HUElasticApplier * _secondaryValueSmoothingApplier;
    UITapGestureRecognizer * _tapGestureRecognizer;
    bool  _userInteractionActive;
}

@property (nonatomic) double activeGestureValue;
@property (nonatomic) unsigned long long activeGestureValueType;
@property (nonatomic, retain) HUElasticApplier *controlHorizontalCompressionApplier;
@property (nonatomic, retain) HUDisplayLinkApplier *controlVerticalStretchingApplier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isFirstTouchDown, nonatomic) bool firstTouchDown;
@property (nonatomic, retain) HUQuickControlSliderGestureTransformer *gestureTransformer;
@property (nonatomic) bool hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *interactableStartTime;
@property (nonatomic) struct { double x1; double x2; } modelValue;
@property (nonatomic, retain) UILongPressGestureRecognizer *panGestureRecognizer;
@property (nonatomic, retain) HUElasticApplier *primaryValueSmoothingApplier;
@property (nonatomic, retain) HUElasticApplier *secondaryValueSmoothingApplier;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, readonly) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;

- (void).cxx_destruct;
- (id)_allAppliers;
- (void)_beginReceivingTouchesWithGestureRecognizer:(id)arg1 isTouchContinuation:(bool)arg2;
- (unsigned long long)_findClosestValueFromTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleControlPanGesture:(id)arg1;
- (void)_handleControlTapGesture:(id)arg1;
- (struct { double x1; double x2; })_rawViewValueRange;
- (double)_rubberBandedStretchProgress;
- (id)_rubberBandingValueNormalizer;
- (void)_setupAllValueAppliersIfNecessary;
- (void)_setupStretchingAppliers;
- (id)_setupValueApplierForValueType:(unsigned long long)arg1;
- (double)_sliderValueForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateControlViewValueOfType:(unsigned long long)arg1 withValue:(double)arg2;
- (void)_updateModelValue:(struct { double x1; double x2; })arg1 roundValue:(bool)arg2 notifyDelegate:(bool)arg3;
- (void)_updatePropertiesForControlValueSmoothingApplier:(id)arg1 ofType:(unsigned long long)arg2;
- (id)_valueNormalizerWithOptions:(id)arg1;
- (double)activeGestureValue;
- (unsigned long long)activeGestureValueType;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)controlHorizontalCompressionApplier;
- (id)controlVerticalStretchingApplier;
- (void)dealloc;
- (void)gestureDidEndForGestureTransformer:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureTransformer;
- (void)gestureTransformer:(id)arg1 sliderValueDidChange:(double)arg2;
- (bool)hasSecondaryValue;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (id)interactableStartTime;
- (bool)isFirstTouchDown;
- (bool)isUserInteractionActive;
- (struct { double x1; double x2; })modelValue;
- (id)panGestureRecognizer;
- (id)primaryValueSmoothingApplier;
- (void)recordInteractionStart;
- (id)secondaryValueSmoothingApplier;
- (void)setActiveGestureValue:(double)arg1;
- (void)setActiveGestureValueType:(unsigned long long)arg1;
- (void)setControlHorizontalCompressionApplier:(id)arg1;
- (void)setControlVerticalStretchingApplier:(id)arg1;
- (void)setFirstTouchDown:(bool)arg1;
- (void)setGestureTransformer:(id)arg1;
- (void)setHasSecondaryValue:(bool)arg1;
- (void)setInteractableStartTime:(id)arg1;
- (void)setModelValue:(struct { double x1; double x2; })arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setPrimaryValueSmoothingApplier:(id)arg1;
- (void)setSecondaryValueSmoothingApplier:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setViewVisible:(bool)arg1;
- (id)tapGestureRecognizer;
- (id)value;
- (id)viewProfile;

@end

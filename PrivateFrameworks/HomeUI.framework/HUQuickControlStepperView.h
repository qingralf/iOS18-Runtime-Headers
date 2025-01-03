/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlStepperView : UIView <HUQuickControlInteractiveView, UIGestureRecognizerDelegate> {
    double  _accumulatedTouchDistance;
    UIView * _backgroundView;
    NSArray * _constraints;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    UILongPressGestureRecognizer * _gestureRecognizer;
    <HUQuickControlViewInteractionDelegate> * _interactionDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    HUQuickControlStepperViewProfile * _profile;
    unsigned long long  _reachabilityState;
    NSArray * _segmentViews;
    NSNumber * _selectedSegmentIndex;
    NSArray * _separatorEffectViews;
    NSArray * _separatorViews;
    NSNumber * _trackingSegmentIndex;
    bool  _userInteractionActive;
}

@property (nonatomic) double accumulatedTouchDistance;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUQuickControlViewInteractionDelegate> *interactionDelegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTouchLocation;
@property (nonatomic, copy) HUQuickControlStepperViewProfile *profile;
@property (nonatomic) unsigned long long reachabilityState; /* unknown property attribute: ? */
@property (nonatomic, retain) id secondaryValue; /* unknown property attribute: ? */
@property (nonatomic, retain) NSArray *segmentViews;
@property (nonatomic, retain) NSNumber *selectedSegmentIndex;
@property (nonatomic, retain) NSArray *separatorEffectViews;
@property (nonatomic, retain) NSArray *separatorViews;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *trackingSegmentIndex;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)_actuateTapticFeedback;
- (void)_createSegmentAndSeparatorViews;
- (void)_handleGesture:(id)arg1;
- (void)_layoutSegmentViews;
- (void)_prepareForTapticFeedback;
- (bool)_shouldRequireMinimumDragDistanceForGestureRecognizer:(id)arg1;
- (id)_stepperViewMetricsForControlSize:(unsigned long long)arg1;
- (void)_updateSegmentHighlightedState;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_updateUserInteractionActive:(bool)arg1 forFirstTouch:(bool)arg2;
- (double)accumulatedTouchDistance;
- (id)backgroundView;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)constraints;
- (id)feedbackGenerator;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)interactionDelegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isUserInteractionActive;
- (struct CGPoint { double x1; double x2; })lastTouchLocation;
- (void)layoutSubviews;
- (id)profile;
- (unsigned long long)reachabilityState;
- (id)segmentViews;
- (id)selectedSegmentIndex;
- (id)separatorEffectViews;
- (id)separatorViews;
- (void)setAccumulatedTouchDistance:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setLastTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setProfile:(id)arg1;
- (void)setReachabilityState:(unsigned long long)arg1;
- (void)setSegmentViews:(id)arg1;
- (void)setSelectedSegmentIndex:(id)arg1;
- (void)setSeparatorEffectViews:(id)arg1;
- (void)setSeparatorViews:(id)arg1;
- (void)setTrackingSegmentIndex:(id)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)tintColorDidChange;
- (id)trackingSegmentIndex;
- (void)updateConstraints;
- (id)value;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate, UIViewControllerInteractiveTransitioning_Internal> {
    bool  __completesTransitionOnEnd;
    long long  __interactionState;
    UIViewController * __parent;
    bool  __shouldReverseLayoutDirection;
    bool  __stoppedTransitionWasCancelled;
    bool  __transitionWasStopped;
    bool  __updateRequestActive;
    bool  __useAugmentedShouldPopDecisionProcedure;
    double  _accelerations;
    _UINavigationParallaxTransition * _animationController;
    double  _averageAcceleration;
    double  _averageVelocity;
    <_UINavigationInteractiveTransitionBaseDelegate> * _delegate;
    CADisplayLink * _displayLink;
    UIPanGestureRecognizer * _gestureRecognizer;
    UIView * _gestureRecognizerView;
    double  _percentCompleteWhenPaused;
    double  _previousAcceleration;
    double  _previousDisplacement;
    double  _previousTimeStamp;
    double  _previousVelocity;
    unsigned long long  _sampleCount;
    bool  _shouldReverseTranslation;
    double  _skipTimeStamp;
    double  _timestamps;
    double  _totalDistance;
    double  _velocities;
    bool  _wantsInteractiveStart;
}

@property (setter=_setCompletesTransitionOnEnd:, nonatomic) bool _completesTransitionOnEnd;
@property (setter=_setInteractionState:, nonatomic) long long _interactionState;
@property (setter=_setParent:, nonatomic) UIViewController *_parent;
@property (setter=_setShouldReverseLayoutDirection:, nonatomic) bool _shouldReverseLayoutDirection;
@property (setter=_setStoppedTransitionWasCancelled:, nonatomic) bool _stoppedTransitionWasCancelled;
@property (setter=_setTransitionWasStopped:, nonatomic) bool _transitionWasStopped;
@property (setter=_setUseAugmentedShouldPopDecisionProcedure:, nonatomic) bool _useAugmentedShouldPopDecisionProcedure;
@property (nonatomic, retain) _UINavigationParallaxTransition *animationController;
@property (nonatomic) double averageAcceleration;
@property (nonatomic) double averageVelocity;
@property (nonatomic, readonly) long long completionCurve; /* unknown property attribute: ? */
@property (nonatomic, readonly) double completionSpeed; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_UINavigationInteractiveTransitionBaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (getter=_navigationGesture, nonatomic, readonly) UIGestureRecognizer *navigationGesture;
@property (nonatomic) double previousAcceleration;
@property (nonatomic) double previousDisplacement;
@property (nonatomic) double previousTimeStamp;
@property (nonatomic) double previousVelocity;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) bool shouldReverseTranslation;
@property (nonatomic) double skipTimeStamp;
@property (readonly) Class superclass;
@property (nonatomic) double totalDistance;
@property (nonatomic, readonly) bool wantsInteractiveStart; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (void)_completeStoppedInteractiveTransition;
- (bool)_completesTransitionOnEnd;
- (bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (long long)_interactionState;
- (id)_navigationGesture;
- (id)_parent;
- (void)_resetInteractionController;
- (void)_setCompletesTransitionOnEnd:(bool)arg1;
- (void)_setInteractionState:(long long)arg1;
- (void)_setParent:(id)arg1;
- (void)_setShouldReverseLayoutDirection:(bool)arg1;
- (void)_setStoppedTransitionWasCancelled:(bool)arg1;
- (void)_setTransitionWasStopped:(bool)arg1;
- (void)_setUseAugmentedShouldPopDecisionProcedure:(bool)arg1;
- (bool)_shouldPauseRunningTransition;
- (bool)_shouldReverseLayoutDirection;
- (void)_stopInteractiveTransition;
- (bool)_stoppedTransitionWasCancelled;
- (bool)_supportsCoordinatedPresentationDismissal;
- (bool)_transitionWasStopped;
- (double)_translationCoefficient;
- (void)_updateStatistics:(id)arg1 firstSample:(bool)arg2 finalSample:(bool)arg3;
- (bool)_useAugmentedShouldPopDecisionProcedure;
- (id)animationController;
- (double)averageAcceleration;
- (double)averageVelocity;
- (void)cancelInteractiveTransition;
- (void)dealloc;
- (id)delegate;
- (void)finishInteractiveTransition;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizerView;
- (void)handleNavigationTransition:(id)arg1;
- (id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3;
- (bool)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double*)arg3;
- (double)previousAcceleration;
- (double)previousDisplacement;
- (double)previousTimeStamp;
- (double)previousVelocity;
- (unsigned long long)sampleCount;
- (void)setAnimationController:(id)arg1;
- (void)setAverageAcceleration:(double)arg1;
- (void)setAverageVelocity:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setNotInteractiveTransition;
- (void)setPreviousAcceleration:(double)arg1;
- (void)setPreviousDisplacement:(double)arg1;
- (void)setPreviousTimeStamp:(double)arg1;
- (void)setPreviousVelocity:(double)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setShouldReverseTranslation:(bool)arg1;
- (void)setSkipTimeStamp:(double)arg1;
- (void)setTotalDistance:(double)arg1;
- (bool)shouldReverseTranslation;
- (double)skipTimeStamp;
- (void)startInteractiveTransition;
- (double)totalDistance;
- (bool)wantsInteractiveStart;

@end

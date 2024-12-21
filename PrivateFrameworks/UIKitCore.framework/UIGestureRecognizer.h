/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIGestureRecognizer : NSObject <NSSecureCoding, TSDGesture, _UIEventRespondable, _UIExcludable, _UIForceLevelClassifierDelegate, _UIGestureRecognizerDriverDelegate, _UIPressesEventRespondable, _UITouchesEventRespondable> {
    NSMutableSet * _activeEvents;
    NSArray * _allowedPressTypes;
    long long  _allowedTouchTypes;
    bool  _analyticsGestureHandled;
    NSObservationSource * _beganObservable;
    long long  _buttonMask;
    <_UIGestureRecognizerContainer> * _container;
    UIGestureDelayedEventComponentDispatcher * _delayedEventComponentDispatcher;
    NSMutableArray * _delayedPresses;
    NSMutableArray * _delayedTouches;
    <UIGestureRecognizerDelegate> * _delegate;
    NSMutableSet * _failureDependents;
    NSMutableSet * _failureRequirements;
    double  _firstEventTimestamp;
    _UIForceLevelClassifier * _forceClassifier;
    unsigned long long  _forcePressCount;
    NSMutableArray * _forceTargets;
    UIGestureEnvironment * _gestureEnvironment;
    struct { 
        unsigned int delegateShouldBegin : 1; 
        unsigned int delegateCanPrevent : 1; 
        unsigned int delegateCanBePrevented : 1; 
        unsigned int delegateShouldRecognizeSimultaneously : 1; 
        unsigned int delegateShouldReceiveEvent : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateShouldReceivePress : 1; 
        unsigned int delegateShouldRequireFailure : 1; 
        unsigned int delegateShouldBeRequiredToFail : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int privateDelegateShouldBegin : 1; 
        unsigned int privateDelegateCanPrevent : 1; 
        unsigned int privateDelegateCanBePrevented : 1; 
        unsigned int privateDelegateShouldRecognizeSimultaneously : 1; 
        unsigned int privateDelegateShouldReceiveEvent : 1; 
        unsigned int privateDelegateShouldReceiveTouch : 1; 
        unsigned int privateDelegateShouldReceivePress : 1; 
        unsigned int privateDelegateShouldRequireFailure : 1; 
        unsigned int privateDelegateShouldBeRequiredToFail : 1; 
        unsigned int privateDelegateCanCancel : 1; 
        unsigned int privateDelegateCanBeCancelled : 1; 
        unsigned int frontBoardDelegateShouldReceiveDynamicButton : 1; 
        unsigned int subclassShouldRequireFailure : 1; 
        unsigned int subclassShouldBeRequiredToFail : 1; 
        unsigned int hasSubclassDynamicFailureRequirements : 1; 
        unsigned int hasDelegateDynamicFailureRequirements : 1; 
        unsigned int subclassTouchesEstimatedPropertiesUpdated : 1; 
        unsigned int subclassShouldReceiveTouchForEventRecognizerView : 1; 
        unsigned int queriedFailureRequirements : 1; 
        unsigned int cancelsTouchesInView : 1; 
        unsigned int delaysTouchesBegan : 1; 
        unsigned int delaysTouchesEnded : 1; 
        unsigned int disabled : 1; 
        unsigned int dirty : 1; 
        unsigned int delivered : 1; 
        unsigned int deliveredEndedOrCancelled : 1; 
        unsigned int continuous : 1; 
        unsigned int requiresDelayedBegan : 1; 
        unsigned int willBeginAfterSatisfyingFailureRequirements : 1; 
        unsigned int requiresSystemGesturesToFail : 1; 
        unsigned int acceptsFailureRequirements : 1; 
        unsigned int requiresExclusiveTouchType : 1; 
        unsigned int initialTouchTypeIsValid : 1; 
        unsigned int forceRequirementSatisfied : 1; 
        unsigned int wantsDragEvents : 1; 
        unsigned int conformsToDragEventRespondable : 1; 
        unsigned int isDynamicGesture : 1; 
        unsigned int canExcludeWithActiveRequirements : 1; 
        unsigned int isObservingGesture : 1; 
        unsigned int didCheckForcePressShouldBegin : 1; 
        unsigned int canSendForcePressAction : 1; 
        unsigned int queriedShouldReceiveTouchesEvent : 1; 
        unsigned int shouldReceiveTouchesEvent : 1; 
        unsigned int queriedDelegateShouldReceiveTouchesEvent : 1; 
        unsigned int delegateShouldReceiveTouchesEvent : 1; 
        unsigned int queriedShouldReceivePressesEvent : 1; 
        unsigned int shouldReceivePressesEvent : 1; 
        unsigned int queriedDelegateShouldReceivePressesEvent : 1; 
        unsigned int delegateShouldReceivePressesEvent : 1; 
        unsigned int conformsToHoverEventRespondable : 1; 
        unsigned int conformsToScrollEventRespondable : 1; 
        unsigned int conformsToTransformEventRespondable : 1; 
        unsigned int conformsToDynamicButtonEventRespondable : 1; 
        unsigned int queriedShouldReceiveDynamicButtonEvent : 1; 
        unsigned int shouldReceiveDynamicButtonEvent : 1; 
        unsigned int queriedDelegateShouldReceiveDynamicButtonEvent : 1; 
        unsigned int delegateShouldReceiveDynamicButtonEvent : 1; 
        unsigned int canBeCancelledByAffectedViews : 1; 
        unsigned int enqueuedForReset : 1; 
        unsigned int sendUpdateOnEventChange : 1; 
        unsigned int hasDriver : 1; 
        unsigned int skipUpdatingContainerInSetView : 1; 
    }  _gestureFlags;
    long long  _initialTouchType;
    unsigned long long  _inputPrecision;
    NSMutableSet * _internalActiveTouches;
    bool  _keepTouchesOnContinuation;
    double  _lastTouchTimestamp;
    unsigned long long  _machTimeEnqueuedForReset;
    long long  _modifierFlags;
    NSString * _name;
    long long  _requiredPreviewForceState;
    long long  _state;
    NSMutableArray * _targets;
    _UITouchForceObservable * _touchForceObservable;
    NSObservation * _touchForceObservableAndClassifierObservation;
    bool  _wantsGESEvents;
}

@property (getter=_acceptsFailureRequirements, setter=_setAcceptsFailureRequiments:, nonatomic) bool _acceptsFailureRequirements;
@property (nonatomic, readonly) NSSet *_allActiveTouches;
@property (getter=_analyticsIsGestureHandled, setter=_setAnalyticsGestureHandled:, nonatomic) bool _analyticsGestureHandled;
@property (nonatomic, readonly) NSString *_briefDescription;
@property (nonatomic, readonly) long long _defaultAllowedMouseButtons;
@property (nonatomic, readonly) _UIGestureRecognizerDriver *_driver;
@property (nonatomic, readonly) bool _hasUnmetFailureRequirements;
@property (nonatomic, readonly) bool _isAllowedToReceiveGESEvents;
@property (nonatomic, readonly) bool _isTouchGestureRecognizer;
@property (setter=_setKeepTouchesOnContinuation:, nonatomic) bool _keepTouchesOnContinuation;
@property (nonatomic, readonly) NSMutableSet *_pairedGestureIdentifiers;
@property (getter=_isPaused, nonatomic, readonly) bool _paused;
@property (setter=_setRecognitionEvent:, nonatomic) long long _recognitionEvent;
@property (nonatomic, readonly) bool _wantsPartialTouchSequences;
@property (nonatomic, readonly) bool _wk_hasRecognizedOrEnded;
@property (nonatomic, readonly) bool _wk_isTextInteractionLoupeGesture;
@property (nonatomic, readonly) bool _wk_isTextInteractionTapGesture;
@property (getter=sbf_activeTouches, nonatomic, readonly, copy) NSSet *activeTouches;
@property (readonly) unsigned long long akNumberOfTouches;
@property (nonatomic, copy) NSArray *allowedPressTypes;
@property (nonatomic, copy) NSArray *allowedTouchTypes;
@property (nonatomic, readonly) long long buttonMask;
@property (nonatomic, retain) <TSDGestureTarget> *cachedGestureTarget;
@property (getter=_canExcludeWithActiveRequirements, setter=_setCanExcludeWithActiveRequirements:, nonatomic) bool canExcludeWithActiveRequirements;
@property (nonatomic) bool cancelsTouchesInView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) bool delaysTouchesBegan;
@property (nonatomic) bool delaysTouchesEnded;
@property (nonatomic) <UIGestureRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) <TSDGestureDelegate> *gestureDelegate;
@property (nonatomic, retain) NSString *gestureKind;
@property (nonatomic, readonly) int gestureState;
@property (getter=sbf_hasPointerTouch, nonatomic, readonly) bool hasPointerTouch;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lastTouchTimestamp;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfTouches;
@property (nonatomic) bool requiresExclusiveTouchType;
@property (getter=_requiresSystemGesturesToFail, setter=_setRequiresSystemGesturesToFail:, nonatomic) bool requiresSystemGesturesToFail;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSDRep *targetRep;
@property (nonatomic, retain) UIView *view;
@property (getter=_wantsGESEvents, setter=_wantsGESEvents:, nonatomic) bool wantsGESEvents;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_shouldDefaultToTouches;
+ (bool)_shouldUseLinearForceLevelClassifier;
+ (bool)_supportsDefaultPressTypes;
+ (bool)_supportsDefaultTouchTypes;
+ (bool)_supportsStylusTouches;
+ (bool)_supportsTouchContinuation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_acceptsFailureRequirements;
- (id)_activeEventOfType:(long long)arg1;
- (id)_activeEvents;
- (id)_activeTouchesForEvent:(id)arg1;
- (void)_addTouch:(id)arg1 forEvent:(id)arg2;
- (bool)_affectedByGesture:(id)arg1;
- (id)_allActiveTouches;
- (bool)_analyticsIsGestureHandled;
- (void)_appendSubclassDescription:(id)arg1;
- (id)_briefDescription;
- (long long)_buttonMask;
- (bool)_canExcludeOtherExcludables;
- (bool)_canExcludeWithActiveRequirements;
- (struct CGPoint { double x1; double x2; })_centroidOfTouches:(id)arg1 excludingEnded:(bool)arg2;
- (void)_componentsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_componentsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_componentsChanged:(id)arg1 withEvent:(id)arg2;
- (void)_componentsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (long long)_currentForceLevel;
- (long long)_defaultAllowedMouseButtons;
- (long long)_depthFirstCompare:(id)arg1;
- (id)_driver;
- (id)_excludableDescription;
- (void)_exclude;
- (id)_forceLevelClassifier;
- (void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2;
- (void)_gestureRecognizerDriver:(id)arg1 didUpdateState:(long long)arg2 previousState:(long long)arg3;
- (bool)_hasUnmetFailureRequirements;
- (bool)_isAllowedToReceiveGESEvents;
- (bool)_isExcludedByExcludable:(id)arg1;
- (bool)_isGestureType:(long long)arg1;
- (bool)_isPaused;
- (bool)_isTouchGestureRecognizer;
- (bool)_keepTouchesOnContinuation;
- (long long)_modifierFlags;
- (bool)_needsDynamicDependentRequirementForGestureRecognizer:(id)arg1;
- (bool)_needsDynamicFailureRequirementForGestureRecognizer:(id)arg1;
- (id)_pairedGestureIdentifiers;
- (id)_pairedGestureIdentifiersAndCreate:(bool)arg1;
- (long long)_recognitionEvent;
- (void)_removeTouch:(id)arg1 forEvent:(id)arg2;
- (bool)_requiresSystemGesturesToFail;
- (void)_resetGestureRecognizer;
- (void)_setAcceptsFailureRequiments:(bool)arg1;
- (void)_setAnalyticsGestureHandled:(bool)arg1;
- (void)_setCanExcludeWithActiveRequirements:(bool)arg1;
- (void)_setForceLevelClassifier:(id)arg1;
- (void)_setKeepTouchesOnContinuation:(bool)arg1;
- (void)_setRecognitionEvent:(long long)arg1;
- (void)_setRequiresSystemGesturesToFail:(bool)arg1;
- (bool)_shouldBegin;
- (bool)_shouldDelayUntilForceLevelRequirementIsMet;
- (bool)_shouldReceiveDynamicButton:(id)arg1;
- (bool)_shouldReceiveEvent:(id)arg1;
- (bool)_shouldReceivePress:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (void)_stateUpdatedForDriver:(id)arg1 previousState:(long long)arg2;
- (id)_touchForceObservable;
- (void)_updateForActiveEvents;
- (bool)_wantsGESEvents;
- (void)_wantsGESEvents:(bool)arg1;
- (bool)_wantsHoverEventsWhilePointerIsLocked;
- (bool)_wantsPartialTouchSequences;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)allowedPressTypes;
- (id)allowedTouchTypes;
- (long long)buttonMask;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)cancelsTouchesInView;
- (long long)currentPreviewForceState;
- (void)dealloc;
- (bool)delaysTouchesBegan;
- (bool)delaysTouchesEnded;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)ignorePress:(id)arg1 forEvent:(id)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isEnabled;
- (double)lastTouchTimestamp;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (long long)modifierFlags;
- (id)name;
- (unsigned long long)numberOfTouches;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeFailureRequirement:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (long long)requiredPreviewForceState;
- (bool)requiresExclusiveTouchType;
- (void)reset;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setCancelsTouchesInView:(bool)arg1;
- (void)setDelaysTouchesBegan:(bool)arg1;
- (void)setDelaysTouchesEnded:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setRequiredPreviewForceState:(long long)arg1;
- (void)setRequiresExclusiveTouchType:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setView:(id)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (long long)state;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)view;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (bool)PK_isPencilTextInputSystemGestureRecognizer:(id)arg1;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (struct CGPoint { double x1; double x2; })_swiftui_globalTranslation;
- (struct CGPoint { double x1; double x2; })_swiftui_globalVelocity;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (void)_wk_cancel;
- (bool)_wk_hasRecognizedOrEnded;
- (bool)_wk_isTapAndAHalf;
- (bool)_wk_isTextInteractionLoupeGesture;
- (bool)_wk_isTextInteractionTapGesture;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (struct CGPoint { double x1; double x2; })akLocationInWindow;
- (unsigned long long)akNumberOfTouches;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (struct CGPoint { double x1; double x2; })hu_locationInGlobalCoordinateSpace;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (bool)_px_isGestureRecognizerForKey:(id)arg1 ofScrollView:(id*)arg2;
- (void)px_cancel;
- (bool)px_isPanGestureRecognizerOfScrollView:(id*)arg1;
- (bool)px_isPinchGestureRecognizerOfScrollView:(id*)arg1;
- (struct CGPoint { double x1; double x2; })px_locationInCoordinateSpace:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (void)pu_cancel;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (void)cancel;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (void)cancel;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)sbf_activeTouches;
- (bool)sbf_hasPointerTouch;
- (void)sbf_setPencilTouchesAllowed:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (struct CGPoint { double x1; double x2; })boundsLocationForICC:(id)arg1;
- (id)cachedGestureTarget;
- (id)gestureDelegate;
- (id)gestureKind;
- (int)gestureState;
- (id)initWithGestureDispatcher:(id)arg1 gestureKind:(id)arg2;
- (bool)isDone;
- (struct CGPoint { double x1; double x2; })naturalLocationForRep:(id)arg1;
- (void)setCachedGestureTarget:(id)arg1;
- (void)setGestureDelegate:(id)arg1;
- (void)setGestureKind:(id)arg1;
- (void)setTargetRep:(id)arg1;
- (id)targetRep;
- (struct CGPoint { double x1; double x2; })unscaledLocationForICC:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

- (struct CGPoint { double x1; double x2; })location;
- (void)tmlSignalAttach:(id)arg1;
- (void)tmlSignalDetach:(id)arg1;

@end
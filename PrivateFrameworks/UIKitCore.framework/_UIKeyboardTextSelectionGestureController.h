/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardTextSelectionGestureController : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _accumulatedAcceleration;
    struct CGPoint { 
        double x; 
        double y; 
    }  _accumulatedBounding;
    NSMutableArray * _activeGestures;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cursorLocationBase;
    NSMutableArray * _deallocHandlers;
    <_UIKeyboardTextSelectionGestureControllerDelegate> * _delegate;
    bool  _didFloatCursor;
    bool  _didSuppressSelectionGrabbers;
    _UIStatesFeedbackGenerator * _feedbackBehaviour;
    bool  _hadAddedTouch;
    bool  _isLongPressing;
    bool  _isPanning;
    bool  _isSpacePan;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPanTranslation;
    double  _lastPressTimestamp;
    UIDelayedAction * _longForcePressAction;
    long long  _panGestureState;
    int  _previousForcePressCount;
    long long  _previousRepeatedGranularity;
    double  _spacePanDistance;
    bool  _suppressTwoFingerPan;
    UIDelayedAction * _tapLogTimer;
    double  _twoFingerTapTimestamp;
    bool  _wasNestedPinchingDisabled;
    bool  _wasScrollingEnabled;
    UITextMagnifierTimeWeightedPoint * _weightedPoint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accumulatedAcceleration;
@property (nonatomic) struct CGPoint { double x1; double x2; } accumulatedBounding;
@property (nonatomic, retain) NSMutableArray *activeGestures;
@property (nonatomic) struct CGPoint { double x1; double x2; } cursorLocationBase;
@property (nonatomic) <_UIKeyboardTextSelectionGestureControllerDelegate> *delegate;
@property (nonatomic) bool didFloatCursor;
@property (nonatomic) bool didSuppressSelectionGrabbers;
@property (nonatomic, retain) _UIStatesFeedbackGenerator *feedbackBehaviour;
@property (nonatomic) bool hadAddedTouch;
@property (nonatomic) bool isLongPressing;
@property (nonatomic) bool isPanning;
@property (nonatomic) bool isSpacePan;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastPanTranslation;
@property (nonatomic) double lastPressTimestamp;
@property (nonatomic, retain) UIDelayedAction *longForcePressAction;
@property (nonatomic) long long panGestureState;
@property (nonatomic) int previousForcePressCount;
@property (nonatomic) long long previousRepeatedGranularity;
@property (nonatomic) double spacePanDistance;
@property (nonatomic) bool suppressTwoFingerPan;
@property (nonatomic, retain) UIDelayedAction *tapLogTimer;
@property (nonatomic) double twoFingerTapTimestamp;
@property (nonatomic) bool wasNestedPinchingDisabled;
@property (nonatomic) bool wasScrollingEnabled;
@property (nonatomic, retain) UITextMagnifierTimeWeightedPoint *weightedPoint;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cleanupDeadGesturesIfNecessary;
- (bool)_longPressAllowedForView:(id)arg1;
- (struct CGPoint { double x1; double x2; })accumulatedAcceleration;
- (struct CGPoint { double x1; double x2; })accumulatedBounding;
- (id)activeGestures;
- (id)addDeallocationHandler:(id /* block */)arg1;
- (id)addLongPressTextSelectionInteractionsToView:(id)arg1;
- (id)addOneFingerTextSelectionInteractionsToView:(id)arg1;
- (id)addTwoFingerTextSelectionInteractionsToView:(id)arg1;
- (bool)allowOneFingerDeepPress;
- (void)configureOneFingerForcePressRecognizer:(id)arg1;
- (void)configureTwoFingerPanGestureRecognizer:(id)arg1;
- (void)configureTwoFingerTapGestureRecognizer:(id)arg1;
- (struct CGPoint { double x1; double x2; })cursorLocationBase;
- (void)dealloc;
- (id)delegate;
- (bool)didFloatCursor;
- (void)didRemoveSelectionController;
- (bool)didSuppressSelectionGrabbers;
- (void)enableEnclosingScrollViewNestedPinching;
- (id)feedbackBehaviour;
- (bool)hadAddedTouch;
- (id)init;
- (bool)isLongPressing;
- (bool)isPanning;
- (bool)isSpacePan;
- (struct CGPoint { double x1; double x2; })lastPanTranslation;
- (double)lastPressTimestamp;
- (id)longForcePressAction;
- (double)oneFingerForcePressAllowableMovement;
- (double)oneFingerForcePressMinimumDuration;
- (bool)oneFingerForcePressShouldCancelTouchesInView;
- (bool)oneFingerForcePressShouldFailWithoutForce;
- (long long)panGestureState;
- (int)previousForcePressCount;
- (long long)previousRepeatedGranularity;
- (void)redisableEnclosingScrollViewNestedPinching;
- (void)removeDeallocationHandler:(id)arg1;
- (id)selectionController;
- (void)setAccumulatedAcceleration:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccumulatedBounding:(struct CGPoint { double x1; double x2; })arg1;
- (void)setActiveGestures:(id)arg1;
- (void)setCursorLocationBase:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidFloatCursor:(bool)arg1;
- (void)setDidSuppressSelectionGrabbers:(bool)arg1;
- (void)setFeedbackBehaviour:(id)arg1;
- (void)setHadAddedTouch:(bool)arg1;
- (void)setIsLongPressing:(bool)arg1;
- (void)setIsPanning:(bool)arg1;
- (void)setIsSpacePan:(bool)arg1;
- (void)setLastPanTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastPressTimestamp:(double)arg1;
- (void)setLongForcePressAction:(id)arg1;
- (void)setPanGestureState:(long long)arg1;
- (void)setPreviousForcePressCount:(int)arg1;
- (void)setPreviousRepeatedGranularity:(long long)arg1;
- (void)setSpacePanDistance:(double)arg1;
- (void)setSuppressTwoFingerPan:(bool)arg1;
- (void)setTapLogTimer:(id)arg1;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (void)setWasNestedPinchingDisabled:(bool)arg1;
- (void)setWasScrollingEnabled:(bool)arg1;
- (void)setWeightedPoint:(id)arg1;
- (bool)shouldAddForceGesture;
- (double)spacePanDistance;
- (bool)suppressTwoFingerPan;
- (id)tapLogTimer;
- (Class)textInteractionClass;
- (id)textSelectionInteractionForRTIForwarding;
- (double)twoFingerTapTimestamp;
- (bool)wasNestedPinchingDisabled;
- (bool)wasScrollingEnabled;
- (id)weightedPoint;
- (void)willRemoveSelectionController;

@end
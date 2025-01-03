/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuPanController : NSObject <UIGestureRecognizerDelegate, _UIContextMenuScrollObservationInteractionDelegate> {
    NSArray * _accessoryViews;
    UIViewSpringAnimationBehavior * _animationBehavior;
    bool  _clientAllowsDismissal;
    UIView * _containerView;
    unsigned long long  _currentDetentIndex;
    double  _currentDistanceToMenuScrubPath;
    double  _defaultZPosition;
    <_UIContextMenuPanControllerDelegate> * _delegate;
    NSArray * _detents;
    bool  _enabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocationInsidePreview;
    double  _initialYTranslation;
    struct { 
        unsigned long long attachment; 
        unsigned long long alignment; 
        double attachmentOffset; 
        double alignmentOffset; 
        long long gravity; 
    }  _menuAnchor;
    UIBezierPath * _menuScrubPath;
    UIView * _menuView;
    bool  _menuViewIsVisible;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalMenuCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalPlatterCenter;
    UIPanGestureRecognizer * _panGestureRecognizer;
    bool  _platterPivotRotationEnabled;
    UIView * _platterView;
    unsigned long long  _rubberbandingEdges;
    bool  _touchEverEnteredMenu;
    _UIVelocityIntegrator * _velocityIntegrator;
}

@property (nonatomic, retain) NSArray *accessoryViews;
@property (nonatomic, readonly) UIViewSpringAnimationBehavior *animationBehavior;
@property (nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_UIContextMenuPanControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *detents;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; } menuAnchor;
@property (nonatomic) UIView *menuView;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalMenuCenter;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalPlatterCenter;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) bool platterPivotRotationEnabled;
@property (nonatomic) UIView *platterView;
@property (nonatomic) unsigned long long rubberbandingEdges;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIVelocityIntegrator *velocityIntegrator;

- (void).cxx_destruct;
- (void)_animationsForActionsStyleWithLocation:(struct CAPoint3D { double x1; double x2; double x3; })arg1 ended:(bool)arg2;
- (void)_animationsForAnyAttachedAccessoryViews;
- (void)_animationsForPreviewPlusActionsStyleWithTranslation:(struct CAPoint3D { double x1; double x2; double x3; })arg1 location:(struct CAPoint3D { double x1; double x2; double x3; })arg2;
- (bool)_canBeginDraggingWithTranslation:(struct CAPoint3D { double x1; double x2; double x3; })arg1 location:(struct CAPoint3D { double x1; double x2; double x3; })arg2;
- (bool)_canSwipeDownToDismiss;
- (id)_createAnimationBehaviorWithCriticalDamping:(bool)arg1;
- (id)_currentPlatformMetrics;
- (struct CGVector { double x1; double x2; })_currentPlatterVelocity;
- (double)_dragTearOffThreshold;
- (void)_handlePanGesture:(id)arg1;
- (bool)_initialPointInPlatterIsValid;
- (int)_nearestDetentWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_rangeOfMotion;
- (struct CAPoint3D { double x1; double x2; double x3; })_rubberBandedTranslationForGestureTranslation:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (double)_tearOffSpeedMultiplier;
- (void)_updateForGestureWithState:(long long)arg1 translation:(struct CAPoint3D { double x1; double x2; double x3; })arg2 location:(struct CAPoint3D { double x1; double x2; double x3; })arg3 allowsDragging:(bool)arg4;
- (void)_updateForSignificantLayoutChange;
- (void)_updateMenuScrubPathWithLocationIfNecessary:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updatePlatterGestureDebugUIWithTranslation:(struct CGPoint { double x1; double x2; })arg1 location:(struct CGPoint { double x1; double x2; })arg2 invalidate:(bool)arg3;
- (void)_updateViewPositionsWithTranslation:(struct CAPoint3D { double x1; double x2; double x3; })arg1 location:(struct CAPoint3D { double x1; double x2; double x3; })arg2 ended:(bool)arg3 withVelocity:(bool)arg4;
- (long long)_userInterfaceIdiom;
- (id)accessoryViews;
- (id)animationBehavior;
- (id)containerView;
- (id)criticallyDampedAnimationBehavior;
- (id)delegate;
- (id)detents;
- (bool)enabled;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 menuView:(id)arg3;
- (struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })menuAnchor;
- (id)menuView;
- (void)moveToDetentPosition:(long long)arg1 updateScrubPath:(bool)arg2;
- (struct CGPoint { double x1; double x2; })originalMenuCenter;
- (struct CGPoint { double x1; double x2; })originalPlatterCenter;
- (id)panGestureRecognizer;
- (bool)platterPivotRotationEnabled;
- (id)platterView;
- (unsigned long long)rubberbandingEdges;
- (void)scrollObservationInteraction:(id)arg1 didUpdateWithTranslation:(struct CGPoint { double x1; double x2; })arg2 location:(struct CGPoint { double x1; double x2; })arg3 ended:(bool)arg4;
- (void)scrollObservationInteraction:(id)arg1 willBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAccessoryViews:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetents:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMenuAnchor:(struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })arg1;
- (void)setMenuView:(id)arg1;
- (void)setOriginalMenuCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalPlatterCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setPlatterPivotRotationEnabled:(bool)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setRubberbandingEdges:(unsigned long long)arg1;
- (void)setVelocityIntegrator:(id)arg1;
- (id)velocityIntegrator;

@end

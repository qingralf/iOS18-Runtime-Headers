/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPointerContentEffect : NSObject <_UIContentEffect, _UIViewSubtreeMonitor> {
    unsigned long long  _animationCount;
    UIView * _boundsObservationView;
    NSMutableArray * _completions;
    UIPointerInteractionAnimator * _entranceAnimator;
    UIPointerInteractionAnimator * _exitAnimator;
    struct { 
        bool isRearrangingEffectViews; 
        bool stopViewOrderPreservation; 
        bool sourceViewDidAllowEdgeAntialiasing; 
        bool sourceViewDidAlignContentsToPixels; 
    }  _flags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialEffectPlatterPosition;
    double  _liftProgress;
    UIViewFloatAnimatableProperty * _liftProgressProperty;
    UIView * _lumaSamplingBackdrop;
    _UIPointerEffectPlatterView * _platterView;
    UIView * _pointerPortal;
    UIView * _positionReferenceView;
    bool  _pressed;
    UIPointerRegion * _region;
    bool  _sourceViewDidAllowEdgeAntialiasing;
    long long  _state;
    UIPointerStyle * _style;
    UIView * _sublayerObservationView;
    UIWindow * _subtreeMonitoredWindow;
}

@property (nonatomic) unsigned long long animationCount;
@property (nonatomic) UIView *boundsObservationView;
@property (nonatomic, readonly) NSMutableArray *completions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <_UIContentEffectDescriptor> *descriptor;
@property (nonatomic, retain) UIPointerInteractionAnimator *entranceAnimator;
@property (nonatomic, retain) UIPointerInteractionAnimator *exitAnimator;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialEffectPlatterPosition;
@property (nonatomic) double liftProgress;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *liftProgressProperty;
@property (nonatomic) UIView *lumaSamplingBackdrop;
@property (nonatomic, retain) _UIPointerEffectPlatterView *platterView;
@property (nonatomic) UIView *pointerPortal;
@property (nonatomic) UIView *positionReferenceView;
@property (nonatomic, copy) UIPointerRegion *region;
@property (nonatomic) bool sourceViewDidAllowEdgeAntialiasing;
@property (nonatomic) long long state;
@property (nonatomic, retain) UIPointerStyle *style;
@property (nonatomic) UIView *sublayerObservationView;
@property (nonatomic) UIWindow *subtreeMonitoredWindow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_anchorPlatterView:(id)arg1 toPreview:(id)arg2 updateBounds:(bool)arg3;
- (void)_cleanUpObservation;
- (void)_commitPointerStyleToArbiterWithCompletion:(id /* block */)arg1;
- (void)_createAndInstallPlatterView;
- (void)_ensureRelativeEffectViewOrderInContainer;
- (void)_modifyEffectContainerViewHierarchy:(id /* block */)arg1 waitForCACommit:(bool)arg2;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (bool)_monitorsView:(id)arg1;
- (id)_positionReferenceViewForPreview:(id)arg1;
- (void)_setStyle:(id)arg1 andRegion:(id)arg2;
- (void)_tearDownPlatterView;
- (void)_updateFromState:(long long)arg1 toState:(long long)arg2;
- (void)_updatePlatterView:(id)arg1 forStyle:(id)arg2;
- (void)addCompletion:(id /* block */)arg1;
- (unsigned long long)animationCount;
- (void)begin;
- (id)boundsObservationView;
- (id)completions;
- (void)dealloc;
- (id)descriptor;
- (void)end:(bool)arg1;
- (id)entranceAnimator;
- (id)exitAnimator;
- (unsigned long long)hash;
- (id)initWithStyle:(id)arg1 region:(id)arg2;
- (struct CGPoint { double x1; double x2; })initialEffectPlatterPosition;
- (bool)isEqual:(id)arg1;
- (double)liftProgress;
- (id)liftProgressProperty;
- (id)lumaSamplingBackdrop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)platterView;
- (id)pointerPortal;
- (id)positionReferenceView;
- (id)previewForContinuingToEffectWithPreview:(id)arg1;
- (id)region;
- (void)setAnimationCount:(unsigned long long)arg1;
- (void)setBoundsObservationView:(id)arg1;
- (void)setDescriptor:(id)arg1 andKey:(id)arg2;
- (void)setEntranceAnimator:(id)arg1;
- (void)setExitAnimator:(id)arg1;
- (void)setInitialEffectPlatterPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLiftProgress:(double)arg1;
- (void)setLiftProgressProperty:(id)arg1;
- (void)setLumaSamplingBackdrop:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setPointerPortal:(id)arg1;
- (void)setPositionReferenceView:(id)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2;
- (void)setRegion:(id)arg1;
- (void)setSourceViewDidAllowEdgeAntialiasing:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setStyle:(id)arg1;
- (void)setSublayerObservationView:(id)arg1;
- (void)setSubtreeMonitoredWindow:(id)arg1;
- (bool)sourceViewDidAllowEdgeAntialiasing;
- (long long)state;
- (id)style;
- (id)sublayerObservationView;
- (id)subtreeMonitoredWindow;

@end

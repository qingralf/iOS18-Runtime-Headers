/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIPhysicalCirclesView : UIView <PKPhysicsContactDelegate> {
    NSMutableArray * _circleBodies;
    NSObject<OS_dispatch_source> * _circleLoadStepTimer;
    struct SUUIPhysicalCircleConstants { 
        double circleDensity; 
        double circleLinearDamping; 
        double circleMaximumDiameter; 
        double circleMinimumDiameter; 
        double springMaximumFrequency; 
        double springMinimumFrequency; 
        double springDamping; 
        double translationForceMultiplier; 
    }  _constants;
    <SUUIPhysicalCirclesDataSource> * _dataSource;
    <SUUIPhysicalCirclesDelegate> * _delegate;
    CADisplayLink * _displayLink;
    PKPhysicsBody * _groundBody;
    long long  _longPressCircleIndex;
    UILongPressGestureRecognizer * _longPressRecognizer;
    double  _maximumFrequencyDistance;
    double  _minimumFrequencyDistance;
    UIPanGestureRecognizer * _panRecognizer;
    void * _physicsKitFramework;
    PKPhysicsWorld * _physicsWorld;
    NSMutableArray * _repellors;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) struct SUUIPhysicalCircleConstants { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } constants;
@property (nonatomic) <SUUIPhysicalCirclesDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SUUIPhysicalCirclesDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_addNextMissingSpringJoint;
- (void)_addSpringForCircleBody:(id)arg1;
- (void)_calculateFrequencyScaling;
- (void)_cancelStepTimers;
- (id)_circleBodyWithView:(id)arg1;
- (long long)_circleIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_displayLinkTick:(id)arg1;
- (struct CGPoint { double x1; double x2; })_initialPositionForCircleIndex:(long long)arg1 view:(id)arg2;
- (void)_loadCirclesWithStartIndex:(long long)arg1 totalCount:(long long)arg2;
- (void)_longPressAction:(id)arg1;
- (void)_panGestureAction:(id)arg1;
- (void)_reloadDidFinish;
- (void)_removeCircleBodies:(id)arg1;
- (void)_startFluctuationForCircleView:(id)arg1;
- (void)_stopFluctuationForCircleView:(id)arg1;
- (void)_tapGestureAction:(id)arg1;
- (void)addCirclesWithCount:(long long)arg1;
- (id)addRepellorWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 bufferSize:(double)arg3;
- (id)circleViewAtIndex:(long long)arg1;
- (struct SUUIPhysicalCircleConstants { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })constants;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)reloadData;
- (void)removeAllCirclesAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)removeAllRepellors;
- (void)removeCircleAtIndex:(long long)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)removeCirclesInIndexSet:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)removeCirclesInIndexSet:(id)arg1 byAnimatingToPoint:(struct CGPoint { double x1; double x2; })arg2 delay:(double)arg3 completionBlock:(id /* block */)arg4;
- (void)removeRepellor:(id)arg1;
- (void)setConstants:(struct SUUIPhysicalCircleConstants { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 forCircleAtIndex:(long long)arg2;
- (void)startPhysics;
- (void)stopPhysics;

@end

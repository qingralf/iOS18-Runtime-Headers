/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDynamicAnimator : NSObject {
    double  _accuracy;
    id /* block */  _action;
    NSMutableIndexSet * _availableFieldCategories;
    NSMutableArray * _beginContacts;
    NSMutableSet * _behaviorsToAdd;
    NSMutableSet * _behaviorsToRemove;
    NSMutableDictionary * _bodies;
    bool  _debugEnabled;
    int  _debugInterval;
    <UIDynamicAnimatorDelegate> * _delegate;
    bool  _disableDisplayLink;
    CADisplayLink * _displaylink;
    UIDynamicsDebug * _dynamicsDebug;
    double  _elapsedTime;
    NSMutableArray * _endContacts;
    unsigned long long  _integralization;
    bool  _isInWorldStepMethod;
    double  _lastInterval;
    double  _lastUpdateTime;
    bool  _needsLocalBehaviorReevaluation;
    NSMutableArray * _postSolverActions;
    double  _realElapsedTime;
    <_UIDynamicReferenceSystem> * _referenceSystem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceSystemBounds;
    unsigned long long  _referenceSystemType;
    NSMutableSet * _registeredBehaviors;
    int  _registeredCollisionGroups;
    int  _registeredImplicitBounds;
    double  _speed;
    struct { 
        unsigned int delegateImplementsDynamicAnimatorDidPause : 1; 
        unsigned int delegateImplementsDynamicAnimatorWillResume : 1; 
        unsigned int physicsKitImplements109159385 : 1; 
    }  _stateFlags;
    bool  _stopping;
    UIDynamicAnimatorTicker * _ticker;
    long long  _ticks;
    NSMutableArray * _topLevelBehaviors;
    struct _UIUpdateSequenceItemInternal { } * _uiUpdateSequenceItem;
    struct _UIUpdateRequest { 
        unsigned int flags; 
        unsigned int minRate; 
        unsigned int preferredRate; 
        unsigned int maxRate; 
        unsigned long long phase; 
        unsigned long long load; 
    }  _updateRequest;
    bool  _updateRequestIsConfiguredForSettling;
    PKExtendedPhysicsWorld * _world;
}

@property (nonatomic, readonly, copy) NSArray *behaviors;
@property (nonatomic) <UIDynamicAnimatorDelegate> *delegate;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) UIView *referenceView;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, retain) UIDynamicAnimatorTicker *ticker;

+ (id)_allDynamicAnimators;
+ (void)_clearReferenceViewFromAnimators:(id)arg1;
+ (void)_referenceViewSizeChanged:(id)arg1;
+ (void)_registerAnimator:(id)arg1;
+ (void)_unregisterAnimator:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_activateUIUpdateSequenceItem;
- (bool)_alwaysDisableDisplayLink;
- (unsigned long long)_animatorIntegralization;
- (double)_animatorInterval;
- (bool)_animatorStep:(double)arg1;
- (id)_bodyForItem:(id)arg1;
- (void)_checkBehavior:(id)arg1;
- (void)_clearReferenceView;
- (void)_configureUpdateRequestFrameRateForSettling:(bool)arg1;
- (bool)_containsBehavior:(id)arg1;
- (void)_deactivateUIUpdateSequenceItem;
- (bool)_debugEnabled;
- (int)_debugInterval;
- (void)_defaultMapper:(id)arg1 position:(struct CGPoint { double x1; double x2; })arg2 angle:(double)arg3 itemType:(unsigned long long)arg4;
- (id)_delegate;
- (void)_evaluateLocalBehaviors;
- (void)_invalidateCollectionViewLayout:(id)arg1;
- (bool)_isWorldActive;
- (id)_keyForItem:(id)arg1;
- (id)_newBodyForItem:(id)arg1 inItemGroup:(id)arg2;
- (void)_performAnimationTickForTimestamp:(double)arg1;
- (void)_postSolverStep;
- (void)_preSolverStep;
- (double)_ptmRatio;
- (double)_realElapsedTime;
- (void)_reevaluateImplicitBounds;
- (id)_referenceSystem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceSystemBounds;
- (unsigned long long)_referenceSystemType;
- (void)_registerBehavior:(id)arg1;
- (id)_registerBodyForItem:(id)arg1;
- (int)_registerCollisionGroup;
- (void)_registerFieldCategoryForFieldBehavior:(id)arg1;
- (void)_registerImplicitBounds;
- (void)_reportBeginContacts;
- (void)_reportEndContacts;
- (void)_runBlockPostSolverIfNeeded:(id /* block */)arg1;
- (void)_setAction:(id /* block */)arg1;
- (void)_setAlwaysDisableDisplayLink:(bool)arg1;
- (void)_setAnimatorIntegralization:(unsigned long long)arg1;
- (void)_setDebugEnabled:(bool)arg1;
- (void)_setDebugInterval:(int)arg1;
- (void)_setDelegate:(id)arg1;
- (void)_setReferenceSystem:(id)arg1;
- (void)_setRunning:(bool)arg1;
- (void)_setSpeed:(double)arg1;
- (void)_setupWorld;
- (void)_shouldReevaluateLocalBehaviors;
- (double)_speed;
- (void)_start;
- (void)_stop;
- (void)_tickle;
- (long long)_ticks;
- (void)_traverseBehaviorHierarchy:(id /* block */)arg1;
- (void)_unregisterBehavior:(id)arg1;
- (void)_unregisterBodyForItem:(id)arg1 action:(id /* block */)arg2;
- (void)_unregisterCollisionGroup;
- (void)_unregisterFieldCategoryForFieldBehavior:(id)arg1;
- (void)_unregisterImplicitBounds;
- (void)_updateRequestedFrameRateIfNeeded;
- (id)_world;
- (void)addBehavior:(id)arg1;
- (id)behaviors;
- (void)dealloc;
- (double)debugAnimationSpeed;
- (unsigned long long)debugFrameInterval;
- (id)delegate;
- (id)description;
- (void)didBeginContact:(id)arg1;
- (void)didEndContact:(id)arg1;
- (double)elapsedTime;
- (id)init;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithReferenceSystem:(id)arg1;
- (id)initWithReferenceView:(id)arg1;
- (bool)isDebugEnabled;
- (bool)isRunning;
- (bool)isSettling;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForCellAtIndexPath:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)recursiveDescription;
- (id)referenceView;
- (void)removeAllBehaviors;
- (void)removeBehavior:(id)arg1;
- (void)setDebugAnimationSpeed:(double)arg1;
- (void)setDebugEnabled:(bool)arg1;
- (void)setDebugFrameInterval:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setSettlingAngularVelocityThreshold:(double)arg1;
- (void)setSettlingDuration:(double)arg1;
- (void)setSettlingLinearVelocityThreshold:(double)arg1;
- (void)setTicker:(id)arg1;
- (double)settlingAngularVelocityThreshold;
- (double)settlingDuration;
- (double)settlingLinearVelocityThreshold;
- (id)ticker;
- (void)updateItemFromCurrentState:(id)arg1;
- (void)updateItemUsingCurrentState:(id)arg1;

@end

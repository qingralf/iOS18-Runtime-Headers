/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FocusEngine.framework/FocusEngine
 */

@interface _FEFocusSystem : NSObject <_FEFocusEnvironmentInternal, _FEFocusEnvironmentPrivate, _FEFocusMovementPerformerDelegate> {
    <_FEFocusEnvironment> * _appearingFocusEnvironment;
    <_FEFocusBehavior> * _behavior;
    <_FEFocusEnvironment> * _deepestPreferredFocusEnvironment;
    _FEFocusEnvironmentPreferenceCache * _deepestPreferredFocusableItemCacheForCurrentUpdate;
    <_FEFocusItem> * _deferredFocusUpdateTarget;
    <_FEFocusSystemDelegate> * _delegate;
    <_FEFocusEnvironment> * _disappearingFocusEnvironment;
    bool  _enabled;
    struct { 
        unsigned int hasReceivedTeardownNotification : 1; 
        unsigned int shouldIgnoreFocusUpdateIfNeeded : 1; 
        unsigned int isPendingFocusRestoration : 1; 
        unsigned int isPostponingUpdates : 1; 
        unsigned int hasSeenFocusedItem : 1; 
        unsigned int isInsideUpdateFocusIfNeeded : 1; 
        unsigned int delegateRespondsToTopEnvironment : 1; 
        unsigned int delegateRespondsToPreferredFocusEnvironments : 1; 
        unsigned int delegateRespondsToShouldRestoreFocusInContext : 1; 
        unsigned int delegateRespondsToWillUpdateFocusInContext : 1; 
        unsigned int delegateRespondsToDidUpdateFocusInContext : 1; 
        unsigned int delegateRespondsToDidFinishUpdatingFocusInContext : 1; 
        unsigned int delegateRespondsToWillMessageOldFocusNodes : 1; 
        unsigned int delegateRespondsToWillMessageNewFocusNodes : 1; 
        unsigned int delegateRespondsToEnvironmentDidUpdateFocusInContext : 1; 
        unsigned int delegateRespondsToDidCancelFocusUpdateInContext : 1; 
        unsigned int delegateRespondsToFocusItemContainer : 1; 
        unsigned int delegateRespondsToClippingRect : 1; 
        unsigned int delegateRespondsToDidUpdateDeferralTarget : 1; 
        unsigned int delegateRespondsToHandleFailedMovementRequest : 1; 
        unsigned int delegateRespondsToShouldReverseLayoutDirectionForEnvironment : 1; 
        unsigned int delegateRespondsToShouldReverseLinearWrappingForEnvironment : 1; 
        unsigned int delegateRespondsToIsScrollingScrollableContainer : 1; 
    }  _flags;
    _FEFocusCastingController * _focusCastingController;
    _FEFocusGroupHistory * _focusGroupHistory;
    NSHashTable * _focusItemAncestorCache;
    _FEFocusLinearMovementCache * _focusMovementCache;
    <_FEFocusItem> * _focusedItem;
    NSTimer * _hasSeenFocusedItemDidExpireTimer;
    _FEFocusMovementPerformer * _movementPerformer;
    NSNumber * _overrideFocusDeferralBehavior;
    _FEFocusMovementAction * _pendingFocusMovementAction;
    _FEFocusUpdateRequest * _pendingFocusUpdateRequest;
    <_FEFocusItem> * _previousFocusedItem;
    _FETreeLock * _treeLock;
    _FEFocusUpdateThrottle * _updateThrottle;
    bool  _waitingForFocusMovementAction;
}

@property (nonatomic) bool _areChildrenFocused; /* unknown property attribute: ? */
@property (nonatomic, readonly) <_FEFocusEnvironment> *_deepestPreferredFocusEnvironment;
@property (nonatomic, readonly) _FEFocusEnvironmentPreferenceCache *_deepestPreferredFocusableItemCacheForCurrentUpdate;
@property (nonatomic, readonly, copy) NSString *_focusGroupIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly) <_FEFocusItemContainer> *_focusItemContainer;
@property (nonatomic, readonly, copy) NSArray *_focusLinearMovementSequence; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long _focusPreferredMovementStyle; /* unknown property attribute: ? */
@property (nonatomic, readonly) <_FEFocusItem> *_focusedItemOrDeferralTarget;
@property (nonatomic, readonly) _FEFocusMovementPerformer *_movementPerformer;
@property (nonatomic, readonly) <_FEFocusEnvironment> *_parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *_preferredFocusEnvironments; /* unknown property attribute: ? */
@property (nonatomic, retain) <_FEFocusBehavior> *behavior;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_FEFocusSystemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_disappearingFocusEnvironment, nonatomic, readonly) <_FEFocusEnvironment> *disappearingFocusEnvironment;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction; /* unknown property attribute: ? */
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion; /* unknown property attribute: ? */
@property (getter=_isEnabled, setter=_setEnabled:, nonatomic) bool enabled;
@property (getter=_focusCastingController, setter=_setFocusCastingController:, nonatomic, retain) _FEFocusCastingController *focusCastingController;
@property (getter=_isFocusDirectionFlippedHorizontally, nonatomic, readonly) bool focusDirectionFlippedHorizontally; /* unknown property attribute: ? */
@property (getter=_focusGroupHistory, nonatomic, readonly) _FEFocusGroupHistory *focusGroupHistory;
@property (getter=_focusMapContainer, nonatomic, readonly) <_FEFocusRegionContainer> *focusMapContainer; /* unknown property attribute: ? */
@property (getter=_focusMovementCache, setter=_setFocusMovementCache:, nonatomic, retain) _FEFocusLinearMovementCache *focusMovementCache;
@property (nonatomic, readonly) <_FEFocusItem> *focusedItem;
@property (readonly) unsigned long long hash;
@property (getter=_hostFocusSystem, nonatomic, readonly) _FEFocusSystem *hostFocusSystem;
@property (getter=_overrideFocusDeferralBehavior, setter=_setOverrideFocusDeferralBehavior:, nonatomic, retain) NSNumber *overrideFocusDeferralBehavior;
@property (nonatomic, retain) _FEFocusMovementAction *pendingFocusMovementAction;
@property (getter=_previousFocusedItem, nonatomic, readonly) <_FEFocusItem> *previousFocusedItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _FETreeLock *treeLock;
@property (nonatomic, readonly) _FEFocusUpdateThrottle *updateThrottle;
@property (nonatomic) bool waitingForFocusMovementAction;

+ (id)_allFocusSystems;
+ (id)_focusSystemForEnvironment:(id)arg1;
+ (bool)environment:(id)arg1 containsEnvironment:(id)arg2;
+ (id)focusSystemForEnvironment:(id)arg1;

- (void).cxx_destruct;
- (void)_buildFocusItemAncestorCacheIfNecessary;
- (void)_cancelPendingFocusRestoration;
- (void)_clearDeferredFocusUpdateTarget;
- (void)_clearFocusItemAncestorCache;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippingRectInCoordinateSpace:(id)arg1;
- (id)_configureFocusDeferralIfNecessaryForContext:(id)arg1 report:(id)arg2;
- (id)_contextForUpdateToEnvironment:(id)arg1;
- (id)_contextForUpdateToEnvironment:(id)arg1 allowsOverridingPreferedFocusEnvironments:(bool)arg2 allowsDeferral:(bool)arg3;
- (bool)_debug_isEnvironmentEligibleForFocusUpdate:(id)arg1 debugReport:(id)arg2;
- (id)_deepestPreferredFocusEnvironment;
- (id)_deepestPreferredFocusableItemCacheForCurrentUpdate;
- (void)_didFinishUpdatingFocusInContext:(id)arg1;
- (void)_didUpdateFocusInContext:(id)arg1;
- (id)_disappearingFocusEnvironment;
- (void)_dropFocusAndStartDeferring:(bool)arg1 suppressUpdate:(bool)arg2;
- (long long)_effectiveFocusDeferralBehavior;
- (void)_enableWithoutFocusRestoration;
- (void)_focusBehaviorDidChange;
- (id)_focusCastingController;
- (void)_focusEnvironmentDidAppear:(id)arg1;
- (void)_focusEnvironmentDidBecomeVisible:(id)arg1;
- (void)_focusEnvironmentWillBecomeInvisible:(id)arg1;
- (void)_focusEnvironmentWillDisappear:(id)arg1;
- (id)_focusGroupHistory;
- (id)_focusItemContainer;
- (id)_focusItemForValidation;
- (id)_focusMapContainer;
- (id)_focusMovementCache;
- (bool)_focusSystemIsValid;
- (bool)_focusedItemIsContainedInEnvironment:(id)arg1 includeSelf:(bool)arg2;
- (id)_focusedItemOrDeferralTarget;
- (bool)_handleFailedFocusMovementRequest:(id)arg1 withPerformer:(id)arg2;
- (void)_handleFocusMovementAction:(id)arg1;
- (void)_hasSeenFocusedItemDidExpire;
- (bool)_hasValidItemForCurrentDeferralState;
- (id)_hostFocusSystem;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isEligibleForFocusOcclusion;
- (bool)_isEnabled;
- (bool)_isEnvironmentEligibleForFocusUpdate:(id)arg1 fallbackToEnvironment:(id*)arg2 debugReport:(id)arg3;
- (bool)_isEnvironmentLocked:(id)arg1;
- (bool)_isScrollingScrollableContainer:(id)arg1 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg2;
- (void)_lockEnvironment:(id)arg1;
- (id)_movementPerformer;
- (void)_notifyEnvironment:(id)arg1 didUpdateFocusInContext:(id)arg2;
- (id)_overrideFocusDeferralBehavior;
- (id)_parentFocusEnvironment;
- (bool)_performDeferredFocusUpdateIfAvailable;
- (bool)_performFocusMovement:(id)arg1;
- (void)_performWithoutFocusUpdates:(id /* block */)arg1;
- (bool)_postsFocusUpdateNotifications;
- (bool)_prefersDeferralForFocusUpdateInContext:(id)arg1;
- (bool)_prefersFocusContainment;
- (void)_prepareForTeardown;
- (id)_previousFocusedItem;
- (void)_reevaluateLockedEnvironments;
- (void)_requestFocusUpdate:(id)arg1;
- (bool)_requiresFocusedItemToBeInHierarchy;
- (void)_resetFocusDeferral;
- (void)_sendDidUpdateFocusNotificationsInContext:(id)arg1;
- (void)_sendNotificationsForFocusUpdateInContext:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_sendWillUpdateFocusNotificationsInContext:(id)arg1;
- (void)_setDeferredFocusUpdateTarget:(id)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setFocusCastingController:(id)arg1;
- (void)_setFocusMovementCache:(id)arg1;
- (void)_setNeedsFocusRestoration;
- (void)_setOverrideFocusDeferralBehavior:(id)arg1;
- (bool)_shouldRestoreFocusInContext:(id)arg1;
- (bool)_shouldReverseLayoutDirectionForEnvironment:(id)arg1;
- (bool)_shouldReverseLinearWrappingForEnvironment:(id)arg1;
- (bool)_shouldUpdateFocusInContext:(id)arg1;
- (id)_simulatedNonDeferredProgrammaticFocusUpdateToEnvironment:(id)arg1;
- (void)_startDeferringFocusIfSupported;
- (void)_tickHasSeenFocusedItemTimer:(bool)arg1;
- (id)_topEnvironment;
- (void)_uiktest_disableFocusDeferral;
- (void)_uiktest_disableThrottle;
- (void)_uiktest_setPreviousFocusedItem:(id)arg1;
- (bool)_uiktest_updateFocusToItem:(id)arg1;
- (void)_unlockEnvironment:(id)arg1;
- (bool)_updateFocusImmediatelyToEnvironment:(id)arg1;
- (bool)_updateFocusImmediatelyToEnvironment:(id)arg1 startDeferringOnLostFocus:(bool)arg2 suppressLostFocusUpdate:(bool)arg3;
- (bool)_updateFocusImmediatelyWithContext:(id)arg1;
- (void)_updateFocusUpdateThrottle;
- (bool)_updateFocusWithContext:(id)arg1 report:(id)arg2;
- (void)_updateWantsTreeLocking;
- (id)_validatedAppearingFocusEnvironmentRequest;
- (id)_validatedPendingFocusUpdateRequest;
- (id)behavior;
- (id)delegate;
- (id)description;
- (id)focusedItem;
- (id)init;
- (id)initWithFocusBehavior:(id)arg1;
- (id)initWithFocusBehavior:(id)arg1 enabled:(bool)arg2;
- (void)invalidateFocusItemContainer:(id)arg1;
- (id)pendingFocusMovementAction;
- (id)preferredFocusEnvironments;
- (void)requestFocusUpdateToEnvironment:(id)arg1;
- (void)setBehavior:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)setPendingFocusMovementAction:(id)arg1;
- (void)setWaitingForFocusMovementAction:(bool)arg1;
- (id)treeLock;
- (void)updateFocusIfNeeded;
- (id)updateThrottle;
- (bool)waitingForFocusMovementAction;

@end
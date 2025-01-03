/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHBaseSceneHostEnvironment : NSObject <BLSHBacklightSceneHostEnvironment> {
    bool  _displayBlanked;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_1HzFlipbook;
    bool  _lock_alwaysOnEnabledForEnvironment;
    bool  _lock_cacheFlipbookOnDisplayWake;
    bool  _lock_liveUpdating;
    NSHashTable * _lock_observers;
    NSDate * _lock_presentationDate;
    bool  _lock_unrestrictedFramerateUpdates;
    BLSBacklightSceneVisualState * _lock_visualState;
}

@property (getter=isAlwaysOnEnabledForEnvironment) bool alwaysOnEnabledForEnvironment;
@property (readonly) RBSProcessIdentity *budgetProcessIdentity;
@property bool cacheFlipbookOnDisplayWake; /* unknown property attribute: ? */
@property (getter=isClientActive, readonly) bool clientActive;
@property (readonly) bool clientHasDelegate;
@property (readonly) bool clientSupportsAlwaysOn;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDisplayBlanked) bool displayBlanked;
@property (readonly) unsigned long long hash;
@property (getter=isHighLuminanceAlwaysOn) bool highLuminanceAlwaysOn; /* unknown property attribute: ? */
@property (readonly, copy) NSString *identifier;
@property (getter=isLiveUpdating) bool liveUpdating;
@property (getter=isLocal, readonly) bool local; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (getter=is1HzFlipbook, setter=set1HzFlipbook:) bool oneHzFlipbook; /* unknown property attribute: ? */
@property (readonly) NSDate *presentationDate;
@property (readonly) Class superclass;
@property (getter=hasUnrestrictedFramerateUpdates) bool unrestrictedFramerateUpdates;
@property (readonly) BLSBacklightSceneVisualState *visualState;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)budgetProcessIdentity;
- (bool)cacheFlipbookOnDisplayWake;
- (void)clearPresentationDate;
- (void)clientDidRequestInvalidationForReason:(id)arg1;
- (bool)clientHasDelegate;
- (bool)clientSupportsAlwaysOn;
- (void)deactivateClient;
- (id)description;
- (bool)hasUnrestrictedFramerateUpdates;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidateContentForReason:(id)arg1;
- (bool)is1HzFlipbook;
- (bool)isAlwaysOnEnabledForEnvironment;
- (bool)isClientActive;
- (bool)isDisplayBlanked;
- (bool)isLiveUpdating;
- (bool)isLocal;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)notifyObserversWithBlock:(id /* block */)arg1;
- (id)presentationDate;
- (void)removeObserver:(id)arg1;
- (void)requestDateSpecifiersForDateInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(bool)arg3 completion:(id /* block */)arg4;
- (void)requestedFidelityForInactiveContentWithCompletion:(id /* block */)arg1;
- (void)set1HzFlipbook:(bool)arg1;
- (void)setAlwaysOnEnabledForEnvironment:(bool)arg1;
- (void)setCacheFlipbookOnDisplayWake:(bool)arg1;
- (void)setDisplayBlanked:(bool)arg1;
- (void)setLiveUpdating:(bool)arg1;
- (void)setUnrestrictedFramerateUpdates:(bool)arg1;
- (void)updateToDateSpecifier:(id)arg1 sceneContentsUpdated:(id /* block */)arg2;
- (void)updateToVisualState:(id)arg1 presentationDateSpecifier:(id)arg2 animated:(bool)arg3 triggerEvent:(id)arg4 touchTargetable:(bool)arg5 sceneContentsUpdated:(id /* block */)arg6 performBacklightRamp:(id /* block */)arg7 animationComplete:(id /* block */)arg8;
- (id)visualState;
- (void)willBeginRenderSession:(id)arg1;
- (void)willEndRenderSession:(id)arg1;

@end

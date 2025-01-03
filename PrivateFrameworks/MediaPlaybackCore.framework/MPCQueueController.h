/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCQueueController : NSObject <MPAVItemObserver, MPCPlaybackEngineEventObserving, MPCQueueControllerBehaviorHost, MPCQueueControllerExternalSyncBehaviorHost, MSVSegmentedCoding> {
    NSMapTable * _activeEdits;
    <MPCQueueControllerBehaviorImplementation> * _behaviorImpl;
    long long  _behaviorType;
    NSMutableDictionary * _coderVersions;
    MPAVItem * _currentItem;
    <MPCQueueControllerDelegate> * _delegate;
    NSArray * _lastECATSStack;
    double  _lastSavedTime;
    bool  _loadingAdditionalItems;
    NSString * _loadingContentItemID;
    <MPCQueueControllerPlaybackEngine> * _playbackEngine;
    id /* block */  _postEditContinuation;
    NSMutableArray * _potentialCurrentItemEdits;
    NSString * _preferredFirstContentItemID;
    NSString * _restoreLastStartTimePositionToContentItemID;
    unsigned long long  _stateHandle;
    long long  _syncResetAttempts;
    NSString * _targetContentItemID;
    long long  _targetContentItemSource;
}

@property (nonatomic, retain) NSMapTable *activeEdits;
@property (nonatomic, readonly) <MPCQueueControllerBehavior> *behavior;
@property (nonatomic, retain) <MPCQueueControllerBehaviorImplementation> *behaviorImpl;
@property (nonatomic, readonly) long long behaviorType;
@property (nonatomic, retain) NSMutableDictionary *coderVersions;
@property (nonatomic, readonly) bool containsRestorableContent;
@property (nonatomic, readonly) MPAVItem *currentItem;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <MPCQueueControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *engineID;
@property (nonatomic, readonly) MPCPlaybackEngineEventStream *eventStream;
@property (nonatomic, readonly) MPCPlaybackIntent *fallbackPlaybackIntent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lastSavedTime;
@property (nonatomic, copy) NSString *loadingContentItemID;
@property (nonatomic, readonly) <MPCQueueControllerBehaviorMusic> *music;
@property (nonatomic, readonly) <MPCQueueControllerBehaviorMusicSharePlay> *musicSharePlay;
@property (nonatomic) <MPCQueueControllerPlaybackEngine> *playbackEngine;
@property (nonatomic, readonly) NSString *playerID;
@property (nonatomic, retain) NSMutableArray *potentialCurrentItemEdits;
@property (nonatomic, readonly, copy) NSString *preferredFirstContentItemID;
@property (nonatomic, copy) NSString *restoreLastStartTimePositionToContentItemID;
@property (nonatomic, readonly) <MPCQueueControllerReusableBehavior> *reusableBehavior;
@property (nonatomic, readonly, copy) NSString *revisionString;
@property (nonatomic, readonly) NSString *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *targetContentItemID;
@property (nonatomic, readonly) long long targetContentItemSource;
@property (nonatomic, readonly) <MPCQueueControllerUpNextBehavior> *upNextBehavior;

+ (id)allKnownSessionTypes;
+ (long long)behaviorForQueue:(id)arg1;
+ (id)describePlayer:(id)arg1;
+ (bool)isSupportedSessionType:(id)arg1 forEngine:(id)arg2 reason:(id*)arg3;
+ (void)registerPublisher:(id)arg1;
+ (void)setTestBehaviorClass:(Class)arg1;
+ (bool)supportsSecureCoding;
+ (Class)testBehaviorClass;
+ (void)unregisterPublisher:(id)arg1;

- (void).cxx_destruct;
- (void)_commitEdit:(id)arg1;
- (id)_contentItemIDWithOffset:(long long)arg1 fromItemID:(id)arg2 mode:(long long)arg3 didReachEnd:(bool*)arg4;
- (void)_currentItemDidChangeFromItem:(id)arg1 toItem:(id)arg2;
- (void)_emitEventsForItemChangeFromItem:(id)arg1 toCurrentItem:(id)arg2;
- (void)_evaluateContextAwareTriggersWithReason:(id)arg1;
- (void)_evaluateCurrentItemWithEdit:(id)arg1;
- (id)_itemForContentItemID:(id)arg1 allowReuse:(bool)arg2;
- (bool)_playerItemDidBecomeActiveWithContentItemID:(id)arg1;
- (void)_rollbackEdit:(id)arg1;
- (void)_setTargetContentItemID:(id)arg1 source:(long long)arg2;
- (id)_stateDictionaryIncludingQueue:(bool)arg1;
- (void)_updateQueueIndexForItemIfNeeded:(id)arg1;
- (void)_withDynamicBehavior:(id /* block */)arg1;
- (void)_withExternalSyncBehavior:(id /* block */)arg1;
- (bool)_withRestorableBehavior:(id /* block */)arg1;
- (bool)_withTransportableBehavior:(id /* block */)arg1;
- (void)_withUpNextBehavior:(id /* block */)arg1;
- (id)activeEdits;
- (id)beginEditWithReason:(id)arg1;
- (id)beginExternalSyncEditWithReason:(id)arg1;
- (id)behavior;
- (void)behaviorDidChange;
- (id)behaviorImpl;
- (long long)behaviorType;
- (bool)canJumpToContentItemID:(id)arg1 reason:(id*)arg2;
- (bool)canNextTrackForContentItemID:(id)arg1 reason:(id*)arg2;
- (bool)canPreviousTrackForContentItemID:(id)arg1 reason:(id*)arg2;
- (id)coderVersions;
- (bool)containsRestorableContent;
- (id)contentItemIDAtIndex:(long long)arg1;
- (id)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(bool*)arg3;
- (id)contentItemIDWithoutRepeatIteration:(id)arg1;
- (id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 mode:(long long)arg3 nowPlayingIndex:(long long*)arg4;
- (id)currentItem;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)didConnectToPlaybackEngine:(id)arg1;
- (void)didDisconnectFromPlaybackEngine:(id)arg1;
- (void)didRestoreVersion:(long long)arg1 forSegment:(id)arg2;
- (void)didSignificantlyChangeItem:(id)arg1;
- (long long)displayIndexForContentItemID:(id)arg1;
- (long long)displayItemCount;
- (void)encodeWithCoder:(id)arg1;
- (void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;
- (id)engineID;
- (void)enumerateContentItemIDsInMode:(long long)arg1 block:(id /* block */)arg2;
- (id)eventStream;
- (id)fallbackPlaybackIntent;
- (void)finalizeStateRestorationWithLoadingItemReady:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)incrementVersionForSegment:(id)arg1;
- (id)init;
- (id)initWithBehaviorType:(long long)arg1 sessionID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isExportableSessionType:(id)arg1 forContentItemID:(id)arg2 reason:(id*)arg3;
- (id)itemForContentItemID:(id)arg1;
- (id)itemForContentItemID:(id)arg1 allowReuse:(bool)arg2;
- (void)jumpToContentItemID:(id)arg1;
- (void)jumpToContentItemID:(id)arg1 direction:(long long)arg2;
- (void)jumpToFirstContentItemWithSource:(long long)arg1;
- (double)lastSavedTime;
- (id)loadingContentItemID;
- (id)music;
- (id)musicSharePlay;
- (void)performAfterEdits:(id /* block */)arg1;
- (void)performAllowingEditsToChangeCurrentItem:(id /* block */)arg1;
- (void)performSetQueue:(id)arg1 loadingItemReady:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)playbackEngine;
- (id)playerID;
- (void)playerItemDidBecomeCurrent:(id)arg1;
- (void)playerItemDidResignCurrent:(id)arg1;
- (id)potentialCurrentItemEdits;
- (id)preferredFirstContentItemID;
- (id)restoreLastStartTimePositionToContentItemID;
- (id)reusableBehavior;
- (id)revisionString;
- (id)segmentForCodingKey:(id)arg1;
- (id)sessionID;
- (void)setActiveEdits:(id)arg1;
- (void)setBehaviorImpl:(id)arg1;
- (void)setCoderVersions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingContentItemID:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setPotentialCurrentItemEdits:(id)arg1;
- (void)setRestoreLastStartTimePositionToContentItemID:(id)arg1;
- (id)targetContentItemID;
- (long long)targetContentItemSource;
- (id)upNextBehavior;
- (void)upNextBehaviorDidChange;
- (long long)versionForSegment:(id)arg1;
- (void)willConnectToPlaybackEngine:(id)arg1;
- (void)willDisconnectFromPlaybackEngine:(id)arg1;

@end

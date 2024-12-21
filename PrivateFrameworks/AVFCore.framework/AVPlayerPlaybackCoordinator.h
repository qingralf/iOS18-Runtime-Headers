/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayerPlaybackCoordinator : AVPlaybackCoordinator {
    NSMutableArray * _currentSuspensions;
    id  _didIssueCommandToPlaybackObjectNotificationToken;
    struct OpaqueFigPlaybackCoordinator { } * _figPlaybackCoordinator;
    NSObject<OS_dispatch_queue> * _figPlaybackCoordinatorConfigQueue;
    AVPlayerItemIntegratedTimeline * _integratedTimeline;
    AVPlayerPlaybackCoordinator * _interstitialPlaybackCoordinator;
    bool  _isInExpanseMediaPlayback;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    NSObject<OS_dispatch_queue> * _localParticipantUUIDConfigQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _networkToHostTimeOffset;
    NSMutableArray * _otherParticipants;
    id  _participantsChangedNotificationToken;
    NSMutableDictionary * _pendingFigPlaybackCoordinatorProperties;
    AVPlayerPlaybackCoordinatorStorage * _storage;
    NSMutableArray * _suspensionReasons;
    id  _suspensionsChangedNotificationToken;
    AVPlayer * _weakPlayer;
    AVPlayerPlaybackCoordinator * _weakPrimaryPlaybackCoordinator;
}

@property <AVPlayerPlaybackCoordinatorDelegate> *delegate;
@property (getter=_hasFigPlaybackCoordinator, readonly) bool hasFigPlaybackCoordinator;
@property (nonatomic, readonly) AVPlayer *player;

- (void).cxx_destruct;
- (void)_addFigPlaybackCoordinatorListeners:(struct OpaqueFigPlaybackCoordinator { }*)arg1;
- (void)_applyAdjustedIntegratedSeekTimeFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withNetworkTime:(id)arg2 rate:(id)arg3;
- (void)_applyIntegratedTimelineSeek:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_convertToMediaTimeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withNetworkTime:(id)arg2 rate:(id)arg3;
- (struct OpaqueFigPlaybackCoordinator { }*)_copyFigPlaybackCoordinator;
- (id)_currentWaitingPoliciesArray;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { }*)arg1;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { }*)arg1 proposingNewTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)_figPlaybackCoordinatorConfigQueue;
- (bool)_hasFigPlaybackCoordinator;
- (id)_pendingFigPlaybackCoordinatorProperties;
- (id)_pendingFigPlaybackCoordinatorPropertyForKey:(id)arg1;
- (void)_postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)_reactToNewDelegate;
- (void)_removeUnusedTransportControlStates;
- (void)_replaceAllParticipantStateDictionariesOnFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator { }*)arg1;
- (void)_resetGroupTimelineExpectations;
- (void)_setIntegratedTimelineCreatingNew:(unsigned char)arg1;
- (void)_setInterstitialActive:(unsigned char)arg1;
- (void)_setIsInExpanseMediaPlaybackOnAVAudioSession;
- (void)_setNetworkToHostTimeOffset;
- (void)_setPendingFigPlaybackCoordinatorProperty:(id)arg1 forKey:(id)arg2;
- (void)_setStorage:(id)arg1;
- (void)_storageRead:(id /* block */)arg1;
- (void)_storageWrite:(id /* block */)arg1;
- (void)_synchronizeFigPlayerEvents;
- (void)_synchronizeWorkOnPlayerQueue:(id /* block */)arg1;
- (void)_updateCoordinationMediumDelegateOnFigPlaybackCoordinator;
- (void)_updateLocalParticipantUUIDOnFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator { }*)arg1;
- (void)_updateOtherParticipantsUsingFigParticipantUUIDs:(id)arg1;
- (void)_updateParticipantLimitOnFigPlaybackCoordinatorWithReason:(id)arg1;
- (void)_updateParticipantStateDictionaryWithParticipantState:(id)arg1;
- (void)_updateParticipantStateOnFigPlaybackCoordinatorForItemWithIdentifier:(id)arg1;
- (void)_updatePauseSnapsToMediaTimeOfOriginatorOnFigPlaybackCoordinator;
- (void)_updateSuspensionReasons:(id)arg1;
- (void)_updateSuspensionReasonsThatTriggerWaitingOFigPlaybackCoordinator;
- (void)_updateTransportControlStateDictionaryOnFigPlaybackCoordinatorForItemIdentifier:(id)arg1;
- (void)_updateTransportControlStateDictionaryWithTransportControlState:(id)arg1;
- (void)_updateWaitingPoliciesArray:(id)arg1 withPolicies:(id)arg2;
- (void)_updateWaitingPoliciesOnFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator { }*)arg1;
- (id)avfParticipantsForFigParticipantsUUIDs:(id)arg1;
- (id)beginSuspensionForReason:(id)arg1;
- (id)coordinationMediumDelegate;
- (id)currentSuspensions;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })expectedItemTimeAtHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)handleNewParticipantStateDictionary:(id)arg1;
- (void)handleNewTransportControlStateDictionary:(id)arg1;
- (void)handleRemovalOfParticipant:(id)arg1;
- (void)handleReplacementParticipantStateDictionaries:(id)arg1;
- (id)identifierForPlayerItem:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (id)integratedTimeline;
- (id)interstitialPlaybackCoordinator;
- (id)interstitialTimeRangesForPlayerItem:(id)arg1;
- (bool)isDefunct;
- (id)mediumLoggingIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })networkToHostTimeOffset;
- (id)otherParticipants;
- (id)participantForIdentifier:(id)arg1;
- (long long)participantLimitForWaitingOutSuspensionsWithReason:(id)arg1;
- (bool)pauseSnapsToMediaTimeOfOriginator;
- (id)player;
- (id)primaryPlaybackCoordinatorForInterstitial;
- (void)setCoordinationMediumDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator { }*)arg1;
- (void)setInterstitialPlaybackCoordinator:(id)arg1;
- (void)setMediumLoggingIdentifier:(id)arg1;
- (void)setParticipantLimit:(long long)arg1 forWaitingOutSuspensionsWithReason:(id)arg2;
- (void)setPauseSnapsToMediaTimeOfOriginator:(bool)arg1;
- (void)setSuspensionReasonsThatTriggerWaiting:(id)arg1;
- (void)setWeakReferenceToPrimaryPlaybackCoordinator:(id)arg1;
- (id)suspensionReasons;
- (id)suspensionReasonsThatTriggerWaiting;
- (id)trackedTransportControlStateDictionaries;

@end
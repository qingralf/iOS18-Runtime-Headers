/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFeedbackEngine : NSObject {
    unsigned long long  _backgroundTaskIdentifier;
    NSMutableDictionary * _completionBlocks;
    bool  _enabled;
    unsigned long long  _numberOfClients;
    NSMapTable * _playerDequeueBlocks;
    long long  _prewarmCount;
    NSTimer * _springBoardTimer;
    long long  _state;
    bool  _suspended;
    long long  _suspensionState;
    NSTimer * _suspensionTimer;
}

@property (nonatomic, readonly) NSString *_stats_key;
@property (getter=_backgroundTaskIdentifier, setter=_setBackgroundTaskIdentifier:, nonatomic) unsigned long long backgroundTaskIdentifier;
@property (nonatomic, readonly) double currentTime;
@property (getter=isEnabled, setter=_setEnabled:, nonatomic) bool enabled;
@property (nonatomic, readonly) unsigned long long numberOfClients;
@property (getter=_playerDequeueBlocks, setter=_setPlayerDequeueBlocks:, nonatomic, retain) NSMapTable *playerDequeueBlocks;
@property (nonatomic) long long prewarmCount;
@property (getter=_state, setter=_setState:, nonatomic) long long state;
@property (getter=_suspensionState, nonatomic, readonly) long long suspensionState;

+ (id)_internalQueue;
+ (bool)_supportsAbortingDeactivation;
+ (bool)_supportsPlayingFeedback:(id)arg1;
+ (bool)_supportsPlayingFeedbackPatternsDirectly;
+ (bool)_supportsPlayingIndividualFeedback:(id)arg1;
+ (id)engineForFeedback:(id)arg1;
+ (id)sharedEngine;

- (void).cxx_destruct;
- (void)_activate:(bool)arg1 andPerformWhenRunning:(id /* block */)arg2;
- (id)_activationCountStatistics;
- (id)_activationDurationStatistics;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidResume:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (unsigned long long)_backgroundTaskIdentifier;
- (void)_cooldown;
- (void)_deactivate;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_internal_activate:(bool)arg1 andPerformWhenRunning:(id /* block */)arg2;
- (void)_internal_activateEngine;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (void)_internal_cooldown;
- (void)_internal_cooldownEngineIfPossible;
- (void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)arg1;
- (void)_internal_deactivate;
- (void)_internal_deactivateEngineIfPossible;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (bool)_internal_isSuspended;
- (void)_internal_performAtState:(long long)arg1 block:(id /* block */)arg2;
- (void)_internal_playFeedbackData:(id)arg1 atTime:(double)arg2 feedback:(id)arg3 effectiveFeedbackType:(unsigned long long)arg4 existingPlayer:(id)arg5 withCompletionBlock:(id /* block */)arg6;
- (void)_internal_prewarm:(bool)arg1 andPerformWhenPrewarmed:(id /* block */)arg2;
- (void)_internal_prewarmEngine;
- (void)_internal_prewarmUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (void)_internal_serviceBlocksForState:(long long)arg1 withSuccess:(bool)arg2;
- (void)_internal_setSuspended:(bool)arg1;
- (void)_internal_setupBackgroundTask;
- (void)_internal_startWarmingFeedbacks:(id)arg1;
- (void)_internal_stopWarmingFeedbacks:(id)arg1;
- (void)_internal_teardownBackgroundTask;
- (void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)arg1;
- (void)_internal_updateSuspension;
- (void)_internal_willCancelFeedback:(id)arg1;
- (void)_internal_willPlayFeedback:(id)arg1 atTime:(double)arg2;
- (id)_outOfChannelsCountStatistics;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)_playerDequeueBlocks;
- (void)_prewarm:(bool)arg1 andPerformWhenPrewarmed:(id /* block */)arg2;
- (id)_prewarmCountStatistics;
- (id)_prewarmDurationStatistics;
- (void)_remoteViewControllerWillDisconnect:(id)arg1;
- (void)_sb_stuckInNonInactiveState;
- (void)_setBackgroundTaskIdentifier:(unsigned long long)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setPlayerDequeueBlocks:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)_setSuspended:(bool)arg1;
- (void)_startWarmingFeedbacks:(id)arg1;
- (long long)_state;
- (id)_statsSuffix;
- (id)_stats_key;
- (void)_stats_outOfChannels;
- (void)_stats_stateDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)_stopWarmingFeedbacks:(id)arg1;
- (void)_suspendEngineNow;
- (long long)_suspensionState;
- (double)currentTime;
- (id)description;
- (id)init;
- (bool)isEnabled;
- (unsigned long long)numberOfClients;
- (long long)prewarmCount;
- (void)runWhenReady:(id /* block */)arg1;
- (void)setPrewarmCount:(long long)arg1;

@end

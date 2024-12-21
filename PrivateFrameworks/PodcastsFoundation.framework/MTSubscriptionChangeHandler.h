/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
 */

@interface MTSubscriptionChangeHandler : NSObject {
    <MTLegacyDownloadManagerProtocol> * _downloadManager;
}

@property (nonatomic) <MTLegacyDownloadManagerProtocol> *downloadManager;

- (void)_applyEffectsOffMoC:(id)arg1 channel:(id)arg2 taskID:(id)arg3;
- (void)_unsafeApplyDownloadEffects:(id)arg1 channel:(id)arg2 taskID:(id)arg3;
- (void)_unsafeSendNotificationsForNewlyEntitledEpisodes:(id)arg1 latestEpisodeUUID:(id)arg2 newlyEntitledEpisodeUUIDs:(id)arg3 taskID:(id)arg4;
- (void)_unsafeUpdateEntitlementStateAndCheckForNewEntitlement:(id)arg1 newlyEntitledEpisodeUUIDs:(id)arg2 latestEpisodeDate:(double*)arg3 latestEpisodeUUID:(id)arg4;
- (void)_unsafeUpdatePriceTypeAndSendNotificationsIfNeededFor:(id)arg1 subscriptionActive:(bool)arg2 episodeEffects:(id)arg3 taskID:(id)arg4;
- (unsigned long long)_updateEntitledAttributes:(id)arg1 subscriptionActive:(bool)arg2 taskID:(id)arg3;
- (id)downloadManager;
- (id)episodesWithEffect:(unsigned long long)arg1 fromEpisodeEffects:(id)arg2;
- (void)setDownloadManager:(id)arg1;
- (void)unsafeHandleSubscriptionChangeForChannel:(id)arg1 subscriptionBecameActive:(bool)arg2 subscriptionEnabledDate:(double)arg3;

@end
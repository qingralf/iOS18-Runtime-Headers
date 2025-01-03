/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayPerfMetrics : NSObject {
    NSMutableDictionary * _data;
}

@property (setter=set_AVPlayerItemPerformanceMetrics:, nonatomic, retain) NSDictionary *AVPlayerItemPerformanceMetrics;
@property (setter=set_assetCacheAge:, nonatomic, retain) NSNumber *assetCacheAge;
@property (setter=set_assetLoadWaitTime:, nonatomic, retain) NSNumber *assetLoadWaitTime;
@property (setter=set_assetLocation:, nonatomic, retain) NSNumber *assetLocation;
@property (setter=set_assetProtectionType:, nonatomic, retain) NSNumber *assetProtectionType;
@property (setter=set_assetSource:, nonatomic, retain) NSNumber *assetSource;
@property (setter=set_assetType:, nonatomic, retain) NSNumber *assetType;
@property (nonatomic, readonly) NSNumber *avTime;
@property (setter=set_bagWaitTime:, nonatomic, retain) NSNumber *bagWaitTime;
@property (setter=set_checkpointAssetLoadBegin:, nonatomic, retain) NSNumber *checkpointAssetLoadBegin;
@property (setter=set_checkpointAssetLoadEnd:, nonatomic, retain) NSNumber *checkpointAssetLoadEnd;
@property (setter=set_checkpointFirstAudioFrame:, nonatomic, retain) NSNumber *checkpointFirstAudioFrame;
@property (setter=set_checkpointLikelyToKeepUp:, nonatomic, retain) NSNumber *checkpointLikelyToKeepUp;
@property (setter=set_checkpointMRPlay:, nonatomic, retain) NSNumber *checkpointMRPlay;
@property (setter=set_checkpointMRSetQueueBegin:, nonatomic, retain) NSNumber *checkpointMRSetQueueBegin;
@property (setter=set_checkpointPlay:, nonatomic, retain) NSNumber *checkpointPlay;
@property (setter=set_checkpointRateOne:, nonatomic, retain) NSNumber *checkpointRateOne;
@property (setter=set_checkpointRateZero:, nonatomic, retain) NSNumber *checkpointRateZero;
@property (setter=set_checkpointReadyToPlay:, nonatomic, retain) NSNumber *checkpointReadyToPlay;
@property (setter=set_checkpointSetQueueBegin:, nonatomic, retain) NSNumber *checkpointSetQueueBegin;
@property (setter=set_checkpointSetQueueEnd:, nonatomic, retain) NSNumber *checkpointSetQueueEnd;
@property (nonatomic, retain) NSMutableDictionary *data;
@property (setter=set_endpointType:, nonatomic, retain) NSNumber *endpointType;
@property (setter=set_errorResolution:, nonatomic, retain) NSNumber *errorResolution;
@property (setter=set_errorSignature:, nonatomic, retain) NSString *errorSignature;
@property (setter=set_eventTime:, nonatomic, retain) NSNumber *eventTime;
@property (setter=set_eventType:, nonatomic, retain) NSString *eventType;
@property (setter=set_experimentID:, nonatomic, retain) NSString *experimentID;
@property (setter=set_featureName:, nonatomic, retain) NSString *featureName;
@property (setter=set_firstAudioFrameWaitTime:, nonatomic, retain) NSNumber *firstAudioFrameWaitTime;
@property (setter=set_formatInfo:, nonatomic, retain) NSDictionary *formatInfo;
@property (setter=set_hasAccountInfo:, nonatomic, retain) NSNumber *hasAccountInfo;
@property (setter=set_hasOfflinePlaybackKeys:, nonatomic, retain) NSNumber *hasOfflinePlaybackKeys;
@property (setter=set_hasOnlinePlaybackKeys:, nonatomic, retain) NSNumber *hasOnlinePlaybackKeys;
@property (setter=set_hlsMetadataWaitTime:, nonatomic, retain) NSNumber *hlsMetadataWaitTime;
@property (setter=set_isActiveAccount:, nonatomic, retain) NSNumber *isActiveAccount;
@property (setter=set_isAutoPlayEnabled:, nonatomic, retain) NSNumber *isAutoPlayEnabled;
@property (setter=set_isDelegatedPlayback:, nonatomic, retain) NSNumber *isDelegatedPlayback;
@property (setter=set_isFirstPlay:, nonatomic, retain) NSNumber *isFirstPlay;
@property (setter=set_isRemoteSetQueue:, nonatomic, retain) NSNumber *isRemoteSetQueue;
@property (setter=set_isReplacingPlayback:, nonatomic, retain) NSNumber *isReplacingPlayback;
@property (setter=set_isSharePlay:, nonatomic, retain) NSNumber *isSharePlay;
@property (setter=set_isShuffled:, nonatomic, retain) NSNumber *isShuffled;
@property (setter=set_itemIdentifier:, nonatomic, retain) NSString *itemIdentifier;
@property (setter=set_itemMetadata:, nonatomic, retain) NSDictionary *itemMetadata;
@property (setter=set_leaseWaitTime:, nonatomic, retain) NSNumber *leaseWaitTime;
@property (setter=set_lookupWaitTime:, nonatomic, retain) NSNumber *lookupWaitTime;
@property (nonatomic, readonly) NSNumber *mediaPlayerTime;
@property (setter=set_mediaRedownloadWaitTime:, nonatomic, retain) NSNumber *mediaRedownloadWaitTime;
@property (nonatomic, readonly) NSNumber *musicTotalTime;
@property (nonatomic, readonly) NSNumber *musicWaitTime;
@property (nonatomic, readonly) NSNumber *networkTime;
@property (setter=set_networkType:, nonatomic, retain) NSNumber *networkType;
@property (setter=set_nextItemWaitTime:, nonatomic, retain) NSNumber *nextItemWaitTime;
@property (setter=set_playCommandSendTime:, nonatomic, retain) NSNumber *playCommandSendTime;
@property (setter=set_playCommandWaitTime:, nonatomic, retain) NSNumber *playCommandWaitTime;
@property (setter=set_queueCommandType:, nonatomic, retain) NSNumber *queueCommandType;
@property (setter=set_queueLoadWaitTime:, nonatomic, retain) NSNumber *queueLoadWaitTime;
@property (setter=set_queueType:, nonatomic, retain) NSString *queueType;
@property (setter=set_rateChangeWaitTime:, nonatomic, retain) NSNumber *rateChangeWaitTime;
@property (setter=set_readyToPlayStatusWaitTime:, nonatomic, retain) NSNumber *readyToPlayStatusWaitTime;
@property (setter=set_routeInfo:, nonatomic, retain) NSDictionary *routeInfo;
@property (setter=set_sectionIdentifier:, nonatomic, retain) NSString *sectionIdentifier;
@property (setter=set_seekBeforePlaying:, nonatomic, retain) NSNumber *seekBeforePlaying;
@property (setter=set_sessionActivationAVTime:, nonatomic, retain) NSNumber *sessionActivationAVTime;
@property (setter=set_sessionActivationClientTime:, nonatomic, retain) NSNumber *sessionActivationClientTime;
@property (setter=set_sessionActivationWaitTime:, nonatomic, retain) NSNumber *sessionActivationWaitTime;
@property (setter=set_setQueueCommandSendTime:, nonatomic, retain) NSNumber *setQueueCommandSendTime;
@property (setter=set_siriRefId:, nonatomic, retain) NSString *siriRefId;
@property (setter=set_storefront:, nonatomic, retain) NSString *storefront;
@property (setter=set_subscriptionAssetLoadWaitTime:, nonatomic, retain) NSNumber *subscriptionAssetLoadWaitTime;
@property (setter=set_subscriptionType:, nonatomic, retain) NSNumber *subscriptionType;
@property (setter=set_suzeLeaseWaitTime:, nonatomic, retain) NSNumber *suzeLeaseWaitTime;
@property (setter=set_timeSinceBoot:, nonatomic, retain) NSNumber *timeSinceBoot;
@property (setter=set_timeSinceLaunch:, nonatomic, retain) NSNumber *timeSinceLaunch;
@property (setter=set_timeSincePaused:, nonatomic, retain) NSNumber *timeSincePaused;
@property (setter=set_treatmentID:, nonatomic, retain) NSString *treatmentID;
@property (setter=set_vocalsControlActive:, nonatomic, retain) NSNumber *vocalsControlActive;

+ (id)playMetricsWithErrorSignature:(id)arg1 event:(id)arg2 cursor:(id)arg3;
+ (id)playMetricsWithItemReadyForMetricsEvent:(id)arg1 cursor:(id)arg2;

- (void).cxx_destruct;
- (id)AVPlayerItemPerformanceMetrics;
- (void)addAssetSelectionWithCursor:(id)arg1 itemIDPayload:(id)arg2;
- (void)addEnvironmentInfoWithCursor:(id)arg1;
- (void)addNetworkTimesWithScopedCursor:(id)arg1;
- (void)addPlaybackBehaviorWithCursor:(id)arg1;
- (void)addQueueMetadata:(id)arg1;
- (void)addSessionActivationTimesWithScopedCursor:(id)arg1;
- (void)addSharePlayWithCursor:(id)arg1;
- (id)assetCacheAge;
- (id)assetLoadWaitTime;
- (id)assetLocation;
- (id)assetProtectionType;
- (id)assetSource;
- (id)assetType;
- (id)avTime;
- (id)bagWaitTime;
- (id)checkpointAssetLoadBegin;
- (id)checkpointAssetLoadEnd;
- (id)checkpointFirstAudioFrame;
- (id)checkpointLikelyToKeepUp;
- (id)checkpointMRPlay;
- (id)checkpointMRSetQueueBegin;
- (id)checkpointPlay;
- (id)checkpointRateOne;
- (id)checkpointRateZero;
- (id)checkpointReadyToPlay;
- (id)checkpointSetQueueBegin;
- (id)checkpointSetQueueEnd;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpointType;
- (id)errorResolution;
- (id)errorSignature;
- (id)eventTime;
- (id)eventType;
- (id)experimentID;
- (id)featureName;
- (id)firstAudioFrameWaitTime;
- (id)formatInfo;
- (id)hasAccountInfo;
- (id)hasOfflinePlaybackKeys;
- (id)hasOnlinePlaybackKeys;
- (id)hlsMetadataWaitTime;
- (id)init;
- (id)isActiveAccount;
- (id)isAutoPlayEnabled;
- (id)isDelegatedPlayback;
- (id)isFirstPlay;
- (id)isRemoteSetQueue;
- (id)isReplacingPlayback;
- (id)isSharePlay;
- (id)isShuffled;
- (id)itemIdentifier;
- (id)itemMetadata;
- (id)jsonObject;
- (id)leaseWaitTime;
- (id)lookupWaitTime;
- (id)mediaPlayerTime;
- (id)mediaRedownloadWaitTime;
- (id)musicTotalTime;
- (id)musicWaitTime;
- (id)networkTime;
- (id)networkType;
- (id)nextItemWaitTime;
- (id)playCommandSendTime;
- (id)playCommandWaitTime;
- (id)queueCommandType;
- (id)queueLoadWaitTime;
- (id)queueType;
- (id)rateChangeWaitTime;
- (id)readyToPlayStatusWaitTime;
- (id)routeInfo;
- (id)sectionIdentifier;
- (id)seekBeforePlaying;
- (id)sessionActivationAVTime;
- (id)sessionActivationClientTime;
- (id)sessionActivationWaitTime;
- (void)setData:(id)arg1;
- (id)setQueueCommandSendTime;
- (void)set_AVPlayerItemPerformanceMetrics:(id)arg1;
- (void)set_assetCacheAge:(id)arg1;
- (void)set_assetLoadWaitTime:(id)arg1;
- (void)set_assetLocation:(id)arg1;
- (void)set_assetProtectionType:(id)arg1;
- (void)set_assetSource:(id)arg1;
- (void)set_assetType:(id)arg1;
- (void)set_bagWaitTime:(id)arg1;
- (void)set_checkpointAssetLoadBegin:(id)arg1;
- (void)set_checkpointAssetLoadEnd:(id)arg1;
- (void)set_checkpointFirstAudioFrame:(id)arg1;
- (void)set_checkpointLikelyToKeepUp:(id)arg1;
- (void)set_checkpointMRPlay:(id)arg1;
- (void)set_checkpointMRSetQueueBegin:(id)arg1;
- (void)set_checkpointPlay:(id)arg1;
- (void)set_checkpointRateOne:(id)arg1;
- (void)set_checkpointRateZero:(id)arg1;
- (void)set_checkpointReadyToPlay:(id)arg1;
- (void)set_checkpointSetQueueBegin:(id)arg1;
- (void)set_checkpointSetQueueEnd:(id)arg1;
- (void)set_endpointType:(id)arg1;
- (void)set_errorResolution:(id)arg1;
- (void)set_errorSignature:(id)arg1;
- (void)set_eventTime:(id)arg1;
- (void)set_eventType:(id)arg1;
- (void)set_experimentID:(id)arg1;
- (void)set_featureName:(id)arg1;
- (void)set_firstAudioFrameWaitTime:(id)arg1;
- (void)set_formatInfo:(id)arg1;
- (void)set_hasAccountInfo:(id)arg1;
- (void)set_hasOfflinePlaybackKeys:(id)arg1;
- (void)set_hasOnlinePlaybackKeys:(id)arg1;
- (void)set_hlsMetadataWaitTime:(id)arg1;
- (void)set_isActiveAccount:(id)arg1;
- (void)set_isAutoPlayEnabled:(id)arg1;
- (void)set_isDelegatedPlayback:(id)arg1;
- (void)set_isFirstPlay:(id)arg1;
- (void)set_isRemoteSetQueue:(id)arg1;
- (void)set_isReplacingPlayback:(id)arg1;
- (void)set_isSharePlay:(id)arg1;
- (void)set_isShuffled:(id)arg1;
- (void)set_itemIdentifier:(id)arg1;
- (void)set_itemMetadata:(id)arg1;
- (void)set_leaseWaitTime:(id)arg1;
- (void)set_lookupWaitTime:(id)arg1;
- (void)set_mediaRedownloadWaitTime:(id)arg1;
- (void)set_networkType:(id)arg1;
- (void)set_nextItemWaitTime:(id)arg1;
- (void)set_playCommandSendTime:(id)arg1;
- (void)set_playCommandWaitTime:(id)arg1;
- (void)set_queueCommandType:(id)arg1;
- (void)set_queueLoadWaitTime:(id)arg1;
- (void)set_queueType:(id)arg1;
- (void)set_rateChangeWaitTime:(id)arg1;
- (void)set_readyToPlayStatusWaitTime:(id)arg1;
- (void)set_routeInfo:(id)arg1;
- (void)set_sectionIdentifier:(id)arg1;
- (void)set_seekBeforePlaying:(id)arg1;
- (void)set_sessionActivationAVTime:(id)arg1;
- (void)set_sessionActivationClientTime:(id)arg1;
- (void)set_sessionActivationWaitTime:(id)arg1;
- (void)set_setQueueCommandSendTime:(id)arg1;
- (void)set_siriRefId:(id)arg1;
- (void)set_storefront:(id)arg1;
- (void)set_subscriptionAssetLoadWaitTime:(id)arg1;
- (void)set_subscriptionType:(id)arg1;
- (void)set_suzeLeaseWaitTime:(id)arg1;
- (void)set_timeSinceBoot:(id)arg1;
- (void)set_timeSinceLaunch:(id)arg1;
- (void)set_timeSincePaused:(id)arg1;
- (void)set_treatmentID:(id)arg1;
- (void)set_vocalsControlActive:(id)arg1;
- (id)siriRefId;
- (id)storefront;
- (id)subscriptionAssetLoadWaitTime;
- (id)subscriptionType;
- (id)suzeLeaseWaitTime;
- (id)timeSinceBoot;
- (id)timeSinceLaunch;
- (id)timeSincePaused;
- (id)treatmentID;
- (id)vocalsControlActive;

@end

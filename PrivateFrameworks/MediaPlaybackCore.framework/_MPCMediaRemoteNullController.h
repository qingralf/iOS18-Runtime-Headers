/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {
    MPCFuture * _contentItemArtworkForIdentifierFuture;
    MPCFuture * _contentItemForIdentifierFuture;
    MPCFuture * _contentItemRemoteArtworkForIdentifierFuture;
    MPCFuture * _participantsFuture;
    MPCFuture * _playbackQueueFuture;
}

+ (bool)_shouldRegisterForNotifications;

- (void).cxx_destruct;
- (id)_init;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
- (id)contentItemForIdentifier:(id)arg1;
- (id)contentItemRemoteArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 artworkFormat:(id)arg4;
- (void)invalidateAllTokens;
- (id)playbackQueueForRequest:(void*)arg1;
- (id)playbackQueueParticipants;
- (long long)playbackQueueParticipantsCacheState;
- (id)playbackState;
- (long long)playbackStateCacheState;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)supportedCommands;
- (long long)supportedCommandsCacheState;

@end

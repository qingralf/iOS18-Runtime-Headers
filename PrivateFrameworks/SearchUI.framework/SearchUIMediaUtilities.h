/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMediaUtilities : NSObject

+ (id)appsThatSupportSearchIntents;
+ (id)backingItemForMediaMetadataCache;
+ (bool)bundleIdentifierSupportsOpenIntent:(id)arg1;
+ (bool)bundleIdentifierSupportsPlayIntent:(id)arg1;
+ (void)canPlayAppleMusicWithCompletionHandler:(id /* block */)arg1;
+ (id)cardSectionsForListenToCardSection:(id)arg1;
+ (id)currentMedia;
+ (void)dispatchOnMusicQueueIfNecessary:(id /* block */)arg1;
+ (id)fallbackPunchoutWithMetadata:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)generateAppsThatSupportSearchIntents;
+ (void)getMusicUserDisclosureApprovalStatusWithCompletionHandler:(id /* block */)arg1;
+ (void)initializeQueuesAndNotifications;
+ (bool)isCoreSpotlightMedia:(id)arg1;
+ (bool)isCurrentMedia:(id)arg1;
+ (bool)isMediaItem:(id)arg1 equalToMediaItem:(id)arg2;
+ (bool)isNowPlayingMedia:(id)arg1;
+ (bool)isPlaying;
+ (id)localAudioCache;
+ (id)mediaDestinationsForMediaMetadata:(id)arg1;
+ (id)mediaSearchForMetadata:(id)arg1;
+ (id)musicPlayer;
+ (id)musicPlayerQueue;
+ (id)musicStatusCache;
+ (void)pausePlayback;
+ (void)playCoreSpotlightMedia:(id)arg1;
+ (void)playMedia:(id)arg1;
+ (void)predictionForMediaMetadata:(id)arg1 completion:(id /* block */)arg2;
+ (void)prewarmMediaLibrary;
+ (void)resetMediaApps;
+ (void)resetPlayer;
+ (void)resumePlayback;
+ (void)setCurrentMedia:(id)arg1;
+ (void)setIsPlaying:(bool)arg1;
+ (id)supportedIntentsForApp:(id)arg1;
+ (void)updateBackingItemForMediaMetadata:(id)arg1;

@end
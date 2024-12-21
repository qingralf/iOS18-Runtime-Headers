/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteController : NSObject <MPMediaRemoteEntityArtworkGenerator, MSVLRUDictionaryDelegate, _MPArtworkCatalogOverlayDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    MSVLRUDictionary * _contentItemArtwork;
    NSMutableDictionary * _contentItemArtworkFutures;
    NSMutableDictionary * _contentItemArtworkIdentifiers;
    NSMutableDictionary * _contentItemChanges;
    NSMapTable * _contentItemFutures;
    NSMutableArray * _contentItemIDs;
    NSMutableDictionary * _contentItemIDsForProperties;
    NSMutableDictionary * _contentItemRemoteArtworkFutures;
    MSVLRUDictionary * _contentItems;
    id  _invalidationToken;
    struct _MSVSignedRange { 
        long long location; 
        long long length; 
    }  _loadedContentItemsRange;
    MPCMRArtworkDataSource * _mrArtworkDataSource;
    MPCMRRemoteArtworkDataSource * _mrRemoteArtworkDataSource;
    NSMutableDictionary * _optimisticStateContentItems;
    NSMapTable * _playbackQueueFutures;
    long long  _playbackQueueParticipantsCacheState;
    MPCFuture * _playbackQueueParticipantsFuture;
    long long  _playbackStateCacheState;
    MPCFuture * _playbackStateFuture;
    NSString * _playingItemIdentifier;
    NSString * _queueIdentifier;
    NSDictionary * _queueProperties;
    struct _MSVSignedRange { 
        long long location; 
        long long length; 
    }  _requestedContentItemsRange;
    NSMutableDictionary * _requestedRangeForProperties;
    MPCPlayerPath * _resolvedPlayerPath;
    unsigned long long  _stateHandle;
    long long  _supportedCommandsCacheState;
    MPCFuture * _supportedCommandsFuture;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id invalidationToken;
@property (nonatomic, readonly) MPCFuture *playbackQueueParticipants;
@property (nonatomic, readonly) long long playbackQueueParticipantsCacheState;
@property (nonatomic, readonly) MPCFuture *playbackState;
@property (nonatomic, readonly) long long playbackStateCacheState;
@property (nonatomic, retain) MPCPlayerPath *resolvedPlayerPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPCFuture *supportedCommands;
@property (nonatomic, readonly) long long supportedCommandsCacheState;

+ (void)_sendCommand:(unsigned int)arg1 options:(id)arg2 appOptions:(unsigned int)arg3 toPlayerPath:(id)arg4 completion:(id /* block */)arg5;
+ (void)_sendCommand:(unsigned int)arg1 playbackIntent:(id)arg2 options:(id)arg3 toPlayerPath:(id)arg4 completion:(id /* block */)arg5;
+ (bool)_shouldRegisterForNotifications;
+ (id)controllerForPlayerPath:(id)arg1;
+ (id)mediaRemoteReplyQueue;
+ (void)sendCommand:(unsigned int)arg1 options:(id)arg2 toPlayerPath:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)_artworkCatalogBlockForContentItem:(id)arg1;
- (void)_contentItemArtworkChangedNotification:(id)arg1;
- (id)_createExportableArtworkPropertiesForContentItem:(id)arg1;
- (id)_init;
- (id)_legacyCommands;
- (id)_onQueue_identifiersForRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;
- (void)_onQueue_invalidateArtworkFuturesForContentItemID:(id)arg1;
- (void)_onQueue_mergeContentItems:(id)arg1;
- (void)_onQueue_mergeContentItems:(id)arg1 queueRange:(struct _MSVSignedRange { long long x1; long long x2; })arg2 requestRange:(struct _MSVSignedRange { long long x1; long long x2; })arg3 requestProperties:(id)arg4;
- (id)_onQueue_playbackQueueForRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2;
- (void)_onQueue_purgeContentItemIdentifierForProperties:(id)arg1;
- (id /* block */)_onQueue_setOptimisticElapsedTimeForContentItem:(id)arg1 elapsedTime:(double)arg2 rate:(float)arg3;
- (id /* block */)_onQueue_setOptimisticPlaybackState:(unsigned int)arg1 withOptions:(id)arg2;
- (void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)arg1 afterContentItemIdentifier:(id)arg2;
- (void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)arg1 beforeContentItemIdentifier:(id)arg2;
- (id)_onQueue_stateDictionary;
- (id /* block */)_onQueue_updateOptimisticStateForCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_playbackQueueChangedNotification:(id)arg1;
- (void)_playbackQueueContentItemsChangedNotification:(id)arg1;
- (void)_playbackQueueParticipantsDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (id)_requestPropertiesDescriptionForRequest:(void*)arg1;
- (void)_supportedCommandsDidChangeNotification:(id)arg1;
- (id)accessQueue;
- (void)artworkCatalog:(id)arg1 didClearFromView:(id)arg2;
- (void)artworkCatalog:(id)arg1 didConfigureView:(id)arg2 withRepresentation:(id)arg3;
- (void)artworkCatalog:(id)arg1 willConfigureView:(id)arg2;
- (id /* block */)artworkCatalogBlockForContentItem:(id)arg1;
- (id)calloutQueue;
- (long long)contentItemArtworkCacheStateForArtworkIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
- (id)contentItemForIdentifier:(id)arg1;
- (id)contentItemRemoteArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 artworkFormat:(id)arg4;
- (void)dealloc;
- (void)dictionary:(id)arg1 willRemoveObject:(id)arg2 forKey:(id)arg3;
- (void)invalidateAllTokens;
- (id)invalidationToken;
- (id)mediaRemoteArtworkDataSource;
- (struct CGSize { double x1; double x2; })overlayScaledFittingSizeForCatalog:(id)arg1 scaledFittingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)overlayVisualIdenticalityForCatalog:(id)arg1;
- (id)playbackQueueForRequest:(void*)arg1;
- (id)playbackQueueParticipants;
- (long long)playbackQueueParticipantsCacheState;
- (id)playbackState;
- (long long)playbackStateCacheState;
- (id)remoteArtworkDataSource;
- (id)resolvedPlayerPath;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)setAccessQueue:(id)arg1;
- (void)setCalloutQueue:(id)arg1;
- (void)setInvalidationToken:(id)arg1;
- (void)setResolvedPlayerPath:(id)arg1;
- (id)supportedCommands;
- (long long)supportedCommandsCacheState;

@end
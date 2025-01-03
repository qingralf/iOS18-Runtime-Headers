/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVItem : NSObject <MFChapterInformationProviding, MFQueuePlayerItem, MFSonicIdentifiable> {
    bool  _activeItem;
    NSMutableArray * _adjunctErrors;
    long long  _albumStoreID;
    bool  _allowsAirPlayFromCloud;
    bool  _allowsExternalPlayback;
    NSArray * _artworkTimeMarkers;
    AVAsset * _asset;
    bool  _assetLoaded;
    NSObject<OS_dispatch_queue> * _assetQueue;
    NSString * _associatedParticipantIdentifier;
    bool  _autoPlayItem;
    AVPlayerItem * _avPlayerItem;
    double  _cachedDuration;
    double  _cachedPlayableDuration;
    NSArray * _cachedSeekableTimeRanges;
    bool  _canReusePlayerItem;
    NSArray * _chapterTimeMarkers;
    NSArray * _closedCaptionTimeMarkers;
    bool  _configuredForVocalAttenuation;
    MPNowPlayingContentItem * _contentItem;
    NSString * _contentItemID;
    NSString * _copyrightText;
    float  _currentPlaybackRate;
    float  _defaultPlaybackRate;
    bool  _didAttemptToLoadAsset;
    bool  _didReachEnd;
    NSString * _explicitBadge;
    long long  _explicitContentState;
    long long  _exportableArtworkRevision;
    NSString * _externalContentIdentifier;
    bool  _externalDisplay;
    MPQueueFeeder * _feeder;
    bool  _hasFinishedDownloading;
    bool  _hasLoadedHasProtectedContent;
    bool  _hasLoadedPlaybackMode;
    bool  _hasPerformedErrorResolution;
    bool  _hasProtectedContent;
    bool  _hasValidPlayerItemDuration;
    bool  _inOverlappedTransition;
    NSNumber * _initialPlaybackStartTimeOverride;
    bool  _isAssetLoaded;
    bool  _isHostingSharedSession;
    bool  _isPreloadedAsset;
    bool  _isStartItem;
    unsigned int  _isStreamable;
    NSError * _itemError;
    long long  _lastChangeDirection;
    double  _lastLoggedTotalDuration;
    NSNumber * _lastMetadataChangeTime;
    double  _lastPlayPerformanceTime;
    long long  _leasePlaybackPreventionState;
    ICMusicSubscriptionLeaseStatus * _leaseStatus;
    long long  _likedState;
    bool  _likedStateEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    float  _loudnessInfoVolumeNormalization;
    unsigned int  _lyricsAvailable;
    MPMediaItem * _mediaItem;
    bool  _mediaItemNeedsLoading;
    AVPlayerItemMetadataOutput * _metadataOutput;
    MPModelGenericObject * _modelGenericObject;
    MPModelPlayEvent * _modelPlayEvent;
    long long  _nowPlayingInfoQueueCount;
    long long  _nowPlayingInfoQueueIndex;
    <MPAVItemObserver> * _observer;
    double  _overlappedTransitionDuration;
    NSMutableSet * _pendingContentItemUpdates;
    NSDictionary * _playbackInfo;
    long long  _playbackMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playerItemDuration;
    bool  _prefersSeekOverSkip;
    MPMediaLibraryPrivacyContext * _privacyContext;
    NSString * _queueIdentifier;
    NSString * _queueItemID;
    NSString * _queueSectionID;
    NSDate * _releaseDate;
    bool  _requiresLoadedAssetForAirPlayProperties;
    NSString * _rtcReportingServiceIdentifier;
    double  _seekableTimeRangesCacheTime;
    bool  _sharedListeningItem;
    bool  _shouldPreventPlayback;
    float  _soundCheckVolumeNormalization;
    NSNumber * _storeAccountID;
    NSString * _storeFrontIdentifier;
    long long  _storeItemInt64ID;
    long long  _storeSubscriptionAdamID;
    bool  _supportsLikedState;
    long long  _type;
    NSArray * _urlTimeMarkers;
    bool  _useEmbeddedChapterData;
    unsigned int  _watchingAttributes;
}

@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (getter=_currentPlaybackRate, setter=_setCurrentPlaybackRate:, nonatomic) float _currentPlaybackRate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } _playerItemDurationIfAvailable;
@property (nonatomic, readonly) AVPlayerItemAccessLog *accessLog;
@property (getter=isActiveItem, nonatomic) bool activeItem;
@property (nonatomic, readonly, copy) NSArray *adjunctErrors;
@property (nonatomic, readonly) NSArray *adjunctErrors;
@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) NSString *albumArtist;
@property (nonatomic, readonly) unsigned long long albumArtistPersistentID;
@property (nonatomic, readonly) unsigned long long albumPersistentID;
@property (nonatomic, readonly) long long albumStoreID;
@property (nonatomic, readonly) unsigned long long albumTrackCount;
@property (nonatomic, readonly) unsigned long long albumTrackNumber;
@property (nonatomic, readonly) bool allowsAirPlayFromCloud;
@property (nonatomic, readonly) bool allowsEQ;
@property (nonatomic, readonly) bool allowsExternalPlayback;
@property (getter=isAlwaysLive, nonatomic, readonly) bool alwaysLive;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) unsigned long long artistPersistentID;
@property (nonatomic, readonly) long long artistStoreID;
@property (getter=isArtistUploadedContent, nonatomic, readonly) bool artistUploadedContent;
@property (nonatomic, readonly) NSArray *artworkTimeMarkers;
@property (nonatomic, readonly) AVAsset *asset;
@property (getter=isAssetLoaded, nonatomic, readonly) bool assetLoaded;
@property (getter=isAssetURLValid, nonatomic, readonly) bool assetURLValid;
@property (nonatomic, copy) NSString *associatedParticipantIdentifier;
@property (getter=isAutoPlayItem, nonatomic) bool autoPlayItem;
@property (nonatomic, readonly) AVPlayerItem *avPlayerItem;
@property (nonatomic, readonly, copy) NSNumber *bookmarkTime;
@property (nonatomic, readonly) bool canReusePlayerItem;
@property (nonatomic, readonly) bool canUseLoadedAsset;
@property (nonatomic, readonly) NSArray *chapterTimeMarkers;
@property (nonatomic, retain) NSArray *closedCaptionTimeMarkers;
@property (nonatomic, readonly) NSString *cloudAlbumID;
@property (nonatomic, readonly) unsigned long long cloudID;
@property (nonatomic, readonly) NSString *cloudUniversalLibraryID;
@property (nonatomic, readonly) NSString *composer;
@property (nonatomic, readonly) unsigned long long composerPersistentID;
@property (getter=isConfiguredForVocalAttenuation, nonatomic) bool configuredForVocalAttenuation;
@property (nonatomic, readonly, copy) NSString *containerUniqueID;
@property (nonatomic, readonly) id contentIdentifier;
@property (nonatomic, readonly) MPNowPlayingContentItem *contentItem;
@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic, readonly, copy) NSString *contentItemID;
@property (nonatomic, readonly, copy) NSString *copyrightText;
@property (nonatomic, readonly) double currentTimeDisplayOverride;
@property (nonatomic, readonly) long long customAVEQPreset;
@property (nonatomic, readonly) NSString *databaseID;
@property (nonatomic) float defaultPlaybackRate;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didAttemptToLoadAsset;
@property (nonatomic, readonly) bool didReachEnd;
@property (nonatomic, readonly) unsigned long long discCount;
@property (nonatomic, readonly) unsigned long long discNumber;
@property (nonatomic, readonly) NSString *displayableText;
@property (nonatomic, readonly) bool displayableTextLoaded;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) double durationFromExternalMetadata;
@property (nonatomic, readonly) double durationIfAvailable;
@property (nonatomic, readonly) bool durationIsValid;
@property (nonatomic, readonly) double effectivePlaybackStartTime;
@property (nonatomic, copy) NSString *explicitBadge;
@property (nonatomic) long long explicitContentState;
@property (getter=isExplicitTrack, nonatomic, readonly) bool explicitTrack;
@property (nonatomic, readonly, copy) NSString *externalContentIdentifier;
@property (getter=hasExternalDisplay, nonatomic) bool externalDisplay;
@property (nonatomic) MPQueueFeeder *feeder;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } forwardPlaybackEndTime;
@property (nonatomic, readonly) <MFGaplessParameters> *gaplessParameters;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) unsigned long long genrePersistentID;
@property (nonatomic, readonly) bool hasFinishedDownloading;
@property (nonatomic, readonly) bool hasLoadableAsset;
@property (nonatomic) bool hasPerformedErrorResolution;
@property (nonatomic, readonly) bool hasProtectedContent;
@property (nonatomic, readonly) bool hasStoreLyrics;
@property (nonatomic, readonly) bool hasTimeSyncedLyrics;
@property (getter=isInOverlappedTransition, nonatomic) bool inOverlappedTransition;
@property (nonatomic, readonly, copy) NSNumber *initialPlaybackStartTime;
@property (nonatomic, copy) NSNumber *initialPlaybackStartTimeOverride;
@property (nonatomic, readonly) bool isAlwaysLive;
@property (nonatomic, readonly) bool isAssetLoaded;
@property (nonatomic) bool isAssetLoaded;
@property (nonatomic, readonly) bool isFullyDownloaded;
@property (nonatomic) bool isHostingSharedSession;
@property (nonatomic, readonly) bool isInTransition;
@property (nonatomic, readonly) bool isMovieOrTVShow;
@property (nonatomic, readonly) bool isPreloadedAsset;
@property (nonatomic, readonly) bool isSpokenAudio;
@property (nonatomic) bool isStartItem;
@property (nonatomic) bool isVideoContent;
@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, retain) NSError *itemError;
@property (nonatomic) long long lastChangeDirection;
@property (nonatomic, copy) NSNumber *lastMetadataChangeTime;
@property (nonatomic) double lastPlayPerformanceTime;
@property (nonatomic, readonly) long long leasePlaybackPreventionState;
@property (nonatomic, readonly, copy) ICMusicSubscriptionLeaseStatus *leaseStatus;
@property (nonatomic, readonly) NSString *libraryLyrics;
@property (nonatomic) long long likedState;
@property (getter=isLikedStateEnabled, nonatomic, readonly) bool likedStateEnabled;
@property (nonatomic) float loudnessInfoVolumeNormalization;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) long long lyricsAdamID;
@property (nonatomic, readonly) NSString *mainTitle;
@property (nonatomic, readonly, retain) MPMediaItem *mediaItem;
@property (nonatomic, readonly) bool mediaItemNeedsLoading;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) MPModelGenericObject *modelGenericObject;
@property (nonatomic, retain) MPModelPlayEvent *modelPlayEvent;
@property (nonatomic, readonly) long long mpcReporting_equivalencySourceAdamID;
@property (nonatomic, readonly) <MPCReportingIdentityPropertiesLoading> *mpcReporting_identityPropertiesLoader;
@property (nonatomic, readonly) bool mpcReporting_isValidReportingItem;
@property (nonatomic, readonly) unsigned long long mpcReporting_itemType;
@property (nonatomic, readonly, copy) NSData *mpcReporting_jingleTimedMetadata;
@property (nonatomic, readonly, copy) NSString *mpcReporting_requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *mpcReporting_requestingBundleVersion;
@property (nonatomic, readonly) bool mpcReporting_shouldReportPlayEventsToStore;
@property (nonatomic, readonly) bool mpcReporting_shouldUseRelativeTimePositions;
@property (nonatomic, readonly, copy) NSNumber *mpcReporting_siriInitiated;
@property (nonatomic, readonly, copy) NSData *mpcReporting_trackInfo;
@property (nonatomic, readonly) NSArray *musicSubscriptionInformation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) NSString *newsSubscriptionInformation;
@property (nonatomic) long long nowPlayingInfoQueueCount;
@property (nonatomic) long long nowPlayingInfoQueueIndex;
@property (nonatomic) <MPAVItemObserver> *observer;
@property (nonatomic) double overlappedTransitionDuration;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) NSString *personID;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) double playableDurationIfAvailable;
@property (nonatomic, readonly, copy) NSError *playbackError;
@property (nonatomic, copy) NSDictionary *playbackInfo;
@property (nonatomic, readonly, copy) NSNumber *playbackInfoStartTime;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic, readonly) ICUserIdentity *playbackRequestUserIdentity;
@property (nonatomic, readonly) double playbackStartTime;
@property (nonatomic) double playbackStartTimeOverride;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic, readonly) long long playerItemType;
@property (nonatomic, readonly) NSString *podcastAssetURL;
@property (nonatomic, readonly) NSString *podcastContentGUID;
@property (nonatomic, readonly) NSString *podcastFeedURL;
@property (nonatomic, readonly) bool podcastIsSubscribable;
@property (nonatomic, readonly) NSString *podcastItemType;
@property (nonatomic, readonly) NSString *podcastMediaType;
@property (nonatomic, readonly) NSString *podcastPageContext;
@property (nonatomic, readonly) NSString *podcastPriceType;
@property (nonatomic, readonly) NSString *podcastStoreID;
@property (nonatomic, readonly) NSString *podcastSubscriptionState;
@property (nonatomic, readonly) bool prefersSeekOverSkip;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, retain) NSString *queueIdentifier;
@property (nonatomic, readonly, copy) NSString *queueItemID;
@property (nonatomic, readonly, copy) NSString *queueSectionID;
@property (getter=isRadioItem, nonatomic, readonly) bool radioItem;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) long long reportingAdamID;
@property (nonatomic, readonly) bool requiresLoadedAssetForAirPlayProperties;
@property (nonatomic, readonly, copy) NSString *rtcReportingServiceIdentifier;
@property (getter=isSharedListeningItem, nonatomic) bool sharedListeningItem;
@property (nonatomic, readonly) bool shouldPreventPlayback;
@property (nonatomic, readonly) bool shouldShowComposer;
@property (nonatomic) float soundCheckVolumeNormalization;
@property (nonatomic, readonly) bool stationAllowsItemLiking;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly, copy) NSString *stationName;
@property (nonatomic, readonly) long long stationProviderID;
@property (nonatomic, readonly, copy) NSString *stationStringID;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSNumber *storeAccountID;
@property (nonatomic, readonly) long long storeAlbumArtistID;
@property (nonatomic, readonly, copy) NSString *storeFrontIdentifier;
@property (nonatomic, readonly) NSString *storeItemID;
@property (nonatomic, readonly) long long storeItemInt64ID;
@property (nonatomic, readonly) long long storePurchasedAdamID;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;
@property (getter=isStreamable, nonatomic, readonly) bool streamable;
@property (nonatomic, readonly) bool supportsFastForward;
@property (nonatomic, readonly) bool supportsLikedState;
@property (nonatomic, readonly) bool supportsRateChange;
@property (nonatomic, readonly) bool supportsRating;
@property (nonatomic, readonly) bool supportsRewind;
@property (nonatomic, readonly) bool supportsVocalAttenuation;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) double timeOfSeekableEnd;
@property (nonatomic, readonly) double timeOfSeekableStart;
@property (nonatomic, readonly) struct OpaqueCMTimebase { }*timebase;
@property (nonatomic, readonly) NSArray *timedMetadataIfAvailable;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly) NSArray *urlTimeMarkers;
@property (nonatomic, readonly) bool useEmbeddedChapterData;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) bool usesBookmarking;
@property (nonatomic, readonly) bool usesSubscriptionLease;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)URLFromPath:(id)arg1;
+ (bool)isPlaceholder;

- (void).cxx_destruct;
- (void)_addObservationsForAVPlayerItem:(id)arg1;
- (void)_applyLoudnessInfo;
- (void)_clearAssetNow;
- (id)_contentItemDeviceSpecificUserInfo;
- (id)_contentItemUserInfo;
- (void)_copyPlayerItem;
- (float)_currentPlaybackRate;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (void)_didBecomeActivePlayerItem;
- (void)_didResignActivePlayerItem;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)_expectedStartTimeWithPlaybackInfo:(id)arg1;
- (double)_expectedStopTimeWithPlaybackInfo:(id)arg1;
- (void)_handleUpdatedLikedState:(long long)arg1 forUserIdentity:(id)arg2 completion:(id /* block */)arg3;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (id)_initialPlaybackStartTimeForPlaybackInfo:(id)arg1;
- (void)_internalLikedStateDidChangeNotification:(id)arg1;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_likedStateDidChange;
- (void)_loadAssetAndPlayerItemWithTask:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadAssetProperties;
- (void)_performContentItemUpdate:(id /* block */)arg1 debounceWithIdentifier:(id)arg2;
- (long long)_persistedLikedState;
- (void)_pickupContentItemFrom:(id)arg1;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_playerItemDurationIfAvailable;
- (void)_removeObservationsForAVPlayerItem:(id)arg1;
- (id)_seekableTimeRanges;
- (void)_setCurrentPlaybackRate:(float)arg1;
- (void)_setNeedsPersistedLikedStateUpdate;
- (bool)_shouldPublishArtworkURL;
- (void)_updateAudioFormatInfoForContentItem:(id)arg1;
- (void)_updateContentItem;
- (void)_updateContentItemIncludingPlaybackState:(bool)arg1;
- (void)_updateDurationSnapshotWithElapsedTime:(double)arg1 playbackRate:(float)arg2;
- (void)_updateHasFinishedDownloading;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)accessLog;
- (void)addAdjunctError:(id)arg1;
- (id)adjunctErrors;
- (id)album;
- (id)albumArtist;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)albumPersistentID;
- (long long)albumStoreID;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (long long)albumYear;
- (bool)allowsAirPlayFromCloud;
- (bool)allowsEQ;
- (bool)allowsExternalPlayback;
- (id)analyticsContentType;
- (id)analyticsFormatType;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(bool)arg1;
- (id)artist;
- (unsigned long long)artistPersistentID;
- (long long)artistStoreID;
- (id /* block */)artworkCatalogBlock;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)asset;
- (id)associatedParticipantIdentifier;
- (id)bookmarkTime;
- (bool)canReusePlayerItem;
- (bool)canUseLoadedAsset;
- (id)chapterTimeMarkers;
- (void)clearAdjunctErrors;
- (id)closedCaptionTimeMarkers;
- (id)cloudAlbumID;
- (unsigned long long)cloudID;
- (id)cloudUniversalLibraryID;
- (id)composer;
- (unsigned long long)composerPersistentID;
- (id)containerUniqueID;
- (id)contentItem;
- (id)contentItemID;
- (id)copyrightText;
- (double)currentTimeDisplayOverride;
- (long long)customAVEQPreset;
- (id)databaseID;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (id)description;
- (bool)didAttemptToLoadAsset;
- (bool)didReachEnd;
- (void)disableItemReuse;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)displayableText;
- (bool)displayableTextLoaded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (double)durationFromExternalMetadata;
- (double)durationIfAvailable;
- (double)durationInSeconds;
- (bool)durationIsValid;
- (id)explicitBadge;
- (long long)explicitContentState;
- (id)externalContentIdentifier;
- (id)feeder;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)genre;
- (unsigned long long)genrePersistentID;
- (bool)hasExternalDisplay;
- (bool)hasFinishedDownloading;
- (bool)hasPerformedErrorResolution;
- (bool)hasProtectedContent;
- (bool)hasStoreLyrics;
- (bool)hasTimeSyncedLyrics;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initialPlaybackStartTime;
- (id)initialPlaybackStartTimeOverride;
- (void)invalidateContentItemAudioFormatInfo;
- (void)invalidateContentItemDeviceSpecificUserInfo;
- (void)invalidateContentItemUserInfo;
- (bool)isActiveItem;
- (bool)isAlwaysLive;
- (bool)isArtistUploadedContent;
- (bool)isAssetLoaded;
- (bool)isAssetLoaded;
- (bool)isAssetURLValid;
- (bool)isAutoPlayItem;
- (bool)isConfiguredForVocalAttenuation;
- (bool)isExplicitTrack;
- (bool)isHostingSharedSession;
- (bool)isInOverlappedTransition;
- (bool)isInTransition;
- (bool)isLikedStateEnabled;
- (bool)isPlaceholder;
- (bool)isPreloadedAsset;
- (bool)isRadioItem;
- (bool)isSharedListeningItem;
- (bool)isStartItem;
- (bool)isStreamable;
- (bool)isSupportedDefaultPlaybackSpeed:(long long)arg1;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (id)itemDescription;
- (id)itemError;
- (long long)lastChangeDirection;
- (id)lastMetadataChangeTime;
- (double)lastPlayPerformanceTime;
- (long long)leasePlaybackPreventionState;
- (id)leaseStatus;
- (id)libraryLyrics;
- (long long)likedState;
- (void)loadAssetAndPlayerItemWithTask:(id)arg1 completion:(id /* block */)arg2;
- (float)loudnessInfoVolumeNormalization;
- (id)lyrics;
- (long long)lyricsAdamID;
- (id)mainTitle;
- (id)mediaItem;
- (bool)mediaItemNeedsLoading;
- (unsigned long long)mediaType;
- (id)modelGenericObject;
- (id)modelPlayEvent;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)notePlaybackFinishedByHittingEnd;
- (long long)nowPlayingInfoQueueCount;
- (long long)nowPlayingInfoQueueIndex;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observer;
- (double)overlappedTransitionDuration;
- (id)path;
- (void)pauseContentKeySession;
- (unsigned long long)persistentID;
- (id)personID;
- (double)playableDuration;
- (double)playableDurationIfAvailable;
- (id)playbackError;
- (id)playbackInfo;
- (id)playbackInfoStartTime;
- (long long)playbackMode;
- (id)playerItem;
- (bool)prefersSeekOverSkip;
- (void)prepareForRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)queueIdentifier;
- (id)queueItemID;
- (id)queueSectionID;
- (void)reevaluateHasProtectedContent;
- (void)reevaluateType;
- (id)releaseDate;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (long long)reportingAdamID;
- (bool)requiresLoadedAssetForAirPlayProperties;
- (void)resolvePlaybackError:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resumeContentKeySession;
- (id)rtcReportingServiceIdentifier;
- (void)setActiveItem:(bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setAssociatedParticipantIdentifier:(id)arg1;
- (void)setAutoPlayItem:(bool)arg1;
- (void)setClosedCaptionTimeMarkers:(id)arg1;
- (void)setConfiguredForVocalAttenuation:(bool)arg1;
- (void)setContentItemID:(id)arg1 queueSectionID:(id)arg2 queueItemID:(id)arg3;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setExplicitBadge:(id)arg1;
- (void)setExplicitContentState:(long long)arg1;
- (void)setExternalDisplay:(bool)arg1;
- (void)setFeeder:(id)arg1;
- (void)setHasPerformedErrorResolution:(bool)arg1;
- (void)setInOverlappedTransition:(bool)arg1;
- (void)setInitialPlaybackStartTimeOverride:(id)arg1;
- (void)setIsAssetLoaded:(bool)arg1;
- (void)setIsHostingSharedSession:(bool)arg1;
- (void)setIsStartItem:(bool)arg1;
- (void)setItemError:(id)arg1;
- (void)setLastChangeDirection:(long long)arg1;
- (void)setLastMetadataChangeTime:(id)arg1;
- (void)setLastPlayPerformanceTime:(double)arg1;
- (void)setLikedState:(long long)arg1;
- (void)setLikedState:(long long)arg1 forUserIdentity:(id)arg2;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setModelPlayEvent:(id)arg1;
- (void)setNowPlayingInfoQueueCount:(long long)arg1;
- (void)setNowPlayingInfoQueueIndex:(long long)arg1;
- (void)setObserver:(id)arg1;
- (void)setOverlappedTransitionDuration:(double)arg1;
- (void)setPlaybackInfo:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setSharedListeningItem:(bool)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setupEQPresetWithDefaultPreset:(long long)arg1;
- (void)setupWithPlaybackInfo;
- (bool)shouldPreventPlayback;
- (bool)shouldShowComposer;
- (float)soundCheckVolumeNormalization;
- (bool)stationAllowsItemLiking;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (long long)stationProviderID;
- (id)stationStringID;
- (long long)status;
- (id)storeAccountID;
- (long long)storeAlbumArtistID;
- (id)storeFrontIdentifier;
- (id)storeItemID;
- (long long)storeItemInt64ID;
- (long long)storePurchasedAdamID;
- (long long)storeSubscriptionAdamID;
- (int)subtitleTrackID;
- (bool)supportsFastForward;
- (bool)supportsLikedState;
- (bool)supportsRateChange;
- (bool)supportsRating;
- (bool)supportsRewind;
- (bool)supportsVocalAttenuation;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (struct OpaqueCMTimebase { }*)timebase;
- (id)timedMetadataIfAvailable;
- (long long)type;
- (void)updatePlayerItemMetadata;
- (id)url;
- (id)urlTimeMarkers;
- (bool)useEmbeddedChapterData;
- (float)userRating;
- (bool)usesBookmarking;
- (bool)usesSubscriptionLease;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (bool)_isInContiguousAlbumWith:(id)arg1;
- (id)activeFormat;
- (id)avPlayerItem;
- (id)contentIdentifier;
- (double)effectivePlaybackStartTime;
- (id)gaplessParameters;
- (bool)hasLoadableAsset;
- (bool)isFullyDownloaded;
- (bool)isMovieOrTVShow;
- (bool)isSpokenAudio;
- (bool)isVideoContent;
- (long long)mpcReporting_equivalencySourceAdamID;
- (id)mpcReporting_identityPropertiesLoader;
- (bool)mpcReporting_isValidReportingItem;
- (unsigned long long)mpcReporting_itemType;
- (id)mpcReporting_jingleTimedMetadata;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_requestingBundleVersion;
- (bool)mpcReporting_shouldReportPlayEventsToStore;
- (bool)mpcReporting_shouldUseRelativeTimePositions;
- (id)mpcReporting_siriInitiated;
- (id)mpcReporting_trackInfo;
- (id)musicSubscriptionInformation;
- (id)newsSubscriptionInformation;
- (id)observeChapters:(id /* block */)arg1;
- (id)playbackRequestUserIdentity;
- (double)playbackStartTime;
- (double)playbackStartTimeOverride;
- (long long)playerItemType;
- (id)podcastAssetURL;
- (id)podcastContentGUID;
- (id)podcastFeedURL;
- (bool)podcastIsSubscribable;
- (id)podcastItemType;
- (id)podcastMediaType;
- (id)podcastPageContext;
- (id)podcastPriceType;
- (id)podcastStoreID;
- (id)podcastSubscriptionState;
- (void)prepareForReuse;
- (void)reset;
- (void)setCurrentItemTransition:(long long)arg1;
- (void)setIsVideoContent:(bool)arg1;
- (void)setPlaybackStartTimeOverride:(double)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldPerformGaplessTransitionWith:(id)arg1;
- (bool)shouldPerformOverlappingTransitionWith:(id)arg1;
- (double)time;
- (id)title;

@end

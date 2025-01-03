/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICCloudClient : NSObject <ICCloudAvailability> {
    bool  _active;
    ICCloudClientAvailabilityService * _availabilityService;
    ICCloudBadgingService * _badgingService;
    ICCloudClientCloudService * _cloudService;
    ICConnectionConfiguration * _configuration;
    ICCloudServerListenerEndpointProvider * _listenerEndpointProvider;
    NSMutableArray * _pendingServerSetupCompleteBlocks;
    long long  _preferredVideoQuality;
    NSObject<OS_dispatch_queue> * _serialAccessQueue;
    bool  _serverIsSetup;
    NSObject<OS_dispatch_queue> * _serverSetupBlockQueue;
    id /* block */  _updateJaliscoInProgressChangedHandler;
    id /* block */  _updateSagaInProgressChangedHandler;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) ICCloudClientAvailabilityService *availabilityService;
@property (nonatomic, readonly) ICCloudBadgingService *badgingService;
@property (nonatomic, readonly) ICCloudClientCloudService *cloudService;
@property (nonatomic, readonly) ICConnectionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICCloudServerListenerEndpointProvider *listenerEndpointProvider;
@property (nonatomic, retain) NSMutableArray *pendingServerSetupCompleteBlocks;
@property (nonatomic) long long preferredVideoQuality;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialAccessQueue;
@property (nonatomic) bool serverIsSetup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serverSetupBlockQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateJaliscoInProgressChangedHandler;
@property (nonatomic, copy) id /* block */ updateSagaInProgressChangedHandler;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_enableCloudLibraryWithPolicy:(long long)arg1 startinitialImport:(bool)arg2 isExplicitUserAction:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)_isAuthenticated;
- (void)_serverJaliscoUpdateInProgressDidChange;
- (void)_serverSagaUpdateInProgressDidChange;
- (void)_serverSetupDidComplete;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateAndStartInitialImport:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateWithCompletionHandler:(id /* block */)arg1;
- (id)availabilityService;
- (id)badgingService;
- (void)becomeActive;
- (void)beginCollaborationUsingPlaylistWithPersistentID:(long long)arg1 sharingMode:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (bool)canShowCloudDownloadButtons;
- (bool)canShowCloudMusic;
- (bool)canShowCloudVideo;
- (id)cloudService;
- (id)configuration;
- (bool)createMusicNotificationFromAMSDialogRequest:(id)arg1 error:(id*)arg2;
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)deauthenticateWithCompletionHandler:(id /* block */)arg1;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;
- (void)disableCloudLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)disableCloudLibraryWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)editCollaborationWithPersistentID:(long long)arg1 properties:(id)arg2 trackEdits:(id)arg3 completion:(id /* block */)arg4;
- (void)enableCloudLibraryWithPolicy:(long long)arg1 startInitialImport:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)endCollaborationWithPersistentID:(long long)arg1 completion:(id /* block */)arg2;
- (void)favoriteAlbumWithPersistentID:(long long)arg1 cloudLibraryID:(id)arg2 time:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)favoriteArtistWithPersistentID:(long long)arg1 cloudLibraryID:(id)arg2 time:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)favoriteEntityWithPersistentID:(long long)arg1 sagaID:(long long)arg2 entityType:(long long)arg3 time:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)favoriteEntityWithPersistentID:(long long)arg1 storeID:(long long)arg2 entityType:(long long)arg3 time:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)favoritePlaylistWithPersistentID:(long long)arg1 globalID:(id)arg2 time:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchEnhancedAudioOfflineKeys;
- (void)handleAutomaticDownloadPreferenceChangedForMediaKindMusic:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (bool)hasProperNetworkConditionsToShowCloudMedia;
- (bool)hasSetPreferenceForAutomaticDownloads;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importScreenshotForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importSubscriptionScreenshotForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithUserIdentity:(id)arg1;
- (bool)initialLibrarySyncsComplete;
- (bool)isActive;
- (bool)isAuthenticated;
- (void)isAuthenticatedWithCompletionHandler:(id /* block */)arg1;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isAutomaticDownloadsEnabledForMediaKindMusic;
- (bool)isCellularDataRestricted;
- (bool)isCellularDataRestrictedForMusic;
- (bool)isCellularDataRestrictedForStoreApps;
- (bool)isCellularDataRestrictedForVideos;
- (bool)isMediaKindDisabledForJaliscoLibrary:(long long)arg1;
- (void)joinCollaborationWithGlobalPlaylistID:(id)arg1 invitationURL:(id)arg2 completion:(id /* block */)arg3;
- (void)listCloudServerOperations;
- (id)listenerEndpointProvider;
- (void)loadArtworkInfoForContainerSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSubscriptionContainerPersistentID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSubscriptionItemPersistentID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadIsJaliscoUpdateInProgressWithCompletionHandler:(id /* block */)arg1;
- (void)loadIsSagaUpdateInProgressWithCompletionHandler:(id /* block */)arg1;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id /* block */)arg1;
- (void)loadJaliscoUpdateProgressWithCompletionHandler:(id /* block */)arg1;
- (void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(id /* block */)arg1;
- (void)loadMissingArtwork;
- (void)loadSagaUpdateProgressWithCompletionHandler:(id /* block */)arg1;
- (void)loadScreenshotInfoForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForSubscriptionPersistentID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadUpdateProgressWithCompletionHandler:(id /* block */)arg1;
- (bool)musicPurchasesDisabledForJaliscoLibrary;
- (void)notifyDeviceSetupFinishedWithCompletion:(id /* block */)arg1;
- (id)pendingServerSetupCompleteBlocks;
- (void)performBlockAfterServerSetup:(id /* block */)arg1;
- (long long)preferredVideoQuality;
- (void)processPendingKeyInvalidations;
- (void)publishPlaylistWithSagaID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)refreshEnhancedAudioSharedKeys;
- (void)removeCollaborators:(id)arg1 fromCollaborationWithPersistentID:(long long)arg2 completion:(id /* block */)arg3;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeJaliscoLibraryWithCompletionHander:(id /* block */)arg1;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportAppIconBadgeActionMetrics;
- (void)resetConfiguration:(id)arg1;
- (void)resetInvitationURLForCollaborationWithPersistentID:(long long)arg1 completion:(id /* block */)arg2;
- (void)resignActive;
- (void)respondToPendingCollaborator:(id)arg1 onCollaborationWithPersistentID:(long long)arg2 withApproval:(bool)arg3 completion:(id /* block */)arg4;
- (void)sdk_addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)sdk_setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)serialAccessQueue;
- (bool)serverIsSetup;
- (id)serverSetupBlockQueue;
- (void)setActive:(bool)arg1;
- (void)setAlbumArtistProperties:(id)arg1 forAlbumArtistPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setAlbumEntityProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setCloudFavoriteSongAddToLibraryBehavior:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setPendingServerSetupCompleteBlocks:(id)arg1;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setServerIsSetup:(bool)arg1;
- (void)setUpdateJaliscoInProgressChangedHandler:(id /* block */)arg1;
- (void)setUpdateSagaInProgressChangedHandler:(id /* block */)arg1;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;
- (bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (void)updateArtistHeroImages;
- (id /* block */)updateJaliscoInProgressChangedHandler;
- (void)updateJaliscoLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePinnedSubscribedPlaylistsWithCompletion:(id /* block */)arg1;
- (id /* block */)updateSagaInProgressChangedHandler;
- (void)updateSagaLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadCloudItemProperties;
- (void)uploadCloudPlaylistProperties;
- (void)uploadItemProperties;
- (id)xpcConnection;

@end

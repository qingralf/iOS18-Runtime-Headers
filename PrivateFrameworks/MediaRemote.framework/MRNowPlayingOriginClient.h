/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState> {
    MRClient * _activeNowPlayingClient;
    MRApplicationActivity * _activity;
    NSMutableArray * _applicationPickedRoutes;
    id /* block */  _beginLyricsEventCallback;
    id /* block */  _capabilitiesCallback;
    id /* block */  _clientMessageCallback;
    id /* block */  _commandCallback;
    id /* block */  _endLyricsEventCallback;
    unsigned int  _hardwareRemoteBehavior;
    unsigned int  _inputMode;
    NSMutableArray * _nowPlayingClients;
    MROrigin * _origin;
    bool  _overrideApp;
    NSString * _overrideAppBundleID;
    id /* block */  _playbackQueueCallback;
    id /* block */  _playbackSessionCallback;
    id /* block */  _playbackSessionMigrateBeginCallback;
    id /* block */  _playbackSessionMigrateEndCallback;
    id /* block */  _playbackSessionMigrateRequestCallback;
    unsigned int  _routeDiscoveryMode;
    NSString * _routingContextID;
    NSObject<OS_dispatch_queue> * _serialQueue;
    float  _volume;
    unsigned int  _volumeCapabilities;
}

@property (nonatomic, retain) MRClient *activeNowPlayingClient;
@property (nonatomic, retain) MRApplicationActivity *activity;
@property (nonatomic, copy) NSArray *applicationPickedRoutes;
@property (nonatomic, copy) id /* block */ beginLyricsEventCallback;
@property (nonatomic, copy) id /* block */ clientMessageCallback;
@property (nonatomic, copy) id /* block */ commandCallback;
@property (nonatomic, copy) id /* block */ endLyricsEventCallback;
@property (nonatomic) unsigned int hardwareRemoteBehavior;
@property (nonatomic) unsigned int inputMode;
@property (nonatomic, readonly) NSArray *nowPlayingClients;
@property (nonatomic, readonly) MROrigin *origin;
@property (getter=isOverrideApp, nonatomic) bool overrideApp;
@property (nonatomic, copy) NSString *overrideAppBundleID;
@property (nonatomic, copy) id /* block */ playbackQueueCallback;
@property (nonatomic, copy) id /* block */ playbackSessionCallback;
@property (nonatomic, copy) id /* block */ playbackSessionMigrateBeginCallback;
@property (nonatomic, copy) id /* block */ playbackSessionMigrateEndCallback;
@property (nonatomic, copy) id /* block */ playbackSessionMigrateRequestCallback;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (nonatomic) float volume;
@property (nonatomic) unsigned int volumeCapabilities;

- (void).cxx_destruct;
- (void)_prepareToRestoreClientStateWithCompletion:(id /* block */)arg1;
- (void)_restoreNowPlayingClientState;
- (id)activeNowPlayingClient;
- (id)activity;
- (id)applicationPickedRoutes;
- (id /* block */)beginLyricsEventCallback;
- (id /* block */)clientMessageCallback;
- (id /* block */)commandCallback;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id /* block */)endLyricsEventCallback;
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;
- (unsigned int)hardwareRemoteBehavior;
- (id)initWithOrigin:(id)arg1 routingContextID:(id)arg2;
- (unsigned int)inputMode;
- (bool)isOverrideApp;
- (id)nowPlayingClientForPlayerPath:(id)arg1;
- (id)nowPlayingClients;
- (id)origin;
- (bool)overrideApp;
- (id)overrideAppBundleID;
- (id /* block */)playbackQueueCallback;
- (id /* block */)playbackSessionCallback;
- (id /* block */)playbackSessionMigrateBeginCallback;
- (id /* block */)playbackSessionMigrateEndCallback;
- (id /* block */)playbackSessionMigrateRequestCallback;
- (void)removeAllClients;
- (void)removeClient:(id)arg1;
- (void)restoreNowPlayingClientState;
- (unsigned int)routeDiscoveryMode;
- (void)setActiveNowPlayingClient:(id)arg1;
- (void)setActivity:(id)arg1;
- (void)setApplicationPickedRoutes:(id)arg1;
- (void)setBeginLyricsEventCallback:(id /* block */)arg1;
- (void)setClientMessageCallback:(id /* block */)arg1;
- (void)setCommandCallback:(id /* block */)arg1;
- (void)setEndLyricsEventCallback:(id /* block */)arg1;
- (void)setHardwareRemoteBehavior:(unsigned int)arg1;
- (void)setInputMode:(unsigned int)arg1;
- (void)setIsOverrideApp:(bool)arg1;
- (void)setOverrideApp:(bool)arg1;
- (void)setOverrideAppBundleID:(id)arg1;
- (void)setPlaybackQueueCallback:(id /* block */)arg1;
- (void)setPlaybackSessionCallback:(id /* block */)arg1;
- (void)setPlaybackSessionMigrateBeginCallback:(id /* block */)arg1;
- (void)setPlaybackSessionMigrateEndCallback:(id /* block */)arg1;
- (void)setPlaybackSessionMigrateRequestCallback:(id /* block */)arg1;
- (void)setRouteDiscoveryMode:(unsigned int)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolumeCapabilities:(unsigned int)arg1;
- (float)volume;
- (unsigned int)volumeCapabilities;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUSpatialAudioController : NSObject <MRExpanseManagerObserver, MRNowPlayingAudioFormatControllerDelegate, MRUSpatialAccessibilityObserverDelegate, MRUSystemOutputDeviceRouteControllerObserver> {
    MRUSpatialAccessibilityObserver * _accessibilityObserver;
    int  _accessoryStereoHFPStatus;
    MRNowPlayingAudioFormatController * _audioFormatController;
    NSArray * _availableModes;
    NSCache * _cache;
    <MRUSpatialAudioControllerDelegate> * _delegate;
    bool  _isDeviceSpatialAudioSupported;
    MRUVolumeNowPlayingInfo * _nowPlayingInfo;
    NSTimer * _optimisticSpatialAudioActiveTimer;
    MRUSystemOutputDeviceRouteController * _outputDeviceRouteController;
    MRUSpatialAudioMode * _selectedMode;
}

@property (nonatomic, retain) MRUSpatialAccessibilityObserver *accessibilityObserver;
@property (nonatomic) int accessoryStereoHFPStatus;
@property (nonatomic, retain) MRNowPlayingAudioFormatController *audioFormatController;
@property (nonatomic, readonly) NSArray *availableModes;
@property (nonatomic, retain) NSCache *cache;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <MRUSpatialAudioControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *disabledDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDeviceSpatialAudioSupported;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isMultichannel;
@property (nonatomic, readonly) bool isMultichannelAvailable;
@property (nonatomic, readonly) MRUVolumeNowPlayingInfo *nowPlayingInfo;
@property (nonatomic, retain) NSTimer *optimisticSpatialAudioActiveTimer;
@property (nonatomic, readonly) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (nonatomic, retain) MRUSpatialAudioMode *selectedMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accessibilityHeadTrackChangedNotification;
- (id)accessibilityObserver;
- (int)accessoryStereoHFPStatus;
- (id)audioFormatController;
- (id)availableModes;
- (id)cache;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)disabledDescription;
- (void)expanseManagerDidJoinExpanseSession:(id)arg1;
- (void)expanseManagerDidLeaveExpanseSession:(id)arg1;
- (id)initWithOutputDeviceRouteController:(id)arg1;
- (bool)isDeviceSpatialAudioSupported;
- (bool)isEnabled;
- (bool)isMultichannel;
- (bool)isMultichannelAvailable;
- (bool)isSpatialAudioActive;
- (id)localizedStringForRenderingMode:(long long)arg1;
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeAudioFormatApplication:(id)arg2;
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeAudioFormatContentInfo:(id)arg2;
- (id)nowPlayingInfo;
- (id)optimisticSpatialAudioActiveTimer;
- (id)outputDeviceRouteController;
- (id)preferenceForBundleID:(id)arg1 outputDevice:(id)arg2;
- (id)preferencesForMode:(id)arg1 previousPreferences:(id)arg2;
- (void)resetOptimisticSpatialAudioActive;
- (id)selectedMode;
- (void)setAccessibilityObserver:(id)arg1;
- (void)setAccessoryStereoHFPStatus:(int)arg1;
- (void)setAudioFormatController:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsDeviceSpatialAudioSupported:(bool)arg1;
- (void)setOptimisticSpatialAudioActiveTimer:(id)arg1;
- (void)setPreferences:(id)arg1 forBundleID:(id)arg2 outputDevice:(id)arg3;
- (void)setSelectedMode:(id)arg1;
- (void)spatialAccessilityObserver:(id)arg1 didChangeHeadTrackingEnabled:(bool)arg2;
- (void)spatialAccessilityObserver:(id)arg1 didChangeMonoAudioEnabled:(bool)arg2;
- (void)startMonitoring;
- (void)startOptimisticSpatialAudioActive;
- (void)stopMonitoring;
- (void)stopOptimisticSpatialAudioActive;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg1;
- (void)updateDeviceSpatialAudioSupported;
- (void)updateFaceTimeHeadTrackedSupported;
- (void)updateNowPlaying;
- (void)updateSpatialAudioModes;

@end

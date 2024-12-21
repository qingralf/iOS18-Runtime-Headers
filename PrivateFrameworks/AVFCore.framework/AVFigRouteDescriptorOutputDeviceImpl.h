/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVFigRouteDescriptorOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {
    <AVOutputDeviceDelegate> * _delegate;
    <AVOutputDeviceImplSupport> * _implSupportEventListener;
    struct OpaqueFigReadWriteLock { } * _routeDescriptionRWLock;
    struct __CFDictionary { } * _routeDescriptor;
    struct OpaqueFigRouteDiscoverer { } * _routeDiscoverer;
    struct OpaqueFigRoutingContext { } * _routingContext;
    <FigRoutingContextFactory> * _routingContextFactory;
    bool  _useRouteConfigUpdatedNotification;
    struct OpaqueFigVolumeControllerState { } * _volumeController;
    AVWeakReference * _weakObserver;
}

@property (nonatomic, readonly) long long HAPConformance;
@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly) NSData *MFiCertificateSerialNumber;
@property (nonatomic, readonly) NSString *OEMIconLabel;
@property (nonatomic, readonly) bool OEMIconVisible;
@property (nonatomic, readonly) NSArray *OEMIcons;
@property (getter=isActivated, nonatomic, readonly) bool activated;
@property (getter=isActivatedForContinuityScreen, nonatomic, readonly) bool activatedForContinuityScreen;
@property (nonatomic, readonly) NSDictionary *airPlayProperties;
@property (nonatomic, readonly) bool allowsHeadTrackedSpatialAudio;
@property (getter=isAppleAccessory, nonatomic, readonly) bool appleAccessory;
@property (nonatomic, readonly) long long authenticationType;
@property (nonatomic, readonly) bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) NSArray *availableBluetoothListeningModes;
@property (nonatomic, readonly) NSNumber *batteryLevel;
@property (nonatomic, readonly) bool canAccessAppleMusic;
@property (nonatomic, readonly) bool canAccessRemoteAssets;
@property (nonatomic, readonly) bool canAccessiCloudMusicLibrary;
@property (nonatomic, readonly) bool canBeGroupLeader;
@property (nonatomic, readonly) bool canBeGrouped;
@property (nonatomic, readonly) bool canCommunicateWithAllLogicalDeviceMembers;
@property (nonatomic, readonly) bool canFetchMediaDataFromSender;
@property (readonly) bool canMute;
@property (nonatomic, readonly) bool canPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic, readonly) bool canRelayCommunicationChannel;
@property (readonly) bool canSetVolume;
@property (nonatomic, readonly) bool carOwnsMainAudio;
@property (nonatomic, readonly) bool carOwnsScreen;
@property (nonatomic, readonly) NSNumber *caseBatteryLevel;
@property (nonatomic, readonly) NSString *clusterID;
@property (nonatomic, readonly) long long clusterType;
@property (nonatomic, readonly) NSArray *clusteredDeviceDescriptions;
@property (nonatomic, readonly) long long configuredClusterSize;
@property (nonatomic, readonly, copy) NSArray *connectedPairedDevices;
@property (getter=isConversationDetectionEnabled, nonatomic, readonly) bool conversationDetectionEnabled;
@property (nonatomic, readonly) NSString *currentBluetoothListeningMode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <AVOutputDeviceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceFeatures;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, retain) NSDictionary *displayCornerMasks;
@property (nonatomic, readonly) long long electronicTollCollection;
@property (getter=isEligibleToBePredictedOutputDevice, nonatomic, readonly) bool eligibleToBePredictedOutputDevice;
@property (nonatomic, readonly) NSString *firmwareVersion;
@property (nonatomic, readonly) bool groupContainsGroupLeader;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (getter=isHeadTrackedSpatialAudioActive, nonatomic, readonly) bool headTrackedSpatialAudioActive;
@property (nonatomic, readonly) NSString *headTrackedSpatialAudioMode;
@property (nonatomic, readonly, copy) NSData *identifyingMACAddress;
@property <AVOutputDeviceImplSupport> *implEventListener;
@property (getter=isInUseByPairedDevice, nonatomic, readonly) bool inUseByPairedDevice;
@property (nonatomic, readonly) bool isClusterLeader;
@property (nonatomic, readonly) bool isGroupLeader;
@property (nonatomic, readonly) NSNumber *isInEar;
@property (nonatomic, readonly) bool isLogicalDeviceLeader;
@property (nonatomic, readonly) NSNumber *leftBatteryLevel;
@property (nonatomic, readonly) bool limitedUI;
@property (nonatomic, readonly) NSArray *limitedUIElements;
@property (nonatomic, readonly) NSString *logicalDeviceID;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (getter=isMuted) bool muted;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long navigationAidedDriving;
@property (nonatomic, readonly) bool nightMode;
@property (getter=isNightModeSupported, nonatomic, readonly) bool nightModeSupported;
@property (nonatomic, readonly) bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) NSArray *outputDeviceHIDs;
@property (nonatomic, readonly) NSDictionary *outputDeviceInfo;
@property (nonatomic, readonly) bool ownsTurnByTurnNavigation;
@property (nonatomic, readonly) bool participatesInGroupPlayback;
@property (nonatomic, readonly) bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic, readonly) bool producesLowFidelityAudio;
@property (nonatomic, readonly, copy) NSString *proposedGroupID;
@property (nonatomic, readonly) bool recognizingSpeech;
@property (nonatomic, readonly) bool requiresAuthorization;
@property (nonatomic, readonly) NSNumber *rightBatteryLevel;
@property (nonatomic, readonly) bool rightHandDrive;
@property (nonatomic) struct __CFDictionary { }*routeDescriptor;
@property (nonatomic, readonly) NSArray *screens;
@property (nonatomic, readonly) NSString *serialNumber;
@property bool siriForwardingEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedFeatures;
@property (nonatomic, readonly) bool supportsBluetoothSharing;
@property (nonatomic, readonly) bool supportsBufferedAirPlay;
@property (nonatomic, readonly) bool supportsConversationDetection;
@property (nonatomic, readonly) NSNumber *supportsDataOverACLProtocol;
@property (nonatomic, readonly) bool supportsHeadTrackedSpatialAudio;
@property (nonatomic, readonly) long long transportType;
@property (nonatomic, readonly) long long voiceTriggerMode;
@property (readonly) float volume;
@property (readonly) long long volumeControlType;

- (void).cxx_destruct;
- (long long)HAPConformance;
- (id)ID;
- (id)MFiCertificateSerialNumber;
- (id)OEMIconLabel;
- (bool)OEMIconVisible;
- (id)OEMIcons;
- (void)_canMuteDidChangeForEndpointWithID:(struct __CFString { }*)arg1;
- (void)_canSetEndpointVolumeDidChangeForEndpointWithID:(struct __CFString { }*)arg1;
- (void)_carPlayTestNotification:(id)arg1;
- (void)_endpointVolumeControlTypeDidChangeForEndpointWithID:(struct __CFString { }*)arg1;
- (void)_handleRouteDescriptionEvent:(struct __CFString { }*)arg1 payload:(id)arg2;
- (void)_iOSUIRequestedNotification:(id)arg1;
- (void)_mutedDidChangeForEndpointWithID:(struct __CFString { }*)arg1;
- (void)_routeDescriptionDidChange:(struct __CFDictionary { }*)arg1;
- (void)_siriRequestedNotification:(id)arg1;
- (void)_unhandledRemoteCommandNotification:(id)arg1;
- (void)_vehicleInformationDidChange:(id)arg1;
- (void)_volumeDidChangeForEndpointWithID:(struct __CFString { }*)arg1;
- (void)_volumeForEndpointDidChange:(struct __CFString { }*)arg1 forRoomID:(struct __CFString { }*)arg2;
- (int)_withEndpoint:(id /* block */)arg1;
- (id)airPlayProperties;
- (bool)allowsHeadTrackedSpatialAudio;
- (long long)authenticationType;
- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (id)availableBluetoothListeningModes;
- (id)batteryLevel;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (bool)canCommunicateWithAllLogicalDeviceMembers;
- (bool)canFetchMediaDataFromSender;
- (bool)canMute;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (bool)canSetVolume;
- (bool)carOwnsMainAudio;
- (bool)carOwnsScreen;
- (id)caseBatteryLevel;
- (id)clusterID;
- (long long)clusterType;
- (id)clusteredDeviceDescriptions;
- (void)configureUsingBlock:(id /* block */)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)configuredClusterSize;
- (id)connectedPairedDevices;
- (id)currentBluetoothListeningMode;
- (id)currentScreenViewAreaForScreenID:(id)arg1;
- (void)dealloc;
- (void)decreaseVolumeByCount:(long long)arg1;
- (id)delegate;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)displayCornerMasks;
- (long long)electronicTollCollection;
- (id)firmwareVersion;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (unsigned long long)hash;
- (id)headTrackedSpatialAudioMode;
- (id)identifyingMACAddress;
- (id)implEventListener;
- (void)increaseVolumeByCount:(long long)arg1;
- (id)init;
- (id)initWithRouteDescriptor:(struct __CFDictionary { }*)arg1 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { }*)arg2 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg3 routingContextFactory:(id)arg4 useRouteConfigUpdatedNotification:(bool)arg5 routingContext:(struct OpaqueFigRoutingContext { }*)arg6;
- (bool)isActivated;
- (bool)isActivatedForContinuityScreen;
- (bool)isAppleAccessory;
- (bool)isClusterLeader;
- (bool)isConversationDetectionEnabled;
- (bool)isEligibleToBePredictedOutputDevice;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isHeadTrackedSpatialAudioActive;
- (id)isInEar;
- (bool)isInUseByPairedDevice;
- (bool)isLogicalDeviceLeader;
- (bool)isMuted;
- (bool)isNightModeSupported;
- (id)leftBatteryLevel;
- (bool)limitedUI;
- (id)limitedUIElements;
- (id)logicalDeviceID;
- (id)manufacturer;
- (id)modelID;
- (id)name;
- (long long)navigationAidedDriving;
- (bool)nightMode;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (id)outputDeviceHIDs;
- (id)outputDeviceInfo;
- (bool)ownsTurnByTurnNavigation;
- (bool)participatesInGroupPlayback;
- (void)performHapticFeedbackForUUID:(id)arg1 withHapticType:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)producesLowFidelityAudio;
- (id)proposedGroupID;
- (bool)recognizingSpeech;
- (void)requestCarUIForURL:(id)arg1 withUUID:(id)arg2;
- (id)requestTurnByTurnNavigationOwnership;
- (void)requestViewArea:(long long)arg1 forScreenID:(id)arg2;
- (bool)requiresAuthorization;
- (id)rightBatteryLevel;
- (bool)rightHandDrive;
- (struct __CFDictionary { }*)routeDescriptor;
- (id)screens;
- (id)serialNumber;
- (void)setActivatedDeviceClusterMembersVolume:(float)arg1 withRoomID:(id)arg2;
- (bool)setAllowsHeadTrackedSpatialAudio:(bool)arg1 error:(id*)arg2;
- (bool)setConversationDetectionEnabled:(bool)arg1 error:(id*)arg2;
- (bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDisplayCornerMasks:(id)arg1;
- (bool)setHeadTrackedSpatialAudioMode:(id)arg1 error:(id*)arg2;
- (void)setImplEventListener:(id)arg1;
- (void)setMediaRemoteData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setMuted:(bool)arg1;
- (void)setRouteDescriptor:(struct __CFDictionary { }*)arg1;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setSecondDisplayMode:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setSiriForwardingEnabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (bool)siriForwardingEnabled;
- (void)suggestUIWithURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)supportedFeatures;
- (bool)supportsBluetoothSharing;
- (bool)supportsBufferedAirPlay;
- (bool)supportsConversationDetection;
- (id)supportsDataOverACLProtocol;
- (bool)supportsFitnessDataDestination;
- (bool)supportsHeadTrackedSpatialAudio;
- (bool)supportsScreenMirroringControls;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (long long)transportType;
- (long long)voiceTriggerMode;
- (float)volume;
- (long long)volumeControlType;
- (float)volumeForActivatedDeviceClusterMembersWithRoomID:(id)arg1;

@end
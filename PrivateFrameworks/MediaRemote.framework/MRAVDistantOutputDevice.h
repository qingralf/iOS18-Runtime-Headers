/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {
    NSArray * _activatedClusterMemebers;
    NSArray * _allClusterMembers;
    NSArray * _clusterComposition;
    NSDictionary * _modelSpecificInfo;
    _MRAVOutputDeviceDescriptorProtobuf * _protobuf;
    NSArray * _rooms;
    MRAVOutputDeviceSourceInfo * _sourceInfo;
}

@property (nonatomic, readonly) _MRAVOutputDeviceDescriptorProtobuf *generateDescriptor;
@property (nonatomic, readonly) _MRAVOutputDeviceDescriptorProtobuf *protobuf;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MACAddress;
- (id)activatedClusterMembersOutputDevices;
- (id)airPlayGroupID;
- (id)allClusterMembers;
- (bool)allowsHeadTrackedSpatialAudio;
- (id)availableBluetoothListeningModes;
- (float)batteryLevel;
- (id)bluetoothID;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (id)clusterComposition;
- (id)clusterID;
- (unsigned int)clusterType;
- (unsigned long long)configuredClusterSize;
- (id)currentBluetoothListeningMode;
- (id)descriptor;
- (id)deviceEnclosureColor;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (bool)discoveredOnSameInfra;
- (float)distance;
- (id)dnsNames;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareVersion;
- (id)generateDescriptor;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (id)groupSessionInfo;
- (id)groupableOutputDevice;
- (bool)hasBatteryLevel;
- (id)headTrackedSpatialAudioMode;
- (long long)hostDeviceClass;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithSkeleton:(id)arg1;
- (bool)isAddedToHomeKit;
- (bool)isAirPlayReceiverSessionActive;
- (bool)isAppleAccessory;
- (bool)isClusterLeader;
- (bool)isConversationDetectionEnabled;
- (bool)isDeviceGroupable;
- (bool)isGroupLeader;
- (bool)isGroupable;
- (bool)isHeadTrackedSpatialAudioActive;
- (bool)isLocalDevice;
- (bool)isPickable;
- (bool)isPickedOnPairedDevice;
- (bool)isProxyGroupPlayer;
- (bool)isRemoteControllable;
- (bool)isUsingJSONProtocol;
- (bool)isVolumeMuted;
- (id)logicalDeviceID;
- (id)modelID;
- (id)modelSpecificInfo;
- (id)name;
- (bool)parentGroupContainsDiscoverableLeader;
- (id)parentGroupIdentifier;
- (id)parentUID;
- (id)playingPairedDeviceName;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)primaryID;
- (bool)producesLowFidelityAudio;
- (id)protobuf;
- (bool)requiresAuthorization;
- (id)roomID;
- (id)roomName;
- (id)rooms;
- (id)sourceInfo;
- (bool)supportsBluetoothSharing;
- (bool)supportsBufferedAirPlay;
- (bool)supportsConversationDetection;
- (bool)supportsEngageOnClusterActivation;
- (bool)supportsExternalScreen;
- (bool)supportsHAP;
- (bool)supportsHeadTrackedSpatialAudio;
- (bool)supportsMultiplayer;
- (bool)supportsRapport;
- (bool)supportsRapportRemoteControlTransport;
- (bool)supportsSharePlayHandoff;
- (id)tightSyncID;
- (long long)transportType;
- (id)uid;
- (float)volume;
- (unsigned int)volumeCapabilities;

@end
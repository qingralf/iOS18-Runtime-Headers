/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECDevice : CoreRCDevice {
    unsigned long long  _allDeviceTypes;
    NSDictionary * _audioFormats;
    unsigned long long  _audioFormatsCount;
    bool  _audioMuteStatus;
    bool  _audioReturnChannelControlEnabled;
    unsigned long long  _audioVolumeStatus;
    unsigned long long  _cecVersion;
    unsigned long long  _deckStatus;
    unsigned long long  _deviceFeatures;
    unsigned long long  _deviceType;
    bool  _isActiveSource;
    unsigned long long  _knownDeviceFeatures;
    unsigned char  _logicalAddress;
    unsigned long long  _physicalAddress;
    unsigned long long  _powerStatus;
    NSDictionary * _rcProfile;
    bool  _systemAudioControlEnabled;
    unsigned long long  _vendorID;
}

@property (nonatomic) unsigned long long allDeviceTypes;
@property (nonatomic, readonly) NSString *analyticsDescription;
@property (nonatomic, readonly) NSString *analyticsKey;
@property (nonatomic, copy) NSDictionary *audioFormats;
@property (nonatomic) unsigned long long audioFormatsCount;
@property (nonatomic) bool audioMuteStatus;
@property (nonatomic) bool audioReturnChannelControlEnabled;
@property (nonatomic) unsigned long long audioVolumeStatus;
@property (nonatomic) unsigned long long cecVersion;
@property (nonatomic) unsigned long long deckStatus;
@property (nonatomic) unsigned long long deviceFeatures;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) bool isActiveSource;
@property (nonatomic, readonly) bool isCEC2Device;
@property (nonatomic, readonly) bool isUnregistered;
@property (nonatomic) unsigned long long knownDeviceFeatures;
@property (nonatomic) unsigned char logicalAddress;
@property (nonatomic) unsigned long long physicalAddress;
@property (nonatomic) unsigned long long powerStatus;
@property (nonatomic, copy) NSDictionary *rcProfile;
@property (nonatomic, readonly) bool systemAudioControlEnabled;
@property (nonatomic) unsigned long long vendorID;

+ (bool)supportsSecureCoding;

- (unsigned long long)allDeviceTypes;
- (id)analyticsDescription;
- (id)analyticsKey;
- (id)audioFormats;
- (unsigned long long)audioFormatsCount;
- (bool)audioMuteStatus;
- (bool)audioReturnChannelControlEnabled;
- (void)audioStatusReceived:(unsigned long long)arg1 muteStatus:(bool)arg2;
- (unsigned long long)audioVolumeStatus;
- (unsigned long long)cecVersion;
- (void)dealloc;
- (void)deckControlCommandHasBeenReceived:(unsigned long long)arg1 fromDevice:(id)arg2;
- (bool)deckControlCommandWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3;
- (void)deckControlPlayHasBeenReceived:(unsigned long long)arg1 fromDevice:(id)arg2;
- (bool)deckControlPlayWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3;
- (bool)deckControlRefreshStatus:(id)arg1 requestType:(unsigned long long)arg2 error:(id*)arg3;
- (bool)deckControlSetDeckStatus:(unsigned long long)arg1 error:(id*)arg2;
- (void)deckControlStatusHasBeenUpdated:(unsigned long long)arg1 fromDevice:(id)arg2;
- (unsigned long long)deckStatus;
- (unsigned long long)defaultKnownDeviceFeaturesMaskForCECVersion:(unsigned long long)arg1;
- (id)delegate;
- (id)description;
- (unsigned long long)deviceFeatures;
- (unsigned long long)deviceType;
- (void)didChangePowerStatus:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)featureAbort:(id)arg1;
- (unsigned long long)featureSupportStatus:(unsigned long long)arg1;
- (id)initWithBus:(id)arg1 local:(bool)arg2;
- (id)initWithBus:(id)arg1 local:(bool)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 attributes:(id)arg5;
- (id)initWithBus:(id)arg1 local:(bool)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 deviceType:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)isActiveSource;
- (bool)isCEC2Device;
- (bool)isUnregistered;
- (unsigned long long)knownDeviceFeatures;
- (unsigned char)logicalAddress;
- (bool)makeActiveSourceWithTVMenus:(bool)arg1 error:(id*)arg2;
- (id)mergeProperties;
- (void)notifyDelegateActiveSourceStatusHasChanged;
- (void)notifyDelegateAudioStatusReceived:(unsigned long long)arg1 muteStatus:(bool)arg2;
- (void)notifyDelegateDeckControlCommandHasBeenReceived:(id)arg1 command:(unsigned long long)arg2;
- (void)notifyDelegateDeckControlPlayHasBeenReceived:(id)arg1 playMode:(unsigned long long)arg2;
- (void)notifyDelegateDeckControlStatusHasBeenUpdated:(id)arg1 deckInfo:(unsigned long long)arg2;
- (void)notifyDelegateFeatureAbort:(id)arg1;
- (void)notifyDelegateReceivedRequestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 fromDevice:(id)arg2;
- (void)notifyDelegateReceivedRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 fromDevice:(id)arg2;
- (void)notifyDelegateRequestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 didFinishWithResult:(bool)arg2 error:(id)arg3;
- (void)notifyDelegateRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 didFinishWithResult:(bool)arg2 error:(id)arg3;
- (void)notifyDelegateShouldAssertActiveSource;
- (void)notifyDelegateStandbyRequestHasBeenReceived:(id)arg1;
- (bool)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2;
- (unsigned long long)physicalAddress;
- (unsigned long long)powerStatus;
- (id)rcProfile;
- (void)receivedRequestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 fromDevice:(id)arg2;
- (void)receivedRequestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 fromDevice:(id)arg2;
- (bool)refreshDevices:(id*)arg1;
- (bool)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3;
- (bool)refreshPropertiesOfDevice:(id)arg1 error:(id*)arg2;
- (bool)requestActiveSource:(id*)arg1;
- (void)requestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 didFinishWithResult:(bool)arg2 error:(id)arg3;
- (bool)requestAudioReturnChannelStatusChangeTo:(unsigned long long)arg1 error:(id*)arg2;
- (bool)requestAudioStatus:(id*)arg1;
- (void)requestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 didFinishWithResult:(bool)arg2 error:(id)arg3;
- (bool)requestSystemAudioModeStatusChangeTo:(unsigned long long)arg1 error:(id*)arg2;
- (bool)resignActiveSource:(id*)arg1;
- (void)sendAnalyticsForErrorString:(id)arg1 vendorID:(unsigned short)arg2 productID:(unsigned short)arg3 serialNumber:(unsigned int)arg4 week:(unsigned char)arg5 year:(unsigned char)arg6 monitorName:(id)arg7;
- (void)sendLogicalAddressErrorAnalyticsForMessage:(const char *)arg1;
- (void)setAllDeviceTypes:(unsigned long long)arg1;
- (void)setAudioFormats:(id)arg1;
- (void)setAudioFormatsCount:(unsigned long long)arg1;
- (void)setAudioMuteStatus:(bool)arg1;
- (bool)setAudioMuteStatus:(bool)arg1 error:(id*)arg2;
- (void)setAudioReturnChannelControlEnabled:(bool)arg1;
- (bool)setAudioReturnChannelControlEnabled:(bool)arg1 error:(id*)arg2;
- (void)setAudioVolumeStatus:(unsigned long long)arg1;
- (bool)setAudioVolumeStatus:(unsigned long long)arg1 error:(id*)arg2;
- (void)setCecVersion:(unsigned long long)arg1;
- (void)setDeckStatus:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceFeatures:(unsigned long long)arg1;
- (void)setDeviceType:(unsigned long long)arg1;
- (void)setFeature:(unsigned long long)arg1 supportStatus:(unsigned long long)arg2;
- (void)setIsActiveSource:(bool)arg1;
- (void)setKnownDeviceFeatures:(unsigned long long)arg1;
- (void)setLogicalAddress:(unsigned char)arg1;
- (void)setPhysicalAddress:(unsigned long long)arg1;
- (void)setPowerStatus:(unsigned long long)arg1;
- (bool)setPowerStatus:(unsigned long long)arg1 error:(id*)arg2;
- (void)setRcProfile:(id)arg1;
- (bool)setSupportedAudioFormats:(const struct CoreCECAudioFormat { unsigned char x1[3]; }*)arg1 count:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setSupportedAudioFormats:(id)arg1 error:(id*)arg2;
- (bool)setSystemAudioControlEnabled:(bool)arg1 error:(id*)arg2;
- (bool)setTrackAudioStatusEnabled:(bool)arg1 pressTimeout:(long long)arg2 pollInterval:(long long)arg3 error:(id*)arg4;
- (void)setVendorID:(unsigned long long)arg1;
- (void)shouldAssertActiveSource;
- (void)standbyRequestHasBeenReceived:(id)arg1;
- (bool)systemAudioControlEnabled;
- (bool)systemAudioModeRequest:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)vendorID;
- (void)willChangePowerStatus:(unsigned long long)arg1;

@end

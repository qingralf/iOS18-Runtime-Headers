/* Generated by RuntimeBrowser.
 */

@protocol BluetoothDeviceProtocol <NSObject>

@required

- (unsigned int)SendSetupCommand:(unsigned char)arg1;
- (NSDictionary *)accessoryInfo;
- (int)accessorySettingFeatureBitMask;
- (NSString *)address;
- (bool)ancsAuthorized;
- (int)autoAnswerMode;
- (bool)batteryStatus:(struct { unsigned char x1; unsigned int x2; unsigned char x3; unsigned int x4; unsigned char x5; unsigned int x6; unsigned char x7; unsigned int x8; unsigned char x9; unsigned int x10; }*)arg1;
- (BTSDevice *)btsDevice;
- (<BluetoothDeviceProtocol> *)classicDevice;
- (unsigned int)clickHoldMode:(int*)arg1 rightAction:(int*)arg2;
- (unsigned int)clickHoldModes:(struct { int x1; int x2; int x3; int x4; }*)arg1;
- (bool)cloudPaired;
- (bool)connected;
- (int)crownRotationDirection;
- (void)disconnect;
- (bool)doesSupportBackgroundNI;
- (unsigned int)doubleTapAction;
- (unsigned int)doubleTapActionEx:(unsigned int*)arg1 rightAction:(unsigned int*)arg2;
- (unsigned int)doubleTapCapability;
- (bool)featureCapability:(int)arg1;
- (bool)getAACPCapabilityBit:(int)arg1;
- (unsigned char)getAdaptiveVolumeMode;
- (bool)getAdaptiveVolumeSupport;
- (bool)getAutoANCSupport;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; })getCallManagementConfig;
- (unsigned char)getConversationDetectMode;
- (bool)getConversationDetectSupport;
- (unsigned char)getDeviceAdaptiveVolumeMode;
- (int)getDeviceColor:(unsigned int*)arg1;
- (bool)getDeviceSoundProfileAllowed;
- (bool)getHexDeviceAddress:(struct { unsigned char x1[6]; }*)arg1;
- (int)getLowSecurityStatus;
- (NSString *)getServiceSetting:(unsigned int)arg1 key:(NSString *)arg2;
- (unsigned char)getSpatialAudioPlatformSupport;
- (int)getUserSelectedDeviceType;
- (NSString *)healthDeviceType;
- (bool)hearingAidEnabled;
- (bool)hearingAidEnrolled;
- (bool)hearingAidSupport;
- (bool)hearingTestSupport;
- (NSString *)identifier;
- (bool)inEarDetectEnabled;
- (bool)inEarStatusPrimary:(int*)arg1 secondary:(int*)arg2;
- (bool)isAppleAudioDevice;
- (bool)isCTKDDevice;
- (bool)isFirmwareUpdateRequiredDevice;
- (bool)isGenuineAirPods;
- (bool)isGuestPairingMode;
- (bool)isLimitedConnectivityDevice;
- (bool)isManagedByAliroWallet;
- (bool)isManagedByWallet;
- (bool)isServiceSupported:(unsigned int)arg1;
- (bool)isTemporaryPaired;
- (unsigned int)listeningMode;
- (unsigned int)listeningModeConfigs;
- (bool)magicPaired;
- (unsigned int)micMode;
- (NSString *)name;
- (bool)paired;
- (unsigned int)productId;
- (NSString *)productName;
- (void)setANCSAuthorization:(bool)arg1;
- (void)setAdaptiveVolumeMode:(int)arg1;
- (bool)setAutoAnswerMode:(int)arg1;
- (bool)setCallConfig:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; })arg1;
- (bool)setClickHoldMode:(int)arg1 rightMode:(int)arg2;
- (bool)setClickHoldModes:(struct { int x1; int x2; int x3; int x4; })arg1;
- (void)setConversationDetectMode:(int)arg1;
- (bool)setCrownRotationDirection:(int)arg1;
- (void)setCtkdDevice:(bool)arg1;
- (void)setDeviceAdaptiveVolumeMode:(int)arg1;
- (void)setDeviceSoundProfileAllowed:(bool)arg1;
- (bool)setDoubleTapAction:(unsigned int)arg1;
- (bool)setDoubleTapActionEx:(unsigned int)arg1 rightAction:(unsigned int)arg2;
- (void)setGuestPairingMode:(bool)arg1;
- (void)setHearingAidEnabled:(bool)arg1;
- (void)setHearingAidEnrolled:(bool)arg1;
- (bool)setInEarDetectEnabled:(bool)arg1;
- (bool)setListeningMode:(unsigned int)arg1;
- (bool)setListeningModeConfigs:(unsigned int)arg1;
- (void)setManagedByAliroWallet:(bool)arg1;
- (void)setManagedByWallet:(bool)arg1;
- (bool)setMicMode:(unsigned int)arg1;
- (void)setServiceSetting:(unsigned int)arg1 key:(NSString *)arg2 value:(NSString *)arg3;
- (bool)setSmartRouteMode:(unsigned char)arg1;
- (void)setSupportsBackgroundNI:(bool)arg1;
- (void)setSyncGroup:(int)arg1 enabled:(bool)arg2;
- (void)setSyncSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; })arg1;
- (bool)setUserName:(NSString *)arg1;
- (bool)setUserSelectedDeviceType:(int)arg1;
- (void)setUserSelectedHealthDataSyncConfig:(unsigned char)arg1;
- (unsigned char)smartRouteMode;
- (bool)smartRouteSupport;
- (bool)supportsANCS;
- (NSArray *)syncGroups;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; })syncSettings;
- (void)unpair;
- (unsigned char)userSelectedHealthDataSyncConfig;
- (unsigned int)vendorId;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadphoneConfigs.framework/HeadphoneConfigs
 */

@interface BTSDeviceClassic : BTSDevice {
    BluetoothDevice * _device;
    NSString * accessorySetupKitDisplayName;
    bool  ctkdDevice;
    bool  denyIncomingClassicConnection;
    bool  managedByAliroWallet;
    bool  managedByDeviceAccess;
    bool  managedByWallet;
    bool  supportsBackgroundNI;
}

@property (nonatomic, readonly) BluetoothDevice *device;

+ (id)deviceWithDevice:(id)arg1;

- (void).cxx_destruct;
- (id)accessorySetupKitDisplayName;
- (bool)ancsAuthorized;
- (id)classicDevice;
- (bool)cloudPaired;
- (bool)connect;
- (bool)connected;
- (id)description;
- (id)device;
- (void)disconnect;
- (bool)doesSupportBackgroundNI;
- (id)healthDeviceType;
- (id)identifier;
- (id)initWithDevice:(id)arg1;
- (bool)isApplePencil:(int*)arg1;
- (bool)isCTKDDevice;
- (bool)isCarPlayDevice;
- (bool)isFirmwareUpdateRequiredDevice;
- (bool)isHIDDevice;
- (bool)isHealthDevice;
- (bool)isLimitedConnectivityDevice;
- (bool)isManagedByAliroWallet;
- (bool)isManagedByDeviceAccess;
- (bool)isManagedByWallet;
- (bool)isMyDevice;
- (bool)isTemporaryPairedDevice;
- (bool)magicPaired;
- (id)name;
- (bool)paired;
- (id)productName;
- (void)setAccessorySetupKitDisplayName:(id)arg1;
- (void)setCtkdDevice:(bool)arg1;
- (void)setDenyIncomingClassicConnection:(bool)arg1;
- (void)setManagedByAliroWallet:(bool)arg1;
- (void)setManagedByWallet:(bool)arg1;
- (void)setSupportsBackgroundNI:(bool)arg1;
- (bool)setUserName:(id)arg1;
- (bool)shouldDenyIncomingClassicConnection;
- (bool)supportsANCS;
- (void)unpair;
- (int)userSelectedHealthDataSyncConfig;

@end
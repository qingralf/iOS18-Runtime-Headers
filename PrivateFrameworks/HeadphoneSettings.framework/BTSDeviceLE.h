/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadphoneConfigs.framework/HeadphoneConfigs
 */

@interface BTSDeviceLE : BTSDevice {
    CBCentralManager * _centralManager;
    CBPeripheral * _peripheral;
    DADevice * _underlyingDADevice;
    bool  ctkdDevice;
    bool  denyIncomingClassicConnection;
    bool  healthDevice;
    bool  managedByAliroWallet;
    bool  managedByDeviceAccess;
    bool  managedByWallet;
    bool  supportsBackgroundNI;
}

@property (nonatomic, retain) DADevice *underlyingDADevice;

+ (id)deviceWithPeripheral:(id)arg1 manager:(id)arg2;

- (void).cxx_destruct;
- (bool)ancsAuthorized;
- (id)classicDevice;
- (bool)cloudPaired;
- (bool)connect;
- (bool)connected;
- (id)description;
- (void)disconnect;
- (bool)doesSupportBackgroundNI;
- (id)healthDeviceType;
- (id)identifier;
- (id)initWithPeripheral:(id)arg1 manager:(id)arg2;
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
- (id)linkedRadioAddress;
- (id)name;
- (bool)paired;
- (id)productName;
- (id)relatedFutureRadioAddress;
- (void)setANCSAuthorization:(bool)arg1;
- (void)setCtkdDevice:(bool)arg1;
- (void)setDenyIncomingClassicConnection:(bool)arg1;
- (void)setHealthDevice:(bool)arg1;
- (void)setManagedByAliroWallet:(bool)arg1;
- (void)setManagedByWallet:(bool)arg1;
- (void)setSupportsBackgroundNI:(bool)arg1;
- (void)setUnderlyingDADevice:(id)arg1;
- (bool)setUserName:(id)arg1;
- (void)setUserSelectedHealthDataSyncConfig:(int)arg1;
- (bool)shouldDenyIncomingClassicConnection;
- (bool)supportsANCS;
- (bool)supportsCTKD;
- (id)underlyingDADevice;
- (void)unpair;
- (int)userSelectedHealthDataSyncConfig;

@end

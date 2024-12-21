/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicleAccessory : NSObject <CRMessagingServiceVehicleRepresenting> {
    NSString * _PPID;
    EAAccessory * _accessory;
    NSArray * _accessoryProtocols;
    NSString * _bluetoothAddress;
    NSData * _certificateSerialNumber;
    NSNumber * _connectionID;
    NSDictionary * _digitalCarKeyInformation;
    bool  _supportsBluetoothLE;
    bool  _supportsCarPlayConnectionRequest;
    bool  _supportsEnhancedIntegration;
    bool  _supportsThemeAssets;
    bool  _supportsUSBCarPlay;
    bool  _supportsWiredBluetoothPairing;
    bool  _supportsWirelessCarPlay;
    long long  _transportType;
    NSDictionary * _vehicleAccessoryInfoKeysCache;
    NSDictionary * _vehicleInfoDataCache;
    NSString * _vehicleModelName;
    NSString * _vehicleName;
}

@property (nonatomic, retain) NSString *PPID;
@property (nonatomic) EAAccessory *accessory;
@property (nonatomic, retain) NSArray *accessoryProtocols;
@property (nonatomic, readonly) NSDictionary *analyticsDescription;
@property (nonatomic, retain) NSString *bluetoothAddress;
@property (nonatomic, retain) NSData *certificateSerialNumber;
@property (nonatomic, retain) NSNumber *connectionID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *digitalCarKeyInformation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *radarDescription;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsBluetoothLE;
@property (nonatomic) bool supportsCarPlayConnectionRequest;
@property (nonatomic) bool supportsEnhancedIntegration;
@property (nonatomic) bool supportsThemeAssets;
@property (nonatomic) bool supportsUSBCarPlay;
@property (nonatomic) bool supportsWiredBluetoothPairing;
@property (nonatomic) bool supportsWirelessCarPlay;
@property (nonatomic) long long transportType;
@property (nonatomic, readonly) NSDictionary *vehicleAccessoryInfoKeys;
@property (nonatomic, copy) NSDictionary *vehicleAccessoryInfoKeysCache;
@property (nonatomic, copy) NSDictionary *vehicleInfoDataCache;
@property (nonatomic, retain) NSString *vehicleModelName;
@property (nonatomic, retain) NSString *vehicleName;

+ (long long)_transportTypeForExternalAccessoryTransportType:(int)arg1;

- (void).cxx_destruct;
- (id)PPID;
- (bool)_updateName;
- (id)accessory;
- (id)accessoryProtocols;
- (id)analyticsDescription;
- (void)beginWiredBluetoothPairing:(id /* block */)arg1;
- (id)bluetoothAddress;
- (id)certificateSerialNumber;
- (id)connectionID;
- (id)coreAccessoriesEndpointUUID;
- (id)description;
- (id)digitalCarKeyInformation;
- (id)displayName;
- (bool)isBluetoothConnected;
- (id)radarDescription;
- (void)requestWiFiCredentials;
- (void)sendDeviceTransportIdentifiers;
- (void)sendWiredCarPlayAvailable:(id)arg1 usbIdentifier:(id)arg2 wirelessCarPlayAvailable:(id)arg3 bluetoothIdentifier:(id)arg4 themeAssetsAvailable:(id)arg5;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryProtocols:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCertificateSerialNumber:(id)arg1;
- (void)setConnectionID:(id)arg1;
- (void)setDigitalCarKeyInformation:(id)arg1;
- (void)setPPID:(id)arg1;
- (void)setSupportsBluetoothLE:(bool)arg1;
- (void)setSupportsCarPlayConnectionRequest:(bool)arg1;
- (void)setSupportsEnhancedIntegration:(bool)arg1;
- (void)setSupportsThemeAssets:(bool)arg1;
- (void)setSupportsUSBCarPlay:(bool)arg1;
- (void)setSupportsWiredBluetoothPairing:(bool)arg1;
- (void)setSupportsWirelessCarPlay:(bool)arg1;
- (void)setTransportType:(long long)arg1;
- (void)setVehicleAccessoryInfoKeysCache:(id)arg1;
- (void)setVehicleInfoDataCache:(id)arg1;
- (void)setVehicleModelName:(id)arg1;
- (void)setVehicleName:(id)arg1;
- (bool)supportsBluetoothLE;
- (bool)supportsCarPlayConnectionRequest;
- (bool)supportsEnhancedIntegration;
- (bool)supportsThemeAssets;
- (bool)supportsUSBCarPlay;
- (bool)supportsWiredBluetoothPairing;
- (bool)supportsWirelessCarPlay;
- (long long)transportType;
- (id)vehicleAccessoryInfoKeys;
- (id)vehicleAccessoryInfoKeysCache;
- (id)vehicleInfoDataCache;
- (id)vehicleModelName;
- (id)vehicleName;

@end
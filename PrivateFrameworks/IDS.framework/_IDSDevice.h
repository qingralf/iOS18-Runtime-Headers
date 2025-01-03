/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSDevice : NSObject <IDSDeviceStateMonitoringDelegate> {
    CUTWeakReference * _account;
    IDSEndpointCapabilities * _capabilities;
    bool  _cloudConnected;
    bool  _connected;
    bool  _immutableCloudConnected;
    NSDictionary * _info;
    IDSDeviceStateMonitoring * _monitor;
    bool  _nearby;
    CUTWeakReference * _serviceReference;
}

@property (nonatomic, readonly) IDSEndpointCapabilities *capabilities;
@property (getter=isCloudConnected, nonatomic, readonly) bool cloudConnected;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceColor;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSString *enclosureColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *identities;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isDefaultPairedDevice;
@property (nonatomic, readonly) bool isHSATrusted;
@property (nonatomic, readonly) bool isLocallyPaired;
@property (nonatomic, readonly) NSDate *lastActivityDate;
@property (nonatomic, readonly) NSArray *linkedUserURIs;
@property (nonatomic, readonly) bool locallyPresent;
@property (nonatomic, readonly) unsigned long long maxCompatibilityVersion;
@property (nonatomic, readonly) unsigned long long minCompatibilityVersion;
@property (nonatomic, readonly) NSString *modelIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (getter=isNearby, nonatomic, readonly) bool nearby;
@property (setter=setNSUUID:, nonatomic, retain) NSUUID *nsuuid;
@property (nonatomic, readonly) unsigned long long pairingProtocolVersion;
@property (nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic, readonly) long long relationship;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) unsigned long long serviceMinCompatibilityVersion;
@property (nonatomic, readonly) NSUUID *stableBluetoothIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsApplePay;
@property (nonatomic, readonly) bool supportsHandoff;
@property (nonatomic, readonly) bool supportsMMSRelay;
@property (nonatomic, readonly) bool supportsPhoneCalls;
@property (nonatomic, readonly) bool supportsSMSRelay;
@property (nonatomic, readonly) bool supportsTethering;
@property (nonatomic, readonly) bool supportsiCloudPairing;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *uniqueIDOverride;

- (void).cxx_destruct;
- (void)_addIdentity:(id)arg1;
- (void)_cloudConnectedStateChanged;
- (void)_connectedStateChanged;
- (void)_nearbyStateChanged;
- (void)_setAccount:(id)arg1;
- (void)_setService:(id)arg1;
- (void)_stateChanged;
- (void)cancel;
- (id)capabilities;
- (id)compactDescription;
- (void)dealloc;
- (id)description;
- (id)deviceColor;
- (long long)deviceType;
- (id)enclosureColor;
- (id)fullDescription;
- (id)identities;
- (id)initWithDictionary:(id)arg1;
- (bool)isActive;
- (bool)isCloudConnected;
- (bool)isConnected;
- (bool)isDefaultPairedDevice;
- (bool)isHSATrusted;
- (bool)isLocallyPaired;
- (bool)isNearby;
- (bool)isTinker;
- (id)lastActivityDate;
- (id)linkedUserURIs;
- (bool)locallyPresent;
- (unsigned long long)maxCompatibilityVersion;
- (unsigned long long)minCompatibilityVersion;
- (id)modelIdentifier;
- (id)name;
- (id)nsuuid;
- (unsigned long long)pairingProtocolVersion;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (id)pushToken;
- (long long)relationship;
- (id)service;
- (unsigned long long)serviceMinCompatibilityVersion;
- (void)setNSUUID:(id)arg1;
- (id)stableBluetoothIdentifier;
- (void)stateDidChange:(unsigned long long)arg1;
- (bool)supportsApplePay;
- (bool)supportsHandoff;
- (bool)supportsMMSRelay;
- (bool)supportsPhoneCalls;
- (bool)supportsSMSRelay;
- (bool)supportsTethering;
- (bool)supportsiCloudPairing;
- (id)uniqueID;
- (id)uniqueIDOverride;

@end

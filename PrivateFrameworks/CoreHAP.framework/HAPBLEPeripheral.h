/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBLEPeripheral : HMFObject <NSCopying> {
    NSString * _advDeviceAddress;
    NSNumber * _advInterval;
    unsigned long long  _advertisementFormat;
    NSNumber * _averageRSSI;
    NSNumber * _category;
    CBPeripheral * _cbPeripheral;
    NSMutableArray * _cbPeripheralUUIDs;
    NSNumber * _configNumber;
    NSData * _encryptedPayload;
    NSNumber * _hkType;
    NSString * _identifier;
    bool  _isCached;
    double  _lastSeen;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSData * _setupHash;
    NSNumber * _stateNumber;
    NSNumber * _statusFlags;
    NSUUID * _uniqueBTIdentifier;
    NSString * _whbStableIdentifier;
}

@property (retain) NSString *advDeviceAddress;
@property (retain) NSNumber *advInterval;
@property unsigned long long advertisementFormat;
@property (retain) NSNumber *averageRSSI;
@property (retain) NSNumber *category;
@property (retain) CBPeripheral *cbPeripheral;
@property (nonatomic, retain) NSMutableArray *cbPeripheralUUIDs;
@property (retain) NSNumber *configNumber;
@property (retain) NSData *encryptedPayload;
@property (retain) NSNumber *hkType;
@property (copy) NSString *identifier;
@property bool isCached;
@property (nonatomic, readonly) bool isReachable;
@property double lastSeen;
@property (copy) NSString *name;
@property (nonatomic, readonly) NSArray *peripheralUUIDs;
@property (retain) NSData *setupHash;
@property (retain) NSNumber *stateNumber;
@property (retain) NSNumber *statusFlags;
@property (readonly) NSUUID *uniqueBTIdentifier;
@property (copy) NSString *whbStableIdentifier;

+ (id)uuidForBTLEPeripheral:(id)arg1;

- (void).cxx_destruct;
- (void)_updateAverageRSSIWithRSSI:(id)arg1;
- (id)advDeviceAddress;
- (id)advInterval;
- (unsigned long long)advertisementFormat;
- (id)averageRSSI;
- (id)category;
- (id)cbPeripheral;
- (id)cbPeripheralUUIDs;
- (long long)compareConfigNumber:(id)arg1;
- (long long)compareStateNumber:(id)arg1;
- (id)configNumber;
- (void)connectedToCBPeripheral:(id)arg1 error:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)disconnectedFromCBPeripheral:(id)arg1 shouldRemove:(bool)arg2;
- (id)encryptedPayload;
- (unsigned long long)hash;
- (id)hkType;
- (id)identifier;
- (id)initWithName:(id)arg1 peripheralUUID:(id)arg2 identifier:(id)arg3 hapVersion:(id)arg4 hkType:(id)arg5 advInterval:(id)arg6 statusFlags:(id)arg7 category:(id)arg8 stateNumber:(id)arg9 configNumber:(id)arg10 setupHash:(id)arg11 encryptedPayload:(id)arg12 whbStableIdentifier:(id)arg13 advDeviceAddress:(id)arg14;
- (bool)isBroadcasting;
- (bool)isCached;
- (bool)isEqual:(id)arg1;
- (bool)isReachable;
- (double)lastSeen;
- (void)mergeWithPeripheral:(id)arg1;
- (id)name;
- (id)peripheralUUIDs;
- (void)reset;
- (void)setAdvDeviceAddress:(id)arg1;
- (void)setAdvInterval:(id)arg1;
- (void)setAdvertisementFormat:(unsigned long long)arg1;
- (void)setAverageRSSI:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCbPeripheral:(id)arg1;
- (void)setCbPeripheralUUIDs:(id)arg1;
- (void)setConfigNumber:(id)arg1;
- (void)setEncryptedPayload:(id)arg1;
- (void)setHkType:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsCached:(bool)arg1;
- (void)setLastSeen:(double)arg1;
- (void)setName:(id)arg1;
- (void)setSetupHash:(id)arg1;
- (void)setStateNumber:(id)arg1;
- (void)setStatusFlags:(id)arg1;
- (void)setWhbStableIdentifier:(id)arg1;
- (id)setupHash;
- (id)shortDescription;
- (id)stateNumber;
- (id)statusFlags;
- (id)uniqueBTIdentifier;
- (void)updateStateNumber:(id)arg1;
- (bool)updateWithPeripheral:(id)arg1;
- (id)whbStableIdentifier;

@end
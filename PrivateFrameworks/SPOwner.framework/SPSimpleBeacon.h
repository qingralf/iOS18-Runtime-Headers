/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPSimpleBeacon : NSObject <NSCopying> {
    long long  _batteryLevel;
    long long  _connectableDeviceCount;
    bool  _connectionAllowed;
    NSUUID * _groupIdentifier;
    NSUUID * _identifier;
    SPKeySyncRecord * _keySyncRecord;
    NSString * _manufacturerName;
    NSString * _modelName;
    NSString * _name;
    long long  _partIdentifier;
    long long  _productId;
    NSUUID * _productUUID;
    NSString * _serialNumber;
    NSString * _systemVersion;
    double  _txPower;
    NSString * _type;
    long long  _vendorId;
}

@property (nonatomic) long long batteryLevel;
@property (nonatomic) long long connectableDeviceCount;
@property (nonatomic) bool connectionAllowed;
@property (nonatomic, copy) NSUUID *groupIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) SPKeySyncRecord *keySyncRecord;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long partIdentifier;
@property (nonatomic) long long productId;
@property (nonatomic, copy) NSUUID *productUUID;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSString *systemVersion;
@property (nonatomic) double txPower;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) long long vendorId;

- (void).cxx_destruct;
- (long long)batteryLevel;
- (long long)connectableDeviceCount;
- (bool)connectionAllowed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithInternalSimpleBeacon:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keySyncRecord;
- (id)manufacturerName;
- (id)modelName;
- (id)name;
- (long long)partIdentifier;
- (long long)productId;
- (id)productUUID;
- (id)serialNumber;
- (void)setBatteryLevel:(long long)arg1;
- (void)setConnectableDeviceCount:(long long)arg1;
- (void)setConnectionAllowed:(bool)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeySyncRecord:(id)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPartIdentifier:(long long)arg1;
- (void)setProductId:(long long)arg1;
- (void)setProductUUID:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setTxPower:(double)arg1;
- (void)setType:(id)arg1;
- (void)setVendorId:(long long)arg1;
- (id)systemVersion;
- (double)txPower;
- (id)type;
- (long long)vendorId;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AccessorySetupKit.framework/AccessorySetupKit
 */

@interface ASDiscoveryDescriptor : NSObject <CUXPCCodable, NSCopying, NSSecureCoding> {
    NSString * _SSID;
    NSString * _SSIDPrefix;
    unsigned short  _bluetoothCompanyIdentifier;
    NSData * _bluetoothManufacturerDataBlob;
    NSData * _bluetoothManufacturerDataMask;
    NSString * _bluetoothNameSubstring;
    unsigned long long  _bluetoothNameSubstringCompareOptions;
    long long  _bluetoothRange;
    NSData * _bluetoothServiceDataBlob;
    NSData * _bluetoothServiceDataMask;
    CBUUID * _bluetoothServiceUUID;
    unsigned long long  _supportedOptions;
}

@property (nonatomic, copy) NSString *SSID;
@property (nonatomic, copy) NSString *SSIDPrefix;
@property (nonatomic) unsigned short bluetoothCompanyIdentifier;
@property (nonatomic, copy) NSData *bluetoothManufacturerDataBlob;
@property (nonatomic, copy) NSData *bluetoothManufacturerDataMask;
@property (nonatomic, copy) NSString *bluetoothNameSubstring;
@property (nonatomic) unsigned long long bluetoothNameSubstringCompareOptions;
@property (nonatomic) long long bluetoothRange;
@property (nonatomic, copy) NSData *bluetoothServiceDataBlob;
@property (nonatomic, copy) NSData *bluetoothServiceDataMask;
@property (nonatomic, copy) CBUUID *bluetoothServiceUUID;
@property (nonatomic) unsigned long long supportedOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SSID;
- (id)SSIDPrefix;
- (unsigned short)bluetoothCompanyIdentifier;
- (id)bluetoothManufacturerDataBlob;
- (id)bluetoothManufacturerDataMask;
- (id)bluetoothNameSubstring;
- (unsigned long long)bluetoothNameSubstringCompareOptions;
- (long long)bluetoothRange;
- (id)bluetoothServiceDataBlob;
- (id)bluetoothServiceDataMask;
- (id)bluetoothServiceUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiscoveryConfiguration:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (void)setBluetoothCompanyIdentifier:(unsigned short)arg1;
- (void)setBluetoothManufacturerDataBlob:(id)arg1;
- (void)setBluetoothManufacturerDataMask:(id)arg1;
- (void)setBluetoothNameSubstring:(id)arg1;
- (void)setBluetoothNameSubstringCompareOptions:(unsigned long long)arg1;
- (void)setBluetoothRange:(long long)arg1;
- (void)setBluetoothServiceDataBlob:(id)arg1;
- (void)setBluetoothServiceDataMask:(id)arg1;
- (void)setBluetoothServiceUUID:(id)arg1;
- (void)setSSID:(id)arg1;
- (void)setSSIDPrefix:(id)arg1;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (unsigned long long)supportedOptions;

@end
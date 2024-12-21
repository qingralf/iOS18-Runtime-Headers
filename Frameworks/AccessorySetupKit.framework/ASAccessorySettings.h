/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AccessorySetupKit.framework/AccessorySetupKit
 */

@interface ASAccessorySettings : NSObject <CUXPCCodable, NSCopying, NSSecureCoding> {
    NSString * _SSID;
    NSData * _bluetoothTransportBridgingIdentifier;
    NSString * _displayName;
}

@property (nonatomic, copy) NSString *SSID;
@property (nonatomic, copy) NSData *bluetoothTransportBridgingIdentifier;
@property (nonatomic, copy) NSString *displayName;

+ (id)defaultSettings;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SSID;
- (id)bluetoothTransportBridgingIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)setBluetoothTransportBridgingIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSSID:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding> {
    NSData * _advertisementData;
    NSNumber * _batteryLife;
    bool  _cellularSlicingIsEnabled;
    NSString * _deviceIdentifier;
    NSString * _deviceName;
    long long  _group;
    bool  _hasDuplicates;
    NSString * _model;
    unsigned char  _networkType;
    bool  _osSupportsAutoHotspot;
    NSNumber * _signalStrength;
    bool  _supportsCompanionLink;
}

@property (nonatomic, readonly, copy) NSData *advertisementData;
@property (retain) NSNumber *batteryLife;
@property bool cellularSlicingIsEnabled;
@property (copy) NSString *deviceIdentifier;
@property (copy) NSString *deviceName;
@property long long group;
@property bool hasDuplicates;
@property (retain) NSString *model;
@property unsigned char networkType;
@property bool osSupportsAutoHotspot;
@property (retain) NSNumber *signalStrength;
@property (nonatomic) bool supportsCompanionLink;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisementData;
- (id)batteryLife;
- (id)batteryLifeFromInfo:(unsigned int)arg1;
- (bool)cellularSlicingIsEnabled;
- (bool)componentsAreEqualTo:(id)arg1;
- (id)description;
- (id)deviceIdentifier;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (long long)group;
- (bool)hasDuplicates;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 advertisement:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; })arg3;
- (bool)isEqual:(id)arg1;
- (id)model;
- (unsigned char)networkType;
- (unsigned char)networkTypeForIncomingType:(unsigned char)arg1;
- (unsigned char)networkTypeFromInfo:(unsigned int)arg1;
- (bool)osSupportsAutoHotspot;
- (void)setBatteryLife:(id)arg1;
- (void)setCellularSlicingIsEnabled:(bool)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setGroup:(long long)arg1;
- (void)setHasDuplicates:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setNetworkType:(unsigned char)arg1;
- (void)setOsSupportsAutoHotspot:(bool)arg1;
- (void)setSignalStrength:(id)arg1;
- (void)setSupportsCompanionLink:(bool)arg1;
- (id)signalStrength;
- (id)signalStrengthFromInfo:(unsigned int)arg1;
- (bool)supportsCompanionLink;
- (void)updateWithHotspotInfo:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (id)cellularProtocolString;

@end

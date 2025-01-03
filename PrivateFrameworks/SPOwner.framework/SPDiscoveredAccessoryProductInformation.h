/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPDiscoveredAccessoryProductInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appBundleIdentifier;
    long long  _beaconGroupVersion;
    unsigned long long  _capabilities;
    NSURL * _defaultHeroIcon;
    NSURL * _defaultHeroIcon2x;
    NSURL * _defaultHeroIcon3x;
    NSURL * _defaultListIcon;
    NSURL * _defaultListIcon2x;
    NSURL * _defaultListIcon3x;
    SPBeaconRole * _defaultRole;
    SPUnknownProductMetadata * _disableMetadata;
    NSURL * _disableURL;
    bool  _eligibleForPairing;
    NSData * _encryptionKeyE1;
    NSData * _encryptionKeyE2;
    NSString * _findmyProductId;
    bool  _hidden;
    bool  _isAirTag;
    bool  _isAppleAudioAccessory;
    bool  _isHELEAccessory;
    bool  _isManagedAccessory;
    NSArray * _layoutTemplate;
    SPUnknownProductMetadata * _learnModeMetadata;
    NSURL * _lowBatteryInfoURL;
    NSString * _manufacturerName;
    NSString * _modelName;
    bool  _supportBeaconGroupInfo;
    double  _txPower;
    NSData * _verificationKeyS2;
    NSString * _version;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic) long long beaconGroupVersion;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic, copy) NSURL *defaultHeroIcon;
@property (nonatomic, copy) NSURL *defaultHeroIcon2x;
@property (nonatomic, copy) NSURL *defaultHeroIcon3x;
@property (nonatomic, copy) NSURL *defaultListIcon;
@property (nonatomic, copy) NSURL *defaultListIcon2x;
@property (nonatomic, copy) NSURL *defaultListIcon3x;
@property (nonatomic, copy) SPBeaconRole *defaultRole;
@property (nonatomic, copy) SPUnknownProductMetadata *disableMetadata;
@property (nonatomic, copy) NSURL *disableURL;
@property (nonatomic) bool eligibleForPairing;
@property (nonatomic, copy) NSData *encryptionKeyE1;
@property (nonatomic, copy) NSData *encryptionKeyE2;
@property (nonatomic, copy) NSString *findmyProductId;
@property (nonatomic) bool hidden;
@property (nonatomic) bool isAirTag;
@property (nonatomic) bool isAppleAudioAccessory;
@property (nonatomic) bool isHELEAccessory;
@property (nonatomic) bool isManagedAccessory;
@property (nonatomic, copy) NSArray *layoutTemplate;
@property (nonatomic, copy) SPUnknownProductMetadata *learnModeMetadata;
@property (nonatomic, copy) NSURL *lowBatteryInfoURL;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic) bool supportBeaconGroupInfo;
@property (nonatomic) double txPower;
@property (nonatomic, copy) NSData *verificationKeyS2;
@property (nonatomic, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (long long)beaconGroupVersion;
- (unsigned long long)capabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultHeroIcon;
- (id)defaultHeroIcon2x;
- (id)defaultHeroIcon3x;
- (id)defaultListIcon;
- (id)defaultListIcon2x;
- (id)defaultListIcon3x;
- (id)defaultRole;
- (id)description;
- (id)disableMetadata;
- (id)disableURL;
- (bool)eligibleForPairing;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionKeyE1;
- (id)encryptionKeyE2;
- (id)findmyProductId;
- (bool)hidden;
- (id)initWithCoder:(id)arg1;
- (bool)isAirTag;
- (bool)isAppleAudioAccessory;
- (bool)isHELEAccessory;
- (bool)isManagedAccessory;
- (id)layoutTemplate;
- (id)learnModeMetadata;
- (id)lowBatteryInfoURL;
- (id)manufacturerName;
- (id)modelName;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setBeaconGroupVersion:(long long)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setDefaultHeroIcon2x:(id)arg1;
- (void)setDefaultHeroIcon3x:(id)arg1;
- (void)setDefaultHeroIcon:(id)arg1;
- (void)setDefaultListIcon2x:(id)arg1;
- (void)setDefaultListIcon3x:(id)arg1;
- (void)setDefaultListIcon:(id)arg1;
- (void)setDefaultRole:(id)arg1;
- (void)setDisableMetadata:(id)arg1;
- (void)setDisableURL:(id)arg1;
- (void)setEligibleForPairing:(bool)arg1;
- (void)setEncryptionKeyE1:(id)arg1;
- (void)setEncryptionKeyE2:(id)arg1;
- (void)setFindmyProductId:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsAirTag:(bool)arg1;
- (void)setIsAppleAudioAccessory:(bool)arg1;
- (void)setIsHELEAccessory:(bool)arg1;
- (void)setIsManagedAccessory:(bool)arg1;
- (void)setLayoutTemplate:(id)arg1;
- (void)setLearnModeMetadata:(id)arg1;
- (void)setLowBatteryInfoURL:(id)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setSupportBeaconGroupInfo:(bool)arg1;
- (void)setTxPower:(double)arg1;
- (void)setVerificationKeyS2:(id)arg1;
- (void)setVersion:(id)arg1;
- (bool)supportBeaconGroupInfo;
- (double)txPower;
- (id)verificationKeyS2;
- (id)version;

@end

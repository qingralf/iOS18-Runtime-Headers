/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding> {
    bool  _autoUpdateEnabled;
    NSArray * _blockedBy;
    long long  _deviceFamilies;
    bool  _downloaded;
    bool  _iOSBinaryMacOSCompatible;
    NSDate * _installDate;
    NSDictionary * _metrics;
    long long  _packageType;
    bool  _perDevice;
    bool  _profileValidated;
    NSDictionary * _rawUpdateDictionary;
    long long  _rawUpdateState;
    bool  _requiresRosetta;
    bool  _runsOnAppleSilicon;
    bool  _runsOnIntel;
    NSDate * _timestamp;
    long long  _updateState;
}

@property (getter=isArcade, nonatomic, readonly) bool arcade;
@property (nonatomic) bool autoUpdateEnabled;
@property (nonatomic, copy) NSArray *blockedBy;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic) long long deviceFamilies;
@property (getter=isDownloaded, nonatomic) bool downloaded;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (getter=isIOSBinaryMacOSCompatible, nonatomic) bool iOSBinaryMacOSCompatible;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic, copy) NSDictionary *metrics;
@property (getter=packageType, nonatomic) long long packageType;
@property (nonatomic, readonly) long long parentalControlsRank;
@property (getter=isPerDevice, nonatomic) bool perDevice;
@property (getter=isProfileValidated, nonatomic) bool profileValidated;
@property (nonatomic, readonly) NSDictionary *rawUpdateDictionary;
@property (nonatomic) long long rawUpdateState;
@property (nonatomic, readonly) bool requiresRosetta;
@property (nonatomic, readonly) bool runsOnAppleSilicon;
@property (nonatomic, readonly) bool runsOnIntel;
@property (nonatomic, readonly) long long storeItemIdentifier;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, readonly) NSDictionary *updateDictionary;
@property (nonatomic) long long updateState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)autoUpdateEnabled;
- (id)blockedBy;
- (id)bundleIdentifier;
- (id)buyParams;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deviceFamilies;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdateDictionary:(id)arg1;
- (id)installDate;
- (bool)isArcade;
- (bool)isDownloaded;
- (bool)isIOSBinaryMacOSCompatible;
- (bool)isPerDevice;
- (bool)isProfileValidated;
- (id)metrics;
- (long long)packageType;
- (long long)parentalControlsRank;
- (id)rawUpdateDictionary;
- (long long)rawUpdateState;
- (id)releaseDate;
- (bool)requiresRosetta;
- (bool)runsOnAppleSilicon;
- (bool)runsOnIntel;
- (void)setAutoUpdateEnabled:(bool)arg1;
- (void)setBlockedBy:(id)arg1;
- (void)setDeviceFamilies:(long long)arg1;
- (void)setDownloaded:(bool)arg1;
- (void)setIOSBinaryMacOSCompatible:(bool)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setPackageType:(long long)arg1;
- (void)setPerDevice:(bool)arg1;
- (void)setProfileValidated:(bool)arg1;
- (void)setRawUpdateState:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUpdateState:(long long)arg1;
- (long long)storeItemIdentifier;
- (id)timestamp;
- (id)updateDictionary;
- (long long)updateState;

@end
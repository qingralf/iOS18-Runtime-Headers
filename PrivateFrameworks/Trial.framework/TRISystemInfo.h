/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRISystemInfo : NSObject <NSSecureCoding> {
    NSString * _aneVersion;
    NSString * _carrierBundleIdentifier;
    NSString * _carrierCountryIsoCode;
    NSArray * _enabledInputModeIdentifiers;
    bool  _hasAne;
    NSString * _iCloudIdentifier;
    bool  _isAutomatedTestDevice;
    bool  _isDiagnosticsAndUsageEnabled;
    bool  _isEnrolledInBetaProgram;
    bool  _logUserKeyboardEnabledInputMode;
    bool  _logUserSettingsLanguageCode;
    bool  _logUserSettingsRegionCode;
    NSDate * _siriDeviceAggregationIdRotationDate;
    NSString * _siriUserActivitySegment;
}

@property (nonatomic, retain) NSString *aneVersion;
@property (nonatomic, retain) NSString *carrierBundleIdentifier;
@property (nonatomic, retain) NSString *carrierCountryIsoCode;
@property (nonatomic, retain) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) bool hasAne;
@property (nonatomic, retain) NSString *iCloudIdentifier;
@property (nonatomic) bool isAutomatedTestDevice;
@property (nonatomic) bool isDiagnosticsAndUsageEnabled;
@property (nonatomic) bool isEnrolledInBetaProgram;
@property (nonatomic) bool logUserKeyboardEnabledInputMode;
@property (nonatomic) bool logUserSettingsLanguageCode;
@property (nonatomic) bool logUserSettingsRegionCode;
@property (nonatomic, retain) NSDate *siriDeviceAggregationIdRotationDate;
@property (nonatomic, retain) NSString *siriUserActivitySegment;

+ (id)_aneVersion;
+ (id)_carrierBundleIdentifier;
+ (id)_carrierCountryIsoCode;
+ (bool)_hasAne;
+ (id)_iCloudIdentifier;
+ (bool)_isAutomatedTestDevice;
+ (bool)_isDiagnosticsAndUsageEnabled;
+ (bool)_isSeedBuild;
+ (bool)_isVirtualMachine;
+ (id)_persistentSystemInfoPath;
+ (id)_siriUserActivitySegment;
+ (id)_sysEnabledInputModeIdentifiers;
+ (bool)_sysIsEnrolledInBetaProgram;
+ (id)createSystemInfoWithFactorProvider:(id)arg1;
+ (id)info;
+ (id)loadSystemInfo;
+ (bool)supportsSecureCoding;
+ (id)systemInfoFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)_getSiriDeviceAggregationIdRotationDate;
- (id)aneVersion;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (id)enabledInputModeIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)externalParamManager;
- (bool)hasAne;
- (id)iCloudIdentifier;
- (id)initFromSystemWithFactorProvider:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAutomatedTestDevice;
- (bool)isDiagnosticsAndUsageEnabled;
- (bool)isEnrolledInBetaProgram;
- (bool)logUserKeyboardEnabledInputMode;
- (bool)logUserSettingsLanguageCode;
- (bool)logUserSettingsRegionCode;
- (bool)save;
- (bool)saveToFile:(id)arg1;
- (void)setAneVersion:(id)arg1;
- (void)setCarrierBundleIdentifier:(id)arg1;
- (void)setCarrierCountryIsoCode:(id)arg1;
- (void)setEnabledInputModeIdentifiers:(id)arg1;
- (void)setHasAne:(bool)arg1;
- (void)setICloudIdentifier:(id)arg1;
- (void)setIsAutomatedTestDevice:(bool)arg1;
- (void)setIsDiagnosticsAndUsageEnabled:(bool)arg1;
- (void)setIsEnrolledInBetaProgram:(bool)arg1;
- (void)setLogUserKeyboardEnabledInputMode:(bool)arg1;
- (void)setLogUserSettingsLanguageCode:(bool)arg1;
- (void)setLogUserSettingsRegionCode:(bool)arg1;
- (void)setSiriDeviceAggregationIdRotationDate:(id)arg1;
- (void)setSiriUserActivitySegment:(id)arg1;
- (id)siriDeviceAggregationIdRotationDate;
- (id)siriUserActivitySegment;

@end

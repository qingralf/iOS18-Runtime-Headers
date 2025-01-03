/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _anyAppEnabledDate;
    NSArray * _appRules;
    NSNumber * _cloudSubscriptionCheckEnabled;
    NSNumber * _configServerEnabled;
    NSString * _configServerHost;
    NSString * _configServerPath;
    NSNumber * _configServerPort;
    NSDate * _configurationFetchDate;
    NSPConfiguration * _defaults;
    long long  _diskVersion;
    NSDictionary * _edgeSets;
    NSNumber * _enabled;
    NSNumber * _epoch;
    NSString * _etag;
    NSString * _geohashOverride;
    NSNumber * _geohashSharingEnabledStatus;
    bool  _ignoreInvalidCerts;
    NSNumber * _inProcessFlowDivert;
    NSString * _lastPrivateCloudComputeEnvironment;
    NSNumber * _persistMetrics;
    NSNumber * _preferredPathRoutingEnabledStatus;
    NSURLSession * _privacyProxyURLSession;
    NSNumber * _privateAccessTokensAllowTools;
    NSNumber * _privateAccessTokensEnabledStatus;
    NSNumber * _proxyAccountType;
    NSNumber * _proxyAccountUnlimited;
    NSPPrivacyProxyConfiguration * _proxyConfiguration;
    NSData * _proxyConfigurationData;
    NSNumber * _proxyTrafficState;
    NSDate * _resetTomorrowDate;
    NSDate * _resurrectionDate;
    NSNumber * _subscriberEnabledFromNonSettingsApp;
    NSNumber * _timestamp;
    NSNumber * _trialConfigVersion;
    NSNumber * _urlRequestTimeout;
    NSNumber * _userPreferredTier;
    NSNumber * _userTier;
    NSNumber * _version;
    NSString * _waldoLeafOID;
    NSNumber * _waldoRevocationFailClosed;
    NSNumber * _willResetSubscriberTierTomorrow;
}

@property (copy) NSDate *anyAppEnabledDate;
@property (copy) NSArray *appRules;
@property (copy) NSNumber *cloudSubscriptionCheckEnabled;
@property (copy) NSNumber *configServerEnabled;
@property (copy) NSString *configServerHost;
@property (copy) NSString *configServerPath;
@property (copy) NSNumber *configServerPort;
@property (copy) NSDate *configurationFetchDate;
@property (readonly) NSDate *dayPassExpirationDate;
@property (readonly) NSDate *earliestEnableCheckDate;
@property (nonatomic, retain) NSDictionary *edgeSets;
@property (copy) NSNumber *enabled;
@property (copy) NSNumber *epoch;
@property (copy) NSString *etag;
@property (nonatomic, retain) NSString *geohashOverride;
@property (nonatomic, retain) NSNumber *geohashSharingEnabledStatus;
@property bool ignoreInvalidCerts;
@property (nonatomic, retain) NSNumber *inProcessFlowDivert;
@property (readonly) bool isDead;
@property (nonatomic, retain) NSString *lastPrivateCloudComputeEnvironment;
@property (copy) NSNumber *persistMetrics;
@property (nonatomic, retain) NSNumber *preferredPathRoutingEnabledStatus;
@property (nonatomic, retain) NSURLSession *privacyProxyURLSession;
@property (nonatomic, retain) NSNumber *privateAccessTokensAllowTools;
@property (nonatomic, retain) NSNumber *privateAccessTokensEnabledStatus;
@property (nonatomic, retain) NSNumber *proxyAccountType;
@property (nonatomic, retain) NSNumber *proxyAccountUnlimited;
@property (copy) NSPPrivacyProxyConfiguration *proxyConfiguration;
@property (copy) NSData *proxyConfigurationData;
@property (copy) NSNumber *proxyTrafficState;
@property (copy) NSDate *resetTomorrowDate;
@property (copy) NSDate *resurrectionDate;
@property (nonatomic, retain) NSNumber *subscriberEnabledFromNonSettingsApp;
@property (copy) NSNumber *timestamp;
@property (nonatomic, retain) NSNumber *trialConfigVersion;
@property (copy) NSNumber *urlRequestTimeout;
@property (nonatomic, retain) NSNumber *userPreferredTier;
@property (nonatomic, copy) NSNumber *userTier;
@property (readonly) NSNumber *version;
@property (copy) NSString *waldoLeafOID;
@property (copy) NSNumber *waldoRevocationFailClosed;
@property (copy) NSNumber *willResetSubscriberTierTomorrow;

+ (id)defaultConfiguration;
+ (id)proxyAccountTypeToString:(id)arg1;
+ (id)proxyTrafficStateToString:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)validatePrivacyProxyConfiguration:(id)arg1;
+ (void)verifyConfigurationSignature:(id)arg1 configuration:(id)arg2 host:(id)arg3 validateCert:(bool)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)anyAppEnabledDate;
- (id)appRules;
- (id)cloudSubscriptionCheckEnabled;
- (id)configServerEnabled;
- (id)configServerHost;
- (id)configServerPath;
- (id)configServerPort;
- (id)configurationFetchDate;
- (id)copyAgentResultsForAppRule:(id)arg1;
- (id)copyTLVData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createConfigFetchURLWithPath:(id)arg1 timestamp:(id)arg2;
- (id)dayPassExpirationDate;
- (id)description;
- (id)diagnostics;
- (id)earliestEnableCheckDate;
- (id)edgeSets;
- (id)enabled;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateEdgeSetsWithBlock:(id /* block */)arg1;
- (id)epoch;
- (id)etag;
- (bool)evaluateEnableRatios;
- (bool)fetchDateIsWithinStart:(id)arg1 end:(id)arg2;
- (id)geohashOverride;
- (id)geohashSharingEnabledStatus;
- (id)getCurrentKeyBagForAppRule:(id)arg1;
- (id)getEdgeSetForAppRule:(id)arg1;
- (id)getEdgeSetForSigningIdentifier:(id)arg1;
- (bool)ignoreInvalidCerts;
- (id)inProcessFlowDivert;
- (void)incrementSessionCountersOnFirstLaunch;
- (id)initFromKeychain;
- (id)initFromPreferences;
- (id)initFromTLVs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 fromDictionary:(id)arg2 waldoSource:(long long)arg3;
- (bool)isDead;
- (id)lastPrivateCloudComputeEnvironment;
- (void)merge:(id)arg1;
- (id)persistMetrics;
- (id)preferredPathRoutingEnabledStatus;
- (id)privacyProxyURLSession;
- (id)privateAccessTokensAllowTools;
- (id)privateAccessTokensEnabledStatus;
- (id)proxyAccountType;
- (id)proxyAccountUnlimited;
- (id)proxyConfiguration;
- (id)proxyConfigurationData;
- (id)proxyTrafficState;
- (void)removeFromKeychain;
- (bool)resetStaleEdgeSets;
- (id)resetTomorrowDate;
- (id)resurrectionDate;
- (void)saveToKeychain;
- (bool)saveToPreferences;
- (void)setAnyAppEnabledDate:(id)arg1;
- (void)setAppRules:(id)arg1;
- (void)setCloudSubscriptionCheckEnabled:(id)arg1;
- (void)setConfigServerEnabled:(id)arg1;
- (void)setConfigServerHost:(id)arg1;
- (void)setConfigServerPath:(id)arg1;
- (void)setConfigServerPort:(id)arg1;
- (void)setConfigurationFetchDate:(id)arg1;
- (void)setEdgeSets:(id)arg1;
- (void)setEnabled:(id)arg1;
- (void)setEpoch:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setGeohashOverride:(id)arg1;
- (void)setGeohashSharingEnabledStatus:(id)arg1;
- (void)setIgnoreInvalidCerts:(bool)arg1;
- (void)setInProcessFlowDivert:(id)arg1;
- (void)setLastPrivateCloudComputeEnvironment:(id)arg1;
- (void)setPersistMetrics:(id)arg1;
- (void)setPreferredPathRoutingEnabledStatus:(id)arg1;
- (void)setPrivacyProxyURLSession:(id)arg1;
- (void)setPrivateAccessTokensAllowTools:(id)arg1;
- (void)setPrivateAccessTokensEnabledStatus:(id)arg1;
- (void)setProxyAccountType:(id)arg1;
- (void)setProxyAccountUnlimited:(id)arg1;
- (void)setProxyConfiguration:(id)arg1;
- (void)setProxyConfigurationData:(id)arg1;
- (void)setProxyTrafficState:(id)arg1;
- (void)setResetTomorrowDate:(id)arg1;
- (void)setResurrectionDate:(id)arg1;
- (void)setSubscriberEnabledFromNonSettingsApp:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTrialConfigVersion:(id)arg1;
- (void)setUrlRequestTimeout:(id)arg1;
- (void)setUserPreferredTier:(id)arg1;
- (void)setUserTier:(id)arg1;
- (void)setWaldoLeafOID:(id)arg1;
- (void)setWaldoRevocationFailClosed:(id)arg1;
- (void)setWillResetSubscriberTierTomorrow:(id)arg1;
- (void)setup;
- (void)setupNSURLSession;
- (id)subscriberEnabledFromNonSettingsApp;
- (void)teardown;
- (id)tierToString;
- (id)timestamp;
- (id)trialConfigVersion;
- (void)updateNetworkAgents;
- (id)urlRequestTimeout;
- (id)userPreferredTier;
- (id)userTier;
- (id)version;
- (id)waldoLeafOID;
- (id)waldoRevocationFailClosed;
- (id)willResetSubscriberTierTomorrow;

@end

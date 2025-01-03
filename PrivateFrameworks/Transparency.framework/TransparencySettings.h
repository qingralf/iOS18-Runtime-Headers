/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (id)automatedDeviceGroup;
+ (double)backgroundFollowupDelayPeriod;
+ (unsigned long long)backgroundFollowupFailureCount;
+ (double)backgroundNetworkTimeout;
+ (id)cfPrefsJson;
+ (double)defaultNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (double)defaultSelfFollowupTicketLifetime;
+ (id)devicePlatform;
+ (id)deviceUserAgent;
+ (double)dismissFailureAfterSeenPeriod;
+ (bool)enableSelfValidationXPCActivity;
+ (double)failureIgnorePeriod;
+ (bool)getBool:(id)arg1;
+ (bool)getBool:(id)arg1 defaultValue:(bool)arg2;
+ (unsigned long long)getEnvironment;
+ (id)getIMEnvironmentName;
+ (id)getOverride:(id)arg1;
+ (bool)isAccountsInQA;
+ (id)jsonArrayFromPlistArray:(id)arg1;
+ (id)jsonDictFromPlistDict:(id)arg1;
+ (double)queryCacheHardTimeout;
+ (double)queryJustMadeTimeout;
+ (id)transparencyVersionStr;
+ (double)uiBlockingNetworkTimeout;

- (bool)allowsInternalSecurityPolicies;
- (double)atBackgroundFollowupDelayPeriod;
- (id)automatedDeviceGroup;
- (double)defaultNetworkTimeout;
- (id)devicePlatform;
- (bool)getBool:(id)arg1;
- (unsigned long long)getEnvironment;
- (id)getOverride:(id)arg1;
- (bool)systemFailureFeatureEnabled;
- (id)testingSelfValidationFailing;
- (id)transparencyVersionStr;
- (double)uiBlockingNetworkTimeout;

@end

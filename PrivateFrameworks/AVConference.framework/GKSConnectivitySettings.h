/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface GKSConnectivitySettings : NSObject

+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)arg1;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (unsigned char)getAbTestingState;
+ (double)getAdaptiveLearningA;
+ (double)getAdaptiveLearningB;
+ (int)getAdaptiveLearningState;
+ (id)getAddressForService:(id)arg1;
+ (double)getAdjustmentFactorA;
+ (double)getAdjustmentFactorB;
+ (double)getAdjustmentFactorC;
+ (id)getAllSettings;
+ (struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)getCachedIPPort;
+ (id)getClientOption:(id)arg1;
+ (int)getDecryptionMKMRecoveryInterval;
+ (int)getDecryptionTimeoutInterval;
+ (struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)getIPPortForService:(id)arg1;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (int)getLongTermHistoryLength;
+ (double)getLongTermValueWeightA;
+ (double)getLongTermValueWeightB;
+ (double)getLongTermValueWeightC;
+ (int)getNATTypeFromCarrierBundle;
+ (int)getNewSessionJoiningInterval;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (int)getRateControllerType;
+ (double)getRemoteMediaStallTimeout;
+ (int)getShortTermHistoryLength;
+ (double)getShortTermValueWeightA;
+ (double)getShortTermValueWeightB;
+ (double)getShortTermValueWeightC;
+ (id)getStorebagValueForStorebagKey:(id)arg1 userDefaultKey:(struct __CFString { }*)arg2 defaultValue:(id)arg3 isDoubleType:(bool)arg4;
+ (id)getStorebagValueStorebagKey:(id)arg1 defaultValue:(id)arg2;
+ (id)getTestGroupPermutations:(unsigned char)arg1;
+ (double)getThresholdForSwitch:(unsigned int)arg1;
+ (id)getVCRCSeverBagConfigWithKey:(id)arg1;
+ (int)getWRMRSSIThresholdValue:(int)arg1;
+ (bool)isFeatureDisabledByExceptionKey:(id)arg1;
+ (bool)isFeatureEnabledForStorebagKey:(id)arg1 exceptionKey:(id)arg2 userDefaultKey:(struct __CFString { }*)arg3 featureFlagDomain:(char *)arg4 featureFlagName:(char *)arg5;
+ (bool)isFeatureEnabledForStorebagKey:(id)arg1 userDefaultKey:(struct __CFString { }*)arg2 featureFlagDomain:(char *)arg3 featureFlagName:(char *)arg4;
+ (bool)isFeatureEnabledForStorebagKey:(id)arg1 userDefaultKey:(struct __CFString { }*)arg2 featureFlagDomain:(char *)arg3 featureFlagName:(char *)arg4 normalizedRandom:(double)arg5;
+ (id)readStorebagValueForStorebagKey:(id)arg1 userDefaultKey:(struct __CFString { }*)arg2 defaultValue:(id)arg3 isDoubleType:(bool)arg4;
+ (void)setAddress:(id)arg1 forService:(id)arg2;
+ (void)setClientOptions:(id)arg1;
+ (void)setServerAddresses:(id)arg1;
+ (bool)supportiRATRecommendation;
+ (bool)supportsEVSCodec;
+ (bool)supportsHEVCEncoding;
+ (bool)supportsRedAudio;

- (void)dealloc;
- (id)init;

@end

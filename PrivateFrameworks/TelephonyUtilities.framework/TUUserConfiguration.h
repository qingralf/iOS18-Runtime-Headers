/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUUserConfiguration : TUConfiguration {
    CoreTelephonyClient * _coreTelephonyClient;
}

@property (nonatomic, readonly) CoreTelephonyClient *coreTelephonyClient;

+ (id)registeredDefaults;
+ (id)userDefaults;

- (void).cxx_destruct;
- (id)coreTelephonyClient;
- (void)dealloc;
- (id)getBooleanFromUserDefaults:(id)arg1 default:(id)arg2;
- (id)init;
- (bool)isBrandedCallingEnabled:(id)arg1;
- (bool)isBusinessConnectCallingEnabled;
- (bool)isCallScreeningEnabled;
- (bool)isSilenceJunkCallingEnabled;
- (bool)isSilenceUnknownCallersEnabledForFaceTime;
- (bool)isSilenceUnknownCallersEnabledForPhone;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setBrandedCallingEnabled:(bool)arg1 subscription:(id)arg2;
- (void)setBusinessConnectCallingEnabled:(bool)arg1;
- (void)setCallScreeningEnabled:(bool)arg1;
- (void)setSilenceJunkCallingEnabled:(bool)arg1;
- (void)setSilenceUnknownCallersEnabledForFaceTime:(bool)arg1;
- (void)setSilenceUnknownCallersEnabledForPhone:(bool)arg1;
- (void)setValueInUserDefaults:(id)arg1 forKey:(id)arg2;
- (void)synchronize;

@end

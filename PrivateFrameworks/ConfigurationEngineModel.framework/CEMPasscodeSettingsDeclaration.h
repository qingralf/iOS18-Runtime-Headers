/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMPasscodeSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAutoUnlock;
    NSNumber * _payloadAllowFingerprintForUnlock;
    NSNumber * _payloadAllowFingerprintModification;
    NSNumber * _payloadAllowPasscodeModification;
    NSNumber * _payloadAllowSimple;
    NSNumber * _payloadChangeAtNextAuth;
    NSNumber * _payloadForcePIN;
    NSNumber * _payloadManualFetchingWhenRoaming;
    NSNumber * _payloadMaxFailedAttempts;
    NSNumber * _payloadMaxGracePeriod;
    NSNumber * _payloadMaxInactivity;
    NSNumber * _payloadMaxPINAgeInDays;
    NSNumber * _payloadMinComplexChars;
    NSNumber * _payloadMinLength;
    NSNumber * _payloadMinutesUntilFailedLoginReset;
    NSNumber * _payloadPinHistory;
    NSNumber * _payloadRequireAlphanumeric;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAutoUnlock;
@property (nonatomic, copy) NSNumber *payloadAllowFingerprintForUnlock;
@property (nonatomic, copy) NSNumber *payloadAllowFingerprintModification;
@property (nonatomic, copy) NSNumber *payloadAllowPasscodeModification;
@property (nonatomic, copy) NSNumber *payloadAllowSimple;
@property (nonatomic, copy) NSNumber *payloadChangeAtNextAuth;
@property (nonatomic, copy) NSNumber *payloadForcePIN;
@property (nonatomic, copy) NSNumber *payloadManualFetchingWhenRoaming;
@property (nonatomic, copy) NSNumber *payloadMaxFailedAttempts;
@property (nonatomic, copy) NSNumber *payloadMaxGracePeriod;
@property (nonatomic, copy) NSNumber *payloadMaxInactivity;
@property (nonatomic, copy) NSNumber *payloadMaxPINAgeInDays;
@property (nonatomic, copy) NSNumber *payloadMinComplexChars;
@property (nonatomic, copy) NSNumber *payloadMinLength;
@property (nonatomic, copy) NSNumber *payloadMinutesUntilFailedLoginReset;
@property (nonatomic, copy) NSNumber *payloadPinHistory;
@property (nonatomic, copy) NSNumber *payloadRequireAlphanumeric;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowSimple:(id)arg2 withForcePIN:(id)arg3 withMaxFailedAttempts:(id)arg4 withMaxInactivity:(id)arg5 withMaxPINAgeInDays:(id)arg6 withMinComplexChars:(id)arg7 withMinLength:(id)arg8 withRequireAlphanumeric:(id)arg9 withPinHistory:(id)arg10 withMaxGracePeriod:(id)arg11 withMinutesUntilFailedLoginReset:(id)arg12 withChangeAtNextAuth:(id)arg13 withManualFetchingWhenRoaming:(id)arg14 withAllowFingerprintForUnlock:(id)arg15 withAllowFingerprintModification:(id)arg16 withAllowPasscodeModification:(id)arg17 withAllowAutoUnlock:(id)arg18;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowAutoUnlock;
- (id)payloadAllowFingerprintForUnlock;
- (id)payloadAllowFingerprintModification;
- (id)payloadAllowPasscodeModification;
- (id)payloadAllowSimple;
- (id)payloadChangeAtNextAuth;
- (id)payloadForcePIN;
- (id)payloadManualFetchingWhenRoaming;
- (id)payloadMaxFailedAttempts;
- (id)payloadMaxGracePeriod;
- (id)payloadMaxInactivity;
- (id)payloadMaxPINAgeInDays;
- (id)payloadMinComplexChars;
- (id)payloadMinLength;
- (id)payloadMinutesUntilFailedLoginReset;
- (id)payloadPinHistory;
- (id)payloadRequireAlphanumeric;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAutoUnlock:(id)arg1;
- (void)setPayloadAllowFingerprintForUnlock:(id)arg1;
- (void)setPayloadAllowFingerprintModification:(id)arg1;
- (void)setPayloadAllowPasscodeModification:(id)arg1;
- (void)setPayloadAllowSimple:(id)arg1;
- (void)setPayloadChangeAtNextAuth:(id)arg1;
- (void)setPayloadForcePIN:(id)arg1;
- (void)setPayloadManualFetchingWhenRoaming:(id)arg1;
- (void)setPayloadMaxFailedAttempts:(id)arg1;
- (void)setPayloadMaxGracePeriod:(id)arg1;
- (void)setPayloadMaxInactivity:(id)arg1;
- (void)setPayloadMaxPINAgeInDays:(id)arg1;
- (void)setPayloadMinComplexChars:(id)arg1;
- (void)setPayloadMinLength:(id)arg1;
- (void)setPayloadMinutesUntilFailedLoginReset:(id)arg1;
- (void)setPayloadPinHistory:(id)arg1;
- (void)setPayloadRequireAlphanumeric:(id)arg1;

@end

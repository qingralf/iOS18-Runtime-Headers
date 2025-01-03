/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver> {
    int  _cachedAutoFillRestrictionValue;
    int  _cachedPasswordAutoFillEffectiveValue;
    bool  _cachedisPasswordsAppInstalled;
    bool  _overrideShouldAutoFillFromKeychainValue;
    bool  _shouldOverrideShouldAutoFillFromKeychain;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAutoFillFromKeychainRestricted;
@property (nonatomic) bool shouldAutoFillPasswords;
@property (nonatomic) bool shouldAutoFillPasswordsFromKeychain;
@property (readonly) Class superclass;

+ (id)_syncManager;
+ (void)autoFillPreferencesDidChange;
+ (struct __CFString { }*)autoFillPreferencesDomain;
+ (bool)defaultValueForPasswordAndCreditCardAutoFill;
+ (id)sharedFeatureManager;

- (id)_getBundleRecordIdentifierWithString:(id)arg1;
- (id)_getVerificationCodeProviderBundleIdentifier;
- (void)_refreshCachedAutoFillRestrictionValues;
- (void)_refreshCachedisPasswordsAppInstalled;
- (void)dealloc;
- (id)init;
- (bool)isAutoFillFromKeychainRestricted;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)reportPasswordAutoFillProviderTelemetry;
- (void)setShouldAutoFillPasswords:(bool)arg1;
- (void)setShouldAutoFillPasswordsFromKeychain:(bool)arg1;
- (bool)shouldAutoFillPasswords;
- (bool)shouldAutoFillPasswordsFromKeychain;
- (void)test_overrideShouldAutoFillFromKeychain:(bool)arg1;

@end

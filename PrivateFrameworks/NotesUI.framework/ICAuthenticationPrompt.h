/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAuthenticationPrompt : NSObject {
    ICAccount * _account;
    unsigned long long  _authenticationAction;
    unsigned long long  _authenticationMechanism;
    bool  _biometricAuthenticationEnabled;
    long long  _biometricAuthenticationType;
    NSArray * _failureAlerts;
    NSString * _fallbackButtonTitle;
    bool  _hasCloudAccount;
    bool  _hasDevicePassword;
    bool  _hasKeychainItem;
    unsigned long long  _intent;
    bool  _internetReachable;
    bool  _keychainAvailable;
    ICNote * _note;
    NSArray * _notes;
    ICCloudSyncingObject * _object;
    NSString * _reason;
    short  _secondaryAuthenticationMode;
    NSArray * _successAlerts;
    NSString * _title;
    NSString * _touchBarReason;
    bool  _updatesUserRecordIfNeeded;
    bool  _usesAlternativeAuthenticationIfAvailable;
    bool  _usesBiometricAuthenticationIfAvailable;
    bool  _usesSecondaryAuthenticationIfAvailable;
}

@property (nonatomic, readonly) ICAccount *account;
@property (nonatomic, readonly) bool allowsAlternativeAuthentication;
@property (nonatomic, readonly) bool allowsAuthentication;
@property (nonatomic, readonly) bool allowsBiometricAuthentication;
@property (nonatomic, readonly) bool allowsCustomPasswordAuthentication;
@property (nonatomic, readonly) bool allowsDevicePasswordAuthentication;
@property (nonatomic) unsigned long long authenticationAction;
@property (nonatomic) unsigned long long authenticationMechanism;
@property (nonatomic, readonly) ICCloudSyncingObject *authenticationObject;
@property (getter=isBiometricAuthenticationEnabled, nonatomic) bool biometricAuthenticationEnabled;
@property (nonatomic) long long biometricAuthenticationType;
@property (nonatomic, readonly, copy) NSString *cloudAccountName;
@property (nonatomic, readonly, copy) NSString *customAccountName;
@property (nonatomic, readonly, copy) NSString *deviceAccountName;
@property (nonatomic, copy) NSArray *failureAlerts;
@property (nonatomic, copy) NSString *fallbackButtonTitle;
@property (nonatomic) bool hasCloudAccount;
@property (nonatomic) bool hasDevicePassword;
@property (nonatomic) bool hasKeychainItem;
@property (nonatomic, readonly) unsigned long long intent;
@property (getter=isInternetReachable, nonatomic) bool internetReachable;
@property (getter=isKeychainAvailable, nonatomic) bool keychainAvailable;
@property (nonatomic, readonly) bool needsAuthentication;
@property (nonatomic, readonly) bool needsSecondaryAuthentication;
@property (nonatomic, readonly) bool needsUserRecordUpdate;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, copy) NSArray *notes;
@property (nonatomic, readonly) ICCloudSyncingObject *object;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) short secondaryAuthenticationMode;
@property (nonatomic, copy) NSArray *successAlerts;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *touchBarReason;
@property (nonatomic, readonly, copy) NSArray *unauthenticatedNotes;
@property (nonatomic, readonly) bool unlocksNotes;
@property (nonatomic) bool updatesUserRecordIfNeeded;
@property (nonatomic) bool usesAlternativeAuthenticationIfAvailable;
@property (nonatomic) bool usesBiometricAuthenticationIfAvailable;
@property (nonatomic) bool usesSecondaryAuthenticationIfAvailable;

+ (id)promptForChangingMode:(short)arg1 account:(id)arg2;
+ (id)promptForDeletingNotes:(id)arg1;
+ (id)promptForIntent:(unsigned long long)arg1 object:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (bool)allowsAlternativeAuthentication;
- (bool)allowsAuthentication;
- (bool)allowsBiometricAuthentication;
- (bool)allowsCustomPasswordAuthentication;
- (bool)allowsDevicePasswordAuthentication;
- (unsigned long long)authenticationAction;
- (unsigned long long)authenticationMechanism;
- (id)authenticationObject;
- (long long)biometricAuthenticationType;
- (id)cloudAccountName;
- (id)customAccountName;
- (id)description;
- (id)deviceAccountName;
- (id)failureAlerts;
- (id)fallbackButtonTitle;
- (bool)forcesAlternativeAuthentication;
- (bool)forcesBiometricAuthentication;
- (bool)forcesSecondaryAuthentication;
- (bool)hasCloudAccount;
- (bool)hasDevicePassword;
- (bool)hasDivergedKey;
- (bool)hasKeychainItem;
- (bool)hasPassphrase;
- (unsigned long long)hash;
- (id)initWithIntent:(unsigned long long)arg1 object:(id)arg2;
- (unsigned long long)intent;
- (bool)isBiometricAuthenticationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isInternetReachable;
- (bool)isKeychainAvailable;
- (bool)needsAuthentication;
- (bool)needsCloudAccount;
- (bool)needsDevicePassword;
- (bool)needsKeychain;
- (bool)needsSecondaryAuthentication;
- (bool)needsUserRecordUpdate;
- (id)note;
- (id)notes;
- (id)object;
- (id)reason;
- (short)secondaryAuthenticationMode;
- (void)setAuthenticationAction:(unsigned long long)arg1;
- (void)setAuthenticationMechanism:(unsigned long long)arg1;
- (void)setBiometricAuthenticationEnabled:(bool)arg1;
- (void)setBiometricAuthenticationType:(long long)arg1;
- (void)setFailureAlerts:(id)arg1;
- (void)setFallbackButtonTitle:(id)arg1;
- (void)setHasCloudAccount:(bool)arg1;
- (void)setHasDevicePassword:(bool)arg1;
- (void)setHasKeychainItem:(bool)arg1;
- (void)setInternetReachable:(bool)arg1;
- (void)setKeychainAvailable:(bool)arg1;
- (void)setNotes:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSecondaryAuthenticationMode:(short)arg1;
- (void)setSuccessAlerts:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTouchBarReason:(id)arg1;
- (void)setUpdatesUserRecordIfNeeded:(bool)arg1;
- (void)setUsesAlternativeAuthenticationIfAvailable:(bool)arg1;
- (void)setUsesBiometricAuthenticationIfAvailable:(bool)arg1;
- (void)setUsesSecondaryAuthenticationIfAvailable:(bool)arg1;
- (id)successAlerts;
- (id)title;
- (id)touchBarReason;
- (id)unauthenticatedNotes;
- (bool)unlocksNotes;
- (void)update;
- (void)updateStrings;
- (void)updateStringsForAddLock;
- (void)updateStringsForChangeMode;
- (void)updateStringsForChangeModeFrom;
- (void)updateStringsForChangeModeTo;
- (void)updateStringsForChangePassword;
- (void)updateStringsForDeleteMixedNotes;
- (void)updateStringsForDeleteMultipleNotes;
- (void)updateStringsForDeleteNotes;
- (void)updateStringsForDeleteSingleNote;
- (void)updateStringsForRemoveLock;
- (void)updateStringsForResetPassword;
- (void)updateStringsForToggleBiometrics;
- (void)updateStringsForViewAttachment;
- (void)updateStringsForViewNote;
- (bool)updatesUserRecordIfNeeded;
- (bool)usesAlternativeAuthenticationIfAvailable;
- (bool)usesBiometricAuthenticationIfAvailable;
- (bool)usesSecondaryAuthenticationIfAvailable;

@end

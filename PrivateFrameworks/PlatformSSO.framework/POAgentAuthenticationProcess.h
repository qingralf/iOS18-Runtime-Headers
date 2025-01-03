/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSO.framework/PlatformSSO
 */

@interface POAgentAuthenticationProcess : NSObject <POExtensionDelegate, UNUserNotificationCenterDelegate> {
    id /* block */  ___screenUnlockHandler;
    id /* block */  ___shieldLoweredHandler;
    POAuthenticationProcess * _authenticationProcess;
    NSTimer * _authenticationTimer;
    NSObject * _authenticationTimerLock;
    SOConfigurationHost * _configurationHost;
    POConfigurationManager * _configurationManager;
    PODirectoryServices * _directoryServices;
    NSDistributedNotificationCenter * _distributedNotificationCenter;
    bool  _enableNetworkChanges;
    SOExtensionManager * _extensionManager;
    <POJWKSStorageProvider> * _jwksStorageProvider;
    <POAgentAuthenticationProcessKerberosDelegate> * _kerberosDelegate;
    POKerberosHelper * _kerberosHelper;
    POKeyBag * _keyBag;
    POKeyWrap * _keyWrap;
    POKeychainHelper * _keychainHelper;
    NSDate * _lastAuthenticationAttempt;
    NSObject<OS_dispatch_queue> * _loginQueue;
    NSNotificationCenter * _notificationCenter;
    bool  _platformSSOAccount;
    bool  _platformSSOActive;
    NSObject * _platformSSOActiveLock;
    PORegistrationContext * _registrationContext;
    bool  _registrationFailed;
    NSObject * _screenUnlockLock;
    bool  _screenUnlocked;
    bool  _shieldLowered;
    NSObject * _shieldLoweredLock;
    bool  _shouldRunConfigurationChangeWhenUnlocked;
    POTokenHelper * _tokenHelper;
    NSString * _userName;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (nonatomic, copy) id /* block */ __screenUnlockHandler;
@property (nonatomic, copy) id /* block */ __shieldLoweredHandler;
@property (retain) POAuthenticationProcess *authenticationProcess;
@property (retain) NSTimer *authenticationTimer;
@property (retain) NSObject *authenticationTimerLock;
@property (retain) SOConfigurationHost *configurationHost;
@property (retain) POConfigurationManager *configurationManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) PODirectoryServices *directoryServices;
@property (retain) NSDistributedNotificationCenter *distributedNotificationCenter;
@property bool enableNetworkChanges;
@property (retain) SOExtensionManager *extensionManager;
@property (readonly) unsigned long long hash;
@property (retain) <POJWKSStorageProvider> *jwksStorageProvider;
@property <POAgentAuthenticationProcessKerberosDelegate> *kerberosDelegate;
@property (retain) POKerberosHelper *kerberosHelper;
@property (retain) POKeyBag *keyBag;
@property (retain) POKeyWrap *keyWrap;
@property (retain) POKeychainHelper *keychainHelper;
@property (retain) NSDate *lastAuthenticationAttempt;
@property (retain) NSObject<OS_dispatch_queue> *loginQueue;
@property (retain) NSNotificationCenter *notificationCenter;
@property bool platformSSOAccount;
@property bool platformSSOActive;
@property (retain) NSObject *platformSSOActiveLock;
@property (retain) PORegistrationContext *registrationContext;
@property bool registrationFailed;
@property (readonly) long long registrationState;
@property (retain) NSObject *screenUnlockLock;
@property bool screenUnlocked;
@property bool shieldLowered;
@property (retain) NSObject *shieldLoweredLock;
@property bool shouldRunConfigurationChangeWhenUnlocked;
@property (readonly) Class superclass;
@property (retain) POTokenHelper *tokenHelper;
@property (retain) NSString *userName;
@property (retain) UNUserNotificationCenter *userNotificationCenter;

- (void).cxx_destruct;
- (id /* block */)__screenUnlockHandler;
- (id /* block */)__shieldLoweredHandler;
- (bool)_doLoginWithPasswordContext:(id)arg1 tokenId:(id)arg2;
- (bool)_doRefreshWithPasswordContext:(id)arg1 tokenId:(id)arg2;
- (void)_doUnlockForTokenWithCredentialContext:(id)arg1 atLogin:(bool)arg2;
- (void)_handleLoginResult:(unsigned long long)arg1 authenticationContext:(id)arg2 tokens:(id)arg3 passwordContext:(id)arg4 tokenId:(id)arg5 tokenHash:(id)arg6;
- (void)_startDeviceRegistration;
- (void)_startUserRegistration;
- (id)authenticationProcess;
- (id)authenticationTimer;
- (id)authenticationTimerLock;
- (id)bestEncryptionAlgorithm:(id)arg1 or:(id)arg2;
- (id)bestSigningAlgorithm:(id)arg1 or:(id)arg2;
- (void)checkIfPlatformSSOIsActive;
- (void)configurationChanged;
- (void)configurationChanged:(id)arg1;
- (id)configurationHost;
- (id)configurationManager;
- (void)configurationRemovedForExtension:(id)arg1;
- (void)continueDeviceRegistration:(id)arg1;
- (void)continueUserRegistration:(id)arg1;
- (id)createPasswordChangedNotificationWithAccountName:(id)arg1 extensionIdentifier:(id)arg2;
- (id)createRegistrationNotificationWithAccountName:(id)arg1;
- (id)createRegistrationUpdateNotificationWithAccountName:(id)arg1;
- (id)createSignInNotificationWithAccountName:(id)arg1 extensionIdentifier:(id)arg2;
- (void)dealloc;
- (id)deviceEncryptionAlgorithmToUse:(id)arg1 deviceConfiguration:(id)arg2;
- (id)deviceSigningAlgorithmToUse:(id)arg1 deviceConfiguration:(id)arg2;
- (id)directoryServices;
- (id)distributedNotificationCenter;
- (void)doUnlockForPasswordWithCredentialContext:(id)arg1 atLogin:(bool)arg2;
- (void)doUnlockForSmartCardWithCredentialContext:(id)arg1 tokenId:(id)arg2 atLogin:(bool)arg3;
- (void)doUnlockForTokenLoginWithCredentialContext:(id)arg1 atLogin:(bool)arg2;
- (void)doUnlockForTokenUnlockWithCredentialContext:(id)arg1 atLogin:(bool)arg2;
- (void)doUnlockWithEmptyCredentialContext:(id)arg1 atLogin:(bool)arg2;
- (bool)enableNetworkChanges;
- (void)exchangeTGTForStatus:(id)arg1;
- (void)exitDeviceRegistration:(id)arg1;
- (void)exitRegistration:(id)arg1;
- (void)exitUserRegistration:(id)arg1;
- (id)extensionManager;
- (void)failDeviceRegistrationBeforeAuthorization;
- (void)failUserRegistrationBeforeAuthorization;
- (void)finishRegistrationWithRetry;
- (void)finishRegistrationWithStatus:(bool)arg1;
- (void)finishRegistrationWithStatus:(bool)arg1 message:(id)arg2;
- (void)handleAgentStartup;
- (void)handleConfigurationChanged:(bool)arg1;
- (void)handleConfigurationChanged:(bool)arg1 startup:(bool)arg2;
- (void)handleDeviceAndUserRegistrationForRepair:(bool)arg1;
- (void)handleDeviceAndUserRegistrationForRepair:(bool)arg1 newPasswordUser:(bool)arg2 newSmartCardUser:(bool)arg3 notified:(bool)arg4 profile:(id)arg5;
- (void)handleDeviceRegistrationNotification;
- (void)handleEncryptionKeyRotation;
- (void)handleKerberosMappingForTokens:(id)arg1 extensionIdentifier:(id)arg2 userConfiguration:(id)arg3;
- (void)handleKerberosMappingForTokens:(id)arg1 loginConfiguration:(id)arg2 userConfiguration:(id)arg3;
- (unsigned long long)handleKeyRequestSync;
- (void)handleKeyRequestWithCompletion:(id /* block */)arg1;
- (void)handleKeyUpdatesWithPasswordContext:(id)arg1;
- (void)handleNetworkChange;
- (void)handlePendingSSOTokensWithSharedData:(id)arg1;
- (void)handleRegistrationViewControllerForExtensionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRemovingRegistrationForExtension:(id)arg1 alreadyDeleted:(bool)arg2;
- (void)handleRemovingSSOTokens;
- (void)handleScreenLock;
- (void)handleScreenUnlock;
- (void)handleScreenUnlockWithCredentialContext:(id)arg1 tokenId:(id)arg2 atLogin:(bool)arg3 tokenUnlock:(bool)arg4;
- (unsigned long long)handleTokenBindingWithPasswordContext:(id)arg1;
- (void)handleUnfinishedTGTExchanges;
- (bool)handleUserAuthorizationNeededForAccountDisplayName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)handleUserAuthorizationUsing:(id)arg1 userName:(id)arg2 tokens:(id)arg3 configurationManager:(id)arg4;
- (void)handleUserCredentialNeededAtLogin:(bool)arg1 smartCard:(bool)arg2 accountDisplayName:(id)arg3 bundleIdentifier:(id)arg4 returningContext:(id*)arg5;
- (bool)handleUserNeedsReauthenticationAfterDelay:(double)arg1;
- (void)handleUserRegistrationForUser:(id)arg1 repair:(bool)arg2;
- (void)handleUserRegistrationForUser:(id)arg1 repair:(bool)arg2 newPasswordUser:(bool)arg3 newSmartCardUser:(bool)arg4 notified:(bool)arg5 profile:(id)arg6;
- (void)handleUserRegistrationNotification;
- (id)initWithDelegate:(id)arg1;
- (bool)isCurrentSSOExtension:(id)arg1;
- (id)jwksStorageProvider;
- (id)kerberosDelegate;
- (id)kerberosHelper;
- (id)keyBag;
- (id)keyWrap;
- (id)keychainHelper;
- (id)lastAuthenticationAttempt;
- (id)loadSSOExtensionWithExtensionBundleIdentifier:(id)arg1;
- (id)loginQueue;
- (id)notificationCenter;
- (void)notifyKerberosDelegateTGTDidBegin;
- (void)notifyKerberosDelegateTGTDidComplete;
- (bool)performLoginForCurrentUserWithPasswordContext:(id)arg1;
- (bool)performLoginForCurrentUserWithPasswordContext:(id)arg1 tokenId:(id)arg2;
- (bool)platformSSOAccount;
- (bool)platformSSOActive;
- (id)platformSSOActiveLock;
- (void)postAuthenticationNotification:(unsigned long long)arg1;
- (void)promptUserForRegistration;
- (id)registrationContext;
- (bool)registrationFailed;
- (long long)registrationState;
- (void)requestDidCompleteWithError:(id)arg1;
- (unsigned long long)requestSmartCardForBinding:(bool)arg1 tokenId:(id*)arg2 tokenHash:(id*)arg3 wrapTokenHash:(id*)arg4;
- (void)requestUserAuthenticationSyncPassword:(bool)arg1 completion:(id /* block */)arg2;
- (void)requestUserAuthenticationWithUserInfo:(id)arg1;
- (void)requestUserAuthenticationWithWindow:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)requestUserPasswordChangePreference;
- (void)resetRegistrationWithCompletion:(id /* block */)arg1;
- (id)screenUnlockLock;
- (bool)screenUnlocked;
- (void)sendPasswordChangedNotification;
- (void)setAuthenticationProcess:(id)arg1;
- (void)setAuthenticationTimer:(id)arg1;
- (void)setAuthenticationTimerLock:(id)arg1;
- (void)setConfigurationHost:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setDirectoryServices:(id)arg1;
- (void)setDistributedNotificationCenter:(id)arg1;
- (void)setEnableNetworkChanges:(bool)arg1;
- (void)setExtensionManager:(id)arg1;
- (void)setJwksStorageProvider:(id)arg1;
- (void)setKerberosDelegate:(id)arg1;
- (void)setKerberosHelper:(id)arg1;
- (void)setKeyBag:(id)arg1;
- (void)setKeyWrap:(id)arg1;
- (void)setKeychainHelper:(id)arg1;
- (void)setLastAuthenticationAttempt:(id)arg1;
- (void)setLoginQueue:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setPlatformSSOAccount:(bool)arg1;
- (void)setPlatformSSOActive:(bool)arg1;
- (void)setPlatformSSOActiveLock:(id)arg1;
- (void)setRegistrationContext:(id)arg1;
- (void)setRegistrationFailed:(bool)arg1;
- (void)setScreenUnlockLock:(id)arg1;
- (void)setScreenUnlocked:(bool)arg1;
- (void)setShieldLowered:(bool)arg1;
- (void)setShieldLoweredLock:(id)arg1;
- (void)setShouldRunConfigurationChangeWhenUnlocked:(bool)arg1;
- (void)setTokenHelper:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserNotificationCenter:(id)arg1;
- (void)set__screenUnlockHandler:(id /* block */)arg1;
- (void)set__shieldLoweredHandler:(id /* block */)arg1;
- (void)setupNotificationCategories;
- (void)setupTimerForAuthentication;
- (bool)shieldLowered;
- (id)shieldLoweredLock;
- (bool)shouldRunConfigurationChangeWhenUnlocked;
- (void)showAlertMessage:(id)arg1 messageText:(id)arg2 completion:(id /* block */)arg3;
- (void)showAlertWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)showRegistrationUI;
- (int)ssoMethodToUse:(id)arg1 profile:(id)arg2;
- (id)tokenHelper;
- (id)userName;
- (id)userNotificationCenter;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)userSigningAlgorithmToUse:(id)arg1 userConfiguration:(id)arg2;
- (void)waitForScreenUnlockithCompletion:(id /* block */)arg1;
- (void)waitForShieldLoweredWithCompletion:(id /* block */)arg1;
- (void)windowDidClose;

@end

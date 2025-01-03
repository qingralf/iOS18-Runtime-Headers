/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNEnvironment : CNEnvironmentBase {
    bool  _aquaSession;
    <CNAuthorizationContext> * _authorizationContext;
    NSString * _currentCountryCode;
    NSLocale * _currentLocaleOverride;
    NSString * _currentRegionCode;
    NSString * _defaultCountryCode;
    NSDistributedNotificationCenter * _distributedNotificationCenter;
    <CNEntitlementVerification> * _entitlementVerifier;
    <CNFeatureFlags> * _featureFlags;
    <CNFileManager> * _fileManager;
    NSString * _homeCountryCode;
    NSNumber * _isCommLimitsEnabledStorage;
    NSNumber * _isExtendedGreenTeaDeviceStorage;
    NSNumber * _isGreenTeaDeviceStorage;
    NSNumber * _isInternalBuildStorage;
    NSNumber * _isKeychainEnabledStorage;
    <CNLocalizationServices> * _localizationServices;
    NSString * _mainBundleIdentifier;
    NSNotificationCenter * _notificationCenter;
    <CNProbabilityUtility> * _probabilityUtility;
    <CNSchedulerProvider> * _schedulerProvider;
    <CNTimeProvider> * _timeProvider;
    CNUserDefaults * _userDefaults;
    <CNWatchdog> * _watchdog;
}

@property (getter=isAquaSession, readonly) bool aquaSession;
@property (readonly) <CNAuthorizationContext> *authorizationContext;
@property (readonly) <CNACDPeopleSuggesterFacade> *cdPeopleSuggester;
@property (getter=isCommLimitsEnabled, readonly) bool commLimitsEnabled;
@property (readonly) CNComposeRecipientNameOptions *composeRecipientNameOptions;
@property (readonly) CRRecentContactsLibrary *coreRecentsLibrary;
@property (readonly) NSString *currentCountryCode;
@property (readonly) NSLocale *currentLocale;
@property (getter=getCurrentRegionCode, readonly) NSString *currentRegionCode;
@property (readonly) DADConnection *dataAccessConnection;
@property (readonly) NSString *defaultCountryCode;
@property (readonly) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (readonly) <CNEntitlementVerification> *entitlementVerifier;
@property (getter=isExtendedGreenTeaDevice, readonly) bool extendedGreenTeaDevice;
@property (readonly) <CNFeatureFlags> *featureFlags;
@property (readonly) <CNFileManager> *fileManager;
@property (getter=isGreenTeaDevice, readonly) bool greenTeaDevice;
@property (readonly) NSString *homeCountryCode;
@property (getter=isInternalBuild, readonly) bool internalBuild;
@property (readonly) <CNKeyboardStateMonitor> *keyboardStateMonitor;
@property (getter=isKeychainEnabled, readonly) bool keychainEnabled;
@property (nonatomic, readonly) <_TtP18ContactsFoundation24CNKeychainFacadeProtocol_> *keychainFacade;
@property (readonly) <CNLocalizationServices> *localizationServices;
@property (readonly) NSString *mainBundleIdentifier;
@property (readonly) <CNMetricsReporter> *metricsReporter;
@property (readonly) <CNNicknameProvider> *nicknameProvider;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) <CNAPeopleSuggesterFacade> *peopleSuggester;
@property (readonly) <CNProbabilityUtility> *probabilityUtility;
@property (readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) <CNACTStewieFacade> *stewie;
@property (readonly) <CNAutocompleteSuggestedResultPrioritization> *suggestedResultPrioritization;
@property (readonly) <CNTimeProvider> *timeProvider;
@property (readonly) CNUserDefaults *userDefaults;
@property (readonly) <CNWatchdog> *watchdog;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)defaultEnvironment;
+ (char *)environmentStackKey;
+ (id)os_log;

- (void).cxx_destruct;
- (id)authorizationContext;
- (id)currentCountryCode;
- (id)currentLocale;
- (id)defaultCountryCode;
- (id)distributedNotificationCenter;
- (id)entitlementVerifier;
- (id)featureFlags;
- (id)fileManager;
- (id)getCurrentCountryCode;
- (id)getCurrentRegionCode;
- (id)getDefaultCountryCode;
- (id)getHomeCountryCode;
- (id)homeCountryCode;
- (id)init;
- (bool)isAquaSession;
- (bool)isCommLimitsEnabled;
- (bool)isCommLimitsEnabledImpl;
- (bool)isExtendedGreenTeaDevice;
- (bool)isGreenTeaDevice;
- (bool)isInternalBuild;
- (bool)isKeychainEnabled;
- (bool)isKeychainEnabledImpl;
- (id)keychainFacade;
- (id)localizationServices;
- (id)mainBundleIdentifier;
- (id)notificationCenter;
- (id)probabilityUtility;
- (id)schedulerProvider;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)timeProvider;
- (id)userDefaults;
- (id)valueForKey:(id)arg1 onCacheMiss:(id /* block */)arg2;
- (id)watchdog;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (id)keyboardStateMonitor;
- (id)nicknameProvider;

// Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete

- (id)cdPeopleSuggester;
- (id)dataAccessConnection;
- (id)peopleSuggester;
- (id)stewie;
- (id)suggestedResultPrioritization;

// Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI

- (id)composeRecipientNameOptions;

// Image: /System/Library/PrivateFrameworks/ContactsMetrics.framework/ContactsMetrics

- (id)metricsReporter;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (id)coreRecentsLibrary;

@end

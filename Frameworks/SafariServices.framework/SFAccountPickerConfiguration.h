/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFAccountPickerConfiguration : NSObject {
    NSString * _addPasswordSuggestedDomain;
    NSString * _addPasswordSuggestedLabel;
    NSString * _appID;
    NSString * _bundleIDForFallbackIcon;
    struct { 
        unsigned int val[8]; 
    }  _connectedAppAuditToken;
    WBSGlobalFrameIdentifier * _currentWebFrameIdentifierForAutoFillPasskeys;
    NSArray * _domainHintStrings;
    bool  _forUserNamesOnly;
    bool  _hasAuditToken;
    NSString * _initialSearchQuery;
    bool  _isConnectedAppAWebBrowser;
    bool  _isForFillingIndividualAccountFields;
    unsigned long long  _minimumNumberOfCredentialsToShowLikelyMatchesSection;
    NSString * _prompt;
    NSString * _promptWhenPasskeysAreAvailable;
    WBSSavedAccountContext * _savedAccountContext;
    WBSSavedAccount * _savedAccountToInitiallyShowDetailsFor;
    NSArray * _serviceNameHintStrings;
    bool  _shouldEnableAddingNewPasswordsIfPossible;
    bool  _shouldHideCreatePasswordsInSettingsHint;
    bool  _shouldShowAutoFillPasskeys;
    bool  _shouldShowGeneratedPasswordsForDomain;
    bool  _shouldShowPasskeysInAccountPicker;
    bool  _shouldShowReceivedVerificationCodes;
    NSString * _title;
    NSURL * _websiteURLForReceivedVerificationCodes;
}

@property (nonatomic, copy) NSString *addPasswordSuggestedDomain;
@property (nonatomic, copy) NSString *addPasswordSuggestedLabel;
@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) NSString *bundleIDForFallbackIcon;
@property (nonatomic) struct { unsigned int x1[8]; } connectedAppAuditToken;
@property (nonatomic, copy) WBSGlobalFrameIdentifier *currentWebFrameIdentifierForAutoFillPasskeys;
@property (nonatomic, copy) NSArray *domainHintStrings;
@property (nonatomic) bool forUserNamesOnly;
@property (nonatomic, readonly) bool hasAuditToken;
@property (nonatomic, retain) NSString *initialSearchQuery;
@property (nonatomic) bool isConnectedAppAWebBrowser;
@property (nonatomic) bool isForFillingIndividualAccountFields;
@property (nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, copy) NSString *promptWhenPasskeysAreAvailable;
@property (nonatomic, retain) WBSSavedAccountContext *savedAccountContext;
@property (nonatomic, retain) WBSSavedAccount *savedAccountToInitiallyShowDetailsFor;
@property (nonatomic, copy) NSArray *serviceNameHintStrings;
@property (nonatomic, readonly) bool shouldAllowAddingNewPasswords;
@property (nonatomic) bool shouldEnableAddingNewPasswordsIfPossible;
@property (nonatomic) bool shouldHideCreatePasswordsInSettingsHint;
@property (nonatomic) bool shouldShowAutoFillPasskeys;
@property (nonatomic) bool shouldShowGeneratedPasswordsForDomain;
@property (nonatomic) bool shouldShowPasskeysInAccountPicker;
@property (nonatomic) bool shouldShowReceivedVerificationCodes;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *websiteURLForReceivedVerificationCodes;

- (void).cxx_destruct;
- (id)addPasswordSuggestedDomain;
- (id)addPasswordSuggestedLabel;
- (id)appID;
- (id)bundleIDForFallbackIcon;
- (struct { unsigned int x1[8]; })connectedAppAuditToken;
- (id)currentWebFrameIdentifierForAutoFillPasskeys;
- (id)domainHintStrings;
- (bool)forUserNamesOnly;
- (bool)hasAuditToken;
- (id)init;
- (id)initialSearchQuery;
- (bool)isConnectedAppAWebBrowser;
- (bool)isForFillingIndividualAccountFields;
- (unsigned long long)minimumNumberOfCredentialsToShowLikelyMatchesSection;
- (id)prompt;
- (id)promptWhenPasskeysAreAvailable;
- (id)savedAccountContext;
- (id)savedAccountToInitiallyShowDetailsFor;
- (id)serviceNameHintStrings;
- (void)setAddPasswordSuggestedDomain:(id)arg1;
- (void)setAddPasswordSuggestedLabel:(id)arg1;
- (void)setAppID:(id)arg1;
- (void)setBundleIDForFallbackIcon:(id)arg1;
- (void)setConnectedAppAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setCurrentWebFrameIdentifierForAutoFillPasskeys:(id)arg1;
- (void)setDomainHintStrings:(id)arg1;
- (void)setForUserNamesOnly:(bool)arg1;
- (void)setInitialSearchQuery:(id)arg1;
- (void)setIsConnectedAppAWebBrowser:(bool)arg1;
- (void)setIsForFillingIndividualAccountFields:(bool)arg1;
- (void)setMinimumNumberOfCredentialsToShowLikelyMatchesSection:(unsigned long long)arg1;
- (void)setPrompt:(id)arg1;
- (void)setPromptWhenPasskeysAreAvailable:(id)arg1;
- (void)setSavedAccountContext:(id)arg1;
- (void)setSavedAccountToInitiallyShowDetailsFor:(id)arg1;
- (void)setServiceNameHintStrings:(id)arg1;
- (void)setShouldEnableAddingNewPasswordsIfPossible:(bool)arg1;
- (void)setShouldHideCreatePasswordsInSettingsHint:(bool)arg1;
- (void)setShouldShowAutoFillPasskeys:(bool)arg1;
- (void)setShouldShowGeneratedPasswordsForDomain:(bool)arg1;
- (void)setShouldShowPasskeysInAccountPicker:(bool)arg1;
- (void)setShouldShowReceivedVerificationCodes:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setWebsiteURLForReceivedVerificationCodes:(id)arg1;
- (bool)shouldAllowAddingNewPasswords;
- (bool)shouldEnableAddingNewPasswordsIfPossible;
- (bool)shouldHideCreatePasswordsInSettingsHint;
- (bool)shouldShowAutoFillPasskeys;
- (bool)shouldShowGeneratedPasswordsForDomain;
- (bool)shouldShowPasskeysInAccountPicker;
- (bool)shouldShowReceivedVerificationCodes;
- (id)title;
- (id)websiteURLForReceivedVerificationCodes;

@end
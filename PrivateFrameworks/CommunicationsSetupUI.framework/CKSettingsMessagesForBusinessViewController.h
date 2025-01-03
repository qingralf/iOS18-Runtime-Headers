/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CKSettingsMessagesForBusinessViewController : PSListController {
    bool  _erroredOut;
    unsigned long long  _featureState;
    IDSFeatureToggler * _featureToggler;
    CKLazuliEnablementManager * _lazuliEnablementManager;
    bool  _requestInFlight;
}

@property (nonatomic) bool erroredOut;
@property (nonatomic) unsigned long long featureState;
@property (nonatomic, retain) IDSFeatureToggler *featureToggler;
@property (nonatomic, retain) CKLazuliEnablementManager *lazuliEnablementManager;
@property (nonatomic) bool requestInFlight;

- (void).cxx_destruct;
- (void)_fetchFeatureState;
- (void)_showOnboarding;
- (void)_showPrivacySheetForBusinessChat;
- (bool)erroredOut;
- (unsigned long long)featureState;
- (id)featureToggler;
- (id)lazuliEnablementManager;
- (id)personalizedAlertsEnabled:(id)arg1;
- (bool)requestInFlight;
- (void)setErroredOut:(bool)arg1;
- (void)setFeatureState:(unsigned long long)arg1;
- (void)setFeatureToggler:(id)arg1;
- (void)setLazuliEnablementManager:(id)arg1;
- (void)setPersonalizedAlertsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setRequestInFlight:(bool)arg1;
- (id)specifiers;
- (id)unavailableString;
- (void)viewDidLoad;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CKRCSController : PSListController {
    NSString * _controllerTitle;
    NSArray * _ctSubscriptions;
    CKLazuliEnablementManager * _lazuliEnablementManager;
    NSString * _multiSimHeaderKey;
}

@property (nonatomic, copy) NSString *controllerTitle;
@property (nonatomic, retain) NSArray *ctSubscriptions;
@property (nonatomic, retain) CKLazuliEnablementManager *lazuliEnablementManager;
@property (nonatomic, copy) NSString *multiSimHeaderKey;

- (void).cxx_destruct;
- (id)_contextForSpecifier:(id)arg1;
- (bool)_contextIsCurrentDataSubscription:(id)arg1;
- (bool)_shouldShowRCSActivationProblemForSpecifier:(id)arg1;
- (void)_showRCSLearnMore;
- (void)appendFooterLinkToCellularDataSettingsIfNecessaryFor:(id)arg1 contextSpecifier:(id)arg2 groupSpecifier:(id)arg3;
- (void)appendRCSSubtitleIfNecessaryFor:(id)arg1 contextSpecifier:(id)arg2;
- (id)controllerTitle;
- (id)ctSubscriptions;
- (id)isEnabledForSubscription:(id)arg1;
- (id)isRCSEnabled:(id)arg1;
- (id)lazuliEnablementManager;
- (void)lazuliMessagingCapabilitiesDidChange:(id)arg1;
- (void)lazuliRegistrationDidChange:(id)arg1;
- (id)multiSimHeaderKey;
- (id)rcsBusinessMessagesEnabled:(id)arg1;
- (void)setControllerTitle:(id)arg1;
- (void)setCtSubscriptions:(id)arg1;
- (void)setLazuliEnablementManager:(id)arg1;
- (void)setMultiSimHeaderKey:(id)arg1;
- (void)setRCSBusinessMessagesEnabled:(id)arg1 specifier:(id)arg2;
- (void)setRCSEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)systemApplicationWillEnterForeground;
- (void)viewDidLoad;

@end
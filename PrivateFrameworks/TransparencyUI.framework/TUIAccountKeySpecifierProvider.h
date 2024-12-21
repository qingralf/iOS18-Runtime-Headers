/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TransparencyUI.framework/TransparencyUI
 */

@interface TUIAccountKeySpecifierProvider : NSObject <AAUISpecifierProvider, TUIStaticIdentityManagerProtocol> {
    TUIAnalytics * _analytics;
    <AAUISpecifierProviderDelegate> * _delegate;
    bool  _isExpanded;
    bool  _isPeerAccount;
    NSArray * _specifiers;
    TUIStaticIdentityManager * _staticIdentityManager;
}

@property (nonatomic, retain) TUIAnalytics *analytics;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExpanded;
@property (nonatomic) bool isPeerAccount;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic, retain) TUIStaticIdentityManager *staticIdentityManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_accountKeyButtonTableCellType;
- (void)_accountKeyButtonTapped:(id)arg1;
- (id)_accountKeySpecifier;
- (id)_buttonSpecifier;
- (id)_collapsedButtonSpecifier;
- (id)_collapsedGroupSpecifier;
- (id)_currentAccountKeyString;
- (id)_getAccountKeyButtonEnabledForSpecifier:(id)arg1;
- (id)_groupSpecifier;
- (void)_learnMoreTapped;
- (void)_showInfoAlert:(id)arg1;
- (void)_showPublicVerificationCodeTapped:(id)arg1;
- (void)_startSpinnerForSpecifier:(id)arg1;
- (id)analytics;
- (id)createGroupSpecifierWithIdentifier:(id)arg1 title:(id)arg2 footerText:(id)arg3 linkText:(id)arg4 actionMethodName:(id)arg5 target:(id)arg6;
- (id)delegate;
- (id)init;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithStaticIdentityManager:(id)arg1 analytics:(id)arg2;
- (bool)isExpanded;
- (bool)isPeerAccount;
- (void)refreshSelfAccountKey;
- (void)reloadSpecifiers;
- (void)setAnalytics:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setIsPeerAccount:(bool)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setStaticIdentityManager:(id)arg1;
- (id)specifiers;
- (id)staticIdentityManager;
- (void)updateUI;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TransparencyUI.framework/TransparencyUI
 */

@interface TUIStaticIdentitySpecifierProvider : NSObject <AAUISpecifierProvider, TUIStaticIdentityManagerProtocol> {
    TUIAnalytics * _analytics;
    <AAUISpecifierProviderDelegate> * _delegate;
    NSArray * _specifiers;
    TUIStaticIdentityManager * _staticIdentityManager;
}

@property (nonatomic, retain) TUIAnalytics *analytics;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic, retain) TUIStaticIdentityManager *staticIdentityManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buttonsSpecifier;
- (id)_codeSpecifier;
- (id)_groupSpecifier;
- (void)_markAsVerifiedAction:(id)arg1;
- (void)_noMatchAction:(id)arg1;
- (void)_usePublicVerificationCodesTapped;
- (id)analytics;
- (id)createGroupSpecifierWithIdentifier:(id)arg1 title:(id)arg2 footerText:(id)arg3 linkText:(id)arg4 actionMethodName:(id)arg5 target:(id)arg6;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithStaticIdentityManager:(id)arg1 analytics:(id)arg2;
- (void)reloadSpecifiers;
- (void)setAnalytics:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setStaticIdentityManager:(id)arg1;
- (id)specifiers;
- (id)staticIdentityManager;
- (void)updateUI;
- (void)verifyContact:(id)arg1 peerPublicAccountIdentity:(id)arg2;

@end

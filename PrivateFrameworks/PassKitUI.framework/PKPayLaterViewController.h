/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPayLaterViewController : PKPaymentSetupOptionsViewController <PKAccountServiceObserver, PKPayLaterSectionControllerDelegate, PKPayLaterViewControllerDelegate> {
    PKAccountService * _accountService;
    UIView * _footerView;
    double  _navBarAnimationProgress;
    PKAnimatedNavigationBarTitleView * _navBarImageView;
    PKAccount * _payLaterAccount;
    PKAccountTermsAndConditionsController * _termsController;
}

@property (nonatomic, readonly) PKAccountService *accountService;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKAccount *payLaterAccount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_layoutFooter;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(bool)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountFinancingPlanAdded:(id)arg1 accountIdentifier:(id)arg2;
- (void)accountFinancingPlanRemoved:(id)arg1 accountIdentifier:(id)arg2;
- (void)accountFinancingPlanUpdated:(id)arg1 oldFinancingPlan:(id)arg2 accountIdentifier:(id)arg3;
- (id)accountService;
- (void)dealloc;
- (void)didAddFinancingPlan:(id)arg1;
- (void)didRemoveFinancingPlan:(id)arg1;
- (void)didTapHyperLink:(id)arg1;
- (void)didUpdateFinancingPlan:(id)arg1;
- (void)didUpdatePayLaterAccount:(id)arg1;
- (bool)disablesAutomaticDismissalUponEnteringBackground;
- (double)footerViewContentHeight;
- (double)headerHeight;
- (id)initWithPayLaterAccount:(id)arg1;
- (id)navigationBarAnimationText;
- (id)navigationBarAnimationView;
- (id)navigationControllerViewControllers;
- (id)payLaterAccount;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)reloadNavigationBarHeaderFooterLayout;
- (void)setFooterView:(id)arg1;
- (void)setPayLaterAccount:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

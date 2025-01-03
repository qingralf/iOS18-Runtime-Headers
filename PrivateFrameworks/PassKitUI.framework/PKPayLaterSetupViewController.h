/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPayLaterSetupViewController : PKPaymentSetupOptionsViewController <PKPayLaterSectionControllerDelegate, PKPayLaterViewControllerDelegate> {
    UIBarButtonItem * _cancelButton;
    bool  _disableLeftBarButton;
    bool  _disableRightBarButton;
    UIBarButtonItem * _doneButton;
    PKPayLaterDynamicContentPage * _dynamicContentPage;
    unsigned long long  _dynamicContentPageType;
    long long  _leftBarButton;
    UIBarButtonItem * _nextButton;
    bool  _nextButtonHidden;
    bool  _nextStepButtonTapped;
    bool  _previousViewControllerIsApplyFlow;
    long long  _rightBarButton;
    PKPayLaterSetupFlowController * _setupController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableLeftBarButton;
@property (nonatomic) bool disableRightBarButton;
@property (nonatomic, readonly) PKPayLaterDynamicContentPage *dynamicContentPage;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long leftBarButton;
@property (nonatomic) bool nextStepButtonTapped;
@property (nonatomic) bool previousViewControllerIsApplyFlow;
@property (nonatomic) long long rightBarButton;
@property (nonatomic, readonly) PKPayLaterSetupFlowController *setupController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buttonForBarButtonType:(long long)arg1;
- (void)_handlePostApprovalScreenSteps;
- (void)_presentPayLaterPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_showCancelAddingToWalletAlertWithCancelBlock:(id /* block */)arg1 continueBlock:(id /* block */)arg2;
- (void)cancelButtonTapped;
- (void)didTapHyperLink:(id)arg1;
- (bool)disableLeftBarButton;
- (bool)disableRightBarButton;
- (void)dismissSetupFlowWithCompletion:(id /* block */)arg1;
- (void)doneButtonTapped;
- (id)dynamicContentPage;
- (id)initWithSetupFlowController:(id)arg1 dynamicContentPageType:(unsigned long long)arg2;
- (long long)leftBarButton;
- (id)navigationControllerViewControllers;
- (void)nextButtonTapped;
- (bool)nextStepButtonTapped;
- (void)popViewControllerAnimated:(bool)arg1;
- (bool)previousViewControllerIsApplyFlow;
- (void)provisionPayLaterPassFromApprovalScreen;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)reloadNavigationBarHeaderFooterLayout;
- (long long)rightBarButton;
- (void)setDisableLeftBarButton:(bool)arg1;
- (void)setDisableRightBarButton:(bool)arg1;
- (void)setLeftBarButton:(long long)arg1;
- (void)setNextStepButtonTapped:(bool)arg1;
- (void)setPreviousViewControllerIsApplyFlow:(bool)arg1;
- (void)setRightBarButton:(long long)arg1;
- (id)setupController;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentRecurringPaymentDetailViewController : PKDynamicCollectionViewController <PKDashboardMessageSectionControllerDelegate, PKMemoIconChooserViewControllerDelegate, PKPaymentMethodSelectionViewControllerDelegate, PKPaymentSetupDelegate, PKPeerPaymentRecurringPaymentDetailActionSectionControllerDelegate, PKPeerPaymentRecurringPaymentDetailAmountSectionControllerDelegate, PKPeerPaymentRecurringPaymentDetailFundingSourceSectionControllerDelegate, PKPeerPaymentRecurringPaymentDetailSectionControllerDelegate, PKPeerPaymentRecurringPaymentMemoSectionControllerDelegate, PKPeerPaymentServiceObserver> {
    bool  _allowEdits;
    PKPeerPaymentRecurringPaymentDetailAmountSectionController * _amountSectionController;
    PKAvatarView * _avatarView;
    PKPeerPaymentRecurringPaymentDetailActionSectionController * _cancelSectionController;
    long long  _context;
    <PKPeerPaymentRecurringPaymentDetailViewControllerDelegate> * _delegate;
    PKPeerPaymentRecurringPaymentDetailSectionController * _detailSectionController;
    PKPeerPaymentRecurringPaymentDetailFundingSourceSectionController * _fundingSourceSectionController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    bool  _keyboardVisible;
    NSDecimalNumber * _maximumAmount;
    PKPeerPaymentRecurringPaymentMemoSectionController * _memoSectionController;
    PKDashboardMessageSectionController * _messageSectionController;
    NSDecimalNumber * _minimumAmount;
    unsigned long long  _mode;
    PKPeerPaymentRecurringPaymentDetailActionSectionController * _pauseSectionController;
    PKPeerPaymentRequest * _paymentRequest;
    PKPeerPaymentController * _peerPaymentController;
    PKPeerPaymentService * _peerPaymentService;
    bool  _performingAction;
    CNComposeRecipient * _recipient;
    PKPeerPaymentRecurringPayment * _recurringPayment;
    PKPeerPaymentRemoteMessagesComposer * _remoteMessagesComposer;
    PKPaymentPass * _selectedPass;
    bool  _showActivityIndicator;
    bool  _showCancelButton;
}

@property (nonatomic) bool allowEdits;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKPeerPaymentRecurringPaymentDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *maximumAmount;
@property (nonatomic, copy) NSDecimalNumber *minimumAmount;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) bool showCancelButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_authorizeRecurringPaymentWithCompletion:(id /* block */)arg1;
- (void)_cancelEdits:(id)arg1;
- (void)_cancelRecurringPaymentWithCompletion:(id /* block */)arg1;
- (id)_composeRecipientForAddress:(id)arg1;
- (void)_configureAvatarView;
- (id)_dashboardMessages;
- (void)_didCompleteSetupFlow;
- (void)_dismissViewController:(id)arg1;
- (void)_keyboardWillChange:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_messageForErrorCode:(unsigned long long)arg1 paymentDate:(id)arg2;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2;
- (void)_pauseRecurringPaymentWithCompletion:(id /* block */)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (id)_pendingRecurringPayment;
- (void)_processEditsIfNeededWithCompletion:(id /* block */)arg1;
- (id)_recipientName;
- (void)_reloadWithPayments:(id)arg1;
- (void)_rightBarButtonPressed:(id)arg1;
- (void)_setUpNavigationBar;
- (bool)_shouldShowDashboardMessages;
- (void)_showAlertForError:(id)arg1 completion:(id /* block */)arg2;
- (void)_showConfirmationAlertIfNeededForAction:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)_titleForErrorCode:(unsigned long long)arg1;
- (void)_updateBarButtonItems;
- (void)_updateCancelSectionFooter;
- (void)_updateDetailSectionFooter;
- (void)_updateLayoutForKeyboardAction:(id /* block */)arg1;
- (void)_updatePauseSectionFooter;
- (void)_updateRecurringPaymentsWithCompletion:(id /* block */)arg1;
- (void)_updateSections;
- (void)_validatePaymentEditsWithCompletion:(id /* block */)arg1;
- (bool)allowEdits;
- (void)amountDidChange;
- (void)dealloc;
- (id)delegate;
- (void)didSelectAmountSection;
- (void)fundingSourceSectionSelected;
- (id)initWithRecurringPayment:(id)arg1 recipient:(id)arg2 mode:(unsigned long long)arg3 context:(long long)arg4 peerPaymentController:(id)arg5 remoteMessagesComposer:(id)arg6;
- (id)initWithRecurringPayment:(id)arg1 recipientAddress:(id)arg2 mode:(unsigned long long)arg3 context:(long long)arg4 peerPaymentController:(id)arg5 remoteMessagesComposer:(id)arg6;
- (void)makeCellFirstResponderWithItem:(id)arg1;
- (id)maximumAmount;
- (void)memoIconChooserDidChooseMemo:(id)arg1;
- (void)memoIconWasTapped;
- (id)minimumAmount;
- (unsigned long long)mode;
- (void)paymentMethodSelectionViewController:(id)arg1 didSelectPaymentMethod:(id)arg2;
- (void)paymentMethodSelectionViewController:(id)arg1 didToggleUseAppleCashBalance:(bool)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)performAction:(unsigned long long)arg1 startHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (struct { bool x1; long long x2; })pkui_navigationStatusBarStyleDescriptor;
- (void)recurringPaymentsChanged;
- (void)setAllowEdits:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumAmount:(id)arg1;
- (void)setMinimumAmount:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (bool)showCancelButton;
- (void)updateFooterForSectionIdentifier:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

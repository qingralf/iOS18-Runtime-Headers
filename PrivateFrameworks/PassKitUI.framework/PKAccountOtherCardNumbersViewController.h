/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAccountOtherCardNumbersViewController : PKSettingsTableViewController <PKAccountServiceObserver, PKVirtualCardEnrollmentViewControllerDelegate> {
    PKAccount * _account;
    PKAccountService * _accountService;
    long long  _context;
    bool  _didBeginPassManagementSubject;
    bool  _isPhysicalCardExpired;
    PKPaymentPass * _paymentPass;
    PKPhysicalCard * _physicalCard;
    bool  _preferDefaultTitle;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analyticsPageTag;
- (void)_appendApplePayCardNumberSectionToConfiguration:(id)arg1;
- (void)_appendNetworkSectionToConfiguration:(id)arg1;
- (void)_appendPhysicalCardExpiredMessageSectionToConfiguration:(id)arg1;
- (void)_appendPhysicalCardNumberSectionToConfiguration:(id)arg1;
- (void)_appendPinSectionToConfiguration:(id)arg1;
- (void)_appendSetUpVirtualCardSectionToConfiguration:(id)arg1;
- (void)_beginReportingIfNecessary;
- (id)_contentConfigurationForExpiredCardMessage;
- (void)_endReportingIfNecessary;
- (id)_groupedFooterWithText:(id)arg1 tableView:(id)arg2;
- (bool)_isVirtualCardSupportedButNotEnabled;
- (id)_localizedStringForKey:(id)arg1;
- (void)_presentReplaceExpiredPhysicalCard;
- (void)_updateCardNumbersConfigurationAnimated:(bool)arg1;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2 context:(long long)arg3 preferDefaultTitle:(bool)arg4;
- (id)initWithPhysicalCard:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 context:(long long)arg4 preferDefaultTitle:(bool)arg5;
- (void)physicalCardsChanged:(id)arg1 forAccountIdentifier:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)virtualCardEnrollmentViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;

@end

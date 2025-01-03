/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKExpressPassesViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPaymentPreferenceCardCellAccessoryViewDelegate> {
    LAContext * _LAContext;
    NSArray * _allPasses;
    PKExpressPassController * _expressPassController;
    bool  _isUserInteractionsEnabled;
    PKPassSnapshotter * _passSnapshotter;
    NSMutableDictionary * _passUniqueIDToCell;
    NSMutableDictionary * _passUniqueIDToTransitBalanceModels;
    NSArray * _passes;
    <PKPaymentDataProvider> * _paymentDataProvider;
    NSMutableArray * _paymentPasses;
    NSString * _selectedPaymentPassDisclosureString;
    long long  _selectedPaymentPassIndex;
    bool  _selectedPaymentPassIsInPendingState;
    NSMutableArray * _selectedTransitPassIndices;
    long long  _style;
    unsigned int  _supressHandlingPassUpdateCounter;
    bool  _supressHandlingPassUpdates;
    NSMutableArray * _transitPasses;
    bool  _useOldAppearance;
    bool  _userAutomaticExpressModeText;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *passes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireUserAuthForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_additionalContextStringForPass:(id)arg1;
- (unsigned int)_beginPassUpdateSuppression;
- (void)_beginReporting;
- (void)_configureAccessoryViewForPaymentCardCell:(id)arg1 row:(long long)arg2;
- (id)_conflictingPassesForPass:(id)arg1 useCaseWithPasses:(id)arg2;
- (void)_disableExpressModeForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_enableExpressModeForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_endPassUpdateSuppressionWithToken:(unsigned int)arg1 delay:(double)arg2;
- (void)_endReporting;
- (id)_expressEnableFailureAlertWithRetryIndexPath:(id)arg1;
- (void)_fetchBalancesAndTransitPassPropertiesForPass:(id)arg1 completion:(id /* block */)arg2;
- (double)_heightForRowAtIndexPath:(id)arg1;
- (void)_invalidateUserAuth;
- (bool)_isTransitExpressRowEnabledForIndex:(unsigned long long)arg1;
- (id)_passWithUniqueIdentifier:(id)arg1;
- (id)_paymentCardCellForRow:(long long)arg1;
- (id)_paymentPassForIndex:(unsigned long long)arg1;
- (id)_preferenceCardCellForIdentifier:(id)arg1;
- (void)_reloadLocalPassStores;
- (void)_reportExpressModeDisable:(id)arg1;
- (void)_reportExpressModeEnable:(id)arg1 conflictingPasses:(id)arg2;
- (void)_reportExpressModeEnableFailed:(id)arg1;
- (void)_reportExpressModeEvent:(id)arg1 forPass:(id)arg2 conflictingPasses:(id)arg3;
- (id)_reportingSubject;
- (long long)_sectionForPass:(id)arg1;
- (void)_sendExpressPassDidChangeNotification;
- (void)_setUserInteractionsEnabled:(bool)arg1;
- (bool)_shouldShowSelectionDisclosureForPass:(id)arg1;
- (id)_transformState:(id)arg1;
- (id)_transitCardCellForRow:(long long)arg1;
- (id)_transitPassForIndex:(unsigned long long)arg1;
- (void)_transitUpdateWithState:(id)arg1;
- (void)_updateBalancesWithServerBalances:(id)arg1 transitPassProperties:(id)arg2 commutePlans:(id)arg3 forPass:(id)arg4;
- (void)_updateBalancesWithServerBalances:(id)arg1 transitPassProperties:(id)arg2 commutePlans:(id)arg3 forPassWithUniqueIdentifier:(id)arg4;
- (void)_updateExpressState:(id)arg1;
- (void)_updatePaymentCardCellWithIndex:(long long)arg1 statusString:(id)arg2;
- (void)_updateUIWithExpressState;
- (void)_upgradeExpressModeForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_userChangedExpressSettingForPaymentPassAtIndexPath:(id)arg1;
- (void)_userChangedExpressTransitToNone;
- (void)_userSetExpressTransitCardToEnabled:(bool)arg1 cell:(id)arg2;
- (void)dealloc;
- (id)initWithPaymentDataProvider:(id)arg1 controller:(id)arg2 style:(long long)arg3;
- (id)passes;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceivePlanUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentPreferenceCardCell:(id)arg1 didChangeSwitchState:(bool)arg2;
- (void)setPasses:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

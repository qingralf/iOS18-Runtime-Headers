/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUtilityOnboardingOTPSelectionViewController : HUItemTableOBWelcomeController <HFItemManagerDelegate, HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController, OTPSelectionTableDelegate> {
    _TtC6HomeUI24UtilityOnboardingContext * _context;
    OBTrayButton * _continueButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HFItem * _selectedOTPMethod;
    HUUtilityOnboardingOTPSelectionTableViewController * _tableView;
}

@property (nonatomic, retain) _TtC6HomeUI24UtilityOnboardingContext *context;
@property (nonatomic, retain) OBTrayButton *continueButton;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep; /* unknown property attribute: ? */
@property (nonatomic, retain) HFItem *selectedOTPMethod;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUUtilityOnboardingOTPSelectionTableViewController *tableView;

- (void).cxx_destruct;
- (id)_requestOTP;
- (void)_sendCode:(id)arg1;
- (id)context;
- (id)continueButton;
- (id)delegate;
- (id)initWithContext:(id)arg1;
- (Class)onboardingFlowClass;
- (id)selectedOTPMethod;
- (void)setContext:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedOTPMethod:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)tableView:(id)arg1 didSelectOTPMethod:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end

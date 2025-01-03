/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSTransferListViewController : TSOBTableWelcomeController <SSSpinnerProtocol, TSSetupFlowItem, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _animating;
    long long  _backToSelfOption;
    NSArray * _cachedButtons;
    NSString * _carrierNameForSelectedItem;
    CTDisplayPlanList * _carrierSetupItems;
    NSMutableArray * _chosenUseIndexPaths;
    bool  _confirmCellularPlanTransfer;
    SSOBBoldTrayButton * _continueButton;
    bool  _continueButtonTappedOnce;
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _followDirections;
    NSLayoutConstraint * _heightAnchor;
    bool  _inBuddy;
    bool  _installingALSPlan;
    bool  _installingTransferPlan;
    bool  _isActivationPolicyMismatch;
    bool  _isCarrierSetupItemSelected;
    bool  _isCloudTransfer;
    bool  _isDualeSIMCapabilityLoss;
    bool  _isOtherButtonTapped;
    bool  _isSinglePhysicalSIMTransfer;
    bool  _isStandaloneProximityFlow;
    unsigned long long  _numNonRemotePlanItems;
    CTDisplayPlanList * _pendingInstallItems;
    bool  _receivedPendingInstallItems;
    bool  _receivedTransferItems;
    bool  _requireDelayBluetoothConnection;
    UITableViewCell * _sectionFooter;
    bool  _showOtherOptions;
    bool  _showSIMSetup;
    bool  _speedBumper;
    SSSpinner * _spinner;
    UIView * _spinnerContainer;
    NSLayoutConstraint * _tableHeightAnchor;
    NSArray * _transferItems;
    CTRemotePlan * _transferPlan;
    CTDeviceIdentifier * _transferPlanDeviceID;
}

@property bool animating;
@property long long backToSelfOption;
@property (retain) NSArray *cachedButtons;
@property (retain) NSString *carrierNameForSelectedItem;
@property (retain) NSMutableArray *chosenUseIndexPaths;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool followDirections;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightAnchor;
@property bool installingTransferPlan;
@property bool isCarrierSetupItemSelected;
@property bool isOtherButtonTapped;
@property bool isStandaloneProximityFlow;
@property bool requireDelayBluetoothConnection;
@property (retain) UITableViewCell *sectionFooter;
@property bool showSIMSetup;
@property (retain) SSSpinner *spinner;
@property (retain) UIView *spinnerContainer;
@property (readonly) Class superclass;
@property (retain) NSArray *transferItems;
@property (retain) CTRemotePlan *transferPlan;
@property (retain) CTDeviceIdentifier *transferPlanDeviceID;

- (void).cxx_destruct;
- (id)_calculatePlanSelection;
- (void)_cancelTransferringPlan;
- (void)_continueButtonTapped;
- (void)_dismissSelf;
- (double)_heightAnchorConstant;
- (void)_installSelectedPlans;
- (bool)_isCarrierSetupItemSelected:(unsigned long long)arg1;
- (void)_maybeDisplayConsent:(bool)arg1 phoneNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)_maybeDisplayPhysicalPlanConversionAlert:(bool)arg1 phoneNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)_maybeUpdateTableView;
- (void)_otherButtonTapped;
- (void)_startPendingInstall:(id)arg1;
- (void)_startPlanTransfer:(id)arg1 withDeviceID:(id)arg2;
- (void)_transferConsentOnSource;
- (bool)animating;
- (long long)backOption;
- (long long)backToSelfOption;
- (id)cachedButtons;
- (bool)canBeShownFromSuspendedState;
- (id)carrierNameForSelectedItem;
- (id)chosenUseIndexPaths;
- (bool)customizeSpinner;
- (id)delegate;
- (bool)followDirections;
- (id)getLocalizedStringIf:(id)arg1 then:(id)arg2 otherwise:(id)arg3;
- (id)getRemoteDeviceDisplayName:(id)arg1;
- (id)heightAnchor;
- (id)initWithPendingInstallItems:(id)arg1;
- (id)initWithTransferItems:(id)arg1 confirmCellularPlanTransfer:(bool)arg2 isActivationPolicyMismatch:(bool)arg3 isDualeSIMCapabilityLoss:(bool)arg4 pendingInstallItems:(id)arg5 carrierSetupItems:(id)arg6 showOtherOptions:(bool)arg7;
- (id)initWithTransferItems:(id)arg1 confirmCellularPlanTransfer:(bool)arg2 isActivationPolicyMismatch:(bool)arg3 isDualeSIMCapabilityLoss:(bool)arg4 pendingInstallItems:(id)arg5 carrierSetupItems:(id)arg6 showOtherOptions:(bool)arg7 isStandaloneProximityFlow:(bool)arg8;
- (id)initWithTransferItems:(id)arg1 confirmCellularPlanTransfer:(bool)arg2 isActivationPolicyMismatch:(bool)arg3 isDualeSIMCapabilityLoss:(bool)arg4 showOtherOptions:(bool)arg5;
- (bool)installingTransferPlan;
- (bool)isCarrierSetupItemSelected;
- (bool)isOtherButtonTapped;
- (bool)isStandaloneProximityFlow;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)requireDelayBluetoothConnection;
- (id)sectionFooter;
- (void)setAnimating:(bool)arg1;
- (void)setBackToSelfOption:(long long)arg1;
- (void)setCachedButtons:(id)arg1;
- (void)setCarrierNameForSelectedItem:(id)arg1;
- (void)setChosenUseIndexPaths:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFollowDirections:(bool)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setInstallingTransferPlan:(bool)arg1;
- (void)setIsCarrierSetupItemSelected:(bool)arg1;
- (void)setIsOtherButtonTapped:(bool)arg1;
- (void)setIsStandaloneProximityFlow:(bool)arg1;
- (void)setRequireDelayBluetoothConnection:(bool)arg1;
- (void)setSectionFooter:(id)arg1;
- (void)setShowSIMSetup:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setSpinnerContainer:(id)arg1;
- (void)setTransferItems:(id)arg1;
- (void)setTransferPlan:(id)arg1;
- (void)setTransferPlanDeviceID:(id)arg1;
- (bool)showSIMSetup;
- (id)spinner;
- (id)spinnerContainer;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)transferItems;
- (id)transferPlan;
- (id)transferPlanDeviceID;
- (void)updateFooterView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKClinicalAuthorizationNewRecordsViewController : OBTableWelcomeController <HKClinicalAuthorizationFlowIngestionStatusObserver, HKHealthPrivacyServicePromptController, UITableViewDataSource, UITableViewDelegate> {
    long long  _authorizationMode;
    HKClinicalAuthorizationSequenceContext * _context;
    <HKHealthPrivacyServicePromptControllerDelegate> * _delegate;
    HKClinicalAuthorizationDisplayController * _displayController;
    OBBoldTrayButton * _doneButton;
    bool  _isCurrentlyIngesting;
    bool  _isWaitingForDoneAction;
}

@property (nonatomic) long long authorizationMode;
@property (nonatomic, readonly) HKClinicalAuthorizationSequenceContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HKHealthPrivacyServicePromptControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKClinicalAuthorizationDisplayController *displayController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_configureNavigationItem;
- (void)_configureTableView;
- (void)_doneButtonPressed:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (id)_indexPathForShareAuthorizationMode:(long long)arg1;
- (bool)_indexPathIsValidRow:(id)arg1;
- (void)_setUpFooterView;
- (id)_shareAuthorizationModeCellForIndexPath:(id)arg1;
- (void)_shareAuthorizationModeCellPressed:(id)arg1;
- (long long)_shareAuthorizationModeForIndexPath:(id)arg1;
- (id)_titleForShareAuthorizationModeFooter;
- (void)_updateDownloadingStatusIndicator;
- (void)_updateForCurrentContentSizeCategory;
- (void)_updateShareAuthorizationModeSectionFooter;
- (id)_visibleShareAuthorizationModeCellForMode:(long long)arg1;
- (long long)authorizationMode;
- (id)context;
- (id)delegate;
- (id)displayController;
- (void)ingestionStatusDidChangeTo:(unsigned long long)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAuthorizationMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
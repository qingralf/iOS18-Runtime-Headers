/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI
 */

@interface DSContinuityController : DSTableWelcomeController <DSContinuityDelegate, DSController, DSDeviceListDelegate, UITableViewDelegate> {
    NSMutableArray * _continuityDevices;
    DSContinuityStore * _continuityStore;
    <DSNavigationDelegate> * _delegate;
    NSMutableArray * _selectedDevices;
}

@property (nonatomic, retain) NSMutableArray *continuityDevices;
@property (nonatomic, retain) DSContinuityStore *continuityStore;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *selectedDevices;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateButtons;
- (id)allComputerNames;
- (id)computerNameWithUUID:(id)arg1;
- (id)continuityDevices;
- (id)continuityStore;
- (id)dateDescription:(id)arg1;
- (id)delegate;
- (void)getDevicesWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)presentLearnMore;
- (void)presentRemoveAllDevicesAlert;
- (void)presentRemoveSelectedDevicesAlert;
- (void)presentUnpairErrorAlert:(id)arg1;
- (void)remoteDeviceListModified:(id)arg1;
- (void)removeAllPairedDevicesAndPushNextPane;
- (void)removeDetailViewControllerFromStack;
- (void)removeSelectedPairedDevicesAndPushNextPane;
- (void)returnFromDetailAndRemoveDevice:(id)arg1;
- (id)selectedComputerNames;
- (id)selectedDevices;
- (void)setContinuityDevices:(id)arg1;
- (void)setContinuityStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedDevices:(id)arg1;
- (void)shouldShowWithCompletion:(id /* block */)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

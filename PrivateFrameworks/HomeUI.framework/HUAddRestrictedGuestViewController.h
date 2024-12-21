/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAddRestrictedGuestViewController : HUItemTableOBWelcomeController <HUAddRestrictedGuestItemManagerDelegate, HUAddRestrictedGuestViewDelegate, HUDetailsPresentationDelegateHost> {
    <HUPresentationDelegate> * _presentationDelegate;
    bool  _requiresPresentingViewControllerDismissal;
    HUAddRestrictedGuestTableViewController * _restrictedGuestTableViewController;
    UIBarButtonItem * _saveButtonItem;
}

@property (nonatomic, retain) UIBarButtonItem *addButtonItem;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) bool requiresPresentingViewControllerDismissal;
@property (nonatomic, retain) HUAddRestrictedGuestTableViewController *restrictedGuestTableViewController;
@property (nonatomic, retain) UIBarButtonItem *saveButtonItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactForAddress:(id)arg1;
- (id)_requiredContactKeyDescriptors;
- (id)_servicesAllowingToRGWithNotificationOff;
- (id)addButtonItem;
- (id)initWithHome:(id)arg1 inviteeAddresses:(id)arg2;
- (id)presentationDelegate;
- (bool)requiresPresentingViewControllerDismissal;
- (void)restrictedGuestItemManager:(id)arg1 didFailToSendInvitations:(id)arg2;
- (void)restrictedGuestItemManager:(id)arg1 didSendInvitations:(id)arg2;
- (id)restrictedGuestTableViewController;
- (id)saveButtonItem;
- (void)saveButtonPressed:(id)arg1;
- (void)setAddButtonItem:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setRequiresPresentingViewControllerDismissal:(bool)arg1;
- (void)setRestrictedGuestTableViewController:(id)arg1;
- (void)setSaveButtonItem:(id)arg1;
- (void)viewDidLoad;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassShareEntitlementSelectionViewController : PKPaymentSetupOptionsViewController <PKPassEntitlementCapabilitySectionControllerDelegate, PKPassEntitlementSelectionSectionControllerDelegate, PKPassEntitlementTimeSectionControllerDelegate, PKPassSharePredefinedEntitlementSectionControllerDelegate, PKPassShareTimeLimitViewControllerDelegate> {
    long long  _accessType;
    PKPassEntitlementCapabilitySectionController * _capabilitySectionController;
    PKPassEntitlementsComposer * _entitlementComposer;
    PKPassEntitlementSelectionSectionController * _entitlementSectionController;
    bool  _isShowingMyEntitlements;
    unsigned long long  _mode;
    PKPassSharePredefinedEntitlementSectionController * _predefinedSectionController;
    bool  _showDoneButton;
    PKPassEntitlementTimeSectionController * _timeSectionController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showDoneButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissButtonPressed;
- (id)_initWithAccessType:(long long)arg1 mode:(unsigned long long)arg2 entitlementComposer:(id)arg3 isShowingMyEntitlements:(bool)arg4;
- (void)_reloadSections:(bool)arg1;
- (void)didTapPassEntitlementTimeSectionController:(id)arg1;
- (void)entitlementSelectionDidChange;
- (id)initWithAccessType:(long long)arg1 mode:(unsigned long long)arg2 entitlementComposer:(id)arg3;
- (void)loadView;
- (void)setShowDoneButton:(bool)arg1;
- (void)showAdvancedScheduleSelectionFlowForEntitlementEntry:(id)arg1;
- (bool)showDoneButton;
- (void)viewWillAppear:(bool)arg1;

@end
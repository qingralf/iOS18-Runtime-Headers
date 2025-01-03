/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
 */

@interface STAllowPhotoRestrictionsController : PUIPhotosPrivacyController <STRestrictionsPINControllerDelegate> {
    PSSpecifier * _allowedGroup;
}

@property (readonly) NSObject<STRootViewModelCoordinator> *coordinator; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coordinator;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didAcceptRemovePIN;
- (void)didCancelEnteringPIN;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)validatePIN:(id)arg1 forPINController:(id)arg2;

@end

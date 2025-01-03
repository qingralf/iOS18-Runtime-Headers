/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost> {
    UIViewController<_UISharingPublicController> * _publicController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController<_UISharingPublicController> *publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_cloudSharingControllerDidActivateAddPeopleWithRemoteSourceX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)_cloudSharingControllerDidActivateShowActivityController;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidChooseTransport:(id)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(bool)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(bool)arg1;
- (void)_cloudSharingControllerDidUpdateRootFolderURL:(id)arg1;
- (void)_dismissAndRepresentForActivity:(id /* block */)arg1;
- (void)_dismissForActivityRepresentation:(id /* block */)arg1;
- (void)_dismissViewController;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)arg1;
- (void)_performHeaderActionWithCompletion:(id /* block */)arg1;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)arg1;
- (void)_requestContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_requestSavedShareWithCompletion:(id /* block */)arg1;
- (void)_shareDidChange:(id)arg1;
- (void)_shareWasMadePrivate;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)_updateTraitCollectionForPopoverStatus;
- (void)didMoveToParentViewController:(id)arg1;
- (id)publicController;
- (void)setPublicController:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillLayoutSubviews;

@end

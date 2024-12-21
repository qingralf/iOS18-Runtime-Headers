/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIASCAppInstallerViewController : UIViewController <ASCLockupViewDelegate_DSIDLessInstall> {
    void $__lazy_storage_$_appStoreComponentsLockupView;
    void $__lazy_storage_$_ascContainerView;
    void $__lazy_storage_$_subtitleLabel;
    void forceDSIDless;
    void onAppInstall;
    void onFlowComplete;
    void previousState;
}

- (void).cxx_destruct;
- (void)handleCancel;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 request:(id)arg3 forceDSIDless:(bool)arg4 onFlowComplete:(id /* block */)arg5;
- (void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
- (bool)lockupViewShouldSupportDSIDLessInstalls:(id)arg1;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)viewDidLoad;

@end
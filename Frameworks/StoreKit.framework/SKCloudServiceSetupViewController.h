/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKCloudServiceSetupViewController : UIViewController <SFSafariViewControllerDelegate, SKCloudServiceSetupRemoteViewControllerDelegate> {
    SKCloudServiceSetupReloadContext * _activeCloudServiceSetupReloadContext;
    UIAlertController * _alertController;
    SKCloudServiceSetupConfiguration * _configuration;
    <SKCloudServiceSetupViewControllerDelegate> * _delegate;
    bool  _hasInitializedServiceViewController;
    bool  _isFullyAppeared;
    bool  _isInlineOfferUnsupported;
    bool  _isRemoteViewControllerReady;
    bool  _isUnableToLoadRemoteViewController;
    id /* block */  _loadCompletionHandler;
    SURedeemCameraViewController * _presentedRedeemCameraViewController;
    _UIResilientRemoteViewContainerViewController * _remoteViewContainerViewController;
    SFSafariViewController * _safariViewController;
}

@property (nonatomic, readonly, copy) SKCloudServiceSetupConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SKCloudServiceSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReceiveRemoteViewController:(id)arg1;
- (void)_dismissCloudServiceSetupViewControllerWithAnimation:(bool)arg1 completion:(id /* block */)arg2;
- (id)_errorWithCode:(long long)arg1 errorDescriptionLocalizationKey:(id)arg2;
- (void)_reloadWithActiveCloudServiceSetupReloadContext;
- (void)_remoteViewControllerExtensionWasInterrupted;
- (void)_reportCompletionForInlineOfferUnsupported;
- (void)_reportErrorForMissingSystemMusicApplication;
- (void)_requestRemoteViewController;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 didFinishLoadingWithSuccess:(bool)arg2 error:(id)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissalWithAnimation:(bool)arg2 completion:(id /* block */)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissingSafariViewControllerAnimated:(bool)arg2 completion:(id /* block */)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsPresentingSafariViewControllerWithURL:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)handleSafariScriptURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isModalInPresentation;
- (void)loadWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(id /* block */)arg1;
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)reloadWithContext:(id)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModalInPresentation:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactlessReaderUI.framework/ContactlessReaderUI
 */

@interface ContactlessReaderUI.TapRemoteSceneController : UIViewController {
    void context;
    void dismissalExpected;
    void hideMenuIndicatorTimer;
    void homeAffordanceOn;
    void issuerPIN;
    void scene;
    void showStatusBar;
    void subscriptions;
    void suppressor;
    void walletSuppressor;
}

@property (nonatomic, readonly) unsigned long long preferredScreenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)handlePanWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

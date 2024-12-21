/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

@interface WLRejectViewController : WLOnboardingViewController {
    id /* block */  _retryBlock;
    OBTrayButton * _retryButton;
    WLWelcomeController * _welcomeController;
}

@property (nonatomic, copy) id /* block */ retryBlock;

- (void).cxx_destruct;
- (void)_retry;
- (id)initWithWelcomeController:(id)arg1;
- (id /* block */)retryBlock;
- (void)setRetryBlock:(id /* block */)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
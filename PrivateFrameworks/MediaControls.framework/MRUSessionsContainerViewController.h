/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUSessionsContainerViewController : UIViewController <MRUViewServiceViewController, UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void $__lazy_storage_$_popoverSourceView;
    void $__lazy_storage_$_sessionsTransitioningDelegate;
    void $__lazy_storage_$_sessionsViewController;
    void configuration;
    void customRowTappedBlock;
    void dismissalBlock;
    void updatePopoverContentSize;
}

@property (nonatomic, retain) MPMediaControlsConfiguration *configuration;
@property (nonatomic, copy) id /* block */ customRowTappedBlock;
@property (nonatomic, copy) id /* block */ dismissalBlock;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)configuration;
- (id /* block */)customRowTappedBlock;
- (id /* block */)dismissalBlock;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCustomRowTappedBlock:(id /* block */)arg1;
- (void)setDismissalBlock:(id /* block */)arg1;
- (void)transitionToVisible:(bool)arg1 animated:(bool)arg2;
- (void)viewDidLoad;

@end

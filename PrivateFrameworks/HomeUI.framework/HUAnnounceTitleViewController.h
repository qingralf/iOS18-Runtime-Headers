/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAnnounceTitleViewController : HUCenterFillOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    UIImageView * _contentImageView;
    <HUConfigurationViewControllerDelegate> * delegate;
}

@property (nonatomic, retain) UIImageView *contentImageView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep; /* unknown property attribute: ? */
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_limitToNonScrollingContentHeight;
- (id)contentImageView;
- (void)continuePressed:(id)arg1;
- (id)delegate;
- (id)initWithHome:(id)arg1;
- (Class)onboardingFlowClass;
- (void)setContentImageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end

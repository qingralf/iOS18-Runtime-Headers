/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUHomeHubMigrationFailedViewController : HUImageOBWelcomeController <HUConfigurationViewController> {
    OBBoldTrayButton * _commitButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) OBBoldTrayButton *commitButton;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep; /* unknown property attribute: ? */
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (bool)_limitToNonScrollingContentHeight;
- (id)commitButton;
- (id)delegate;
- (id)init;
- (id)initWithDetailText:(id)arg1;
- (Class)onboardingFlowClass;
- (void)setCommitButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end

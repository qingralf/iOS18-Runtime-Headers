/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKOrderPhysicalCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKViewControllerPreflightable> {
    PKPhysicalCardArtworkOption * _artworkOption;
    NSString * _bodyOverride;
    long long  _context;
    PKOrderPhysicalCardController * _controller;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    unsigned long long  _featureIdentifier;
    NSString * _nameOnCard;
    PKOrderPhysicalCardHeroView * _physicalCardHeroView;
    NSString * _primaryButtonTitleOverride;
    NSString * _secondaryButtonTitleOverride;
    NSString * _titleOverride;
    bool  _unavailableToOrder;
}

@property (nonatomic, copy) NSString *bodyOverride;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *primaryButtonTitleOverride;
@property (nonatomic, copy) NSString *secondaryButtonTitleOverride;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleOverride;

- (void).cxx_destruct;
- (void)_handleNextStep;
- (void)_terminateSetupFlow;
- (id)bodyOverride;
- (id)delegate;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)primaryButtonTitleOverride;
- (id)secondaryButtonTitleOverride;
- (void)setBodyOverride:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryButtonTitleOverride:(id)arg1;
- (void)setSecondaryButtonTitleOverride:(id)arg1;
- (void)setTitleOverride:(id)arg1;
- (id)titleOverride;
- (void)viewDidLoad;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPayLaterPaymentScheduleViewController : PKPayLaterSetupViewController <PKPayLaterPaymentScheduleSectionControllerDelegate, PKPayLaterSectionControllerDelegate> {
    PKPayLaterPaymentScheduleSectionController * _sectionController;
    PKPayLaterFinancingOption * _selectedFinancingOption;
    long long  _setupFlowControllerContext;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSetupFlowController:(id)arg1 dynamicContentPageType:(unsigned long long)arg2;
- (void)nextButtonTapped;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

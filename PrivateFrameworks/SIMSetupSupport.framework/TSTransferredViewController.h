/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSTransferredViewController : TSOBWelcomeController <TSSetupFlowItem, UINavigationControllerDelegate> {
    <TSSIMSetupFlowDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (void)_skipButtonTapped;
- (id)delegate;
- (id)initWithTransferredPlan:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end

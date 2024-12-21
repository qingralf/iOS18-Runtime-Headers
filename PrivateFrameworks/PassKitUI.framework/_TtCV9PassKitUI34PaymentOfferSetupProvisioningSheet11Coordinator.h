/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface _TtCV9PassKitUI34PaymentOfferSetupProvisioningSheet11Coordinator : NSObject <PKUIFlowManagerRenderer> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cardArtURL;
    void completion;
    void criteriaIdentifier;
    void flowDelegate;
    void navigationController;
    void paymentOffersController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  provisioningData;
}

@property (nonatomic, retain) <PKUIFlowManagerRendererDelegate> *flowDelegate;

- (void).cxx_destruct;
- (id)createChildRenderer;
- (void)dismissWithViewController:(id)arg1 animated:(bool)arg2;
- (id)flowDelegate;
- (id)init;
- (id)navViewControllers;
- (void)presentWithViewController:(id)arg1 animated:(bool)arg2;
- (void)pushWithViewController:(id)arg1 animated:(bool)arg2;
- (id)rootViewController;
- (void)setFlowDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;

@end
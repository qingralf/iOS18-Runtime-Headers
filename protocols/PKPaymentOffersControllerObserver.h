/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentOffersControllerObserver <NSObject>

@optional

- (void)paymentOfferCatalogChanged:(PKPaymentOffersController *)arg1;
- (void)paymentOfferDynamicContentChanged:(PKPaymentOffersController *)arg1;
- (void)paymentOffersChanged:(PKPaymentOffersController *)arg1 forPassUniqueIdentifier:(NSString *)arg2;
- (void)selectedPaymentOfferChanged:(PKPaymentOffersController *)arg1 forPassUniqueIdentifier:(NSString *)arg2;

@end

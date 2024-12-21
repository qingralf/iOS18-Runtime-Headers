/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExpressPassController : NSObject {
    long long  _apiVersion;
    bool  _hasSupportsExpressForAutomaticSelectionTechnologyTypeCheck;
    bool  _isForWatch;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    <PKPaymentDataProvider> * _paymentDataProvider;
    id  _presentingViewController;
}

@property (nonatomic) long long apiVersion;
@property (nonatomic) id presentingViewController;

- (void).cxx_destruct;
- (void)_disableExpressModeForPassWithUniqueIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)apiVersion;
- (void)conflictingExpressPassesWithPassConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)conflictingExpressPassesWithPassInformation:(id)arg1 completion:(id /* block */)arg2;
- (bool)deviceUsesAutomaticAuthorization;
- (void)disableExpressModeForPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)disableExpressModeForPassesWithUniqueIdentifiers:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)eligibleExpressUpgradeRequestsForPass:(id)arg1;
- (id)enabledExpressPasses;
- (id)existingExpressPassConfigurationForPass:(id)arg1;
- (id)existingExpressPassInformationForPass:(id)arg1;
- (id)expressModeSupportedForPass:(id)arg1;
- (id)expressModeUpgradeRequestForPass:(id)arg1;
- (id)expressState;
- (bool)hasEligibleExpressUpgradeRequestForPass:(id)arg1;
- (id)initWithPaymentDataProvider:(id)arg1 passLibraryDataProvider:(id)arg2 isForWatch:(bool)arg3;
- (bool)isExpressModeSupportedForPass:(id)arg1;
- (id)presentingViewController;
- (void)setApiVersion:(long long)arg1;
- (void)setExpressModeWithPassConfiguration:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setExpressModeWithPassInformation:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setPresentingViewController:(id)arg1;
- (bool)supportsLowPowerExpressMode;
- (void)upgradeExpressModeForPass:(id)arg1 withCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)upgradeExpressModeForPass:(id)arg1 withCredential:(id)arg2 resultHandler:(id /* block */)arg3;

@end
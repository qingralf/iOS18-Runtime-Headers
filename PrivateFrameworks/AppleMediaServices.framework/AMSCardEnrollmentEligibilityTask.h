/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCardEnrollmentEligibilityTask : AMSTask {
    <AMSBagProtocol> * _bag;
    NSString * _countryCode;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, readonly, copy) NSString *countryCode;

- (void).cxx_destruct;
- (unsigned long long)_cardTypeForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)_checkForCombinediTunesAccount;
- (id)_checkThatSilentEnrollmentIsEnabled;
- (id)_createEligibilityRequestWithBag:(id)arg1 iTunesAccount:(id)arg2 iCloudAccount:(id)arg3 cardType:(unsigned long long)arg4;
- (id)_mediaType;
- (id)_performSilentEnrollmentCheckWithRequest:(id)arg1;
- (id)bag;
- (void)canWriteBillingInfoWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(id /* block */)arg3;
- (id)countryCode;
- (id)initWithBag:(id)arg1;
- (id)initWithBag:(id)arg1 countryCode:(id)arg2;
- (id)initWithCountryCode:(id)arg1;
- (id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)setBag:(id)arg1;

@end
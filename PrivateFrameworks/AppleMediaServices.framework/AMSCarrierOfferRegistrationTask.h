/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCarrierOfferRegistrationTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSArray * _carriers;
    AMSURLRequestEncoder * _checkOfferRequestEncoder;
    AMSProcessInfo * _clientInfo;
    NSString * _deviceGUID;
    NSString * _msisdn;
    AMSPromise * _pacTokenPromise;
    Class  _privacyMappingResolver;
    AMSURLRequestEncoder * _registrationRequestEncoder;
    AMSURLSession * _urlSession;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSArray *carriers;
@property (nonatomic, readonly) AMSURLRequestEncoder *checkOfferRequestEncoder;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceGUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *msisdn;
@property (nonatomic, readonly) AMSPromise *pacTokenPromise;
@property (nonatomic, readonly) Class privacyMappingResolver;
@property (nonatomic, readonly) AMSURLRequestEncoder *registrationRequestEncoder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSURLSession *urlSession;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)invalidParameterError:(id)arg1;
+ (id)pollingIntervalFromBag:(id)arg1;

- (void).cxx_destruct;
- (id)_allowedServiceIdentifiersFromPrivacyMapping:(id)arg1;
- (id)_checkOffersBodyLimitedByAllowedServiceIdentifiers:(id)arg1;
- (id)_checkOffersRequestLimitedByAllowedServiceIdentifiers:(id)arg1;
- (id)_evaluationRequiredPrivacyMappingPair;
- (id)_hasOffersLimitedByAllowedServiceIdentifiers:(id)arg1;
- (id)_includesAllowedCarrier;
- (id)_pacToken;
- (id)_parseCheckOffersResult:(id)arg1;
- (id)_performRegistrationFlowLimitedByAllowedServiceIdentifiers:(id)arg1;
- (id)_registerCarrierOffersToAccountLimitedByAllowedServiceIdentifiers:(id)arg1;
- (id)_registrationBodyLimitedByAllowedServiceIdentifiers:(id)arg1;
- (id)_registrationRequestLimitedByAllowedServiceIdentifiers:(id)arg1;
- (id)account;
- (id)bag;
- (id)carriers;
- (id)checkOfferRequestEncoder;
- (id)clientInfo;
- (id)deviceGUID;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 carriers:(id)arg3 checkOfferRequestEncoder:(id)arg4 deviceGUID:(id)arg5 msisdn:(id)arg6 pacTokenPromise:(id)arg7 privacyMappingResolver:(Class)arg8 registrationRequestEncoder:(id)arg9 urlSession:(id)arg10;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 carriers:(id)arg3 deviceGUID:(id)arg4 msisdn:(id)arg5;
- (id)msisdn;
- (id)pacTokenPromise;
- (id)perform;
- (Class)privacyMappingResolver;
- (id)registrationRequestEncoder;
- (void)setClientInfo:(id)arg1;
- (id)urlSession;

@end

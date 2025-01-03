/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOfferWebServiceRewardsRedemptionsRequest : PKPaymentOfferWebServiceRequest {
    NSURL * _baseURL;
    NSString * _criteriaIdentifier;
    NSString * _fpanIdentifier;
    NSDate * _lastUpdated;
    NSNumber * _limit;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *criteriaIdentifier;
@property (nonatomic, copy) NSString *fpanIdentifier;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic, copy) NSNumber *limit;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)baseURL;
- (id)criteriaIdentifier;
- (id)fpanIdentifier;
- (id)lastUpdated;
- (id)limit;
- (void)setBaseURL:(id)arg1;
- (void)setCriteriaIdentifier:(id)arg1;
- (void)setFpanIdentifier:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setLimit:(id)arg1;

@end

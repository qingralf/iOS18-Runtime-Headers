/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDataReleaseEntityLookupSource : NSObject <PKMerchantLookupRequestSource> {
    NSString * _entity;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)containsSensitiveData;
- (id)identifier;
- (id)initWithEntityIdentifier:(id)arg1;
- (bool)isRefund;
- (bool)isSettlement;
- (id)mapsMerchantLookupRequest;
- (id)mapsURL;
- (long long)type;

@end

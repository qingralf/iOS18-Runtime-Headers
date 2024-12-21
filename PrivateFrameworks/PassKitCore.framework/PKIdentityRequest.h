/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKIdentityRequest : NSObject {
    <PKIdentityDocumentDescriptor> * _descriptor;
    NSString * _merchantIdentifier;
    NSString * _merchantNameOverride;
    NSURL * _merchantPrivacyPolicyOverride;
    NSData * _nonce;
}

@property (nonatomic, retain) <PKIdentityDocumentDescriptor> *descriptor;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSString *merchantNameOverride;
@property (nonatomic, copy) NSURL *merchantPrivacyPolicyOverride;
@property (nonatomic, copy) NSData *nonce;

- (void).cxx_destruct;
- (id)asDIIdentityRequest;
- (id)description;
- (id)descriptor;
- (id)merchantIdentifier;
- (id)merchantNameOverride;
- (id)merchantPrivacyPolicyOverride;
- (id)nonce;
- (void)setDescriptor:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantNameOverride:(id)arg1;
- (void)setMerchantPrivacyPolicyOverride:(id)arg1;
- (void)setNonce:(id)arg1;

@end
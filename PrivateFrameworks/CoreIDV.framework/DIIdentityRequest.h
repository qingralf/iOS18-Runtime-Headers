/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

@interface DIIdentityRequest : NSObject {
    <DIIdentityDocumentDescriptor> * _descriptor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _merchantIdentifier;
    NSString * _merchantNameOverride;
    NSURL * _merchantPrivacyPolicyOverride;
    NSData * _nonce;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic, retain) <DIIdentityDocumentDescriptor> *descriptor;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSString *merchantNameOverride;
@property (nonatomic, copy) NSURL *merchantPrivacyPolicyOverride;
@property (nonatomic, copy) NSData *nonce;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)descriptor;
- (id)init;
- (id)merchantIdentifier;
- (id)merchantNameOverride;
- (id)merchantPrivacyPolicyOverride;
- (id)nonce;
- (void)setContext:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantNameOverride:(id)arg1;
- (void)setMerchantPrivacyPolicyOverride:(id)arg1;
- (void)setNonce:(id)arg1;

@end
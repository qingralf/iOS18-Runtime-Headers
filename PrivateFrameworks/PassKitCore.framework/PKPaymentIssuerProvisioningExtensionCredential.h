/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential {
    PKIssuerProvisioningExtensionPaymentPassEntry * _entry;
    NSExtension * _extension;
}

@property (nonatomic, readonly) PKIssuerProvisioningExtensionPaymentPassEntry *entry;
@property (nonatomic, readonly) NSExtension *extension;

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (id)detailDescriptionWithEnvironment:(unsigned long long)arg1;
- (id)entry;
- (id)extension;
- (unsigned long long)hash;
- (id)initWithExtension:(id)arg1 entry:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metadata;

@end

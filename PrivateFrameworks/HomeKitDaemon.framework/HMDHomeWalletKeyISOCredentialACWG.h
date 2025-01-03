/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeWalletKeyISOCredentialACWG : HMFObject <CIDCPayloadBuilderDelegate, HMDHomeWalletKeyISOCredential> {
    CIDCPayloadBuilder * _credentialBuilder;
    NSData * _deviceCredentialPublicKeyExternalRepresentation;
    NSData * _issuerKeyPairExternalRepresentation;
}

@property (readonly) CIDCPayloadBuilder *credentialBuilder;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSData *deviceCredentialPublicKeyExternalRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSData *issuerKeyPairExternalRepresentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)credentialBuilder;
- (id)deviceCredentialPublicKeyExternalRepresentation;
- (void)encodeWithCompletion:(id /* block */)arg1;
- (id)initWithIssuerKeyPairExternalRepresentation:(id)arg1 deviceCredentialPublicKeyExternalRepresentation:(id)arg2;
- (id)issuerKeyPairExternalRepresentation;
- (void)signPayloadWithBuilder:(id)arg1 data:(id)arg2 completion:(id /* block */)arg3;

@end

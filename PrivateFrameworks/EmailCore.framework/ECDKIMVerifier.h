/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECDKIMVerifier : NSObject {
    <ECDKIMPublicKeySource> * _publicKeySource;
}

@property (nonatomic, readonly) <ECDKIMPublicKeySource> *publicKeySource;

- (void).cxx_destruct;
- (id)_base64HashBodyData:(id)arg1 usingSignature:(id)arg2;
- (void)_canonicalizeBodyDataUsingRelaxedAlgorithm:(id)arg1;
- (void)_canonicalizeBodyDataUsingSimpleAlgorithm:(id)arg1;
- (id)_canonicalizeHeaders:(id)arg1 usingRelaxedAlgorithmWithSignatureHeader:(id)arg2;
- (id)_canonicalizeHeaders:(id)arg1 usingSimpleAlgorithmWithSignatureHeader:(id)arg2;
- (id)_relaxedCanonicalizationForHeaderName:(id)arg1 headerBody:(id)arg2;
- (id)_verifyMessage:(id)arg1 withDKIMSignatureHeaders:(id)arg2 publicKeySource:(id)arg3 options:(long long)arg4 error:(out id*)arg5;
- (bool)_verifyMessageBodyData:(id)arg1 withOptions:(long long)arg2 usingSignature:(id)arg3;
- (bool)_verifyMessageHeaders:(id)arg1 usingSignature:(id)arg2 publicKeySource:(id)arg3 error:(out id*)arg4;
- (id)init;
- (id)initWithPublicKeySource:(id)arg1;
- (id)publicKeySource;
- (id)verifiableMessageForMessageData:(id)arg1 dkimSignatureHeaders:(out id*)arg2 error:(out id*)arg3;
- (id)verificationContextForMessageData:(id)arg1 error:(id*)arg2;
- (id)verifyMessage:(id)arg1 withDKIMSignatureHeaders:(id)arg2 options:(long long)arg3 error:(out id*)arg4;
- (bool)verifyMessageData:(id)arg1;
- (bool)verifyMessageData:(id)arg1 options:(long long)arg2;
- (bool)verifyMessageData:(id)arg1 publicKeySource:(id)arg2 options:(long long)arg3;
- (bool)verifyMessageWithContext:(id)arg1 options:(long long)arg2 error:(out id*)arg3;
- (bool)verifyMessageWithContext:(id)arg1 publicKeySource:(id)arg2 options:(long long)arg3 error:(out id*)arg4;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSNGMPublicDeviceIdentity : NSObject

+ (id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id*)arg3;
+ (bool)shouldMarkForStateReset:(id)arg1;

- (id)dataRepresentationWithError:(id*)arg1;
- (id)identityData;
- (bool)isIdenticalIdentityTo:(id)arg1;
- (bool)isValidSignature:(id)arg1 forMessage:(id)arg2 forType:(long long)arg3 error:(id*)arg4;
- (bool)markForStateResetWithOurURI:(id)arg1 ourPushToken:(id)arg2 ourSigningIdentity:(id)arg3 theirURI:(id)arg4 theirPushToken:(id)arg5;
- (id)prekeyData;
- (id)sealMessage:(id)arg1 authenticatedData:(id)arg2 messageType:(long long)arg3 guid:(id)arg4 sendingURI:(id)arg5 sendingPushToken:(id)arg6 receivingURI:(id)arg7 receivingPushToken:(id)arg8 forceSizeOptimizations:(bool)arg9 resetState:(bool)arg10 encryptedAttributes:(id)arg11 signedByFullIdentity:(id)arg12 errors:(id*)arg13;
- (id)sealMessage:(id)arg1 forceSizeOptimizations:(bool)arg2 resetState:(bool)arg3 encryptedAttributes:(id)arg4 signedByFullIdentity:(id)arg5 errors:(id*)arg6;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3;
- (id)sealMessage:(id)arg1 withEncryptedAttributes:(id)arg2 signedByFullIdentity:(id)arg3 error:(id*)arg4;
- (id)sealPaddyMessage:(id)arg1 sendingURI:(id)arg2 sendingPushToken:(id)arg3 receivingURI:(id)arg4 receivingPushToken:(id)arg5 signedByFullIdentity:(id)arg6 error:(id*)arg7;

@end

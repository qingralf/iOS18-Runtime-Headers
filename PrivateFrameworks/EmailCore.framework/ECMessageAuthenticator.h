/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECMessageAuthenticator : NSObject {
    ECDKIMVerifier * _dkimVerifier;
    ECDMARCVerifier * _dmarcVerifier;
}

@property (nonatomic, readonly) ECDKIMVerifier *dkimVerifier;
@property (nonatomic, readonly) ECDMARCVerifier *dmarcVerifier;

- (void).cxx_destruct;
- (void)_addServerResultsFromMessage:(id)arg1 toResult:(id)arg2;
- (bool)_isErrorStatus:(long long)arg1;
- (id)_onDeviceResultsForMessage:(id)arg1 sender:(id)arg2 dkimHeaders:(id)arg3;
- (id)_verifyMessage:(id)arg1 withDKIMSignatureHeaders:(id)arg2 sender:(id)arg3 identifierAlignment:(long long)arg4 dkimVerifierOptions:(long long)arg5;
- (id)_verifyMessage:(id)arg1 withSender:(id)arg2 strictlyAlignedDKIMSignatureHeaders:(id)arg3 relaxedAlignedDKIMSignatureHeaders:(id)arg4 dkimVerifierOptions:(long long)arg5;
- (id)authenticateMessageData:(id)arg1 onDevice:(bool)arg2 sender:(id)arg3;
- (id)dkimVerifier;
- (id)dmarcVerifier;
- (id)init;
- (id)initWithDKIMVerifier:(id)arg1 dmarcVerifier:(id)arg2;
- (id)initWithDNSClient:(id)arg1;

@end
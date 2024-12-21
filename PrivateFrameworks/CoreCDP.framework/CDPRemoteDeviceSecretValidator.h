/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPRemoteDeviceSecretValidator : NSObject {
    CDPContext * _context;
    <CDPRemoteDeviceSecretValidatorProtocol> * _validator;
}

- (void).cxx_destruct;
- (void)_executeSyncOnMainThreadIfNeeded:(id /* block */)arg1;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)arg1;
- (void)attemptToJoinCircleWithPiggybacking:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(id)arg1;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (void)repairEDPStateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)resetAccountCDPState;
- (void)resetAccountCDPStateWithEscapeOptionsOffered:(unsigned long long)arg1;
- (void)resetAccountCDPStateWithEscapeOptionsOffered:(unsigned long long)arg1 andSetSecret:(id)arg2;
- (unsigned long long)supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)arg1;
- (void)validateCustodianRecoveryInfo:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)validateEDPRecoveryToken:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)validateRecoveryKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;

@end
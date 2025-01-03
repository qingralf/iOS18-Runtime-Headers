/* Generated by RuntimeBrowser.
 */

@protocol CDPStateUIProviderInternal

@required

- (void)cdpContext:(void *)arg1 createLocalSecretWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPLocalSecret *, NSError *, void*
- (void)cdpContext:(void *)arg1 presentRecoveryKeyWithValidator:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPRecoveryKeyValidatorInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cdpContext:(void *)arg1 presentRemoteApprovalWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cdpContext:(void *)arg1 promptForAdoptionOfMultipleICSC:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cdpContext:(void *)arg1 promptForBeneficiaryAccessKeyWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKInheritanceAccessKey *, NSError *, void*
- (void)cdpContext:(CDPContext *)arg1 promptForICSCWithIsNumeric:(bool)arg2 numericLength:(NSNumber *)arg3 isRandom:(bool)arg4 validator:(id <CDPRemoteDeviceSecretValidatorProtocol>)arg5;
- (void)cdpContext:(void *)arg1 promptForInteractiveAuthenticationWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)cdpContext:(void *)arg1 promptForLocalSecretWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPLocalSecret *, NSError *, void*
- (void)cdpContext:(void *)arg1 promptForRecoveryKeyWithSecretValidator:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPRemoteDeviceSecretValidatorProtocolInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cdpContext:(void *)arg1 promptForRecoveryKeyWithValidator:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPRecoveryKeyValidatorInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cdpContext:(CDPContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 offeringRemoteApproval:(bool)arg3 validator:(id <CDPRemoteDeviceSecretValidatorProtocol>)arg4;
- (void)cdpContext:(void *)arg1 showError:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: CDPContext *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)cdpContext:(void *)arg1 showError:(void *)arg2 withDefaultIndex:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: CDPContext *, NSError *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)cdpRecoveryFlowContext:(CDPRecoveryFlowContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 validator:(id <CDPRemoteDeviceSecretValidatorProtocol>)arg3;
- (void)dismissRemoteApprovalWaitingScreenWithAction:(unsigned long long)arg1;

@optional

- (void)cdpContext:(void *)arg1 promptForEDPRecoveryTokenWithValidator:(void *)arg2 successfulCDPRecoveryContinuationHandler:(void *)arg3; // needs 3 arg types, found 7: CDPContext *, <CDPRemoteDeviceSecretValidatorProtocolInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cdpContext:(void *)arg1 showResetCompletedAlertWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)cdpContext:(void *)arg1 showResetFailedAlertWithUnderlyingError:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)presentQuotaScreenWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, CDPLocalSecret *, void*

@end

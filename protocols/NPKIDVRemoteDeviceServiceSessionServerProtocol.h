/* Generated by RuntimeBrowser.
 */

@protocol NPKIDVRemoteDeviceServiceSessionServerProtocol <PDXPCServiceExportedInterface, NPKIDVRemoteDeviceNotificationManager, NPKIDVRemoteDeviceProofingManager, NPKIDVRemoteDeviceCredentialStorage, DCBioBindingProtocol>

@required

- (void)confirmRemoteDeviceID:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)credentialPreflightStatusForType:(void *)arg1 minOSVersion:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NPKIDVRemoteDeviceCredentialPreflightStatus *, NSError *, void*
- (void)fetchRemoteBiometricAuthenticationStatusForCredentialType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getCASDCertificateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)pairedWatchSEIDWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)provisionCredentialWithType:(void *)arg1 metadata:(void *)arg2 credentialIdentifier:(void *)arg3 attestations:(void *)arg4 supplementalData:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: unsigned long long, PKShareablePassMetadata *, NSString *, PKIdentityProvisioningAttestations *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKSecureElementPass *, NSError *, void*
- (void)provisionedCredentialCountForType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)registerForEvents:(void *)arg1 withRemoteProcessServiceName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)unregisterFromEvents:(void *)arg1 withRemoteProcessServiceName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end

/* Generated by RuntimeBrowser.
 */

@protocol NPKIDVRemoteDeviceSessionServiceDataSource <NSObject>

@required

- (void)remoteDevicesSessionService:(void *)arg1 provisionedCredentialCountsForType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NPKIDVRemoteDeviceSessionService *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)remoteDevicesSessionService:(void *)arg1 remoteBiometricAuthenticationStatusForCredentialType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NPKIDVRemoteDeviceSessionService *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
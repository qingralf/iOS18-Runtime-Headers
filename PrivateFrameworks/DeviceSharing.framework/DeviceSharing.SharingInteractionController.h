/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceSharing.framework/DeviceSharing
 */

@interface DeviceSharing.SharingInteractionController : SwiftNativeNSObject <SFAuthenticationManagerDelegate> {
    void authenticationManager;
    void authenticationManagerQueue;
    void requests;
}

- (id)init;
- (void)manager:(id)arg1 didCompleteAuthenticationForSessionWithID:(id)arg2;
- (void)manager:(id)arg1 didDisableAuthenticationForSessionWithID:(id)arg2;
- (void)manager:(id)arg1 didEnableAuthenticationForSessionWithID:(id)arg2;
- (void)manager:(id)arg1 didFailAuthenticationForSessionWithID:(id)arg2 error:(id)arg3;
- (void)manager:(id)arg1 didFailToDisableDeviceForSessionWithID:(id)arg2 error:(id)arg3;
- (void)manager:(id)arg1 didFailToEnableDeviceForSessionWithID:(id)arg2 error:(id)arg3;
- (void)manager:(id)arg1 didStartAuthenticationForSessionWithID:(id)arg2;

@end

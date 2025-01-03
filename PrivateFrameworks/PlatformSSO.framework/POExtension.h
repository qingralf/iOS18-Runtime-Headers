/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSO.framework/PlatformSSO
 */

@interface POExtension : NSObject <SOExtensionDelegate> {
    <POExtensionDelegate> * _delegate;
    SOExtension * _extension;
    SORemoteExtensionViewController * _extensionViewController;
    NSNumber * _sdkVersionString;
}

@property (nonatomic, readonly) NSArray *authenticationMethods;
@property (readonly) NSString *containerAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <POExtensionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *sdkVersionString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_unload;
- (id)authenticationMethods;
- (void)authorization:(id)arg1 didCompleteWithCredential:(id)arg2 error:(id)arg3;
- (void)beginDeviceRegistrationUsingOptions:(long long)arg1 extensionData:(id)arg2 completion:(id /* block */)arg3;
- (void)beginUserRegistrationUsingUserName:(id)arg1 authenticationMethod:(int)arg2 options:(long long)arg3 extensionData:(id)arg4 completion:(id /* block */)arg5;
- (bool)canPerformRegistration;
- (void)close;
- (id)containerAppBundleIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)initWithExtensionBundleIdentifier:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 extensionManager:(id)arg2;
- (void)keyWillRotateForKeyType:(long long)arg1 newKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2 extensionData:(id)arg3 completion:(id /* block */)arg4;
- (void)presentAuthorizationViewControllerInWindow:(id)arg1 hints:(id)arg2 completion:(id /* block */)arg3;
- (long long)protocolVersion;
- (void)registrationDidCancelWithCompletion:(id /* block */)arg1;
- (void)registrationDidCompleteWithCompletion:(id /* block */)arg1;
- (id)sdkVersionString;
- (void)setDelegate:(id)arg1;
- (id)supportedDeviceEncryptionAlgorithms;
- (id)supportedDeviceSigningAlgorithms;
- (long long)supportedGrantTypes;
- (id)supportedUserSecureEnclaveKeySigningAlgorithms;
- (void)unload;

@end

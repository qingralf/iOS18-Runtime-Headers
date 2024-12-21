/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASCredentialProviderExtensionContext : NSExtensionContext <_ASCredentialProviderExtensionContextProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelRequestWithError:(id)arg1;
- (void)completeAssertionRequestWithSelectedPasskeyCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeExtensionConfigurationRequest;
- (void)completeOneTimeCodeRequestWithSelectedCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeRegistrationRequestWithSelectedPasskeyCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeRequestWithSelectedCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeRequestWithTextToInsert:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performPasskeyRegistrationWithoutUserInteractionIfPossible:(id)arg1;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1 requestParameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceForPasskeyRegistration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareInterfaceForUserChoosingTextToInsert;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareInterfaceToProvideCredentialForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareOneTimeCodeCredentialListForServiceIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1;
- (void)provideCredentialWithoutUserInteractionForRequest:(id)arg1;

@end
/* Generated by RuntimeBrowser.
 */

@protocol ASAuthorizationWebBrowserPlatformPublicKeyCredentialProvider

@required

- (ASAuthorizationPlatformPublicKeyCredentialAssertionRequest *)createCredentialAssertionRequestWithClientData:(ASPublicKeyCredentialClientData *)arg1;
- (ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest *)createCredentialRegistrationRequestWithClientData:(ASPublicKeyCredentialClientData *)arg1 name:(NSString *)arg2 userID:(NSData *)arg3;
- (ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest *)createCredentialRegistrationRequestWithClientData:(ASPublicKeyCredentialClientData *)arg1 name:(NSString *)arg2 userID:(NSData *)arg3 requestStyle:(long long)arg4;

@end

/* Generated by RuntimeBrowser.
 */

@protocol ASAuthorizationWebBrowserSecurityKeyPublicKeyCredentialProvider

@required

- (ASAuthorizationSecurityKeyPublicKeyCredentialAssertionRequest *)createCredentialAssertionRequestWithClientData:(ASPublicKeyCredentialClientData *)arg1;
- (ASAuthorizationSecurityKeyPublicKeyCredentialRegistrationRequest *)createCredentialRegistrationRequestWithClientData:(ASPublicKeyCredentialClientData *)arg1 displayName:(NSString *)arg2 name:(NSString *)arg3 userID:(NSData *)arg4;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVServerAuthenticateRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext * _authenticationContext;
    NSObject<OS_xpc_object> * _dialog;
}

@property (nonatomic, copy) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *encodedDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticationContext;
- (id)copyXPCEncoding;
- (id)encodedDialog;
- (id)initWithEncodedDialog:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)startWithAuthenticateResponse:(id /* block */)arg1;

@end

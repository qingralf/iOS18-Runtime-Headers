/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding> {
    NSNumber * _accountIdentifier;
    bool  _allowSilentAuthentication;
    NSString * _clientIdentifierHeader;
    NSNumber * _familyAccountIdentifier;
    NSString * _keybagPath;
    NSString * _reason;
    bool  _shouldAddKeysToKeyBag;
    bool  _shouldPromptForCredentials;
    id  _token;
    NSString * _userAgent;
}

@property (copy) NSNumber *accountIdentifier;
@property (nonatomic) bool allowSilentAuthentication;
@property (readonly) id authorizationToken;
@property (copy) NSString *clientIdentifierHeader;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SSAuthorizationRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *familyAccountIdentifier;
@property (readonly) unsigned long long hash;
@property (copy) NSString *keybagPath;
@property (copy) NSString *reason;
@property (nonatomic) bool shouldAddKeysToKeyBag;
@property (nonatomic) bool shouldPromptForCredentials;
@property (readonly) Class superclass;
@property (copy) NSString *userAgent;

- (void).cxx_destruct;
- (id)_init;
- (id)accountIdentifier;
- (bool)allowSilentAuthentication;
- (id)authorizationToken;
- (id)clientIdentifierHeader;
- (id)copyXPCEncoding;
- (id)familyAccountIdentifier;
- (id)init;
- (id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)keybagPath;
- (id)reason;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAllowSilentAuthentication:(bool)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setFamilyAccountIdentifier:(id)arg1;
- (void)setKeybagPath:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setShouldAddKeysToKeyBag:(bool)arg1;
- (void)setShouldPromptForCredentials:(bool)arg1;
- (void)setUserAgent:(id)arg1;
- (bool)shouldAddKeysToKeyBag;
- (bool)shouldPromptForCredentials;
- (bool)start;
- (void)startWithAuthorizationResponseBlock:(id /* block */)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (id)userAgent;

@end

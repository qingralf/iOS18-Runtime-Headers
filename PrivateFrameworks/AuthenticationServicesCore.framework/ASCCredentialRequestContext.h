/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore
 */

@interface ASCCredentialRequestContext : NSObject <NSSecureCoding> {
    AKAuthorizationRequest * _appleIDAuthorizationRequest;
    LAContext * _authenticatedContext;
    ASGlobalFrameIdentifier * _globalFrameID;
    bool  _isCABLEAuthenticatorRequest;
    bool  _isClientLinkedOnOrAfterIOS15Aligned;
    bool  _isConditionalRegistrationRequest;
    ASCPublicKeyCredentialAssertionOptions * _platformKeyCredentialAssertionOptions;
    ASCPublicKeyCredentialCreationOptions * _platformKeyCredentialCreationOptions;
    NSString * _proxiedAppIdentifier;
    NSString * _proxiedAppName;
    NSArray * _proxiedAssociatedDomains;
    NSString * _proxiedBundleIdentifier;
    NSData * _proxiedIconData;
    NSNumber * _proxiedIconScale;
    NSString * _proxiedOriginDeviceName;
    NSString * _proxiedTeamIdentifier;
    NSString * _proxySheetHeaderOverride;
    NSString * _proxySheetNoCredentialsErrorMessageOverride;
    NSString * _proxySheetNoCredentialsErrorTitleOverride;
    NSString * _proxySheetSubtitleOverride;
    NSString * _proxySheetTitleOverride;
    NSString * _relyingPartyIdentifier;
    unsigned long long  _requestOptions;
    long long  _requestStyle;
    unsigned long long  _requestTypes;
    WBSSavedAccountContext * _savedAccountContext;
    ASCPublicKeyCredentialAssertionOptions * _securityKeyCredentialAssertionOptions;
    ASCPublicKeyCredentialCreationOptions * _securityKeyCredentialCreationOptions;
    bool  _useAlternativeSecurityKeysIcon;
    NSString * _windowSceneIdentifier;
}

@property (nonatomic, retain) AKAuthorizationRequest *appleIDAuthorizationRequest;
@property (nonatomic, retain) LAContext *authenticatedContext;
@property (nonatomic, copy) ASGlobalFrameIdentifier *globalFrameID;
@property (nonatomic) bool isCABLEAuthenticatorRequest;
@property (nonatomic, readonly) bool isClientLinkedOnOrAfterIOS15Aligned;
@property (nonatomic) bool isConditionalRegistrationRequest;
@property (nonatomic, readonly) bool isProxiedRequest;
@property (nonatomic, readonly) bool isRegistrationRequest;
@property (nonatomic, readonly) bool isUsingWebBrowserOnlyOptions;
@property (nonatomic, retain) ASCPublicKeyCredentialAssertionOptions *platformKeyCredentialAssertionOptions;
@property (nonatomic, retain) ASCPublicKeyCredentialCreationOptions *platformKeyCredentialCreationOptions;
@property (nonatomic, copy) NSString *proxiedAppIdentifier;
@property (nonatomic, copy) NSString *proxiedAppName;
@property (nonatomic, copy) NSArray *proxiedAssociatedDomains;
@property (nonatomic, copy) NSString *proxiedBundleIdentifier;
@property (nonatomic, copy) NSData *proxiedIconData;
@property (nonatomic, copy) NSNumber *proxiedIconScale;
@property (nonatomic, copy) NSString *proxiedOriginDeviceName;
@property (nonatomic, copy) NSString *proxiedTeamIdentifier;
@property (nonatomic, copy) NSString *proxySheetHeaderOverride;
@property (nonatomic, copy) NSString *proxySheetNoCredentialsErrorMessageOverride;
@property (nonatomic, copy) NSString *proxySheetNoCredentialsErrorTitleOverride;
@property (nonatomic, copy) NSString *proxySheetSubtitleOverride;
@property (nonatomic, copy) NSString *proxySheetTitleOverride;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;
@property (nonatomic) unsigned long long requestOptions;
@property (nonatomic) long long requestStyle;
@property (nonatomic, readonly) unsigned long long requestTypes;
@property (nonatomic, copy) WBSSavedAccountContext *savedAccountContext;
@property (nonatomic, retain) ASCPublicKeyCredentialAssertionOptions *securityKeyCredentialAssertionOptions;
@property (nonatomic, retain) ASCPublicKeyCredentialCreationOptions *securityKeyCredentialCreationOptions;
@property (nonatomic) bool useAlternativeSecurityKeysIcon;
@property (nonatomic, copy) NSString *windowSceneIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleIDAuthorizationRequest;
- (void)applyMagicCredentialIDIfNecessary;
- (id)authenticatedContext;
- (void)encodeWithCoder:(id)arg1;
- (id)globalFrameID;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestTypes:(unsigned long long)arg1;
- (bool)isCABLEAuthenticatorRequest;
- (bool)isClientLinkedOnOrAfterIOS15Aligned;
- (bool)isConditionalRegistrationRequest;
- (bool)isProxiedRequest;
- (bool)isRegistrationRequest;
- (bool)isUsingWebBrowserOnlyOptions;
- (void)logRequest;
- (id)platformKeyCredentialAssertionOptions;
- (id)platformKeyCredentialCreationOptions;
- (id)proxiedAppIdentifier;
- (id)proxiedAppName;
- (id)proxiedAssociatedDomains;
- (id)proxiedBundleIdentifier;
- (id)proxiedIconData;
- (id)proxiedIconScale;
- (id)proxiedOriginDeviceName;
- (id)proxiedTeamIdentifier;
- (id)proxySheetHeaderOverride;
- (id)proxySheetNoCredentialsErrorMessageOverride;
- (id)proxySheetNoCredentialsErrorTitleOverride;
- (id)proxySheetSubtitleOverride;
- (id)proxySheetTitleOverride;
- (id)relyingPartyIdentifier;
- (void)removePasskeyRequests;
- (void)removeSecurityKeyRequests;
- (unsigned long long)requestOptions;
- (long long)requestStyle;
- (unsigned long long)requestTypes;
- (void)sanitizeRequestTypesForAutoFillRequestIfNecessary;
- (id)savedAccountContext;
- (id)securityKeyCredentialAssertionOptions;
- (id)securityKeyCredentialCreationOptions;
- (void)setAppleIDAuthorizationRequest:(id)arg1;
- (void)setAuthenticatedContext:(id)arg1;
- (void)setGlobalFrameID:(id)arg1;
- (void)setIsCABLEAuthenticatorRequest:(bool)arg1;
- (void)setIsConditionalRegistrationRequest:(bool)arg1;
- (void)setPlatformKeyCredentialAssertionOptions:(id)arg1;
- (void)setPlatformKeyCredentialCreationOptions:(id)arg1;
- (void)setProxiedAppIdentifier:(id)arg1;
- (void)setProxiedAppName:(id)arg1;
- (void)setProxiedAssociatedDomains:(id)arg1;
- (void)setProxiedBundleIdentifier:(id)arg1;
- (void)setProxiedIconData:(id)arg1;
- (void)setProxiedIconScale:(id)arg1;
- (void)setProxiedOriginDeviceName:(id)arg1;
- (void)setProxiedTeamIdentifier:(id)arg1;
- (void)setProxySheetHeaderOverride:(id)arg1;
- (void)setProxySheetNoCredentialsErrorMessageOverride:(id)arg1;
- (void)setProxySheetNoCredentialsErrorTitleOverride:(id)arg1;
- (void)setProxySheetSubtitleOverride:(id)arg1;
- (void)setProxySheetTitleOverride:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setRequestOptions:(unsigned long long)arg1;
- (void)setRequestStyle:(long long)arg1;
- (void)setSavedAccountContext:(id)arg1;
- (void)setSecurityKeyCredentialAssertionOptions:(id)arg1;
- (void)setSecurityKeyCredentialCreationOptions:(id)arg1;
- (void)setUseAlternativeSecurityKeysIcon:(bool)arg1;
- (void)setWindowSceneIdentifier:(id)arg1;
- (bool)useAlternativeSecurityKeysIcon;
- (id)windowSceneIdentifier;

@end
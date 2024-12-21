/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASWebAuthenticationSession : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    bool  __skipPresentationAnchorCheck;
    NSDictionary * _additionalHeaderFields;
    SFAuthenticationSession * _authenticationSession;
    ASAuthorizationController * _authorizationController;
    ASWebAuthenticationSessionCallback * _callback;
    NSArray * _customAnchorCertificates;
    id /* block */  _originalCompletionHandler;
    <ASWebAuthenticationPresentationContextProviding> * _presentationContextProvider;
    ASWebAuthenticationSession * _referenceToSelf;
    bool  _shouldFailOnMDMProfileErrorResponse;
    ASAuthorizationSingleSignOnProvider * _ssoProvider;
    unsigned long long  _storageMode;
}

@property (setter=_setSkipPresentationAnchorCheck:, nonatomic) bool _skipPresentationAnchorCheck;
@property (nonatomic, retain) NSDictionary *additionalHeaderFields;
@property (nonatomic, readonly) bool canStart;
@property (nonatomic, retain) NSArray *customAnchorCertificates;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool prefersEphemeralWebBrowserSession;
@property (nonatomic) <ASWebAuthenticationPresentationContextProviding> *presentationContextProvider;
@property (nonatomic, retain) NSArray *proxiedAssociatedDomains;
@property (nonatomic) bool shouldFailOnMDMProfileErrorResponse;
@property (nonatomic) unsigned long long storageMode;
@property (readonly) Class superclass;

+ (void)handleSSOExtensionIdentifier:(struct { unsigned int x1[8]; })arg1;
+ (void)resetSSOExtensionIdentifier;

- (void).cxx_destruct;
- (bool)_areAdditionalHeaderFieldsValid:(id)arg1;
- (void)_cancelWithError:(id)arg1;
- (void)_invalidate;
- (bool)_isForbiddenHeaderFieldName:(id)arg1 value:(id)arg2;
- (void)_setSkipPresentationAnchorCheck:(bool)arg1;
- (bool)_skipPresentationAnchorCheck;
- (bool)_startDryRun:(bool)arg1;
- (bool)_validateAdditionalHeaderFieldsDryRun:(bool)arg1;
- (id)additionalHeaderFields;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (bool)canStart;
- (void)cancel;
- (id)customAnchorCertificates;
- (id)initWithURL:(id)arg1 callback:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithURL:(id)arg1 callback:(id)arg2 usingEphemeralSession:(bool)arg3 jitEnabled:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(bool)arg3 jitEnabled:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)prefersEphemeralWebBrowserSession;
- (id)presentationAnchorForAuthorizationController:(id)arg1;
- (id)presentationContextProvider;
- (id)proxiedAssociatedDomains;
- (void)setAdditionalHeaderFields:(id)arg1;
- (void)setCustomAnchorCertificates:(id)arg1;
- (void)setPrefersEphemeralWebBrowserSession:(bool)arg1;
- (void)setPresentationContextProvider:(id)arg1;
- (void)setProxiedAssociatedDomains:(id)arg1;
- (void)setShouldFailOnMDMProfileErrorResponse:(bool)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (bool)shouldFailOnMDMProfileErrorResponse;
- (bool)start;
- (unsigned long long)storageMode;

@end
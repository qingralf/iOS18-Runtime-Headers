/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRTermsAndConditionsManager : NSObject <AAUIGenericTermsRemoteUIDelegate> {
    id /* block */  _acceptAction;
    NSDictionary * _acceptedTermsInfo;
    NSDictionary * _authResult;
    id /* block */  _declineAction;
    bool  _didAccept;
    UIViewController * _presentingViewController;
    AKDevice * _proxiedDevice;
    AAUIProxiedTermsRemoteUI * _proxiedTermsRemoteUI;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAUIProxiedTermsRemoteUI *proxiedTermsRemoteUI;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)genericTermsRemoteUI:(id)arg1 acceptedTermsInfo:(id)arg2;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (void)handleAccept;
- (void)handleDecline;
- (id)initWithAuthResultsBlock:(id)arg1 presentingViewController:(id)arg2;
- (void)invalidate;
- (void)loadProxiedTerms:(id)arg1 anisetteDataProvider:(id)arg2 appProvidedContext:(id)arg3 acceptAction:(id /* block */)arg4 declineAction:(id /* block */)arg5;
- (void)presentProxiedTermsRemoteUI;
- (id)proxiedTermsRemoteUI;
- (void)setAcceptedTermsInfo:(id)arg1;
- (void)setProxiedTermsRemoteUI:(id)arg1;

@end
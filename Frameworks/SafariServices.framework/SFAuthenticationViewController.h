/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFAuthenticationViewController : SFSafariViewController <UIViewControllerTransitioningDelegate> {
    ASWebAuthenticationSessionCallback * _callback;
    id /* block */  _dismissCompletionHandler;
    _UIFallbackPresentationViewController * _fallbackPresentationViewController;
    UIWindow * _presentationContextWindow;
    <SFAuthenticationViewControllerPresentationDelegate> * _presentationDelegate;
    NSArray * _proxiedAssociatedDomains;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SFAuthenticationViewControllerPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;

+ (bool)_supportsPrewarming;

- (void).cxx_destruct;
- (void)_presentViewController;
- (void)_restartServiceViewController;
- (id /* block */)dismissCompletionHandler;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithURL:(id)arg1 callback:(id)arg2 storageMode:(unsigned long long)arg3 jitEnabled:(bool)arg4 presentationContextWindow:(id)arg5 additionalHeaderFields:(id)arg6 proxiedAssociatedDomains:(id)arg7;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(bool)arg3 jitEnabled:(bool)arg4 presentationContextWindow:(id)arg5;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(bool)arg3 presentationContextWindow:(id)arg4;
- (id)presentationDelegate;
- (void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(bool)arg3 withError:(id)arg4;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)setDefersAddingRemoteViewController:(bool)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)setPresentationDelegate:(id)arg1;

@end
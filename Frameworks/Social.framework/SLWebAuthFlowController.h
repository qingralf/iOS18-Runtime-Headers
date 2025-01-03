/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLWebAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {
    id /* block */  _completion;
    NSURLRequest * _requestWithAuthorizationCode;
    <SLWebClient> * _webClient;
    NSString * _yahooJapanUserName;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) <SLWebClient> *webClient;

- (void).cxx_destruct;
- (id)authURLForUsername:(id)arg1;
- (id)initWithWebClient:(id)arg1;
- (id)initialRedirectURL;
- (id)requestForAuthURL:(id)arg1;
- (void)setAuthFlowCompletion:(id /* block */)arg1;
- (bool)shouldHideWebViewForLoadWithRequest:(id)arg1;
- (id)webClient;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(id /* block */)arg1;

@end

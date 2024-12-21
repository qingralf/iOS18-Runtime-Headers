/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebExtensionActionWebViewDelegate : NSObject <WKNavigationDelegatePrivate, WKUIDelegatePrivate> {
    struct WeakPtr<WebKit::WebExtensionAction, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _webExtensionAction;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (id)initWithWebExtensionAction:(void*)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewDidClose:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
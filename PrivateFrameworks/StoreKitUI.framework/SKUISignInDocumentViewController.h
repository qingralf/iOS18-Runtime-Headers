/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISignInDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUIDocumentViewController, SKUILayoutCacheDelegate, SKUISignInViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    SKUIViewElementLayoutContext * _layoutContext;
    SKUISignInTemplateView * _loginView;
    UIScrollView * _scrollView;
    SKUISignInTemplateViewElement * _templateElement;
    SKUILayoutCache * _textLayoutCache;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_layoutContext;
- (void)_layoutScrollView;
- (void)_reloadContentSize;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_signInFailed:(id)arg1 error:(id)arg2;
- (void)_signInSuccess:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (void)signInEntryComplete:(id)arg1 accountName:(id)arg2 password:(id)arg3;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

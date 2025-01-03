/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPanelDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUIDocumentViewController, SKUILayoutCacheDelegate> {
    UIImageView * _backgroundImageView;
    bool  _didAttemptBecomeFirstResponder;
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
    long long  _lastContentWidth;
    SKUIViewElementLayoutContext * _layoutContext;
    SKUIMetricsImpressionSession * _metricsImpressionSession;
    SKUIPanelView * _panelView;
    UIScrollView * _scrollView;
    SKUIPanelTemplateViewElement * _templateElement;
    SKUILayoutCache * _textLayoutCache;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeBackgroundColor;
- (id)_imageForBackgroundImageElement:(id)arg1;
- (void)_keyboardHideNotification:(id)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)_layoutBackgroundImageView;
- (id)_layoutContext;
- (void)_layoutScrollView;
- (void)_reloadBackgroundImageView;
- (void)_reloadContentSize;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_requestPanelViewLayoutWithContentWidth:(long long)arg1 forced:(bool)arg2;
- (id)_templateBackgroundColor;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

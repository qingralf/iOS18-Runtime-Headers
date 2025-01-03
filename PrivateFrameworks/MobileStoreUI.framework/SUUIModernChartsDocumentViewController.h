/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIModernChartsDocumentViewController : SUUIViewController <SUUIDocumentViewController, SUUIModalSourceViewProvider, SUUIResourceLoaderDelegate> {
    SUUIActivityIndicatorView * _activityIndicatorView;
    SUUIModernChartsView * _chartsView;
    NSMutableArray * _columnViewControllers;
    SUUILayoutCache * _layoutCache;
    SUUIResourceLoader * _resourceLoader;
    SUUIChartsTemplateViewElement * _templateElement;
    SUUIViewElementLayoutContext * _viewLayoutContext;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computedFrameForActivityIndicatorView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInset;
- (void)_hideActivityIndicator;
- (id)_layoutCache;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (void)_reloadWithTemplateElement:(id)arg1;
- (id)_resourceLoader;
- (void)_showActivityIndicator;
- (id)_viewLayoutContext;
- (id)contentScrollView;
- (void)documentDidUpdate:(id)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)viewWillLayoutSubviews;

@end

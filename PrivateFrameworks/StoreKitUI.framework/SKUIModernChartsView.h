/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIModernChartsView : UIView <UIScrollViewDelegate> {
    _UIBackdropView * _backdropView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIView * _headerView;
    NSMutableArray * _headerViews;
    bool  _hideHeader;
    UIScrollView * _scrollView;
    NSArray * _viewControllers;
}

@property (nonatomic, readonly) _UIBackdropView *backdropView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_layoutHeadersWithColumnSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutViewControllersWithColumnSize:(struct CGSize { double x1; double x2; })arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_updateHeader;
- (id)backdropView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setColumnViewControllers:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end

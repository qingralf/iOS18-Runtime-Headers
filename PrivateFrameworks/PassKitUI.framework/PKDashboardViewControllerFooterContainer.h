/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardViewControllerFooterContainer : UIView <PKHorizontalScrollingFooterViewProtocol> {
    long long  _backdropStyle;
    _UIBackdropView * _backdropView;
    UIView<PKHorizontalScrollingFooterViewComparator> * _currentFooter;
    bool  _isBackdropOpaque;
    double  _minimumFooterHeight;
    UIView<PKHorizontalScrollingFooterViewComparator> * _nextFooter;
    UIView * _topSeparatorView;
}

@property (nonatomic, retain) UIView<PKHorizontalScrollingFooterViewComparator> *currentFooter;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=setBackdropOpaque:, nonatomic) bool isBackdropOpaque;
@property (nonatomic) double minimumFooterHeight;
@property (nonatomic, retain) UIView<PKHorizontalScrollingFooterViewComparator> *nextFooter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateBackdropViewStyle;
- (id)currentFooter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackdropOpaque;
- (void)layoutSubviews;
- (double)layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (double)minimumFooterHeight;
- (id)nextFooter;
- (long long)preferredBackdropStyle;
- (void)setBackdropOpaque:(bool)arg1;
- (void)setCurrentFooter:(id)arg1;
- (void)setMinimumFooterHeight:(double)arg1;
- (void)setNextFooter:(id)arg1;
- (void)setTransitionProgress:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
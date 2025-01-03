/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUILoadingView : UIView {
    SUUIColorScheme * _colorScheme;
    UILabel * _label;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, copy) SUUIColorScheme *colorScheme;
@property (nonatomic, copy) NSString *loadingText;

+ (id)defaultLoadingTextWithClientContext:(id)arg1;

- (void).cxx_destruct;
- (id)colorScheme;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)loadingText;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

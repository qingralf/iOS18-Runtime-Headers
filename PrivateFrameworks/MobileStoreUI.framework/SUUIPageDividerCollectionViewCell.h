/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIPageDividerCollectionViewCell : UICollectionViewCell <SUUIViewElementView> {
    UIView * _bottomDividerLine;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    double  _dividerHeight;
    long long  _dividerType;
    UIColor * _insetColor;
    UIView * _insetView;
    double  _leftEdgeInset;
    double  _rightEdgeInset;
    UIView * _topDividerLine;
    long long  _verticalAlignment;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) double dividerHeight;
@property (nonatomic) long long dividerType;
@property (readonly) unsigned long long hash;
@property (nonatomic) double leftEdgeInset;
@property (nonatomic) double rightEdgeInset;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalAlignment;

+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (double)dividerHeight;
- (long long)dividerType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)leftEdgeInset;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (double)rightEdgeInset;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setColoringWithStyle:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDividerHeight:(double)arg1;
- (void)setDividerType:(long long)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setInsetColor:(id)arg1;
- (void)setLeftEdgeInset:(double)arg1;
- (void)setRightEdgeInset:(double)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (long long)verticalAlignment;
- (id)viewForElementIdentifier:(id)arg1;

@end

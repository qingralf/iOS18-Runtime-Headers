/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUICollectionViewCell : UICollectionViewCell {
    UIView * _bottomBorderView;
    UIView * _leftBorderView;
    long long  _position;
    UIView * _rightBorderView;
    UIColor * _separatorColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorInsets;
    long long  _separatorStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorWidths;
    UIView * _topBorderView;
}

@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInsets;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorWidths;
@property (nonatomic) bool showsCellSeparators;

- (void).cxx_destruct;
- (void)_setPosition:(long long)arg1;
- (bool)_showsBottomBorder;
- (bool)_showsLeftBorder;
- (bool)_showsRightBorder;
- (bool)_showsTopBorder;
- (void)_updateBorderVisibility;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)separatorColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInsets;
- (long long)separatorStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorWidths;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setSeparatorWidths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsCellSeparators:(bool)arg1;
- (bool)showsCellSeparators;

@end

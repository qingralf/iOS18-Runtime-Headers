/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIBrickCollectionViewCell : UICollectionViewCell {
    NSString * _accessibilityLabel;
    SUUIClientContext * _clientContext;
    SUUICountdownView * _countdownView;
    bool  _itemImageHidden;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _itemImageInsets;
    UIImageView * _itemImageView;
    UIImageView * _overlayImageView;
    UIColor * _titleColor;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic, retain) SUUICountdown *countdown;
@property (nonatomic, retain) UIImage *itemImage;
@property (getter=isItemImageHidden, nonatomic) bool itemImageHidden;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } itemImageInsets;
@property (nonatomic, readonly) UIView *itemImageView;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_reloadHighlight;
- (void)_removeOverlay;
- (id)accessibilityLabel;
- (id)clientContext;
- (id)countdown;
- (bool)isItemImageHidden;
- (id)itemImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })itemImageInsets;
- (id)itemImageView;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setCountdown:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItemImage:(id)arg1;
- (void)setItemImageHidden:(bool)arg1;
- (void)setItemImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

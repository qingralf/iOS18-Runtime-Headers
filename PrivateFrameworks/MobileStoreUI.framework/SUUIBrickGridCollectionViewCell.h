/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIBrickGridCollectionViewCell : UICollectionViewCell {
    NSString * _accessibilityLabel;
    UIImageView * _brickImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    SUUIEditorialCellLayout * _editorialCellLayout;
    UIView * _editorialContainerView;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) UIImage *brickImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)applyEditorialLayout:(id)arg1 orientation:(long long)arg2;
- (id)brickImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBrickImage:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end

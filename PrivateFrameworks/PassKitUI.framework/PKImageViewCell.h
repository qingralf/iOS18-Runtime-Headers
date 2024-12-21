/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKImageViewCell : UITableViewCell

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) double imageViewCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageViewMargins;

- (id)image;
- (double)imageViewCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageViewMargins;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setImageViewCornerRadius:(double)arg1;
- (void)setImageViewMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
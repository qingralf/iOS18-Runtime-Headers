/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFSiteCardRedesignCell : SFStartPageFilledBackgroundCell <WBSStartPageCardProxy> {
    SFSiteCardSourceView * _captionLabel;
    NSLayoutConstraint * _iconDimensionConstraint;
    _SFSiteIconView * _imageView;
    LPLinkMetadata * _metadata;
    UILabel * _subtitleLabel;
    UILayoutGuide * _textLayoutGuide;
    UILabel * _titleLabel;
    UIImage * badge;
    NSString * caption;
}

@property (nonatomic, retain) UIImage *badge;
@property (nonatomic, copy) NSString *caption;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) LPLinkMetadata *metadata;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)_titleLabelPrefersMultipleLines;
- (void)_updateLayoutForContentSizeChange;
- (id)badge;
- (id)caption;
- (id)focusEffect;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)metadata;
- (void)setBadge:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCaptionText:(id)arg1 icon:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImageFromBookmark:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end

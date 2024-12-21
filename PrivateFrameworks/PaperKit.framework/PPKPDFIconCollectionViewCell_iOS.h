/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit
 */

@interface PPKPDFIconCollectionViewCell_iOS : UICollectionViewCell {
    double  _CellCornerRadius;
    double  _CellHorizontalEdgesInset;
    double  _CellShadowOpacity;
    double  _CellShadowRadius;
    double  _CellVerticalEdgesInset;
    double  _ImageCornerRadius;
    double  _ImageEdgesInset;
    double  _SelectionOverlayCornerRadius;
    UIButton * _actionsButton;
    bool  _hasLargeThumbnail;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageViewBottomConstraint;
    NSLayoutConstraint * _imageViewHeightConstraint;
    NSLayoutConstraint * _imageViewLeadingConstraint;
    NSLayoutConstraint * _imageViewTopConstraint;
    NSLayoutConstraint * _imageViewTrailingConstraint;
    NSLayoutConstraint * _imageViewWidthConstraint;
    UIView * _overlayView;
    NSLayoutConstraint * _overlayViewBottomConstraint;
    NSLayoutConstraint * _overlayViewLeadingConstraint;
    NSLayoutConstraint * _overlayViewTopConstraint;
    NSLayoutConstraint * _overlayViewTrailingConstraint;
    PDFPage * _page;
    NSLayoutConstraint * _ratioConstraint;
}

@property (nonatomic, retain) UIButton *actionsButton;
@property (nonatomic) bool hasLargeThumbnail;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) PDFPage *page;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateMetricsIfNeeded;
- (id)actionsButton;
- (bool)hasLargeThumbnail;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)page;
- (void)prepareForReuse;
- (void)setActionsButton:(id)arg1;
- (void)setHasLargeThumbnail:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setNeedsUpdate;
- (void)setPage:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setThumbnailHeight:(double)arg1;
- (void)setThumbnailWidth:(double)arg1;
- (void)setupSubviews;
- (void)updateAspectConstraintWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateOverlay;

@end
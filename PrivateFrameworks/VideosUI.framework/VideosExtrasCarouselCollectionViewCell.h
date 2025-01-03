/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosExtrasCarouselCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, VideosExtrasCarouselCollectionViewCell> {
    bool  _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    UILabel * _descriptionLabel;
    MPUContentSizeLayoutConstraint * _descriptionLabelBaselineConstraint;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext * _interactiveTransitionSourceContext;
    unsigned long long  _itemIndex;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    MPUContentSizeLayoutConstraint * _subtitleBaselineConstraint;
    UILabel * _subtitleLabel;
    UIView * _textContainer;
    VideosExtrasConstrainedArtworkContainerView * _thumbnailImageContainerView;
    NSArray * _thumbnailImageContainerViewConstraints;
    NSLayoutConstraint * _thumbnailImageContainerViewHeightConstraint;
    UILabel * _titleLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
    NSString * _zoomingImageTransitionIdentifier;
}

@property (nonatomic) bool allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) MPUContentSizeLayoutConstraint *descriptionLabelBaselineConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic, retain) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, retain) MPUContentSizeLayoutConstraint *subtitleBaselineConstraint;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *textContainer;
@property (nonatomic, readonly) double thumbnailImageContainerHeight;
@property (nonatomic, retain) VideosExtrasConstrainedArtworkContainerView *thumbnailImageContainerView;
@property (nonatomic, retain) NSArray *thumbnailImageContainerViewConstraints;
@property (nonatomic, retain) NSLayoutConstraint *thumbnailImageContainerViewHeightConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } windowSize;
@property (nonatomic, copy) NSString *zoomingImageTransitionIdentifier;

- (void).cxx_destruct;
- (double)_descriptionLabelTopInset;
- (void)_handlePinchGesture:(id)arg1;
- (void)_setupDescriptionLabelWithConstraintsAccumulator:(id)arg1;
- (void)_setupSubtitleLabelWithConstraintsAccumulator:(id)arg1;
- (void)_setupThumbnailImageContainerViewWithConstraintsAccumulator:(id)arg1;
- (void)_setupTitleLabelWithConstraintsAccumulator:(id)arg1;
- (void)_updateThumbnailArtworkViewBorder;
- (bool)allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
- (void)dealloc;
- (id)descriptionLabel;
- (id)descriptionLabelBaselineConstraint;
- (id)descriptionText;
- (id)descriptionTextStyle;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (id)interactiveTransitionSourceContext;
- (unsigned long long)itemIndex;
- (id)lockupElement;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (id)pinchGestureRecognizer;
- (void)prepareForReuse;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(bool)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionLabelBaselineConstraint:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInteractiveTransitionSourceContext:(id)arg1;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setPinchGestureRecognizer:(id)arg1;
- (void)setSubtitleBaselineConstraint:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTextContainer:(id)arg1;
- (void)setThumbnailBorderColor:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailImageAccessibilityText:(id)arg1;
- (void)setThumbnailImageContainerView:(id)arg1;
- (void)setThumbnailImageContainerViewConstraints:(id)arg1;
- (void)setThumbnailImageContainerViewHeightConstraint:(id)arg1;
- (void)setThumbnailImagePlaceholder:(id)arg1;
- (void)setThumbnailMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnailOverlayImage:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setZoomingImageTransitionIdentifier:(id)arg1;
- (id)subtitleBaselineConstraint;
- (id)subtitleLabel;
- (id)subtitleText;
- (id)subtitleTextStyle;
- (id)textContainer;
- (id)thumbnailImage;
- (id)thumbnailImageAccessibilityText;
- (double)thumbnailImageContainerHeight;
- (id)thumbnailImageContainerView;
- (id)thumbnailImageContainerViewConstraints;
- (id)thumbnailImageContainerViewHeightConstraint;
- (id)thumbnailImagePlaceholder;
- (struct CGSize { double x1; double x2; })thumbnailMaxSize;
- (id)titleLabel;
- (id)titleText;
- (id)titleTextStyle;
- (void)updateConstraints;
- (struct CGSize { double x1; double x2; })windowSize;
- (id)zoomingImageTransitionIdentifier;

@end

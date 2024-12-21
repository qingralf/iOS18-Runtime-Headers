/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUMediaControlsModuleCollectionViewCell : UICollectionViewCell <MRUArtworkViewObserver, UIPointerInteractionDelegate> {
    MRUNowPlayingCellContentView * _cellContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    CCUIModuleContentMetrics * _contentMetrics;
    double  _contentScale;
    double  _cornerRadius;
    UIView * _highlightView;
    MRUMediaControlsModuleBackgroundView * _materialView;
    UIView * _transformView;
}

@property (nonatomic, readonly) MRUNowPlayingCellContentView *cellContentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, retain) CCUIModuleContentMetrics *contentMetrics;
@property (nonatomic) double contentScale;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, retain) MRUMediaControlsModuleBackgroundView *materialView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *transformView;

- (void).cxx_destruct;
- (void)artworkView:(id)arg1 didChangeArtworkImage:(id)arg2;
- (id)cellContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (id)contentMetrics;
- (double)contentScale;
- (double)cornerRadius;
- (id)highlightView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)materialView;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentMetrics:(id)arg1;
- (void)setContentScale:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaterialView:(id)arg1;
- (void)setTransformView:(id)arg1;
- (void)setTransitionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 isVisible:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transformView;
- (void)updateVisibility;

@end
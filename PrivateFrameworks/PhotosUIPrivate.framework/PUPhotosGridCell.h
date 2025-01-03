/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUPhotosGridCell : UICollectionViewCell {
    UIImageView * _cloudIconImageView;
    bool  _cloudIconVisible;
    int  _currentImageRequestID;
    long long  _dragState;
    bool  _draggable;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _fillerEdgeInsets;
    UIView * _highlightOverlayView;
    PUPhotoView * _photoContentView;
    NSNumber * _progress;
    PUProgressIndicatorView * _progressIndicatorView;
    NSArray * _progressIndicatorViewConstraints;
    UIView * _selectionBadgeView;
    bool  _selectionBadgeVisible;
    UIView * _selectionOverlayView;
    PUPhotoView * _temporaryPhotoContentView;
    UIView * _transitionFillerView;
    bool  _transitionFillerViewEnabled;
    bool  _transitionIsAppearing;
}

@property (getter=isCloudIconVisible, nonatomic) bool cloudIconVisible;
@property (nonatomic) int currentImageRequestID;
@property (nonatomic) long long dragState;
@property (getter=isDraggable, nonatomic) bool draggable;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fillerEdgeInsets;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) PUPhotoView *photoContentView;
@property (nonatomic, retain) NSNumber *progress;
@property (getter=isSelectionBadgeVisible, nonatomic) bool selectionBadgeVisible;
@property (nonatomic, retain) PUPhotoView *temporaryPhotoContentView;
@property (nonatomic, readonly) UIView *transitionFillerView;
@property (nonatomic) bool transitionFillerViewEnabled;
@property (nonatomic) bool transitionIsAppearing;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (bool)_disableRasterizeInAnimations;
- (void)_layoutTransitionFillerView;
- (void)_updateCloudIcon;
- (void)_updateContentViewClipsToBounds;
- (void)_updateHighlight;
- (void)_updateProgressImmediately:(bool)arg1;
- (void)_updateSelectionBadge;
- (void)_updateSubviewOrdering;
- (void)addTemporaryPhotoContentView;
- (void)applyLayoutAttributes:(id)arg1;
- (int)currentImageRequestID;
- (long long)dragState;
- (void)dragStateDidChange:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fillerEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCloudIconVisible;
- (bool)isDraggable;
- (bool)isSelectionBadgeVisible;
- (void)layoutSubviews;
- (id)photoContentView;
- (void)prepareForReuse;
- (id)progress;
- (void)removeTemporaryPhotoContentView;
- (void)setCloudIconVisible:(bool)arg1;
- (void)setCurrentImageRequestID:(int)arg1;
- (void)setDragState:(long long)arg1;
- (void)setDraggable:(bool)arg1;
- (void)setFillerEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPhotoContentView:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgress:(id)arg1 immediately:(bool)arg2;
- (void)setSelectionBadgeVisible:(bool)arg1;
- (void)setTemporaryPhotoContentView:(id)arg1;
- (void)setTemporaryPhotoImage:(id)arg1 with:(long long)arg2;
- (void)setTransitionFillerViewEnabled:(bool)arg1;
- (void)setTransitionIsAppearing:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)temporaryPhotoContentView;
- (id)transitionFillerView;
- (bool)transitionFillerViewEnabled;
- (bool)transitionIsAppearing;
- (void)updateConstraints;

@end

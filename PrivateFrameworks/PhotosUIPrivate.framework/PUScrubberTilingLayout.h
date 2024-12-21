/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUScrubberTilingLayout : PUSectionedTilingLayout {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentPadding;
    double  _currentItemFocusProgress;
    NSIndexPath * _currentItemIndexPath;
    double  _currentItemTransitionProgress;
    <PUScrubberTilingLayoutDelegate> * _delegate;
    struct { 
        bool respondsToAspectRatioForItemAtIndexPath; 
        bool respondsToExpandedWidthForItemAtIndexPath; 
        bool respondsToShouldShowTimeIndicatorForExpandedItemAtIndexPath; 
        bool respondsToIsItemAtAtIndexPathSelected; 
    }  _delegateFlags;
    NSIndexPath * _expandedItemIndexPath;
    double  _expandedItemPadding;
    double  _expandedItemPlayheadProgress;
    double  _expandedItemWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _interItemSpacing;
    double  _itemCornerRadius;
    NSMutableDictionary * _layoutInfosByIndexPathByTileKind;
    double  _loupeAmount;
    NSIndexPath * _loupeIndexPath;
    NSIndexPath * _loupeNeighborIndexPath;
    double  _loupeTransitionProgress;
    double  _loupeWidth;
    double  _maxAspectRatio;
    bool  _onlyShowExpandedItem;
    NSIndexPath * _overrideLoupeIndexPath;
    double  _playheadVerticalOverhang;
    bool  _shouldHighlightSelectedItems;
    bool  _showPlayheadForExpandedItem;
    double  _slitAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _slitSize;
    bool  _snapToExpandedItem;
    double  _timeIndicatorVerticalOffset;
    bool  _useEmbeddedVideoScrubber;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentPadding;
@property (nonatomic, readonly) double currentItemFocusProgress;
@property (nonatomic, readonly) NSIndexPath *currentItemIndexPath;
@property (nonatomic, readonly) double currentItemTransitionProgress;
@property (nonatomic) <PUScrubberTilingLayoutDelegate> *delegate;
@property (nonatomic, retain) NSIndexPath *expandedItemIndexPath;
@property (nonatomic) double expandedItemPadding;
@property (nonatomic) double expandedItemPlayheadProgress;
@property (nonatomic) double expandedItemWidth;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } focusPoint;
@property (nonatomic) struct CGSize { double x1; double x2; } interItemSpacing;
@property (nonatomic) double itemCornerRadius;
@property (nonatomic) double loupeAmount;
@property (nonatomic, readonly) NSIndexPath *loupeIndexPath;
@property (nonatomic, readonly) double loupeTransitionProgress;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) bool onlyShowExpandedItem;
@property (nonatomic, retain) NSIndexPath *overrideLoupeIndexPath;
@property (nonatomic) double playheadVerticalOverhang;
@property (nonatomic) bool shouldHighlightSelectedItems;
@property (nonatomic) bool showPlayheadForExpandedItem;
@property (nonatomic) double slitAspectRatio;
@property (nonatomic) bool snapToExpandedItem;
@property (nonatomic) double timeIndicatorVerticalOffset;
@property (nonatomic) bool useEmbeddedVideoScrubber;

- (void).cxx_destruct;
- (float)_aspectRatioForIndexPath:(id)arg1;
- (id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (double)_focusAbscissa;
- (long long)_indexOfItemClosestToAbscissa:(double)arg1 inSection:(long long)arg2;
- (id)_indexPathOfItemClosestToAbscissa:(double)arg1;
- (double)_loupeAmountFor:(id)arg1;
- (double)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(double)arg2 outNeighborIndexPath:(out id*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForItemAtIndexPath:(id)arg1 withLoupeTransform:(bool)arg2 withExpanded:(bool)arg3;
- (bool)_shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })_slitSize;
- (double)_transformedHorizontalOffsetForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })_transformedSizeForIndexPath:(id)arg1;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentPadding;
- (double)currentItemFocusProgress;
- (id)currentItemIndexPath;
- (double)currentItemTransitionProgress;
- (id)delegate;
- (struct CGSize { double x1; double x2; })estimatedSectionSize;
- (id)expandedItemIndexPath;
- (double)expandedItemPadding;
- (double)expandedItemPlayheadProgress;
- (double)expandedItemWidth;
- (struct CGPoint { double x1; double x2; })focusPoint;
- (id)indexPathOfItemClosestToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateSelectedItems;
- (double)itemCornerRadius;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (double)loupeAmount;
- (id)loupeIndexPath;
- (double)loupeTransitionProgress;
- (double)maxAspectRatio;
- (bool)onlyShowExpandedItem;
- (id)overrideLoupeIndexPath;
- (double)playheadVerticalOverhang;
- (id)preferredScrollInfo;
- (void)prepareLayout;
- (void)setContentPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandedItemIndexPath:(id)arg1;
- (void)setExpandedItemPadding:(double)arg1;
- (void)setExpandedItemPlayheadProgress:(double)arg1;
- (void)setExpandedItemWidth:(double)arg1;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemCornerRadius:(double)arg1;
- (void)setLoupeAmount:(double)arg1;
- (void)setMaxAspectRatio:(double)arg1;
- (void)setOnlyShowExpandedItem:(bool)arg1;
- (void)setOverrideLoupeIndexPath:(id)arg1;
- (void)setPlayheadVerticalOverhang:(double)arg1;
- (void)setShouldHighlightSelectedItems:(bool)arg1;
- (void)setShowPlayheadForExpandedItem:(bool)arg1;
- (void)setSlitAspectRatio:(double)arg1;
- (void)setSnapToExpandedItem:(bool)arg1;
- (void)setTimeIndicatorVerticalOffset:(double)arg1;
- (void)setUseEmbeddedVideoScrubber:(bool)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldHighlightSelectedItems;
- (bool)showPlayheadForExpandedItem;
- (struct CGSize { double x1; double x2; })sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (double)slitAspectRatio;
- (bool)snapToExpandedItem;
- (double)timeIndicatorVerticalOffset;
- (bool)useEmbeddedVideoScrubber;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollingToItemAtIndexPath:(id)arg1 transitionProgress:(double)arg2;

@end
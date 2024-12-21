/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

@interface CEKWheelScrubberView : UIControl <CEKWheelScrubberCollectionViewLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UIView * __centerDotIndicatorView;
    UICollectionView * __collectionView;
    CEKWheelScrubberCollectionViewLayout * __collectionViewLayout;
    UIView * __collectionViewSnapshot;
    long long  __decelerationTargetIndex;
    CEKEdgeGradientView * __edgeGradientView;
    UIView * __selectedItemLoupe;
    UILabel * __selectedItemTextOverlay;
    CEKSelectionFeedbackGenerator * __selectionFeedbackGenerator;
    bool  __showSelectedItemTextOverlay;
    UITapGestureRecognizer * __tapGestureRecognizer;
    long long  _cellOverlayMode;
    long long  _cornerStyle;
    UIView * _customCenteredThumbnailOverlayView;
    NSIndexSet * _customThumbailHiddenIndices;
    long long  _customThumbnailVisibility;
    unsigned long long  _defaultIndex;
    <CEKWheelScrubberViewDelegate> * _delegate;
    struct { 
        bool respondsToWillBeginDragging; 
        bool respondsToWillBeginScrolling; 
        bool respondsToDidScroll; 
        bool respondsToWillEndScrolling; 
        bool respondsToDidEndDragging; 
        bool respondsToDidEndScrolling; 
        bool respondsToDidTapOnSelectedCellWithFrame; 
        bool respondsToDidTapOnSelectedCell; 
        bool respondsToDidUpdateCellLayout; 
        bool respondsToNumberOfSections; 
        bool respondsToNumberOfItemsInSection; 
    }  _delegateFlags;
    double  _desiredThumbnailCornerRadius;
    long long  _dotIndicatorBehavior;
    long long  _dotPlacement;
    bool  _dragging;
    struct { 
        double startInset; 
        double endInset; 
    }  _gradientInsets;
    unsigned long long  _itemCount;
    unsigned long long  _markedIndex;
    unsigned long long  _selectedIndex;
    UIColor * _selectedThumbnailBorderColor;
    double  _selectedThumbnailBorderWidth;
    double  _selectionDotCenterTopSpacing;
    long long  _selectionLoupeVisibility;
    bool  _suspended;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _thumbnailEdgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    double  _thumbnailSpacing;
    bool  _useSelectionLoupeShadow;
}

@property (nonatomic, readonly) UIView *_centerDotIndicatorView;
@property (nonatomic, readonly) UICollectionView *_collectionView;
@property (nonatomic, readonly) CEKWheelScrubberCollectionViewLayout *_collectionViewLayout;
@property (setter=_setCollectionViewSnapshot:, nonatomic, retain) UIView *_collectionViewSnapshot;
@property (nonatomic) long long _decelerationTargetIndex;
@property (nonatomic, retain) CEKEdgeGradientView *_edgeGradientView;
@property (nonatomic, readonly) UIView *_selectedItemLoupe;
@property (nonatomic, readonly) UILabel *_selectedItemTextOverlay;
@property (nonatomic, readonly) CEKSelectionFeedbackGenerator *_selectionFeedbackGenerator;
@property (nonatomic) bool _showSelectedItemTextOverlay;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic) long long cellOverlayMode;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } centeredThumbnailContentFrame;
@property (nonatomic) long long cornerStyle;
@property (nonatomic, retain) UIView *customCenteredThumbnailOverlayView;
@property (nonatomic, retain) NSIndexSet *customThumbailHiddenIndices;
@property (nonatomic) long long customThumbnailVisibility;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long defaultIndex;
@property (nonatomic) <CEKWheelScrubberViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredThumbnailCornerRadius;
@property (nonatomic) long long dotIndicatorBehavior;
@property (nonatomic) long long dotPlacement;
@property (getter=isDragging, setter=_setDragging:, nonatomic) bool dragging;
@property (nonatomic) struct { double x1; double x2; } gradientInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long layoutOrder;
@property (nonatomic) unsigned long long markedIndex;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, retain) UIColor *selectedThumbnailBorderColor;
@property (nonatomic) double selectedThumbnailBorderWidth;
@property (nonatomic) double selectionDotCenterTopSpacing;
@property (nonatomic) long long selectionLoupeVisibility;
@property (nonatomic) bool selectionLoupeVisible;
@property (nonatomic) NSString *selectionText;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic, readonly) double thumbnailCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } thumbnailEdgeInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;
@property (nonatomic) double thumbnailSpacing;
@property (nonatomic) bool useSelectionLoupeShadow;

- (void).cxx_destruct;
- (double)_alphaForVisibility:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centerDotIndicatorFrameForCollectionViewAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_centerDotIndicatorView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centeredCellFrameForCollectionViewAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_collectionView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_collectionViewAlignmentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_collectionViewLayout;
- (id)_collectionViewSnapshot;
- (double)_contentOffsetAmountForItemIndex:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_contentOffsetForItemIndex:(long long)arg1;
- (double)_contentOffsetIgnoringSectionHeaders:(double)arg1;
- (long long)_decelerationTargetIndex;
- (double)_defaultItemLength;
- (struct CGSize { double x1; double x2; })_defaultItemSize;
- (id)_edgeGradientView;
- (double)_fractionalItemOffsetForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (double)_fractionalItemOffsetForContentOffsetAmount:(double)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (bool)_isDirectionHorizontal;
- (bool)_isOrderReverse;
- (long long)_itemIndexUsingHysteresisForScrollingToContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (long long)_nominalItemIndexForFractionalItemOffset:(double)arg1;
- (unsigned long long)_outermostCornerMaskForItemIndex:(long long)arg1;
- (void)_performFeedback;
- (void)_prepareFeedback;
- (void)_scrollToIndex:(long long)arg1 animated:(bool)arg2 shouldOvershoot:(bool)arg3;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (id)_selectedItemLoupe;
- (id)_selectedItemTextOverlay;
- (id)_selectionFeedbackGenerator;
- (void)_setCollectionViewSnapshot:(id)arg1;
- (void)_setDragging:(bool)arg1;
- (void)_setSelectedIndex:(unsigned long long)arg1 shouldNotify:(bool)arg2 shouldSuppressHaptic:(bool)arg3;
- (void)_setShowTextOverlay:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_shouldPerformFeedback;
- (bool)_showSelectedItemTextOverlay;
- (void)_switchToIndex:(long long)arg1 shouldOvershoot:(bool)arg2 shouldSuppressHaptic:(bool)arg3;
- (void)_switchToItemAtIndexOffset:(long long)arg1 shouldOvershoot:(bool)arg2;
- (id)_tapGestureRecognizer;
- (void)_updateCollectionViewForMarkedIndexAnimated:(bool)arg1;
- (void)_updateCornerMaskForCell:(id)arg1 withItemIndex:(long long)arg2;
- (void)_updateCustomThumbnailAlphaAnimated:(bool)arg1;
- (void)_updateLayoutForCell:(id)arg1;
- (void)_updateLayoutForVisibleCells;
- (void)_updateOverlayVisibilityAnimated:(bool)arg1;
- (void)_updateSelectionLoupeAlphaAnimated:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)cellOverlayAtIndex:(unsigned long long)arg1;
- (long long)cellOverlayMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centeredThumbnailContentFrame;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)cornerStyle;
- (id)customCenteredThumbnailOverlayView;
- (id)customThumbailHiddenIndices;
- (long long)customThumbnailVisibility;
- (void)dealloc;
- (unsigned long long)defaultIndex;
- (id)delegate;
- (double)desiredThumbnailCornerRadius;
- (long long)dotIndicatorBehavior;
- (long long)dotPlacement;
- (unsigned long long)globalIndexForIndexPath:(id)arg1;
- (struct { double x1; double x2; })gradientInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDragging;
- (bool)isSectioned;
- (bool)isSuspended;
- (unsigned long long)itemCount;
- (long long)layoutDirection;
- (long long)layoutOrder;
- (void)layoutSubviews;
- (unsigned long long)markedIndex;
- (id)newCenterDotIndicatorView;
- (unsigned long long)numberOfSectionsBeforeItemIndex:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)selectedCellOverlay;
- (unsigned long long)selectedIndex;
- (id)selectedThumbnailBorderColor;
- (double)selectedThumbnailBorderWidth;
- (double)selectionDotCenterTopSpacing;
- (long long)selectionLoupeVisibility;
- (bool)selectionLoupeVisible;
- (id)selectionText;
- (void)setCellOverlayMode:(long long)arg1;
- (void)setCornerStyle:(long long)arg1;
- (void)setCustomCenteredThumbnailOverlayView:(id)arg1;
- (void)setCustomThumbailHiddenIndices:(id)arg1;
- (void)setCustomThumbnailVisibility:(long long)arg1;
- (void)setCustomThumbnailVisibility:(long long)arg1 animated:(bool)arg2;
- (void)setDefaultIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredThumbnailCornerRadius:(double)arg1;
- (void)setDotIndicatorBehavior:(long long)arg1;
- (void)setDotPlacement:(long long)arg1;
- (void)setGradientInsets:(struct { double x1; double x2; })arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setLayoutOrder:(long long)arg1;
- (void)setMarkedIndex:(unsigned long long)arg1;
- (void)setMarkedIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setOpaqueGradientsWithColor:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedThumbnailBorderColor:(id)arg1;
- (void)setSelectedThumbnailBorderWidth:(double)arg1;
- (void)setSelectionDotCenterTopSpacing:(double)arg1;
- (void)setSelectionLoupeVisibility:(long long)arg1;
- (void)setSelectionLoupeVisibility:(long long)arg1 animated:(bool)arg2;
- (void)setSelectionLoupeVisible:(bool)arg1;
- (void)setSelectionLoupeVisible:(bool)arg1 animated:(bool)arg2;
- (void)setSelectionText:(id)arg1;
- (void)setSelectionText:(id)arg1 animated:(bool)arg2;
- (void)setSuspended:(bool)arg1;
- (void)setThumbnailEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnailSpacing:(double)arg1;
- (void)setTransparentGradients;
- (void)setUseSelectionLoupeShadow:(bool)arg1;
- (void)set_decelerationTargetIndex:(long long)arg1;
- (void)set_edgeGradientView:(id)arg1;
- (void)set_showSelectedItemTextOverlay:(bool)arg1;
- (void)switchToNextItem;
- (void)switchToPreviousItem;
- (double)thumbnailCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })thumbnailEdgeInsets;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (double)thumbnailSpacing;
- (unsigned long long)totalNumberOfItems;
- (void)updateItems;
- (bool)useSelectionLoupeShadow;
- (struct CGSize { double x1; double x2; })wheelScrubberCollectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;

@end
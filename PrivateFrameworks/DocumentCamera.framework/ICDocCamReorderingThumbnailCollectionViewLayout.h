/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamReorderingThumbnailCollectionViewLayout : UICollectionViewLayout <UICollectionViewDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedContentSize;
    double  _currentInterPageScrollPosition;
    unsigned long long  _currentItem;
    <ICDocCamThumbnailViewLayoutDelegate> * _delegate;
    NSMutableArray * _deleteIndexPaths;
    NSMutableArray * _imageSizeCache;
    NSMutableArray * _insertIndexPaths;
    bool  _isScrollingBetweenPages;
    bool  _isScrubbing;
    bool  _isUndergoingOrientationChange;
    NSArray * _itemAttributes;
    double  _itemHeight;
    double  _itemSpacing;
    bool  _layoutCacheIsValid;
    double  _leftMargin;
    bool  _movingItem;
    double  _rightMargin;
    double  _topBottomMargins;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cachedContentSize;
@property (nonatomic) double currentInterPageScrollPosition;
@property (nonatomic) unsigned long long currentItem;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) <ICDocCamThumbnailViewLayoutDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *deleteIndexPaths;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double extraSpacingForCurrentItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *imageSizeCache;
@property (nonatomic, retain) NSMutableArray *insertIndexPaths;
@property (nonatomic) bool isScrollingBetweenPages;
@property (nonatomic) bool isScrubbing;
@property (nonatomic) bool isUndergoingOrientationChange;
@property (nonatomic, copy) NSArray *itemAttributes;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemSpacing;
@property (nonatomic) bool layoutCacheIsValid;
@property (nonatomic) double leftMargin;
@property (nonatomic) bool movingItem;
@property (nonatomic) double rightMargin;
@property (readonly) Class superclass;
@property (nonatomic) double topBottomMargins;

+ (double)effectiveAspectRatioForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })cachedContentSize;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)currentInterPageScrollPosition;
- (unsigned long long)currentItem;
- (id)delegate;
- (id)deleteIndexPaths;
- (double)extraSpacingForCurrentItem;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (double)horizontalContentOffsetAdjustmentForItem:(unsigned long long)arg1;
- (double)horizontalContentOffsetForItem:(unsigned long long)arg1;
- (id)imageSizeCache;
- (id)initWithDelegate:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)insertIndexPaths;
- (void)invalidateLayoutWithContext:(id)arg1;
- (bool)isScrollingBetweenPages;
- (bool)isScrubbing;
- (bool)isUndergoingOrientationChange;
- (id)itemAttributes;
- (double)itemHeight;
- (struct CGSize { double x1; double x2; })itemSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (double)itemSpacing;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (bool)layoutCacheIsValid;
- (double)leftMargin;
- (bool)movingItem;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (double)rightMargin;
- (void)setCachedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentOffsetForItem:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setCurrentInterPageScrollPosition:(double)arg1;
- (void)setCurrentItem:(unsigned long long)arg1;
- (void)setCurrentItem:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setDeleteIndexPaths:(id)arg1;
- (void)setImageSizeCache:(id)arg1;
- (void)setInsertIndexPaths:(id)arg1;
- (void)setInterPageScrollPosition:(double)arg1;
- (void)setIsScrollingBetweenPages:(bool)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setIsUndergoingOrientationChange:(bool)arg1;
- (void)setItemAttributes:(id)arg1;
- (void)setItemHeight:(double)arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setLayoutCacheIsValid:(bool)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setMovingItem:(bool)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setTopBottomMargins:(double)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (double)topBottomMargins;
- (void)updateLayoutCacheIfNecessary;

@end

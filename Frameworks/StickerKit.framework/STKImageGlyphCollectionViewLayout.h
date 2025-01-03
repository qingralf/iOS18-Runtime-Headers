/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StickerKit.framework/StickerKit
 */

@interface STKImageGlyphCollectionViewLayout : UICollectionViewCompositionalLayout {
    void $__lazy_storage_$_layoutSolver;
    void dataSource;
    void dataSourceUpdatedObserver;
    void isRearranging;
    void viewSize;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collectionViewContentSize;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)currentlyFocusedIndexPath;
- (long long)currentlyFocusedSectionIndex;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;
- (id)initWithSection:(id)arg1 sectionProvider:(id /* block */)arg2 configuration:(id)arg3;
- (id)initWithSectionProvider:(id /* block */)arg1;
- (id)initWithSectionProvider:(id /* block */)arg1 configuration:(id)arg2;
- (void)invalidateLayout;
- (id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(bool)arg3;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint { double x1; double x2; })arg4;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)paginationOriginForCurrentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)prepareLayout;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForSectionIndex:(long long)arg1;

@end

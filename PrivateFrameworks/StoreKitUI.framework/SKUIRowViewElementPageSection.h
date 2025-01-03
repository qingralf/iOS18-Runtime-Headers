/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRowViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    SKUIViewElementLayoutContext * _cellLayoutContext;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIRowComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_cellClassForCardViewElement:(id)arg1;
- (Class)_cellClassForLockupViewElement:(id)arg1;
- (Class)_cellClassForViewElement:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetForIndexPath:(id)arg1;
- (void)_enumerateViewElementsUsingBlock:(id /* block */)arg1;
- (id)_firstChildForColumn:(id)arg1;
- (double)_interiorColumnSpacing;
- (void)_requestLayoutForCells;
- (id)_reuseIdentifierForCardViewElement:(id)arg1;
- (id)_reuseIdentifierForLockupViewElement:(id)arg1;
- (id)_reuseIdentifierForViewElement:(id)arg1;
- (double)_singleColumnWidth;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(bool)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

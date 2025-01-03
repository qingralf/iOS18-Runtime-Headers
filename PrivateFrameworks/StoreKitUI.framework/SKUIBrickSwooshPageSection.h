/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBrickSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {
    SKUIBrickSwooshArtworkLoader * _artworkLoader;
    SKUIMissingItemLoader * _missingItemLoader;
    SKUIBrickSwooshViewController * _swooshViewController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUISwooshPageComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (id)_artworkLoader;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_missingItemLoader;
- (id)_swooshViewController;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (void)willAppearInContext:(id)arg1;

@end

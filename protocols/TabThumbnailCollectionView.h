/* Generated by RuntimeBrowser.
 */

@protocol TabThumbnailCollectionView <TabCollectionView, TabSnapshotSizing>

@required

- (bool)defersActivation;
- (<TabThumbnailCollectionViewDelegate> *)delegate;
- (void)dismissAnimated:(bool)arg1;
- (void)enumerateItemsOrderedByVisibility:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (<TabCollectionItem> *)itemToActivate;
- (void)presentAnimated:(bool)arg1;
- (long long)presentationState;
- (SFTabCollectionSearchController *)searchController;
- (void)setDefersActivation:(bool)arg1;
- (void)setDelegate:(id <TabThumbnailCollectionViewDelegate>)arg1;
- (void)setItemToActivate:(id <TabCollectionItem>)arg1;
- (TabOverviewToolbar *)toolbar;

@optional

- (void)addPresentationObserver:(id <TabThumbnailCollectionViewPresentationObserving>)arg1;
- (double)alternateBottomSafeAreaInset;
- (void)removePresentationObserver:(id <TabThumbnailCollectionViewPresentationObserving>)arg1;
- (void)setAlternateBottomSafeAreaInset:(double)arg1;
- (void)test_scrollToTopWithoutAnimation;

@end
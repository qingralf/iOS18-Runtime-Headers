/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionTableIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout * _flowLayout;
    <_UICollectionTableIndexOverlayHost> * _host;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cellTapped:(id)arg1;
- (void)_doneTapped;
- (void)_setIndexColor:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithHost:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICollectionViewDataSource : UICollectionViewDiffableDataSource <SearchUIAsyncSectionLoaderDelegate> {
    NSObject<OS_dispatch_queue> * _applyQueue;
    SearchUICollectionViewController * _controller;
    _Atomic int  _numberOfUpdatesInProgress;
    NSMutableSet * _registeredCellIdentifiers;
    id /* block */  _updateCompletionBlock;
}

@property (retain) NSObject<OS_dispatch_queue> *applyQueue;
@property SearchUICollectionViewController *controller;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property _Atomic int numberOfUpdatesInProgress;
@property (nonatomic, retain) NSMutableSet *registeredCellIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateCompletionBlock;

- (void).cxx_destruct;
- (id)applyQueue;
- (void)applySnapshot:(id)arg1 animated:(bool)arg2 skipsDiffing:(bool)arg3 completion:(id /* block */)arg4;
- (id)cellForRowModel:(id)arg1 atIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)controller;
- (id)currentSnapshotLayoutConfiguration;
- (bool)deviceIsAuthenticated;
- (id)initWithController:(id)arg1;
- (id)layoutSectionForSectionModel:(id)arg1 layoutEnvironment:(id)arg2 attributes:(id)arg3;
- (int)numberOfUpdatesInProgress;
- (id)pointerStringFrom:(id)arg1;
- (id)rebuildAsyncLoaderResult:(id)arg1 forCardSections:(id)arg2;
- (id)rebuildSnapshot:(id)arg1 replacingSectionModel:(id)arg2 newSectionModel:(id)arg3;
- (void)rebuildSnapshotForAsyncLoaders:(id)arg1;
- (void)registerCellForRowModel:(id)arg1;
- (id)registerFooterView:(id)arg1;
- (void)registerSupplementaryViews;
- (id)registeredCellIdentifiers;
- (void)reloadModel;
- (void)reloadSection:(id)arg1 animated:(bool)arg2;
- (void)reloadSection:(id)arg1 animated:(bool)arg2 reconfigureExisting:(bool)arg3;
- (void)reloadSectionWithIdentifier:(id)arg1 animated:(bool)arg2 reconfigureExisting:(bool)arg3;
- (void)removeRowModel:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSectionContaining:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSectionModel:(id)arg1 completion:(id /* block */)arg2;
- (id)reuseIdentifierForFooterView:(id)arg1;
- (id)reuseIdentifierForRowModel:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })sectionsInsetsForSection:(id)arg1 sectionIndex:(unsigned long long)arg2 totalNumberOfSections:(long long)arg3 attributes:(id)arg4;
- (void)setApplyQueue:(id)arg1;
- (void)setController:(id)arg1;
- (void)setNumberOfUpdatesInProgress:(int)arg1;
- (void)setRegisteredCellIdentifiers:(id)arg1;
- (void)setUpdateCompletionBlock:(id /* block */)arg1;
- (id /* block */)updateCompletionBlock;
- (void)updateWithSnapshot:(id)arg1;
- (void)updateWithSnapshot:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIReviewListPageSection : SUUIStorePageSection {
    SUUIViewElementLayoutContext * _cellLayoutContext;
    NSMutableDictionary * _contextActionsRegistration;
}

@property (nonatomic, copy) NSMutableDictionary *contextActionsRegistration;
@property (nonatomic, readonly) SUUIReviewListPageComponent *pageComponent;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetForReviewIndex:(long long)arg1;
- (id)_contextActionRegistrationKeyWithCell:(id)arg1 indexPath:(id)arg2;
- (void)_requestCellLayout;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (id)contextActionsRegistration;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)registerContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)setContextActionsRegistration:(id)arg1;
- (void)unregisterContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

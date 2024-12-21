/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardAvatarPresenter : NSObject <PKDashboardItemPresenter> {
    PKContactAvatarManager * _avatarManager;
    bool  _needsSizing;
    PKAvatarHeaderView * _sampleView;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureView:(id)arg1 item:(id)arg2;
- (id)_contactForItem:(id)arg1;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (id)initWithAvatarManager:(id)arg1;
- (Class)itemClass;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)swapSummaryInCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFooterViewModelController : NSObject <PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXEventCoalescerObserver> {
    PXCloudQuotaControllerHelper * _cloudQuotaHelper;
    PXAssetsDataSourceCountsController * _countsController;
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    <PXFooterViewModelControllerDelegate> * _delegate;
    PXFooterViewModel * _footerViewModel;
    bool  _isActive;
    PHPhotoLibrary * _photoLibrary;
    PXEventCoalescer * _updateCoalescer;
    PXUpdater * _updater;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PXFooterViewModelControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXFooterViewModel *footerViewModel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActive;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXEventCoalescer *updateCoalescer;
@property (nonatomic, retain) PXUpdater *updater;

+ (id /* block */)_updateQueue_viewModelConfigurationWithStatus:(id)arg1 counts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 photoLibrary:(id)arg3;
+ (void)loadAsyncUpdatesImmediately;
+ (id)updateQueue;

- (void).cxx_destruct;
- (void)_invalidateFooterViewModel;
- (void)_mainQueue_finishUpdateWithCPLStatus:(id)arg1 viewModelConfiguration:(id /* block */)arg2;
- (void)_prepareCounts;
- (void)_setNeedsUpdate;
- (void)_updateFooterViewModel;
- (void)_updateIfNeeded;
- (void)cloudQuotaControllerHelper:(id)arg1 informationViewDidChange:(id)arg2;
- (id)delegate;
- (id)footerViewModel;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 provideLibraryCounts:(bool)arg2 provideCloudQuotaOffers:(bool)arg3;
- (bool)isActive;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)outputEventSignaledForCoalescer:(id)arg1;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setUpdateCoalescer:(id)arg1;
- (void)setUpdater:(id)arg1;
- (id)updateCoalescer;
- (id)updater;

@end

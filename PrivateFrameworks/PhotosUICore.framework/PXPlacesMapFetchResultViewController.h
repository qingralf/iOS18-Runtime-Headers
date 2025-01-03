/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesMapFetchResultViewController : UIViewController <PXOneUpPresentationDelegate, PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerSelectionDelegate, PXPlacesMapOptionsControllerDelegate> {
    <PXPlacesAssetsSelectionDelegate> * _assetSelectionDelegate;
    bool  _autoRefocusOnDataChange;
    <PXPlacesMapBarButtonsDelegate> * _barButtonsDelegate;
    bool  _canEditLocation;
    <PXPlacesMapLocationEditDelegate> * _editLocationDelegate;
    bool  _enableNearbyAssetsAffordance;
    UIBarButtonItem * _filterAssetsBtn;
    PXPlacesMapFetchResultController * _mapFetchResultsController;
    PXPlacesMapOptionsController * _mapOptionsController;
    PXMapOptionsView * _mapOptionsView;
    PXPhotoKitAssetsDataSourceManager * _oneUpDataSourceManager;
    PHPhotoLibrary * _photoLibrary;
    UIViewController * _pxOneUpPresentationViewController;
    PHAsset<PXPlacesGeotaggable> * _selectedGeotaggable;
    bool  _showNavigationBar;
    unsigned long long  _style;
    PXPlacesMapThumbnailLocationCurator * _thumbnailLocationCurator;
    bool  _wantsMapOptionsView;
}

@property (nonatomic) <PXPlacesAssetsSelectionDelegate> *assetSelectionDelegate;
@property bool autoRefocusOnDataChange;
@property (nonatomic) <PXPlacesMapBarButtonsDelegate> *barButtonsDelegate;
@property bool canEditLocation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXPlacesMapLocationEditDelegate> *editLocationDelegate;
@property (nonatomic, readonly) bool enableNearbyAssetsAffordance;
@property (nonatomic, retain) UIBarButtonItem *filterAssetsBtn;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPlacesMapFetchResultController *mapFetchResultsController;
@property (nonatomic, retain) PXPlacesMapOptionsController *mapOptionsController;
@property (nonatomic, retain) PXMapOptionsView *mapOptionsView;
@property (nonatomic, retain) PXPhotoKitAssetsDataSourceManager *oneUpDataSourceManager;
@property (nonatomic, readonly) bool prefersToolbarVisible;
@property (nonatomic) UIViewController *pxOneUpPresentationViewController;
@property (retain) PHAsset<PXPlacesGeotaggable> *selectedGeotaggable;
@property (nonatomic) bool showNavigationBar;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXPlacesMapThumbnailLocationCurator *thumbnailLocationCurator;
@property (nonatomic, readonly) bool wantsMapOptionsView;

- (void).cxx_destruct;
- (id)_fetchHydratedAssetForPlacesAsset:(id)arg1;
- (void)_placeToolbarItems:(id)arg1;
- (void)_reloadContentModeDisplay:(unsigned long long)arg1;
- (void)_selectedGeotaggables:(id)arg1;
- (void)_setupMapModeControlsOverlay;
- (void)_updateMapOptionsView;
- (id)assetSelectionDelegate;
- (bool)autoRefocusOnDataChange;
- (id)barButtonsDelegate;
- (bool)canEditLocation;
- (void)dataSourceDidChange:(id)arg1;
- (id)dataSourceForAssets:(id)arg1;
- (void)dealloc;
- (void)didSelectGeotaggableItems:(id)arg1 fromMapView:(id)arg2;
- (id)editLocationDelegate;
- (bool)enableNearbyAssetsAffordance;
- (id)filterAssetsBtn;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 enableNearbyAssetsAffordance:(bool)arg2 wantsMapOptionsView:(bool)arg3 photoLibrary:(id)arg4 mapFetchResultController:(id)arg5;
- (id)initWithInitialCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 enableNearbyAssetsAffordance:(bool)arg2 wantsMapOptionsView:(bool)arg3 photoLibrary:(id)arg4 mapFetchResultController:(id)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)mapFetchResultsController;
- (id)mapOptionsController;
- (void)mapOptionsControllerDidInvalidateMapOptions:(id)arg1;
- (id)mapOptionsView;
- (void)mapRegionDidChange:(id)arg1;
- (id)oneUpDataSourceManager;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(id /* block */)arg5;
- (void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(id /* block */)arg4;
- (bool)prefersToolbarVisible;
- (bool)pu_shouldOptOutFromChromelessBars;
- (id)pxOneUpPresentationViewController;
- (void)reloadStyle;
- (id)selectedGeotaggable;
- (void)setAssetSelectionDelegate:(id)arg1;
- (void)setAutoRefocusOnDataChange:(bool)arg1;
- (void)setBarButtonsDelegate:(id)arg1;
- (void)setCanEditLocation:(bool)arg1;
- (void)setEditLocationDelegate:(id)arg1;
- (void)setFilterAssetsBtn:(id)arg1;
- (void)setMapOptionsController:(id)arg1;
- (void)setMapOptionsView:(id)arg1;
- (void)setOneUpDataSourceManager:(id)arg1;
- (void)setPxOneUpPresentationViewController:(id)arg1;
- (void)setSelectedGeotaggable:(id)arg1;
- (void)setShowNavigationBar:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setThumbnailLocationCurator:(id)arg1;
- (bool)showNavigationBar;
- (unsigned long long)style;
- (void)tapFilterAssetsBtn:(id)arg1;
- (id)thumbnailLocationCurator;
- (void)viewDidLoad;
- (bool)wantsMapOptionsView;

@end

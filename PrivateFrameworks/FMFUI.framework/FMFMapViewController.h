/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFMapViewController : UIViewController <FMFMapOptionsViewControllerDelegate, FMFMapViewDelegateInternalDelegate, FMFNoLocationViewDelegate, FMFSessionDelegateInternal, MKUserTrackingView> {
    bool  __blockDidReceiveAnimation;
    NSSet * __internalHandlesShowingLocations;
    bool  __isRenderingInitialMap;
    NSSet * __preloadedHandles;
    bool  __refreshingIsPaused;
    bool  _alwaysShowAccuracy;
    UIColor * _annotationTintColor;
    UIImageView * _cachedMapView;
    long long  _currentTrackingMode;
    NSString * _debugContext;
    unsigned long long  _defaultMapType;
    <FMFMapViewControllerDelegate> * _delegate;
    UIBarButtonItem * _directionsBarButtonItem;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    FMFSession * _fmfSession;
    UIBarButtonItem * _infoBarButtonItem;
    bool  _isMapCenteringDisabled;
    bool  _isSimpleMap;
    FMFMapOptionsViewController * _mapOptionsVC;
    bool  _mapTypeLoaded;
    MKMapView * _mapView;
    FMFMapViewDelegateInternal * _mapViewDelegate;
    FMFNoLocationView * _noLocationView;
    FMFRefreshBarButtonItem * _refreshButton;
    bool  _shouldZoomToFitMeAndLocations;
    bool  _shouldZoomToFitNewLocations;
    bool  _showFloatingMapLocationButton;
    FMFTitleView * _titleView;
    _MKUserTrackingButton * _userTrackingButton;
    UIBarButtonItem * _userTrackingButtonItem;
    bool  _viewWillAppearCalled;
    bool  _wasToolbarPreviouslyHidden;
}

@property (nonatomic) bool _blockDidReceiveAnimation;
@property (nonatomic, retain) NSSet *_internalHandlesShowingLocations;
@property (nonatomic) bool _isRenderingInitialMap;
@property (nonatomic, retain) NSSet *_preloadedHandles;
@property (nonatomic) bool _refreshingIsPaused;
@property (nonatomic) bool alwaysShowAccuracy;
@property (nonatomic, copy) UIColor *annotationTintColor;
@property (nonatomic, retain) UIImageView *cachedMapView;
@property (nonatomic) long long currentTrackingMode;
@property (nonatomic, retain) NSString *debugContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long defaultMapType;
@property (nonatomic) <FMFMapViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *directionsBarButtonItem;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) FMFSession *fmfSession;
@property (nonatomic, copy) NSSet *handlesShowingLocations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *infoBarButtonItem;
@property (nonatomic) bool isMapCenteringDisabled;
@property (nonatomic) bool isSimpleMap;
@property (nonatomic, retain) FMFMapOptionsViewController *mapOptionsVC;
@property (nonatomic) bool mapTypeLoaded;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) FMFMapViewDelegateInternal *mapViewDelegate;
@property (nonatomic, retain) FMFNoLocationView *noLocationView;
@property (nonatomic, retain) FMFRefreshBarButtonItem *refreshButton;
@property (nonatomic) bool shouldZoomToFitMeAndLocations;
@property (nonatomic) bool shouldZoomToFitNewLocations;
@property (nonatomic) bool showFloatingMapLocationButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) FMFTitleView *titleView;
@property (nonatomic, retain) _MKUserTrackingButton *userTrackingButton;
@property (nonatomic, retain) UIBarButtonItem *userTrackingButtonItem;
@property (nonatomic) bool viewWillAppearCalled;
@property (nonatomic) bool wasToolbarPreviouslyHidden;

+ (struct CGSize { double x1; double x2; })annotationImageSize;
+ (bool)hasUserLocation;

- (void).cxx_destruct;
- (void)_authorizeMonitoringLocation;
- (bool)_blockDidReceiveAnimation;
- (void)_dismiss:(id)arg1;
- (void)_enablePreloadedHandles:(id)arg1;
- (id)_generateDebugContext;
- (id)_internalAnnotationTintColor;
- (id)_internalHandlesShowingLocations;
- (bool)_isRenderingInitialMap;
- (id)_preloadedHandles;
- (bool)_refreshingIsPaused;
- (id)_selectedHandleAnnotation;
- (void)_setUserTrackingMode:(long long)arg1 animated:(bool)arg2 fromTrackingButton:(bool)arg3;
- (void)_updateDirectionsButtonEnabled;
- (void)_updateLocationButtonEnabled;
- (void)_updateTitleViewLocation:(id)arg1;
- (void)addHandlesToSession;
- (bool)alwaysShowAccuracy;
- (id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2;
- (id)annotationTintColor;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)cachedMapView;
- (bool)canRotateForHeading;
- (bool)canSelectAnnotation:(id)arg1;
- (bool)canShowNoLocation;
- (long long)currentTrackingMode;
- (void)dealloc;
- (id)debugContext;
- (unsigned long long)defaultMapType;
- (id)delegate;
- (id)description;
- (void)deselectAllAnnotations;
- (void)destroySession;
- (void)didDeselectLocation:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)didReceiveLocationForDelegateCallback:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didSelectLocation:(id)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didUpdateUserLocation:(id)arg1;
- (id)directionsBarButtonItem;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)enablePreloadedHandles;
- (id)fmfSession;
- (void)getDirections;
- (id)handlesShowingLocations;
- (bool)hasUserLocation;
- (void)hideCachedMap;
- (id)infoBarButtonItem;
- (void)infoButtonTapped:(id)arg1;
- (id)init;
- (id)initSimpleMapWithDelegate:(id)arg1 handles:(id)arg2;
- (id)initWithDelegate:(id)arg1 handles:(id)arg2;
- (void)initializeDefaults;
- (bool)isCompact;
- (bool)isCurrentlyRotated;
- (bool)isLocationAlreadyOnMap:(id)arg1;
- (bool)isMapCenteringDisabled;
- (bool)isSimpleMap;
- (double)liveAnimationDuration;
- (void)loadCachedLocationsForHandles;
- (void)loadDelegate;
- (void)loadView;
- (id)locationOnMapForHandle:(id)arg1 enforceServerId:(bool)arg2;
- (bool)mapHasUserLocations;
- (id)mapOptionsVC;
- (void)mapTypeChanged:(unsigned long long)arg1;
- (void)mapTypeChangedNotification:(id)arg1;
- (bool)mapTypeLoaded;
- (id)mapView;
- (id)mapViewDelegate;
- (void)mapViewDidFinishRenderingMap;
- (id)noLocationView;
- (double)nonLiveAnimationDuration;
- (id)openInAppURL;
- (void)openInMapsButtonTapped:(id)arg1;
- (void)presentMapOptionsModal:(id)arg1;
- (void)reZoomToFit;
- (void)recenterMap;
- (id)refreshButton;
- (void)refreshButtonTapped:(id)arg1;
- (void)regionDidChangeAnimated:(bool)arg1;
- (void)regionWillChangeAnimated:(bool)arg1;
- (void)removeAllFriendLocationsFromMap;
- (void)removeAnnotationsFromMapForHandle:(id)arg1;
- (void)removeHandlesFromSession;
- (void)resumeRefreshingLocations;
- (void)selectAnnotationIfSingleForMac;
- (void)selectAnnotationIfSingleFriend:(id)arg1;
- (bool)sessionContainsHandle:(id)arg1;
- (void)setAlwaysShowAccuracy:(bool)arg1;
- (void)setAnnotationTintColor:(id)arg1;
- (void)setCachedMapView:(id)arg1;
- (void)setCurrentTrackingMode:(long long)arg1;
- (void)setDebugContext:(id)arg1;
- (void)setDefaultMapType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionsBarButtonItem:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFmfSession:(id)arg1;
- (void)setHandlesShowingLocations:(id)arg1;
- (void)setInfoBarButtonItem:(id)arg1;
- (void)setIsMapCenteringDisabled:(bool)arg1;
- (void)setIsSimpleMap:(bool)arg1;
- (void)setMapOptionsVC:(id)arg1;
- (void)setMapTypeLoaded:(bool)arg1;
- (void)setMapView:(id)arg1;
- (void)setMapViewDelegate:(id)arg1;
- (void)setNoLocationView:(id)arg1;
- (void)setRefreshButton:(id)arg1;
- (void)setShouldZoomToFitMeAndLocations:(bool)arg1;
- (void)setShouldZoomToFitNewLocations:(bool)arg1;
- (void)setShowFloatingMapLocationButton:(bool)arg1;
- (void)setTitleView:(id)arg1;
- (void)setUserTrackingButton:(id)arg1;
- (void)setUserTrackingButtonItem:(id)arg1;
- (void)setViewWillAppearCalled:(bool)arg1;
- (void)setWasToolbarPreviouslyHidden:(bool)arg1;
- (void)set_blockDidReceiveAnimation:(bool)arg1;
- (void)set_internalHandlesShowingLocations:(id)arg1;
- (void)set_isRenderingInitialMap:(bool)arg1;
- (void)set_preloadedHandles:(id)arg1;
- (void)set_refreshingIsPaused:(bool)arg1;
- (void)setupRecenterMapTimer;
- (void)setupToolbarItems;
- (bool)shouldZoomToFitMeAndLocations;
- (bool)shouldZoomToFitNewLocations;
- (bool)showFloatingMapLocationButton;
- (bool)singleAnnotationOnMap;
- (void)startShowingLocationsForHandles:(id)arg1;
- (void)stopRefreshingLocations;
- (void)stopShowingLocationsForHandles:(id)arg1;
- (id)titleView;
- (id)titleViewForSelectedHandle;
- (void)updateAllAnnotationsDueToAddressBookUpdate;
- (void)updateMapWithNewLocation:(id)arg1 animated:(bool)arg2;
- (void)updateNoLocationView:(bool)arg1;
- (void)updateRefreshForLocation:(id)arg1;
- (void)updateUserTrackingButtonState;
- (id)userTrackingButton;
- (id)userTrackingButtonItem;
- (long long)userTrackingMode;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)viewWillAppearCalled;
- (void)viewWillAppearWillMoveToWindowSetup;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wasToolbarPreviouslyHidden;
- (void)willMoveToParentViewController:(id)arg1;
- (void)zoomAndSelectHandle:(id)arg1;
- (void)zoomToFit;
- (void)zoomToFit:(bool)arg1;

@end

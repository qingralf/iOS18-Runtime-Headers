/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFLocationPickerViewController : UIViewController <CLLocationManagerDelegate, MKMapViewDelegate, MKMapViewDelegatePrivate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, WFLocationTriggerEditorMapDragRadiusViewDelegate> {
    bool  _allowsPickingCurrentLocation;
    bool  _allowsTextOnlyLocation;
    NSArray * _constraints;
    int  _currentAppLocationAuthorizationStatus;
    CLLocation * _currentLocation;
    <WFLocationPickerViewControllerDelegate> * _delegate;
    UIView * _dividerView;
    WFLocationTriggerEditorMapDragRadiusView * _dragView;
    MKLocalSearch * _localSearch;
    NSArray * _localSearchResults;
    CLLocationManager * _locationManager;
    NSLayoutConstraint * _mapHeightConstraint;
    MKMapView * _mapView;
    unsigned long long  _pickerType;
    NSArray * _recents;
    unsigned long long  _regionCondition;
    bool  _resolvesCurrentLocationToPlacemark;
    UISearchBar * _searchBar;
    NSIndexPath * _selectedIndexPath;
    UITableView * _tableView;
    WFLocationValue * _value;
}

@property (nonatomic) bool allowsPickingCurrentLocation;
@property (nonatomic) bool allowsTextOnlyLocation;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) int currentAppLocationAuthorizationStatus;
@property (nonatomic, retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <WFLocationPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dividerView;
@property (nonatomic, retain) WFLocationTriggerEditorMapDragRadiusView *dragView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKLocalSearch *localSearch;
@property (nonatomic, copy) NSArray *localSearchResults;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSLayoutConstraint *mapHeightConstraint;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, readonly) unsigned long long pickerType;
@property (nonatomic, copy) NSArray *recents;
@property (nonatomic) unsigned long long regionCondition;
@property (nonatomic) bool resolvesCurrentLocationToPlacemark;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) WFLocationValue *value;

- (void).cxx_destruct;
- (bool)allowsPickingCurrentLocation;
- (bool)allowsTextOnlyLocation;
- (void)cancel:(id)arg1;
- (void)checkLocationAuthorization;
- (id)circularRegion;
- (id)constraints;
- (int)currentAppLocationAuthorizationStatus;
- (id)currentLocation;
- (long long)currentLocationRowIndex;
- (id)delegate;
- (void)displayLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)dividerView;
- (void)done:(id)arg1;
- (id)dragView;
- (long long)firstLocalSearchResultRowIndex;
- (long long)firstRecentRowIndex;
- (void)getMapItemFromRecentContact:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPlacemarkFromLocation:(id)arg1 streetAddress:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasLocation;
- (bool)hasSufficientLocationAuthorization;
- (id)initWithPickerType:(unsigned long long)arg1 value:(id)arg2;
- (long long)lastRecentRowIndex;
- (void)loadView;
- (id)localSearch;
- (id)localSearchResults;
- (id)locationFromRecentContact:(id)arg1;
- (id)locationManager;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (double)mapHeight;
- (id)mapHeightConstraint;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRadiusView:(id)arg1 boundingMapRectForOverlay:(id)arg2;
- (id)mapRadiusView:(id)arg1 overlayForRadius:(double)arg2;
- (void)mapRadiusView:(id)arg1 radiusDidChange:(double)arg2;
- (id)mapView;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (id)overlayWithCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2;
- (unsigned long long)pickerType;
- (unsigned long long)proximityType;
- (id)recents;
- (unsigned long long)regionCondition;
- (void)reloadData;
- (void)resetSearchResults;
- (bool)resolvesCurrentLocationToPlacemark;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)selectedIndexPath;
- (void)setAllowsPickingCurrentLocation:(bool)arg1;
- (void)setAllowsTextOnlyLocation:(bool)arg1;
- (void)setConstraints:(id)arg1;
- (void)setCurrentAppLocationAuthorizationStatus:(int)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDividerView:(id)arg1;
- (void)setDragView:(id)arg1;
- (void)setLocalSearch:(id)arg1;
- (void)setLocalSearchResults:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationValueWithPlacemark:(id)arg1;
- (void)setMapHeightConstraint:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setRecents:(id)arg1;
- (void)setRegionCondition:(unsigned long long)arg1;
- (void)setRegionValueWithPlacemark:(id)arg1 radius:(double)arg2;
- (void)setResolvesCurrentLocationToPlacemark:(bool)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setupMap;
- (bool)shouldShowCurrentLocationItem;
- (void)showMapRegionForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2;
- (bool)showsMapView;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMapHeight;
- (void)updateRecentsWithSearchText:(id)arg1;
- (void)updateUI;
- (void)updateUIWithValue:(id)arg1;
- (void)updateValueWithMapItem:(id)arg1;
- (void)updateValueWithRadius:(double)arg1;
- (void)updateViewConstraints;
- (id)value;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

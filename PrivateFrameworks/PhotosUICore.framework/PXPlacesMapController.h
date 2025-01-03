/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesMapController : NSObject <PXPlacesGeotaggedItemDataSourceDelegate, PXPlacesMapViewDelegate> {
    PXPlacesImageCache * _cache;
    <PXPlacesMapControllerChangeDelegate> * _changeDelegate;
    PXPlacesMapPipelineExecutionContext * _currentExecutionContext;
    <MKAnnotation> * _currentSelection;
    NSMapTable * _dataSourceExecutionContexts;
    NSMapTable * _dataSourceToPipelineMap;
    NSSet * _dataSources;
    NSObject<OS_dispatch_queue> * _dataSourcesQueue;
    NSObject<OS_dispatch_queue> * _executionContextQueue;
    <PXPlacesMapControllerFocusDelegate> * _focusDelegate;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _initialCenterCoordinate;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _initialCoordinateRegion;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _initialEdgePadding;
    PXPlacesMapView * _mapView;
    bool  _mapViewIsVisible;
    NSMapTable * _pendingDataSourceChanges;
    bool  _pipelineExecutionAllowed;
    NSObject<OS_dispatch_queue> * _pipelinesQueue;
    <PXPlacesMapControllerSelectionDelegate> * _selectionDelegate;
    NSMutableDictionary * _showDebugMapRectColors;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _signalFocusMapRect;
    bool  _signalFocusWhenMapViewBecomesVisible;
    <PXPlacesMapControllerLoadingStateDelegate> * _stateDelegate;
    NSObject<OS_dispatch_source> * _uiUpdateTimer;
}

@property (retain) PXPlacesImageCache *cache;
@property <PXPlacesMapControllerChangeDelegate> *changeDelegate;
@property (retain) PXPlacesMapPipelineExecutionContext *currentExecutionContext;
@property (nonatomic, readonly) NSOrderedSet *currentSelectedGeotaggables;
@property (nonatomic, retain) <MKAnnotation> *currentSelection;
@property (retain) NSMapTable *dataSourceToPipelineMap;
@property (retain) NSSet *dataSources;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property <PXPlacesMapControllerFocusDelegate> *focusDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } initialCenterCoordinate;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } initialCoordinateRegion;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } initialEdgePadding;
@property (nonatomic, retain) PXPlacesMapView *mapView;
@property bool mapViewIsVisible;
@property bool pipelineExecutionAllowed;
@property <PXPlacesMapControllerSelectionDelegate> *selectionDelegate;
@property (nonatomic, retain) NSMutableDictionary *showDebugMapRectColors;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } signalFocusMapRect;
@property (nonatomic) bool signalFocusWhenMapViewBecomesVisible;
@property <PXPlacesMapControllerLoadingStateDelegate> *stateDelegate;
@property (readonly) Class superclass;

+ (void)launchMapsAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 withTitle:(id)arg2 completionHandler:(id /* block */)arg3;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectWithMapViewSize:(struct CGSize { double x1; double x2; })arg1 centeredOnCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 visibleDistance:(double)arg3;

- (void).cxx_destruct;
- (double)_defaultAnimationDuration;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_ensureMinimumSize:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_executeUpdatePlanResults:(id)arg1;
- (double)_fadeInAnimationDuration;
- (double)_fadeOutAnimationDuration;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectForGeotaggablesFromPipeline:(id)arg1 fitAdjusted:(bool*)arg2;
- (void)_setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 animated:(bool)arg3;
- (void)_showDebugMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2;
- (void)_updateMapWithAllDataSources:(id /* block */)arg1;
- (void)_updateMapWithDataSource:(id)arg1 dataSourceChange:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateMapWithDataSources:(id)arg1 dataSourceChangeTable:(id)arg2 completion:(id /* block */)arg3;
- (double)_zPositionForAnnotationIndex:(long long)arg1;
- (void)addPipeline:(id)arg1;
- (id)cache;
- (id)changeDelegate;
- (id)createTrackingBarButtonItem;
- (id)currentExecutionContext;
- (id)currentSelectedGeotaggables;
- (id)currentSelection;
- (void)dataSource:(id)arg1 didChange:(id)arg2;
- (id)dataSourceToPipelineMap;
- (id)dataSources;
- (void)dealloc;
- (id)executePipeline:(id)arg1 dataSourceChange:(id)arg2 context:(id)arg3;
- (id)focusDelegate;
- (void)focusOnGeotaggablesFromPipeline:(id)arg1 animated:(bool)arg2;
- (void)focusOnGeotaggablesFromPipelineImmediately:(id)arg1;
- (id)init;
- (struct CLLocationCoordinate2D { double x1; double x2; })initialCenterCoordinate;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })initialCoordinateRegion;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialEdgePadding;
- (void)loadView;
- (void)mapContainerViewDidAppear;
- (void)mapContainerViewDidDisappear;
- (void)mapContainerViewWillAppear;
- (void)mapContainerViewWillDisappear;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForGeotaggablesFromDataSource:(id)arg1 renderer:(id)arg2 mapViewSize:(struct CGSize { double x1; double x2; })arg3 fitAdjusted:(bool*)arg4;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForNearbyQueriesFromRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 atScale:(double)arg2 targetViewSize:(struct CGSize { double x1; double x2; })arg3;
- (id)mapView;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(bool)arg2;
- (bool)mapViewIsVisible;
- (bool)pipelineExecutionAllowed;
- (void)removeDataSource:(id)arg1;
- (void)removePipeline:(id)arg1;
- (void)resumePipelines:(id /* block */)arg1;
- (void)runPipelines;
- (id)selectionDelegate;
- (void)setCache:(id)arg1;
- (void)setChangeDelegate:(id)arg1;
- (void)setCurrentExecutionContext:(id)arg1;
- (void)setCurrentSelection:(id)arg1;
- (void)setDataSourceToPipelineMap:(id)arg1;
- (void)setDataSources:(id)arg1;
- (void)setFocusDelegate:(id)arg1;
- (void)setInitialCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setInitialCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialEdgePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMapView:(id)arg1;
- (void)setMapViewIsVisible:(bool)arg1;
- (void)setPipelineExecutionAllowed:(bool)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)setShowDebugMapRectColors:(id)arg1;
- (void)setSignalFocusMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSignalFocusWhenMapViewBecomesVisible:(bool)arg1;
- (void)setStateDelegate:(id)arg1;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPipeline:(id)arg2 animated:(bool)arg3;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 forRenderer:(id)arg2 animated:(bool)arg3;
- (id)showDebugMapRectColors;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })signalFocusMapRect;
- (bool)signalFocusWhenMapViewBecomesVisible;
- (id)stateDelegate;
- (void)suspendPipelines;
- (id)visibleGeotaggableFromDataSource:(id)arg1;

@end

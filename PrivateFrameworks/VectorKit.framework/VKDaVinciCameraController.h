/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDaVinciCameraController : VKScreenCameraController <VKGesturingCameraController> {
    double  _beganDoublePanPitch;
    void * _cameraManager;
    bool  _couldEnter3DMode;
    double  _currentDoublePanPitch;
    bool  _isPitching;
    bool  _isRotating;
    double  _lastRotation;
    void * _mapEngine;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panLastScreenPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panStartScreenPoint;
    bool  _updateHeight;
    bool  _wasPitched;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct Coordinate2D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; })_centerCoordinateForMapRegion:(id)arg1;
- (struct vector<geo::Coordinate2D<geo::Radians, double>, std::allocator<geo::Coordinate2D<geo::Radians, double>>> { void *x1; void *x2; struct __compressed_pair<geo::Coordinate2D<geo::Radians, double> *, std::allocator<geo::Coordinate2D<geo::Radians, double>>> { void *x_3_1_1; } x3; })_getVisibleArea;
- (void)_updateCanEnter3DMode;
- (void)_updateIsPitched;
- (double)altitude;
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(id /* block */)arg2 stepHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3;
- (bool)canEnter3DMode;
- (struct { double x1; double x2; })centerCoordinate;
- (struct Coordinate2D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; })centerCoordinateRad;
- (id /* block */)createMoveToZoomOutZoomInFrameFunction:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })arg1 toLatLon:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })arg2;
- (double)currentZoomLevel;
- (void)dealloc;
- (double)distanceFromCenterCoordinate;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (double)earthRadiusAt:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg1;
- (void)enter3DMode;
- (void)exit3DMode;
- (double)geocAngleBetween:(struct Coordinate2D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; })arg1 andCoordinate:(struct Coordinate2D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; })arg2;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })greatCircleMidPointLatitude:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg1 fromLongitude:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg2 toLongitude:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg3;
- (double)heading;
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;
- (id)initWithMapDataAccess:(void*)arg1 animationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg2 runLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg3 cameraDelegate:(id)arg4 mapEngine:(void*)arg5;
- (bool)isFullyPitched;
- (bool)isPitched;
- (id)mapRegion;
- (id)mapRegionIgnoringEdgeInsets;
- (double)maxPitch;
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;
- (float)maximumNormalizedZoomLevel;
- (double)maximumZoomLevel;
- (double)minPitch;
- (float)minPitchForNormalizedZoomLevel:(float)arg1;
- (float)minimumNormalizedZoomLevel;
- (double)minimumZoomLevel;
- (void)moveTo:(struct Coordinate2D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; })arg1 height:(double)arg2 useHeight:(bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)moveTo:(struct Coordinate2D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; })arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)moveToZoomOutZoomInTransition:(struct Coordinate2D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; })arg1 height:(double)arg2 useHeight:(bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (double)pitch;
- (void)pitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (double)presentationYaw;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)rotateTo:(double)arg1 animated:(bool)arg2;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCenterCoordinate3D:(struct { double x1; double x2; double x3; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCenterCoordinateDistanceRange:(struct { double x1; double x2; bool x3; })arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3;
- (void)setGesturing:(bool)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (bool)snapMapIfNecessary:(bool)arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3 duration:(double)arg4 timingFunction:(id /* block */)arg5;
- (void)stopGlobeAnimations;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)tapZoom:(struct CGPoint { double x1; double x2; })arg1 levels:(double)arg2 completionHandler:(id /* block */)arg3;
- (long long)tileSize;
- (void)tiltTo:(double)arg1 animated:(bool)arg2 exaggerate:(bool)arg3;
- (double)topDownMinimumZoomLevel;
- (void)updateCameraLimits;
- (void)updateCameraManager;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updateState;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (bool)usesVKCamera;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })widestLatitudeForMapRegion:(id)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomForMapRegion:(id)arg1;
- (void)zoomToDistance:(struct CGPoint { double x1; double x2; })arg1 distance:(double)arg2 time:(double)arg3;
- (void)zoomToDistance:(struct CGPoint { double x1; double x2; })arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(id /* block */)arg4;

@end
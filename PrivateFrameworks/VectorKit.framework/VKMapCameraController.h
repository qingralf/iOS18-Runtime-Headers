/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapCameraController : VKScreenCameraController <VKGesturingCameraController> {
    double  _finalPitch;
    double  _finalYaw;
    struct shared_ptr<md::VKFlyoverTour> { 
        struct VKFlyoverTour {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _flyoverTour;
    VKTimedAnimation * _horizontalOffsetAnimation;
    void * _mapEngine;
    double  _maxDistanceToGroundAlongForwardVector;
    double  _minDistanceToGroundAlongForwardVector;
    float  _resumeTourFraction;
    struct CameraFrame<geo::Radians, double> { 
        struct Coordinate3D<geo::Radians, double> { 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<geo::MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _target; 
        struct Unit<geo::MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _roll; 
    }  _resumeTourPosition;
    bool  _tourShouldResumeWhenDoneGesturing;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) void*mapEngine;
@property (readonly) Class superclass;
@property (nonatomic) bool tourShouldResumeWhenDoneGesturing;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_animateToPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)_animateToPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(id /* block */)arg5 forceDestination:(bool)arg6 completion:(id /* block */)arg7;
- (void)_jumpToCenterPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg1 pitchRadians:(double)arg2 yawRadians:(double)arg3;
- (struct { double x1; double x2; })_mercatorCenterCoordinateForMapRegion:(id)arg1;
- (double)altitude;
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(id /* block */)arg2 stepHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)animateToTourPosition:(float)arg1 timingFunction:(id /* block */)arg2 animationStyle:(long long)arg3 completion:(id /* block */)arg4;
- (bool)canEnter3DMode;
- (bool)canRotate;
- (void)canvasDidLayout;
- (struct { double x1; double x2; })centerCoordinate;
- (void)clampPitch:(double*)arg1 yaw:(double*)arg2 atTargetPositionZ:(double)arg3;
- (void)clampZoomLevelIfNecessaryAnimated:(bool)arg1;
- (id)createFlyoverPreTourAnimation:(id)arg1 duration:(double)arg2;
- (id /* block */)createMoveToZoomOutZoomInFrameFunction:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })arg1 toLatLon:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })arg2;
- (float)currentDisplayZoomLevel;
- (float)currentMaximumNormalizedZoomLevel;
- (float)currentMinimumNormalizedZoomLevel;
- (float)currentNormalizedZoomLevel;
- (float)currentStyleZoomLevel;
- (float)currentTopDownMinimumNormalizedZoomLevel;
- (double)currentZoomLevel;
- (void)dealloc;
- (double)distanceFromCenterCoordinate;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)enter3DMode;
- (void)exit3DMode;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(bool)arg2 labelChanged:(id /* block */)arg3 stateChange:(id /* block */)arg4;
- (double)heading;
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;
- (id)initWithMapDataAccess:(void*)arg1 animationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg2 runLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg3 cameraDelegate:(id)arg4;
- (void)interruptFlyoverTourAnimation;
- (bool)isFlyoverTourStarted;
- (bool)isFullyPitched;
- (bool)isPitched;
- (void*)mapEngine;
- (double)maxPitch;
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;
- (float)maximumNormalizedZoomLevel;
- (double)maximumZoomLevel;
- (double)minPitch;
- (float)minimumNormalizedZoomLevel;
- (float)minimumPitchForNormalizedZoomLevel:(float)arg1;
- (double)minimumZoomLevel;
- (float)normalizedZoomLevelAdjustmentForTileSize:(long long)arg1;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)pauseFlyoverTourAnimation;
- (double)pitch;
- (struct Matrix<double, 3, 1> { double x1[3]; })positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> { double x1[3]; })arg1;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(id /* block */)arg2;
- (double)presentationYaw;
- (void)resumeFlyoverTourAnimation;
- (void)rotateToPitch:(double)arg1 withPoint:(const void*)arg2 preserveAltitude:(bool)arg3 animated:(bool)arg4 exaggerate:(bool)arg5 maxPitch:(double)arg6;
- (void)rotateToYaw:(double)arg1 withPoint:(const void*)arg2 animated:(bool)arg3;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCenterCoordinate3D:(struct { double x1; double x2; double x3; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 forceDestination:(bool)arg8 completion:(id /* block */)arg9;
- (void)setCenterCoordinateDistanceRange:(struct { double x1; double x2; bool x3; })arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3;
- (void)setGesturing:(bool)arg1;
- (void)setMapEngine:(void*)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3;
- (void)setTourShouldResumeWhenDoneGesturing:(bool)arg1;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (bool)snapMapIfNecessary:(bool)arg1;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(bool)arg2 labelChanged:(id /* block */)arg3 stateChange:(id /* block */)arg4;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3 duration:(double)arg4 timingFunction:(id /* block */)arg5;
- (void)stopFlyoverTourAnimation;
- (void)tapZoom:(struct CGPoint { double x1; double x2; })arg1 levels:(double)arg2 completionHandler:(id /* block */)arg3;
- (long long)tileSize;
- (double)topDownMinimumZoomLevel;
- (bool)tourShouldResumeWhenDoneGesturing;
- (void)updateCameraToPositionOrientationLimits;
- (void)updateCameraZBounds;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)zoom:(double)arg1 withPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)zoomToLevel:(double)arg1 withPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg2;

@end

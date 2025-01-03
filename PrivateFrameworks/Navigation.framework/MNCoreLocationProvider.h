/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider> {
    int  _authorizationStatus;
    CLLocationManager * _clLocationManager;
    MNLocationProviderCLParameters * _clParameters;
    bool  _coarseModeEnabled;
    NSRunLoop * _debug_deinitRunLoop;
    NSRunLoop * _debug_initRunLoop;
    <MNLocationProviderDelegate> * _delegate;
    double  _desiredAccuracy;
    double  _distanceFilter;
    NSBundle * _effectiveBundle;
    NSString * _effectiveBundleIdentifier;
    bool  _hasQueriedAuthorization;
    bool  _matchInfoEnabled;
}

@property (nonatomic, readonly) CLLocationManager *_clLocationManager;
@property (nonatomic, readonly) bool coarseModeEnabled;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <MNLocationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isAuthorized;
@property (nonatomic, readonly) bool isTracePlayer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) unsigned long long traceVersion;

- (void).cxx_destruct;
- (id)_clLocationManager;
- (void)_createCLLocationManager;
- (void)_resetForNewEffectiveBundle;
- (void)_sharedInit;
- (void)_updateAuthorizationStatus;
- (void)_updateCoarseModeEnabled;
- (void)_updateForCLParameters:(id)arg1;
- (bool)coarseModeEnabled;
- (void)dealloc;
- (id)delegate;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (id)init;
- (id)initWithEffectiveBundle:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (bool)isAuthorized;
- (bool)isTracePlayer;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)requestLocation;
- (void)resetForActiveTileGroupChanged;
- (void)setCLParameters:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (double)timeScale;
- (unsigned long long)traceVersion;

@end

/* Generated by RuntimeBrowser.
 */

@protocol CLMicroLocationLoiBridgeProtocol <NSObject>

@required

- (void)fetchLocationOfInterestAtLocation:(CLLocation *)arg1;
- (void)fetchPlaceInferenceAtCurrentLocationWithPolicy:(unsigned long long)arg1;
- (void)fetchRelatedLoisForLoi:(NSUUID *)arg1;
- (void)getAllActiveGeofences;
- (void)getCurrentLocation;
- (void)removeGeofenceWithRegionId:(NSString *)arg1;
- (void)removeGeofencesNearLocationWithLatitude:(double)arg1 andLongitude:(double)arg2;
- (void)requestBootstrapWithLastGeofenceStates;
- (void)setGeofenceAtLocation:(CLLocation *)arg1;
- (void)setMicroLocationLoiClient:(struct CLMicroLocationLoiClient { int (**x1)(); }*)arg1;
- (void)setupRegionMonitoring;
- (void)startLeechingLocationUpdates;
- (void)startVisitMonitoring;
- (void)stopLeechingLocationUpdates;

@end

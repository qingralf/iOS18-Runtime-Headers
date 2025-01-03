/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesizer : NSObject {
    NSError * _currentError;
    GEORouteHypothesis * _currentHypothesis;
    NSObject<OS_dispatch_source> * _delayDispatchTimer;
    geo_isolater * _isolater;
    GEOPlannedDestination * _plannedDestination;
    unsigned long long  _state;
    bool  _unableToFindRouteForOriginalTransportType;
    id /* block */  _updateHandler;
    NSUUID * _uuid;
    bool  _wakeForDelay;
}

@property (nonatomic, readonly) NSError *currentError;
@property (nonatomic, readonly) GEORouteHypothesis *currentHypothesis;
@property (nonatomic, readonly) GEOPlannedDestination *plannedDestination;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) bool unableToFindRouteForOriginalTransportType;
@property (nonatomic, readonly) double willBeginHypothesizingInterval;
@property (nonatomic, readonly) double willEndHypothesizingInterval;

+ (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
+ (id)hypothesizerForPlannedDestination:(id)arg1;
+ (bool)transitTTLSupportedInCurrentCountry;

- (void).cxx_destruct;
- (void)_delayStartingWithBGST;
- (void)_delayStartingWithoutXpc;
- (void)_performDelayedStart;
- (bool)_wontHypothesizeAgain;
- (void)cancelDelayDispatchTimer;
- (id)currentError;
- (id)currentHypothesis;
- (void)dealloc;
- (id)description;
- (void)didPostUINotification:(unsigned long long)arg1;
- (id)initWithPlannedDestination:(id)arg1;
- (void)onlyPerformLocalUpdates;
- (id)plannedDestination;
- (void)requestRefresh;
- (void)setDoNotWakeForDelay;
- (void)setState:(unsigned long long)arg1;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)arg1;
- (unsigned long long)state;
- (void)stopHypothesizing;
- (bool)unableToFindRouteForOriginalTransportType;
- (bool)wakeForDelay;
- (double)willBeginHypothesizingInterval;
- (double)willEndHypothesizingInterval;

@end

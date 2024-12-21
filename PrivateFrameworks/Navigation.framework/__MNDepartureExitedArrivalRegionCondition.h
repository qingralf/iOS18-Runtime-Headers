/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface __MNDepartureExitedArrivalRegionCondition : NSObject <__MNDepartureCondition> {
    NSArray * _arrivalRegions;
    double  _closestDistanceToWaypoint;
    unsigned long long  _numHistoricalLocations;
    NSMutableArray * _regionDepartureHistory;
    double  _threshold;
    MNDepartureUpdater * _updater;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)initWithUpdater:(id)arg1 arrivalRegions:(id)arg2;
- (id)name;
- (double)scoreForLocation:(id)arg1;

@end
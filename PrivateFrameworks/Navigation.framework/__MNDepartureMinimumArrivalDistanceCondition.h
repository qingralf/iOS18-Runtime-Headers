/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface __MNDepartureMinimumArrivalDistanceCondition : NSObject <__MNDepartureCondition> {
    double  _closestDistanceToWaypoint;
    double  _threshold;
    MNDepartureUpdater * _updater;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)initWithUpdater:(id)arg1 distanceThreshold:(double)arg2;
- (id)name;
- (double)scoreForLocation:(id)arg1;

@end

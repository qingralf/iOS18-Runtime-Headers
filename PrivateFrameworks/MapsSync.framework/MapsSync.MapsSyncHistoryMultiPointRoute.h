/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
 */

@interface MapsSync.MapsSyncHistoryMultiPointRoute : MapsSync.MapsSyncHistoryItem {
    void _navigationInterrupted;
    void _requiredCharge;
    void _routeProgressWaypointIndex;
    void _routeRequestStorage;
    void _sharedETAData;
    void _type;
    void _vehicleIdentifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool navigationInterrupted;
@property (nonatomic, readonly) NSNumber *requiredCharge;
@property (nonatomic, readonly) short routeProgressWaypointIndex;
@property (nonatomic, readonly) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) NSData *sharedETAData;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) NSString *vehicleIdentifier;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)description;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (bool)navigationInterrupted;
- (id)requiredCharge;
- (short)routeProgressWaypointIndex;
- (id)routeRequestStorage;
- (void)setPropertiesWithObject:(id)arg1;
- (id)sharedETAData;
- (short)type;
- (id)vehicleIdentifier;

@end
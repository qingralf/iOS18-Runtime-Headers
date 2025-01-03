/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUAirPlayRouteObserverRegistry : NSObject <PXSettingsKeyObserver> {
    bool  __discoveryAllowed;
    AVOutputDeviceDiscoverySession * __discoverySession;
    NSObject<OS_dispatch_queue> * __discoverySessionIsolationQueue;
    NSHashTable * __routeObservers;
    <PUAirPlayRouteObserverRegistryDelegate> * _delegate;
    unsigned long long  _lastKnownRouteAvailability;
    NSDate * _lastKnownRouteAvailabilityDate;
    unsigned long long  _routeAvailability;
}

@property (getter=_isDiscoveryAllowed, setter=_setDiscoveryAllowed:, nonatomic) bool _discoveryAllowed;
@property (setter=_setDiscoverySession:, nonatomic, retain) AVOutputDeviceDiscoverySession *_discoverySession;
@property (setter=_setDiscoverySessionIsolationQueue:, nonatomic, retain) NSObject<OS_dispatch_queue> *_discoverySessionIsolationQueue;
@property (setter=_setRouteObservers:, nonatomic, retain) NSHashTable *_routeObservers;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PUAirPlayRouteObserverRegistryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastKnownRouteAvailability;
@property (nonatomic, retain) NSDate *lastKnownRouteAvailabilityDate;
@property (setter=_setRouteAvailability:, nonatomic) unsigned long long routeAvailability;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appEnteredBackground:(id)arg1;
- (void)_appEnteringForeground:(id)arg1;
- (void)_availableOutputDevicesDidChange:(id)arg1;
- (id)_discoverySession;
- (id)_discoverySessionIsolationQueue;
- (void)_discoverySessionIsolationQueue_updateRouteAvailability;
- (bool)_isDiscoveryAllowed;
- (id)_routeObservers;
- (void)_setDiscoveryAllowed:(bool)arg1;
- (void)_setDiscoverySession:(id)arg1;
- (void)_setDiscoverySessionIsolationQueue:(id)arg1;
- (void)_setRouteAvailability:(unsigned long long)arg1;
- (void)_setRouteObservers:(id)arg1;
- (void)_updateAllObservers;
- (void)_updateDiscoverySession;
- (void)_updateObserver:(id)arg1;
- (void)addRouteObserver:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (unsigned long long)lastKnownRouteAvailability;
- (id)lastKnownRouteAvailabilityDate;
- (void)removeRouteObserver:(id)arg1;
- (unsigned long long)routeAvailability;
- (void)setDelegate:(id)arg1;
- (void)setLastKnownRouteAvailability:(unsigned long long)arg1;
- (void)setLastKnownRouteAvailabilityDate:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end

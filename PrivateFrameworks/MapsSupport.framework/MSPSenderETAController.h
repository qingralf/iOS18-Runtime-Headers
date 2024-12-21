/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSenderMessageStrategyDelegate, MSPSharedTripGroupSessionDelegate> {
    NSObject<MSPSenderETAControllerDelegate> * _delegate;
    NSMutableSet * _destinations;
    MSPSharedTripGroupSession * _groupSession;
    MSPSharedTripRelay * _idsRelay;
    MSPNavigationListener * _navigationListener;
    MSPSharedTripSenderStrategyController * _senderStrategyController;
    MSPGroupSessionStorage * _sessionStorage;
    MSPSharedTripStorageController * _storageController;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSArray *activeHandles;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) NSObject<MSPSenderETAControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *serviceNamesByActiveHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanObjects;
- (void)_createGroupSessionIfNeededWithIdentifier:(id)arg1;
- (void)_invalidateActiveHandles;
- (void)_invalidateSharedTripWithError:(id)arg1;
- (void)_restoreLastSession;
- (void)_setState:(id)arg1 forEvent:(unsigned long long)arg2;
- (void)_startLiveForVirtualReceiver:(id)arg1;
- (void)_startNavigationListener;
- (void)_startingGroupSession;
- (void)_stopLiveForVirtualReceiver:(id)arg1;
- (void)_stopNavigationListener;
- (void)_updateStorage;
- (bool)_validateNavigationState:(id*)arg1;
- (id)activeHandles;
- (void)dealloc;
- (id)delegate;
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)groupSessionEnded:(id)arg1 withError:(id)arg2;
- (id)initWithRelay:(id)arg1;
- (void)navigationListenerArrived:(id)arg1;
- (void)navigationListenerETAUpdated:(id)arg1;
- (void)navigationListenerIsReady:(id)arg1;
- (void)navigationListenerLocationUpdated:(id)arg1;
- (void)navigationListenerResumed:(id)arg1;
- (void)navigationListenerRouteUpdated:(id)arg1;
- (void)navigationListenerStopped:(id)arg1;
- (void)navigationListenerTrafficUpdated:(id)arg1;
- (void)navigationListenerWaypointsUpdated:(id)arg1;
- (id)rulesForParticipant:(id)arg1;
- (id)serviceNamesByActiveHandle;
- (void)setDelegate:(id)arg1;
- (bool)startSharingWith:(id)arg1 capabilityType:(unsigned long long)arg2 serviceName:(id)arg3 error:(id*)arg4;
- (bool)startSharingWithGroup:(id)arg1 error:(id*)arg2;
- (bool)stopSharingWith:(id)arg1 reason:(unsigned long long)arg2 error:(id*)arg3;
- (bool)stopSharingWithGroup:(id)arg1 reason:(unsigned long long)arg2 error:(id*)arg3;
- (bool)stopSharingWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (void)touchedRules;

@end
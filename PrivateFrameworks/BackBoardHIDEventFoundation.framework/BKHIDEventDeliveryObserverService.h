/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
 */

@interface BKHIDEventDeliveryObserverService : NSObject <BKHIDDomainServiceDelegate, BKHIDEventDeliveryResolutionObserver, BKSHIDEventObserverServerInterface> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_deferringChainObserverConnections;
    NSMutableDictionary * _lock_identityToChain;
    BKThreeLevelForest * _lock_identityToPIDToObservations;
    BSMutableIntegerMap * _lock_observationsByPID;
    BKHIDDomainServiceServer * _server;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectionDidTerminate:(id)arg1 process:(id)arg2;
- (void)deliveryChainDidUpdate:(id)arg1 forIdentity:(id)arg2 reason:(id)arg3;
- (id)init;
- (id)initWithServer:(id)arg1;
- (void)setObservesDeferringChainIdentities:(id)arg1;
- (id)setObservesDeferringResolutions:(id)arg1;

@end

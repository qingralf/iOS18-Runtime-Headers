/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPCBPeripheralManager : NSObject <CBPairingAgentDelegate, SPCBPeripheralManagement> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _cbQueue;
    CBCentralManager * _centralManager;
    bool  _enableSystemWakes;
    bool  _forceUpdateCriteria;
    NSMutableSet * _pendingPairingIdentifiers;
    id /* block */  _peripheralsUpdatedCallback;
    <SPCBPeripheralManagementXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMQueueSynchronizer * _queueSynchronizer;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
    NSMutableDictionary * _sessionMetadata;
    FMTokenBucket * _tokenBucket;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cbQueue;
@property (nonatomic, retain) CBCentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableSystemWakes;
@property (nonatomic) bool forceUpdateCriteria;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *pendingPairingIdentifiers;
@property (nonatomic, copy) id /* block */ peripheralsUpdatedCallback;
@property (nonatomic, retain) <SPCBPeripheralManagementXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMQueueSynchronizer *queueSynchronizer;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, retain) NSMutableDictionary *sessionMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) FMTokenBucket *tokenBucket;

+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)_enforceRateLimit;
- (id)callbackQueue;
- (id)cbQueue;
- (id)centralManager;
- (id)descriptionForVendorIdentifierList:(id)arg1;
- (bool)enableSystemWakes;
- (void)enableSystemWakesForUpdate:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetch;
- (bool)forceUpdateCriteria;
- (void)handleDarwinNotificationNamed:(id)arg1;
- (id)init;
- (void)interruptionHandler:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;
- (id)pendingPairingIdentifiers;
- (id /* block */)peripheralsUpdatedCallback;
- (id)proxy;
- (id)queue;
- (id)queueSynchronizer;
- (id)serviceDescription;
- (id)session;
- (id)sessionMetadata;
- (void)setCallbackQueue:(id)arg1;
- (void)setCbQueue:(id)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setEnableSystemWakes:(bool)arg1;
- (void)setForceUpdateCriteria:(bool)arg1;
- (void)setPendingPairingIdentifiers:(id)arg1;
- (void)setPeripheralsUpdatedCallback:(id /* block */)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueueSynchronizer:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionMetadata:(id)arg1;
- (void)setTokenBucket:(id)arg1;
- (void)startSessionForUserIdentifier:(id)arg1 bundleId:(id)arg2 vendorIdentifierList:(id)arg3 completion:(id /* block */)arg4;
- (void)stopSessionForUserIdentifier:(id)arg1 bundleId:(id)arg2 completion:(id /* block */)arg3;
- (void)successfulConnectionForPeripheral:(id)arg1 leMAC:(id)arg2 ltk:(id)arg3 completion:(id /* block */)arg4;
- (double)timeIntervalToNextFireDateFromDate:(id)arg1;
- (void)timerFiredForActivity:(id)arg1;
- (id)tokenBucket;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAP2AccessoryServerBrowser : HAP2LoggingObject <HAP2AccessoryServerBrowser, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDelegate, HAP2StorageDelegate, HAPPowerManagerProtocol> {
    NSMutableArray * _browserOperationQueue;
    bool  _confirming;
    NSArray * _coordinatorInfo;
    <HAP2AccessoryServerBrowserDelegate> * _delegate;
    bool  _discovering;
    NSObject<OS_dispatch_queue> * _dispatchWorkQueue;
    NSMutableArray * _livePairedAccessoryServers;
    NSMutableArray * _liveUnpairedAccessoryServers;
    NSOperationQueue * _operationQueue;
    HAPPowerManager * _powerManager;
    unsigned long long  _powerState;
    HAP2PropertyLock * _propertyLock;
    <HAP2Storage> * _storage;
    NSMapTable * _weakOperationQueuesByDeviceID;
    HAP2SerializedOperationQueue * _workQueue;
}

@property (nonatomic, readonly) NSMutableArray *browserOperationQueue;
@property (getter=isConfirming, nonatomic) bool confirming;
@property (nonatomic, readonly) NSArray *coordinatorInfo;
@property (nonatomic, readonly) HAP2AccessoryServerBrowserOperation *currentOperation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HAP2AccessoryServerBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDiscovering, nonatomic) bool discovering;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchWorkQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *livePairedAccessoryServers;
@property (nonatomic, retain) NSMutableArray *liveUnpairedAccessoryServers;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly, copy) NSArray *pairedAccessoryServers;
@property (readonly) HAPAccessoryPairingRequest *pairingRequest;
@property (nonatomic, retain) HAPPowerManager *powerManager;
@property (nonatomic) unsigned long long powerState;
@property (nonatomic, readonly) HAP2PropertyLock *propertyLock;
@property (nonatomic, readonly) <HAP2Storage> *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *unpairedAccessoryServers;
@property (nonatomic, readonly) NSMapTable *weakOperationQueuesByDeviceID;
@property (nonatomic, readonly) HAP2SerializedOperationQueue *workQueue;

+ (id)new;

- (void).cxx_destruct;
- (void)_beginOperation;
- (void)_enqueueOperation:(id)arg1;
- (void)_finishOperation;
- (void)_finishStartDiscovering;
- (void)_finishStopDiscovering;
- (id)_lookupPairedAccessoryServerWithDeviceID:(id)arg1;
- (void)_notifyCoordinatorsOfAccessoryWithDeviceID:(id)arg1;
- (id)_removeAccessoryServerFromArray:(id)arg1 withDeviceID:(id)arg2;
- (void)_startDiscovering;
- (void)_stopDiscovering;
- (void)_updateArraysForDiscoveredAccessoryServer:(id)arg1 paired:(bool)arg2 lost:(id*)arg3 existing:(id*)arg4;
- (void)accessoryServerDidUpdateConnectionState:(id)arg1;
- (void)accessoryWithDeviceIDIsPaired:(id)arg1 completion:(id /* block */)arg2;
- (void)associateAccessoryWithControllerKeyUsingAccessoryIdentifier:(id)arg1;
- (void)associateAccessoryWithControllerKeyUsingAccessoryPublicKey:(id)arg1;
- (id)browserOperationQueue;
- (void)coordinator:(id)arg1 didCreatePairedAccessoryServer:(id)arg2;
- (void)coordinator:(id)arg1 didCreateUnpairedAccessoryServer:(id)arg2;
- (void)coordinator:(id)arg1 didLoseAccessory:(id)arg2 error:(id)arg3;
- (void)coordinator:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)coordinator:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (id)coordinatorInfo;
- (id)currentIdentity;
- (id)currentOperation;
- (id)delegate;
- (void)devicePowerStateChanged:(unsigned long long)arg1;
- (id)dispatchWorkQueue;
- (void)handleCurrentNetworkChangedNotification:(id)arg1;
- (id)init;
- (id)initWithCoordinators:(id)arg1 storage:(id)arg2;
- (void)initializeKeyBagIfNecessary;
- (bool)isConfirming;
- (bool)isDiscovering;
- (id)livePairedAccessoryServers;
- (id)liveUnpairedAccessoryServers;
- (bool)onDemandConnectionsAreEnabled;
- (id)operationQueue;
- (id)operationQueueForDeviceID:(id)arg1;
- (id)pairedAccessoryServers;
- (id)pairingRequest;
- (id)powerManager;
- (unsigned long long)powerState;
- (id)propertyLock;
- (void)removePublicKeyForAccessoryWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveLocalPairingIdentityForDeviceID:(id)arg1 completion:(id /* block */)arg2;
- (void)savePublicKey:(id)arg1 forAccessoryWithID:(id)arg2 completion:(id /* block */)arg3;
- (void)setConfirming:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscovering:(bool)arg1;
- (void)setLivePairedAccessoryServers:(id)arg1;
- (void)setLiveUnpairedAccessoryServers:(id)arg1;
- (void)setPowerManager:(id)arg1;
- (void)setPowerState:(unsigned long long)arg1;
- (bool)shouldRetryPVDueToAuthenticationError:(id)arg1;
- (void)startConfirmingPairedAccessoryReachability;
- (void)startDiscovering;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)stopDiscovering;
- (id)storage;
- (void)storage:(id)arg1 didRemoveKeyWithIdentifier:(id)arg2;
- (void)storage:(id)arg1 didSaveKeyWithIdentifier:(id)arg2;
- (id)unpairedAccessoryServers;
- (id)weakOperationQueuesByDeviceID;
- (id)workQueue;

@end

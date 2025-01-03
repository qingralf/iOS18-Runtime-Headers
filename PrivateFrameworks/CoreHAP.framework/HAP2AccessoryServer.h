/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAP2AccessoryServer : HAP2LoggingObject <HAP2AccessoryServer, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerPrivate, HAP2PairedAccessoryServerPrivate, HAP2UnpairedAccessoryServerPrivate, HAPAccessoryReachabilityDelegate> {
    NSBackgroundActivityScheduler * _backgroundScheduler;
    <HAP2AccessoryServerBrowserPrivate> * _browser;
    unsigned long long  _connectionState;
    <HAP2AccessoryServerControllerPrivate> * _controller;
    <HAP2AccessoryServerMetadata> * _currentMetadata;
    <HAP2AccessoryServerDelegate> * _delegate;
    bool  _hasDiscoveryAdvertisement;
    <HAP2AccessoryServerPairingDriver> * _internalPairingDriver;
    bool  _internallyPaired;
    HAP2SerializedOperationQueue * _operationQueue;
    <HAP2Cancelable> * _outstandingUpdateAccessoriesRequest;
    <HAP2UnpairedAccessoryServerPairDelegate> * _pairDelegate;
    NSString * _pairedName;
    HMFVersion * _pairedProtocolVersion;
    NSArray * _privateAccessories;
    NSString * _productData;
    HAP2PropertyLock * _propertyLock;
    <HAPAccessoryReachabilityClient> * _reachability;
    NSString * _reachabilityChangedReason;
    <HAPAccessoryReachabilityProfile> * _reachabilityProfile;
    double  _sessionCheckInterval;
    NSString * _setupID;
}

@property (nonatomic, readonly) NSArray *accessories;
@property (nonatomic, readonly) <HAP2AccessoryServerBrowserPrivate> *browser;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) unsigned short configNumber;
@property (nonatomic, readonly) unsigned long long connectionState;
@property (nonatomic, readonly) <HAP2AccessoryServerControllerPrivate> *controller;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HAP2AccessoryServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HAPDeviceID *deviceID;
@property (nonatomic, readonly) bool hasDiscoveryAdvertisement;
@property (nonatomic) bool hasDiscoveryAdvertisement;
@property (nonatomic, readonly) bool hasPairings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) HAP2SerializedOperationQueue *operationQueue;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, readonly) <HAP2AccessoryServerPairingDriver> *pairingDriver;
@property (nonatomic, readonly) <HAP2Accessory> *primaryAccessory;
@property (nonatomic, retain) NSString *productData;
@property (nonatomic, readonly) HMFVersion *protocolVersion;
@property (nonatomic, readonly, copy) NSString *reachabilityChangedReason;
@property (nonatomic, copy) NSString *reachabilityChangedReason;
@property (nonatomic, readonly) double sessionCheckInterval;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, readonly) NSString *setupID;
@property (nonatomic, retain) NSString *setupID;
@property (nonatomic, readonly) unsigned short stateNumber;
@property (readonly) Class superclass;

+ (id)new;
+ (id)pairedAccessoryServerWithMetadata:(id)arg1 browser:(id)arg2 controller:(id)arg3 operationQueue:(id)arg4;
+ (id)unpairedAccessoryServerWithMetadata:(id)arg1 browser:(id)arg2 controller:(id)arg3 pairingDriver:(id)arg4 operationQueue:(id)arg5;

- (void).cxx_destruct;
- (void)_performBackgroundPollWithCompletion:(id /* block */)arg1;
- (void)_setBackgroundActivityScheduler:(id)arg1;
- (id)accessories;
- (id)addPairing:(id)arg1 completion:(id /* block */)arg2;
- (void)becomePairedWithAccessoryServer:(id)arg1;
- (void)becomeUnpairedWithAccessoryServer:(id)arg1;
- (id)browser;
- (unsigned long long)category;
- (void)clearAccessories;
- (void)closeSession;
- (unsigned short)configNumber;
- (unsigned long long)connectionState;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)deviceID;
- (id)disableNotificationsForCharacteristics:(id)arg1 completion:(id /* block */)arg2;
- (id)enableNotificationsForCharacteristics:(id)arg1 completion:(id /* block */)arg2;
- (id)getPairingsWithCompletion:(id /* block */)arg1;
- (void)handleEvents:(id)arg1;
- (void)handleLostDiscoveryAdvertisement;
- (void)handleLostDiscoveryAdvertisementWithWillSleep:(bool)arg1;
- (void)handleNetworkChanged;
- (void)handleReestablishedSession;
- (void)handleUpdatedCharacteristicValues:(id)arg1;
- (bool)hasDiscoveryAdvertisement;
- (bool)hasPairings;
- (id)identifyWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isConfirming;
- (bool)isPaired;
- (void)mergeWithNewlyDiscoveredPairedAccessoryServer:(id)arg1;
- (void)mergeWithNewlyDiscoveredUnpairedAccessoryServer:(id)arg1;
- (id)model;
- (id)name;
- (id)operationQueue;
- (id)pairWithDelegate:(id)arg1;
- (id)pairingDriver;
- (void)pairingDriver:(id)arg1 authenticateSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(id /* block */)arg4;
- (void)pairingDriver:(id)arg1 confirmSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(id /* block */)arg4;
- (void)pairingDriver:(id)arg1 didCompleteWithError:(id)arg2;
- (void)pairingDriver:(id)arg1 didFinishAuthWithError:(id)arg2;
- (void)pairingDriver:(id)arg1 didRejectSetupCodeForAccessory:(id)arg2 backoffInterval:(double)arg3 completion:(id /* block */)arg4;
- (void)pairingDriver:(id)arg1 didRequestLocalPairingIdentityWithCompletion:(id /* block */)arg2;
- (void)pairingDriver:(id)arg1 didSaveRemotePairingIdentity:(id)arg2 completion:(id /* block */)arg3;
- (void)pairingDriver:(id)arg1 doesRequirePermission:(unsigned long long)arg2 accessory:(id)arg3 completion:(id /* block */)arg4;
- (void)pairingDriver:(id)arg1 doesRequireSetupCodeForAccessory:(id)arg2 completion:(id /* block */)arg3;
- (void)pairingDriver:(id)arg1 validatePairingCert:(id)arg2 model:(id)arg3 completion:(id /* block */)arg4;
- (void)pairingDriver:(id)arg1 validateSoftwareAuthUUID:(id)arg2 token:(id)arg3 model:(id)arg4 completion:(id /* block */)arg5;
- (void)pollAccessory;
- (id)primaryAccessory;
- (id)productData;
- (id)protocolVersion;
- (id)reachabilityChangedReason;
- (id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (id)removePairing:(id)arg1 completion:(id /* block */)arg2;
- (double)sessionCheckInterval;
- (void)setDelegate:(id)arg1;
- (void)setHasDiscoveryAdvertisement:(bool)arg1;
- (void)setProductData:(id)arg1;
- (void)setReachabilityChangedReason:(id)arg1;
- (void)setSetupID:(id)arg1;
- (id)setupHash;
- (id)setupID;
- (void)startConfirming;
- (unsigned short)stateNumber;
- (void)stopConfirming;
- (id)unpairWithCompletion:(id /* block */)arg1;
- (id)updateAccessoriesWithReason:(id)arg1;
- (void)verifyConnection;
- (id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;

@end

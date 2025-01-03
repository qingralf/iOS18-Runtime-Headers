/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPAccessoryServerMetricProtocol, HAPAuthSessionDelegate, HAPHTTPClientDebugDelegate, HAPHTTPClientDelegate, HAPWACAccessoryClientDelegate, HMFNetMonitorDelegate, HMFTimerDelegate> {
    unsigned long long  _abruptDisconnectionCounter;
    HAPAuthSession * _authSession;
    bool  _authenticated;
    HAPAccessoryProtocolInfo * _authenticatedProtocolInfo;
    NSDictionary * _bonjourDeviceInfo;
    bool  _bonjourDiscoveryPending;
    HMFTimer * _bonjourEventTimer;
    HAPAccessoryServerBrowserIP * _browser;
    HAPSocketInfo * _cachedSocketInfo;
    int  _cancelPairingErr;
    NSOperationQueue * _clientOperationQueue;
    HMFTimer * _connectionIdleTimer;
    unsigned long long  _consecutivePairVerifyFailures;
    bool  _continuingLegacyWACpairing;
    double  _disconnectOnIdleTimeout;
    HAPAccessoryServerBookkeeping * _discoveryBookkeeping;
    bool  _econnresetRetryInProgress;
    bool  _establishingSecureConnection;
    unsigned long long  _featureFlags;
    bool  _handlingInvalidSetupCode;
    HAPWACAccessory * _hapWACAccessory;
    HAPWACAccessoryClient * _hapWACAccessoryClient;
    bool  _hasAttributeDatabase;
    bool  _hasStartedPairing;
    bool  _hasUpdatedBonjour;
    HAPHTTPClient * _httpClient;
    long long  _idleTimerActiveSessions;
    bool  _invalidated;
    HAPAccessoryServerIPConnectionStatistics * _ipConnectionStatistics;
    NSArray * _ipServices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _metricHAPIPHTTPEventsCount;
    unsigned long long  _metricHAPIPHTTPRequestsCount;
    unsigned long long  _metricHAPIPHTTPResponsesCount;
    unsigned long long  _metricHAPIPInvalidationCount;
    double  _minimumReachabilityPingInterval;
    NSString * _model;
    HAPNameResolver * _nameResolver;
    id /* block */  _netServiceResolveCompletionBlock;
    HMFNetMonitor * _networkMonitor;
    HMFBlockOperation * _pairOperation;
    id /* block */  _pairVerifyCompletionBlock;
    bool  _pairingRequestPending;
    struct PairingSessionPrivate { } * _pairingSession;
    bool  _postSoftAuthWacStarted;
    bool  _preSoftAuthWacStarted;
    HAPAccessory * _primaryAccessoryForServer;
    NSMutableArray * _queuedOperations;
    HMFTimer * _reachabilityEventTimer;
    NSDate * _reachabilityStartTime;
    bool  _retryingPairSetup;
    bool  _securitySessionOpen;
    NSString * _sourceVersion;
    unsigned long long  _statusFlags;
    NSData * _token;
    bool  _tokenValidationPending;
    bool  _unitTest_establishedSession;
    bool  _wacAccessory;
    bool  _wacComplete;
    bool  _wacLegacy;
    bool  _wacStarted;
}

@property (nonatomic) unsigned long long abruptDisconnectionCounter;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions; /* unknown property attribute: ? */
@property (nonatomic, readonly) HAPAuthSession *authSession;
@property (nonatomic) bool authenticated;
@property (nonatomic, retain) HAPAccessoryProtocolInfo *authenticatedProtocolInfo;
@property (nonatomic, retain) NSDictionary *bonjourDeviceInfo;
@property (getter=isBonjourDiscoveryPending, nonatomic) bool bonjourDiscoveryPending;
@property (nonatomic, retain) HMFTimer *bonjourEventTimer;
@property (nonatomic) HAPAccessoryServerBrowserIP *browser;
@property (nonatomic, retain) HAPSocketInfo *cachedSocketInfo;
@property (nonatomic) int cancelPairingErr;
@property (nonatomic, readonly) NSOperationQueue *clientOperationQueue;
@property (nonatomic, retain) HMFTimer *connectionIdleTimer;
@property (nonatomic) unsigned long long consecutivePairVerifyFailures;
@property (getter=isContinuingLegacyWACpairing, nonatomic) bool continuingLegacyWACpairing;
@property (nonatomic, readonly) HAPSocketInfo *currentSocketInfo;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property double disconnectOnIdleTimeout;
@property (nonatomic, retain) HAPAccessoryServerBookkeeping *discoveryBookkeeping;
@property (nonatomic) bool econnresetRetryInProgress;
@property (getter=isEstablishingSecureConnection, nonatomic) bool establishingSecureConnection;
@property (getter=isHandlingInvalidSetupCode, nonatomic) bool handlingInvalidSetupCode;
@property (nonatomic, readonly) HAPWACAccessory *hapWACAccessory;
@property (nonatomic, retain) HAPWACAccessoryClient *hapWACAccessoryClient;
@property (nonatomic) bool hasAttributeDatabase;
@property (nonatomic) bool hasStartedPairing;
@property (nonatomic) bool hasUpdatedBonjour;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPHTTPClient *httpClient;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) HAPAccessoryServerIPConnectionStatistics *ipConnectionStatistics;
@property (nonatomic, retain) NSArray *ipServices;
@property (nonatomic) unsigned long long metricHAPIPHTTPEventsCount;
@property (nonatomic) unsigned long long metricHAPIPHTTPRequestsCount;
@property (nonatomic) unsigned long long metricHAPIPHTTPResponsesCount;
@property (nonatomic) unsigned long long metricHAPIPInvalidationCount;
@property (nonatomic) double minimumReachabilityPingInterval;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, retain) HAPNameResolver *nameResolver;
@property (nonatomic, copy) id /* block */ netServiceResolveCompletionBlock;
@property (nonatomic, readonly) HMFNetMonitor *networkMonitor;
@property (nonatomic, retain) HMFBlockOperation *pairOperation;
@property (nonatomic, copy) id /* block */ pairVerifyCompletionBlock;
@property (getter=isPairingRequestPending, nonatomic) bool pairingRequestPending;
@property (nonatomic, readonly, copy) HMFNetAddress *peerAddress;
@property (nonatomic, readonly, copy) HMFNetAddress *peerAddressEx;
@property (nonatomic, readonly) NSString *peerEndpointDescription;
@property (getter=isPostSoftAuthWacStarted, nonatomic) bool postSoftAuthWacStarted;
@property (getter=isPreSoftAuthWacStarted, nonatomic) bool preSoftAuthWacStarted;
@property (nonatomic, retain) HAPAccessory *primaryAccessoryForServer;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) NSMutableArray *queuedOperations;
@property (nonatomic, retain) HMFTimer *reachabilityEventTimer;
@property (nonatomic, retain) NSDate *reachabilityStartTime;
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic, copy) NSString *sourceVersion;
@property (nonatomic) unsigned long long statusFlags;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *token;
@property (getter=isTokenValidationPending, nonatomic) bool tokenValidationPending;
@property (nonatomic) bool unitTest_establishedSession;
@property (getter=isWacAccessory, nonatomic) bool wacAccessory;
@property (getter=isWacComplete, nonatomic) bool wacComplete;
@property (getter=isWacLegacy, nonatomic) bool wacLegacy;
@property (getter=isWacNeeded, readonly) bool wacNeeded;
@property (getter=isWacStarted, nonatomic) bool wacStarted;

+ (id)_parseSerializedAccessoryDictionary:(id)arg1 server:(id)arg2;
+ (void)initialize;
+ (id)logCategory;
+ (id)sharedPairOperationQueue;

- (void).cxx_destruct;
- (void)__registerForInternalCharacteristicNotifications;
- (void)_accessoryDidBecomeUnreachable:(id)arg1;
- (void)_cancelNameResolution;
- (void)_clearIPCacheOnError:(id)arg1;
- (int)_continuePairingAfterAuthPromptWithRetry:(bool)arg1;
- (void)_continuePairingAfterConfirmingSecureWAC:(id)arg1;
- (void)_continuePairingAfterMFiCertValidation;
- (void)_continuePairingAfterWAC:(id)arg1;
- (void)_continuePairingUsingWAC;
- (int)_continuePairingWithSetupCode:(id)arg1;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_doBonjourReconfirm;
- (int)_doEnsureHTTPClientSetUp;
- (void)_doPollForAccessory:(id)arg1;
- (void)_doReachabilityWithError:(id)arg1 forAccessory:(id)arg2;
- (void)_doResolveWithGroup:(id)arg1;
- (void)_enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (int)_ensureHTTPClientSetUp;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_establishSecureConnectionAndFetchAttributeDatabaseWithReason:(id)arg1;
- (void)_establishSecureSession;
- (void)_establishSecureSessionAndRemovePairing:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_getAttributeDatabase;
- (unsigned int)_getNameResolutionGroupResolveTimeout;
- (double)_getReachabilityTimeoutValue;
- (double)_getReachabilityTimeoutValueWithSleepInterval:(id)arg1;
- (void)_handleConnectionIdleTimeout;
- (void)_handleEventResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(bool)arg6 completion:(id /* block */)arg7 queue:(id)arg8;
- (void)_handleListPairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_handleMFiCertValidation;
- (void)_handlePairSetupAfterM4Callback;
- (int)_handlePairSetupCompletionWithData:(id)arg1;
- (int)_handlePairVerifyCompletionWithData:(id)arg1;
- (void)_handlePairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(bool)arg5 completionQueue:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)_handlePrepareWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 prepareIdentifier:(id)arg3 httpStatus:(int)arg4 error:(id)arg5 requestTuples:(id)arg6 timeout:(double)arg7 queue:(id)arg8 originalCompletion:(id /* block */)arg9 completion:(id /* block */)arg10;
- (void)_handleReadECONNRESETError:(id)arg1 readCharacteristics:(id)arg2 responses:(id)arg3 timeout:(double)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_handleReadResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 completion:(id /* block */)arg6;
- (bool)_handleSecureSessionClosingWithError:(id*)arg1 status:(int)arg2 data:(id)arg3;
- (void)_handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (void)_handleWriteECONNResetError:(id)arg1 writeRequests:(id)arg2 responses:(id)arg3 timeout:(double)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_handleWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 completion:(id /* block */)arg6;
- (void)_incrementPairVerifyFailureCount;
- (void)_indicateSessionActivityWithReason:(id)arg1;
- (void)_insertReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_insertWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_invalidateWAC;
- (void)_invokePairVerifyCompletionBlock:(id)arg1;
- (void)_isAccessoryPublicKeyPresent:(bool*)arg1 registeredWithHomeKit:(bool*)arg2;
- (bool)_isSessionEstablished;
- (id)_joinAccessoryNetworkWithCompletion:(id /* block */)arg1;
- (void)_kickConnectionIdleTimer;
- (void)_listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_matchesError:(id)arg1 withHAPErrorCode:(long long)arg2;
- (bool)_matchesError:(id)arg1 withHAPHMErrorCode:(long long)arg2;
- (void)_notifyDelegateNeedsOwnershipToken;
- (void)_notifyDelegateOfDiscoveryCompletionWithError:(id)arg1;
- (void)_notifyDelegateOfPairingProgress:(long long)arg1;
- (void)_notifyDelegatesOfAddAccessoryFailureWithError:(id)arg1;
- (void)_notifyDelegatesOfConnectionState:(bool)arg1 withError:(id)arg2;
- (void)_notifyDelegatesPairingStopped:(id)arg1;
- (void)_pairSetupContinueWAC;
- (int)_pairSetupStartWithConsentRequired:(bool)arg1;
- (int)_pairSetupTryPassword:(id)arg1;
- (void)_pairVerifyStartWAC:(id)arg1;
- (int)_pairVerifyStartWithRetry:(bool)arg1;
- (bool)_parseAndValidateTXTRecord;
- (void)_parseAttributeDatabase:(id)arg1 transaction:(id)arg2;
- (bool)_parseTXTRecordDictionary:(id)arg1;
- (void)_performEasyConfigWithPairingPrompt:(int (*)arg1 performPairSetup:(bool)arg2 isSplit:(bool)arg3 completion:(id /* block */)arg4;
- (void)_performExecuteWriteValues:(id)arg1 prepareIdentifier:(id)arg2 timeout:(double)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_performTimedWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_performWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_pollAccessory;
- (bool)_processEvent:(id)arg1 matchedCharacteristic:(id*)arg2;
- (void)_processQueuedOperationsWithError:(id)arg1;
- (int)_promptForSetupCodeWithFlags:(unsigned int)arg1 delaySeconds:(int)arg2 pairingFlags:(unsigned int)arg3 isWAC:(bool)arg4;
- (void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_queueEnableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)_queueListPairingWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queueReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_queueWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id /* block */)_queuedReadOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id /* block */)_queuedWriteOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_requestResource:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_reset;
- (void)_sendRemovePairingWithData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (bool)_shouldConnectBasedOnDisconnectOnIdle;
- (bool)_shouldNotifyClientsOfPVFailure:(id)arg1;
- (void)_skipReconfirm;
- (void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_startConnectionIdleTimer;
- (void)_startReachability;
- (id)_startReachabilityEventTimer;
- (void)_stopReachability;
- (void)_stopReachabilityTimer;
- (void)_submitStateNumberChangeEvent:(bool)arg1;
- (void)_suspendConnectionIdleTimer;
- (void)_tearDownSession;
- (void)_tearDownSessionAndStartReachabilityWithError:(id)arg1;
- (void)_tearDownSessionWithError:(id)arg1;
- (void)_tearDownWAC;
- (bool)_updateAccessories:(id)arg1;
- (void)_updateProtocolVersionFromPrimaryAccessory:(id)arg1;
- (void)_updateWithBonjourDeviceInfo:(id)arg1 socketInfo:(id)arg2;
- (bool)_validateAuthChallengeResponse:(id)arg1 expectedTID:(unsigned char)arg2 error:(id*)arg3;
- (void)_validatePairingAuthMethod:(id /* block */)arg1 activity:(id)arg2;
- (bool)_validateProtocolInfo:(id)arg1;
- (void)_validateReachabilityTimer;
- (void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)abruptDisconnectionCounter;
- (void)addActiveSession:(long long)arg1;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)authSession;
- (void)authSession:(id)arg1 authComplete:(id)arg2;
- (void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
- (void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
- (void)authenticateAccessory;
- (bool)authenticated;
- (id)authenticatedProtocolInfo;
- (id)bonjourDeviceInfo;
- (id)bonjourEventTimer;
- (void)bonjourRemoveEvent;
- (id)browser;
- (id)cachedSocketInfo;
- (int)cancelPairingErr;
- (id)clientOperationQueue;
- (id)connectionIdleTimer;
- (unsigned long long)consecutivePairVerifyFailureCount;
- (unsigned long long)consecutivePairVerifyFailures;
- (void)continueAuthAfterValidation:(bool)arg1;
- (void)continuePairingAfterAuthPrompt;
- (void)continuePairingUsingWAC;
- (id)controllerUsername;
- (int (*)copyPairingIdentityDelegateCallback;
- (void)createKeysForDataStreamWithKeySalt:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)currentSocketInfo;
- (void)dealloc;
- (id)description;
- (void)disconnect;
- (double)disconnectOnIdleTimeout;
- (void)disconnectOnIdleUpdated;
- (void)disconnectWithError:(id)arg1;
- (void)discoverAccessories;
- (id)discoveryBookkeeping;
- (bool)econnresetRetryInProgress;
- (void)enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (int (*)findPairedPeerDelegateCallback;
- (void)getAccessoryInfo:(id /* block */)arg1;
- (id)getAddressTypeWithSocketInfo:(id)arg1;
- (int)getBonjourDeviceDNSName:(id*)arg1;
- (void)handleHTTPClientUnavailableErrorWithCompletion:(id /* block */)arg1 serializationType:(unsigned long long)arg2;
- (void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (id)hapWACAccessory;
- (id)hapWACAccessoryClient;
- (void)hapWACAccessoryClient:(id)arg1 setBonjourInfo:(id)arg2;
- (void)hapWACAccessoryClient:(id)arg1 wacProgress:(unsigned long long)arg2;
- (bool)hasAttributeDatabase;
- (bool)hasBonjourDeviceInfo;
- (bool)hasStartedPairing;
- (bool)hasUpdatedBonjour;
- (id)httpClient;
- (void)httpClient:(id)arg1 didReceiveEvent:(id)arg2;
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClient:(id)arg1 didReceiveSocketEvent:(unsigned long long)arg2;
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClientDidCloseConnectionDueToServer:(id)arg1;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (void)incrementHAPIPHTTPEventsCount;
- (void)incrementHAPIPHTTPRequestsCount;
- (void)incrementHAPIPHTTPResponsesCount;
- (void)incrementHAPIPInvalidationCount;
- (id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2 browser:(id)arg3 discoveryMethod:(unsigned long long)arg4;
- (id)initWithHAPWACAccessory:(id)arg1 keystore:(id)arg2 browser:(id)arg3;
- (id)initWithKeyStore:(id)arg1 browser:(id)arg2;
- (id)initWithKeyStore:(id)arg1 browser:(id)arg2 discoveryMethod:(unsigned long long)arg3;
- (void)invalidateWithCompletionHandler:(id /* block */)arg1;
- (bool)invalidated;
- (void)invokePairVerifyCompletionBlock:(id)arg1;
- (id)ipConnectionStatistics;
- (id)ipServices;
- (bool)isBonjourDiscoveryPending;
- (bool)isContinuingLegacyWACpairing;
- (bool)isEstablishingSecureConnection;
- (bool)isHandlingInvalidSetupCode;
- (bool)isPaired;
- (bool)isPairingRequestPending;
- (bool)isPostSoftAuthWacStarted;
- (bool)isPreSoftAuthWacStarted;
- (bool)isSecuritySessionOpen;
- (bool)isSessionEstablished;
- (bool)isTokenValidationPending;
- (bool)isWacAccessory;
- (bool)isWacComplete;
- (bool)isWacLegacy;
- (bool)isWacNeeded;
- (bool)isWacStarted;
- (long long)linkLayerType;
- (long long)linkType;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)metricHAPIPHTTPEventsCount;
- (unsigned long long)metricHAPIPHTTPRequestsCount;
- (unsigned long long)metricHAPIPHTTPResponsesCount;
- (unsigned long long)metricHAPIPInvalidationCount;
- (double)minimumReachabilityPingInterval;
- (id)model;
- (id)nameResolver;
- (id /* block */)netServiceResolveCompletionBlock;
- (id)networkMonitor;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (id)pairOperation;
- (void)pairSetupStartSoftAuthWAC;
- (id /* block */)pairVerifyCompletionBlock;
- (id)peerAddress;
- (id)peerAddressEx;
- (id)peerEndpointDescription;
- (bool)pingSupported;
- (void)pollAccessory;
- (id)primaryAccessory;
- (id)primaryAccessoryForServer;
- (void)processPendingBonjourRemoveEvents;
- (void)provisionToken:(id)arg1;
- (id)queuedOperations;
- (id)reachabilityEventTimer;
- (id)reachabilityStartTime;
- (id)readAndResetHAPMetrics:(bool)arg1;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)reconfirm;
- (void)removeActiveSession:(long long)arg1;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetPairVerifyFailureCount;
- (void)resetPostSoftAuthWAC;
- (int (*)savePairedPeerDelegateCallback;
- (void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)sendPOSTRequestToURL:(id)arg1 request:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)sendPUTRequestToURL:(id)arg1 request:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(id /* block */)arg5;
- (id)services;
- (void)setAbruptDisconnectionCounter:(unsigned long long)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticatedProtocolInfo:(id)arg1;
- (void)setBonjourDeviceInfo:(id)arg1;
- (void)setBonjourDiscoveryPending:(bool)arg1;
- (void)setBonjourEventTimer:(id)arg1;
- (void)setBrowser:(id)arg1;
- (void)setCachedSocketInfo:(id)arg1;
- (void)setCancelPairingErr:(int)arg1;
- (void)setConnectionIdleTimer:(id)arg1;
- (void)setConsecutivePairVerifyFailures:(unsigned long long)arg1;
- (void)setContinuingLegacyWACpairing:(bool)arg1;
- (void)setDisconnectOnIdleTimeout:(double)arg1;
- (void)setDiscoveryBookkeeping:(id)arg1;
- (void)setEconnresetRetryInProgress:(bool)arg1;
- (void)setEstablishingSecureConnection:(bool)arg1;
- (void)setHandlingInvalidSetupCode:(bool)arg1;
- (void)setHapWACAccessoryClient:(id)arg1;
- (void)setHasAttributeDatabase:(bool)arg1;
- (void)setHasStartedPairing:(bool)arg1;
- (void)setHasUpdatedBonjour:(bool)arg1;
- (void)setHttpClient:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setIpConnectionStatistics:(id)arg1;
- (void)setIpServices:(id)arg1;
- (void)setMetricHAPIPHTTPEventsCount:(unsigned long long)arg1;
- (void)setMetricHAPIPHTTPRequestsCount:(unsigned long long)arg1;
- (void)setMetricHAPIPHTTPResponsesCount:(unsigned long long)arg1;
- (void)setMetricHAPIPInvalidationCount:(unsigned long long)arg1;
- (void)setMinimumReachabilityPingInterval:(double)arg1;
- (void)setModel:(id)arg1;
- (void)setNameResolver:(id)arg1;
- (void)setNetServiceResolveCompletionBlock:(id /* block */)arg1;
- (void)setPairOperation:(id)arg1;
- (void)setPairVerifyCompletionBlock:(id /* block */)arg1;
- (void)setPairingRequestPending:(bool)arg1;
- (void)setPostSoftAuthWacStarted:(bool)arg1;
- (void)setPreSoftAuthWacStarted:(bool)arg1;
- (void)setPrimaryAccessoryForServer:(id)arg1;
- (void)setQueuedOperations:(id)arg1;
- (void)setReachabilityEventTimer:(id)arg1;
- (void)setReachabilityStartTime:(id)arg1;
- (void)setSecuritySessionOpen:(bool)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setStatusFlags:(unsigned long long)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenValidationPending:(bool)arg1;
- (void)setUnitTest_establishedSession:(bool)arg1;
- (void)setWacAccessory:(bool)arg1;
- (void)setWacComplete:(bool)arg1;
- (void)setWacLegacy:(bool)arg1;
- (void)setWacStarted:(bool)arg1;
- (id)sourceVersion;
- (void)startPairingWithRequest:(id)arg1;
- (void)startPing;
- (void)startReprovisioningWithPairingRequest:(id)arg1;
- (unsigned long long)statusFlags;
- (bool)stopPairingWithError:(id*)arg1;
- (void)stopPing;
- (void)tearDownSessionOnAuthCompletion;
- (void)timerDidFire:(id)arg1;
- (id)token;
- (bool)tryPairingPassword:(id)arg1 onboardingSetupPayloadString:(id)arg2 error:(id*)arg3;
- (bool)unitTest_establishedSession;
- (void)updateActiveDisconnectOnIdleTimeout:(double)arg1;
- (void)updateWithBonjourDeviceInfo:(id)arg1 socketInfo:(id)arg2;
- (void)updateWithHAPWACAccessory:(id)arg1;
- (void)validatePairingAuthMethod:(id /* block */)arg1;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;

@end

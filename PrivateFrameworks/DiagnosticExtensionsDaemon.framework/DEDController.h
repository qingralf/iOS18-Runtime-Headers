/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDController : NSObject <DEDIDSInboundDelegate, DEDSecureArchiving, DEDSharingInboundDelegate, DEDXPCConnectorDelegate, DEDXPCInboundDelegate> {
    NSObject<OS_dispatch_queue> * _bugSessionCallbackQueue;
    <DEDClientProtocol> * _clientDelegate;
    NSMutableDictionary * _devices;
    id /* block */  _devicesCompletion;
    id /* block */  _didCancelCompletion;
    bool  _embeddedInApp;
    bool  _isDaemon;
    NSObject<OS_os_log> * _log;
    <DEDPairingProtocol> * _pairingDelegate;
    id /* block */  _pongBlock;
    NSMutableSet * _recentlyFinishedSessions;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSMutableDictionary * _sessionDidStartBlocks;
    id /* block */  _sessionExistsCompletion;
    NSMutableDictionary * _sessionStartBlocks;
    NSDictionary * _sessions;
    bool  _started;
    bool  _useIDS;
    bool  _useSharing;
    NSObject<OS_dispatch_queue> * _workQueue;
    <DEDWorkerProtocol> * _workerDelegate;
    id /* block */  _xpcConnectionsCompletion;
    DEDXPCConnector * _xpcConnector;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *bugSessionCallbackQueue;
@property <DEDClientProtocol> *clientDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *devices;
@property (copy) id /* block */ devicesCompletion;
@property (copy) id /* block */ didCancelCompletion;
@property bool embeddedInApp;
@property (readonly) unsigned long long hash;
@property bool isDaemon;
@property (retain) NSObject<OS_os_log> *log;
@property <DEDPairingProtocol> *pairingDelegate;
@property (copy) id /* block */ pongBlock;
@property (retain) NSMutableSet *recentlyFinishedSessions;
@property (retain) NSObject<OS_dispatch_queue> *replyQueue;
@property (retain) NSMutableDictionary *sessionDidStartBlocks;
@property (copy) id /* block */ sessionExistsCompletion;
@property (retain) NSMutableDictionary *sessionStartBlocks;
@property (retain) NSDictionary *sessions;
@property bool started;
@property (readonly) Class superclass;
@property bool useIDS;
@property bool useSharing;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property <DEDWorkerProtocol> *workerDelegate;
@property (copy) id /* block */ xpcConnectionsCompletion;
@property (retain) DEDXPCConnector *xpcConnector;

+ (id)archivedClasses;

- (void).cxx_destruct;
- (id)_allKnownDevicesWithIdentifier:(id)arg1;
- (id)_deviceForIncomingDevice:(id)arg1;
- (id)_deviceForIncomingDevice:(id)arg1 needsReady:(bool)arg2;
- (void)_didAbortSessionWithID:(id)arg1;
- (id)_sharingDeviceForIncomingDevice:(id)arg1;
- (void)_timeOutSessionStartBlockWithIdentifier:(id)arg1 targetDevice:(id)arg2 timeout:(double)arg3;
- (void)abortSession:(id)arg1;
- (void)abortSession:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addDevice:(id)arg1;
- (void)addDidStartSessionCompletion:(id /* block */)arg1 withIdentifier:(id)arg2;
- (void)addSessionStartCompletion:(id /* block */)arg1 withIdentifier:(id)arg2 configuration:(id)arg3 targetDevice:(id)arg4;
- (id)allKnownDevices;
- (id)bugSessionCallbackQueue;
- (id)clientDelegate;
- (void)configureClientDelegate:(id)arg1;
- (void)configureForDaemon;
- (void)configureForEmbedded:(bool)arg1;
- (void)configureForIDS:(bool)arg1;
- (void)configureForSharing:(bool)arg1;
- (void)configurePairingDelegate:(id)arg1;
- (void)configureWorkerDelegate:(id)arg1;
- (void)connector:(id)arg1 didLooseConnectionToProcessWithPid:(int)arg2;
- (id)connector:(id)arg1 needsXPCInboundForPid:(id)arg2;
- (id)devices;
- (id /* block */)devicesCompletion;
- (id)devicesWithIdentifier:(id)arg1;
- (id /* block */)didCancelCompletion;
- (void)didFinishSessionWithIdentifier:(id)arg1;
- (void)didStartBugSessionWithInfo:(id)arg1;
- (void)discoverDevicesWithCompletion:(id /* block */)arg1;
- (bool)embeddedInApp;
- (void)forceRemoveNotificationOfType:(long long)arg1 identifier:(id)arg2 hostIdentifier:(id)arg3;
- (void)hasActiveSessionForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasCompletionBlockWithIdentifier:(id)arg1;
- (bool)hasDevice:(id)arg1;
- (bool)hasRecentlyFinishedSessionWithIdentifier:(id)arg1;
- (id)idsConnection;
- (void)idsInbound_devicesChanged:(id)arg1;
- (void)idsInbound_devicesChanged:(id)arg1 completion:(id /* block */)arg2;
- (void)idsInbound_didAbortSessionWithID:(id)arg1;
- (void)idsInbound_didStartBugSessionWithInfo:(id)arg1;
- (id)idsInbound_sessionForIdentifier:(id)arg1;
- (void)idsInbound_startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (bool)induceTimeOutIfNeededAndReturnCanProceedWithDevice:(id)arg1 sessionId:(id)arg2;
- (id)init;
- (void)insertNewSession:(id)arg1;
- (bool)isDaemon;
- (id)knownSessions;
- (void)listXPCConnections:(id /* block */)arg1;
- (id)log;
- (void)logDeviceCounts;
- (id)pairingDelegate;
- (id)persistence;
- (void)pingDaemonWithCompletion:(id /* block */)arg1;
- (id /* block */)pongBlock;
- (id /* block */)popDidStartSessionCompletionWithIdentifier:(id)arg1;
- (id /* block */)popSessionStartCompletionWithIdentifier:(id)arg1;
- (void)purgeStaleSessions:(id)arg1 completion:(id /* block */)arg2;
- (id)recentlyFinishedSessions;
- (void)removeSessionWithIdentifier:(id)arg1;
- (id)replyQueue;
- (void)reset;
- (id)sessionDidStartBlocks;
- (id /* block */)sessionExistsCompletion;
- (id)sessionForIdentifier:(id)arg1;
- (id)sessionStartBlocks;
- (id)sessions;
- (void)setBugSessionCallbackQueue:(id)arg1;
- (void)setClientDelegate:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setDevicesCompletion:(id /* block */)arg1;
- (void)setDidCancelCompletion:(id /* block */)arg1;
- (void)setEmbeddedInApp:(bool)arg1;
- (void)setIsDaemon:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setPairingDelegate:(id)arg1;
- (void)setPongBlock:(id /* block */)arg1;
- (void)setRecentlyFinishedSessions:(id)arg1;
- (void)setReplyQueue:(id)arg1;
- (void)setSessionDidStartBlocks:(id)arg1;
- (void)setSessionExistsCompletion:(id /* block */)arg1;
- (void)setSessionStartBlocks:(id)arg1;
- (void)setSessions:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setUseIDS:(bool)arg1;
- (void)setUseSharing:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setWorkerDelegate:(id)arg1;
- (void)setXpcConnectionsCompletion:(id /* block */)arg1;
- (void)setXpcConnector:(id)arg1;
- (id)sharingConnection;
- (void)sharingInbound_didAbortSessionWithID:(id)arg1;
- (void)sharingInbound_didStartBugSessionWithInfo:(id)arg1;
- (void)sharingInbound_promptPINForDevice:(id)arg1 fromInbound:(id)arg2;
- (id)sharingInbound_sessionForIdentifier:(id)arg1;
- (void)sharingInbound_startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)sharingInbound_successPINForDevice:(id)arg1 fromInbound:(id)arg2;
- (void)start;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4 fromInbound:(id)arg5;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 target:(id)arg3 completion:(id /* block */)arg4;
- (void)startPairSetupForDevice:(id)arg1;
- (bool)started;
- (void)stopDiscovery;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)upgradeToClassCDataProtectionIfNeeded;
- (bool)useIDS;
- (bool)useSharing;
- (id)workQueue;
- (id)workerDelegate;
- (id /* block */)xpcConnectionsCompletion;
- (id)xpcConnector;
- (void)xpcInbound_didAbortSessionWithID:(id)arg1;
- (void)xpcInbound_didDiscoverDevices:(id)arg1;
- (void)xpcInbound_didStartBugSessionWithInfo:(id)arg1;
- (void)xpcInbound_discoverAllAvailableDevices:(id)arg1;
- (void)xpcInbound_forceRemoveNotificationOfType:(long long)arg1 identifier:(id)arg2 hostIdentifier:(id)arg3;
- (void)xpcInbound_gotDeviceUpdate:(id)arg1;
- (void)xpcInbound_hasActiveSession:(id)arg1 fromInbound:(id)arg2;
- (void)xpcInbound_hasActiveSessionReply:(id)arg1 isActive:(bool)arg2;
- (void)xpcInbound_listClientXPCConnectionsReply:(id)arg1;
- (void)xpcInbound_ping:(id)arg1;
- (void)xpcInbound_pong;
- (void)xpcInbound_promptPINForDevice:(id)arg1;
- (id)xpcInbound_sessionForIdentifier:(id)arg1;
- (void)xpcInbound_startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4 fromInbound:(id)arg5;
- (void)xpcInbound_startPairSetupForDevice:(id)arg1 fromInbound:(id)arg2;
- (void)xpcInbound_stopDeviceDiscovery:(id)arg1;
- (void)xpcInbound_successPINForDevice:(id)arg1;
- (void)xpcInbound_tryPIN:(id)arg1 forDevice:(id)arg2 fromInbound:(id)arg3;
- (void)xpc_listClientXPCConnectionsFromInbound:(id)arg1;

@end
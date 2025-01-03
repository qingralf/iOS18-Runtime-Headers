/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIRelay : NSObject <_RWIClientToRelayMessageReceiver, _RWIRelayClientConnectionDelegate, _RWIRelayConnectionToApplicationDelegate> {
    NSMutableDictionary * _applicationConnections;
    NSMutableArray * _automaticInspectionDebuggers;
    NSMutableDictionary * _automaticInspectionSessions;
    NSMutableDictionary * _clientConnections;
    <RWIRelayDelegate> * _delegate;
    NSMutableDictionary * _driverInterfaces;
    NSMutableArray * _pendingClientConnections;
    NSMutableDictionary * _pendingProxyApplicationConnections;
    NSObject<OS_xpc_object> * _xpcApplicationListenConnection;
}

@property (nonatomic, readonly) NSMutableDictionary *applicationConnections;
@property (nonatomic, readonly) NSMutableDictionary *clientConnections;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <RWIRelayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *driverInterfaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPendingClientConnection:(id)arg1;
- (id)_allApplicationDetails;
- (id)_allDriverDetails;
- (void)_applicationConnected:(id)arg1;
- (void)_applicationDisconnected:(id)arg1;
- (void)_applicationUpdated:(id)arg1;
- (void)_developerPreferencesChanged;
- (void)_disconnectApplicationConnect:(id)arg1;
- (void)_driverConnected:(id)arg1;
- (void)_driverDisconnected:(id)arg1;
- (void)_driverUpdated:(id)arg1;
- (void)_dumpApplication:(id)arg1 withOrdinal:(unsigned long long)arg2;
- (void)_dumpClientConnection:(id)arg1 withOrdinal:(unsigned long long)arg2;
- (void)_finalizePendingClientConnection:(id)arg1 withIdentifier:(id)arg2;
- (void)_handleApplicationListenConnectionEvent:(id)arg1;
- (void)_handleDumpStateNotification;
- (void)_proxyApplicationConnected:(id)arg1;
- (void)_proxyApplicationResponse:(id)arg1 userInfo:(id)arg2;
- (void)_receivedAutomaticInspectionCandidate:(id)arg1 connection:(id)arg2;
- (void)_receivedDataMessage:(id)arg1 connection:(id)arg2;
- (void)_receivedListingMessage:(id)arg1 connection:(id)arg2;
- (void)_receivedPingMessage:(id)arg1 connection:(id)arg2;
- (void)_receivedProxyApplicationSetupResponseMessage:(id)arg1 connection:(id)arg2;
- (void)_reportCurrentStateToAllClients;
- (void)_reportCurrentStateToClient:(id)arg1;
- (void)_rpc_debuggerDidWake:(id)arg1;
- (void)_rpc_debuggerWillSleep:(id)arg1;
- (void)_rpc_forwardAutomaticInspectionConfiguration:(id)arg1;
- (void)_rpc_forwardAutomaticInspectionRejection:(id)arg1;
- (void)_rpc_forwardAutomationSessionRequest:(id)arg1;
- (void)_rpc_forwardDidClose:(id)arg1;
- (void)_rpc_forwardDriverStateChangeRequest:(id)arg1;
- (void)_rpc_forwardGetListing:(id)arg1;
- (void)_rpc_forwardIndicateWebView:(id)arg1;
- (void)_rpc_forwardSocketData:(id)arg1;
- (void)_rpc_forwardSocketSetup:(id)arg1;
- (void)_rpc_forwardWakeUpDebuggables:(id)arg1;
- (void)_rpc_getConnectedApplications:(id)arg1;
- (void)_rpc_getConnectedDrivers:(id)arg1;
- (void)_rpc_reportDriverConnected:(id)arg1;
- (void)_rpc_reportDriverDisconnected:(id)arg1;
- (void)_rpc_reportDriverUpdated:(id)arg1;
- (void)_rpc_reportIdentifier:(id)arg1;
- (void)_rpc_requestApplicationLaunch:(id)arg1;
- (void)_setGlobalNotifyStateWithAutomaticInspectionEnabled:(bool)arg1;
- (void)addPendingClientConnection:(id)arg1;
- (id)applicationConnections;
- (void)clientConnectionDidClose:(id)arg1;
- (id)clientConnections;
- (id)delegate;
- (id)driverInterfaces;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setup;
- (void)shutdownIfDisabled;
- (void)updateApplication:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)xpcConnection:(id)arg1 unhandledMessage:(id)arg2;
- (void)xpcConnectionFailed:(id)arg1;

@end

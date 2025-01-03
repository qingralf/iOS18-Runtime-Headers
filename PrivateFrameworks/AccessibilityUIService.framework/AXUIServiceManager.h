/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

@interface AXUIServiceManager : NSObject <AXUIMessageSenderDelegate, AccessibilityBoardServices_ServerProtocol, BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener * _connectionListener;
    <AXUIServiceManagerDelegate> * _delegate;
    AXUIDisplayManager * _displayManager;
    NSMutableDictionary * _entitlementsCheckers;
    AXAccessQueue * _entitlementsCheckersAccessQueue;
    unsigned long long  _lastUsedServiceIdentifier;
    AXUIMessageSender * _messageSender;
    NSMutableArray * _pausedConnections;
    AXAccessQueue * _resumingConnectionsQueue;
    NSMutableArray * _serviceContexts;
    AXAccessQueue * _servicesAccessQueue;
    bool  _shouldAllowServicesToProcessMessages;
    BSProcessDeathWatcher * _springBoardReaper;
    NSMutableDictionary * _transactions;
    NSObject<OS_dispatch_queue> * _transactionsQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AXUIServiceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXUIDisplayManager *displayManager;
@property (nonatomic, retain) NSMutableDictionary *entitlementsCheckers;
@property (nonatomic, retain) AXAccessQueue *entitlementsCheckersAccessQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastUsedServiceIdentifier;
@property (nonatomic, retain) AXUIMessageSender *messageSender;
@property (nonatomic, retain) NSMutableArray *pausedConnections;
@property (nonatomic, retain) AXAccessQueue *resumingConnectionsQueue;
@property (nonatomic, retain) NSMutableArray *serviceContexts;
@property (nonatomic, retain) AXAccessQueue *servicesAccessQueue;
@property (nonatomic) bool shouldAllowServicesToProcessMessages;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *transactions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionsQueue;

+ (void)_releaseSharedServiceManager;
+ (id)sharedServiceManager;

- (void).cxx_destruct;
- (void)_applicationDidFinishLaunching;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (id)_clientMessengerWithIdentifier:(id)arg1;
- (bool)_extractAndHandleRegistration:(id)arg1 clientIdentifier:(id)arg2 messageIdentifier:(unsigned long long)arg3 context:(id)arg4 error:(id*)arg5;
- (id)_extractClientIdentifier:(id)arg1;
- (void)_handleConnection:(id)arg1;
- (void)_processXPCObject:(id)arg1 context:(id)arg2;
- (bool)_registerClientWithIdentifier:(id)arg1 connection:(id)arg2 serviceBundleName:(id)arg3 initiatingMessageIdentifier:(unsigned long long)arg4 error:(id*)arg5;
- (void)_registerForSystemAppDeath;
- (void)_sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(bool)arg5 completion:(id /* block */)arg6;
- (id)_sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 error:(id*)arg4;
- (id)_serviceContextForClientWithIdentifier:(id)arg1;
- (id)_serviceContextForService:(id)arg1;
- (id)_serviceFromBundlePath:(id)arg1 clientIdentifier:(id)arg2 connection:(id)arg3 initiatingMessageIdentifier:(unsigned long long)arg4 stopSearching:(bool*)arg5 error:(id*)arg6;
- (bool)_serviceWithClass:(Class)arg1 canProcessMessageWithIdentifier:(unsigned long long)arg2 fromClientWithConnection:(id)arg3 possibleRequiredEntitlements:(id*)arg4 needsToRequireEntitlements:(bool*)arg5;
- (id)_services;
- (unsigned long long)_servicesCount;
- (id)_servicesForUniqueIdentifiers:(id)arg1;
- (bool)_start;
- (void)_startLaunchAngel;
- (id)_uniqueIdentifierForService:(id)arg1;
- (void)_unregisterAllClientsWithConnection:(id)arg1;
- (void)_unregisterClientsIdentifiersLists:(id)arg1 serviceContexts:(id)arg2;
- (void)beginTransactionWithIdentifier:(id)arg1 forService:(id)arg2;
- (id)clientsForService:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)displayManager;
- (void)endTransactionWithIdentifier:(id)arg1 forService:(id)arg2;
- (id)entitlementsCheckers;
- (id)entitlementsCheckersAccessQueue;
- (id)init;
- (unsigned long long)lastUsedServiceIdentifier;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)messageSender;
- (void)messageSender:(id)arg1 accessLaunchAngelConnectionForMessageWithContext:(void*)arg2 usingBlock:(id /* block */)arg3;
- (void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3;
- (id)pausedConnections;
- (id)resumingConnectionsQueue;
- (oneway void)sendBoardServiceMessage:(id)arg1 callback:(id /* block */)arg2;
- (id)serviceContexts;
- (id)servicesAccessQueue;
- (void)setDelegate:(id)arg1;
- (void)setDisplayManager:(id)arg1;
- (void)setEntitlementsCheckers:(id)arg1;
- (void)setEntitlementsCheckersAccessQueue:(id)arg1;
- (void)setLastUsedServiceIdentifier:(unsigned long long)arg1;
- (void)setMessageSender:(id)arg1;
- (void)setPausedConnections:(id)arg1;
- (void)setResumingConnectionsQueue:(id)arg1;
- (void)setServiceContexts:(id)arg1;
- (void)setServicesAccessQueue:(id)arg1;
- (void)setShouldAllowServicesToProcessMessages:(bool)arg1;
- (void)setTransactions:(id)arg1;
- (void)setTransactionsQueue:(id)arg1;
- (bool)shouldAllowServicesToProcessMessages;
- (id)transactions;
- (id)transactionsQueue;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDaemonConnection : NSObject <CADClientInterface, CADXPCProxyHelperDelegate, EKAuthStatusChecker> {
    bool  _accessDetermined;
    NSMutableDictionary * _cancellableOperations;
    <EKXPCConnectionFactory> * _connectionFactory;
    NSObject<OS_dispatch_queue> * _connectionLock;
    int  _databaseRestoreGeneration;
    bool  _databaseRestoreGenerationHasEverChangedSignificantly;
    <EKDaemonConnectionDelegate> * _delegate;
    long long  _eventAuthorization;
    bool  _hasEverConnected;
    CADDatabaseInitializationOptions * _initializationOptions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalStateLock;
    unsigned int  _nextCancellationToken;
    bool  _registeredForStartNote;
    long long  _remindersAuthorization;
    <CADInterface> * _remoteOperationProxy;
    NSObject<OS_dispatch_queue> * _replyHandlerLock;
    <CADInterface> * _syncRemoteOperationProxy;
    bool  _wasAbortedDueToExcessiveConnections;
    <CADXPCConnection> * _xpcConnection;
}

@property (nonatomic, readonly, retain) <CADInterface> *CADOperationProxy;
@property (nonatomic, readonly, retain) <CADInterface> *CADOperationProxySync;
@property (nonatomic, readonly) int databaseRestoreGeneration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <EKDaemonConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int eventAccessLevel;
@property (nonatomic, readonly) long long eventAuthorization;
@property (nonatomic, readonly) bool hasAccessToReminders;
@property (nonatomic) bool hasEverConnected;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CADDatabaseInitializationOptions *initializationOptions;
@property (nonatomic, readonly) long long remindersAuthorization;
@property (nonatomic, readonly) bool shouldValidateObjectIDs;
@property (readonly) Class superclass;

+ (void)addLivingDaemonConnection:(id)arg1;
+ (id)anyAvailableDaemonConnection;
+ (id)preferredAvailableDaemonConnection;
+ (void)setPreferredAvailableDaemonConnection:(id)arg1;

- (void).cxx_destruct;
- (void)CADClientReceiveDatabaseIntegrityErrors:(id)arg1;
- (void)CADClientReceiveDiagnosticsCollectionResults:(id)arg1 forToken:(unsigned int)arg2 finished:(bool)arg3;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned int)arg2 finished:(bool)arg3;
- (id)CADOperationProxy;
- (id)CADOperationProxySync;
- (bool)_connectToServer;
- (void)_createConnectionAndOperationProxyIfNeeded;
- (void)_daemonRestarted;
- (void)_eventAuthorization:(long long*)arg1 remindersAuthorization:(long long*)arg2;
- (void)_finishAllRepliesOnServerDeath;
- (unsigned int)addCancellableRemoteOperation:(id)arg1;
- (void)cancelRemoteOperation:(unsigned int)arg1;
- (void)clearCachedAuthStatus;
- (int)databaseRestoreGeneration;
- (void)databaseRestoreGenerationChangedByThisClient:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disconnect;
- (int)eventAccessLevel;
- (long long)eventAuthorization;
- (bool)hasAccessToReminders;
- (bool)hasEverConnected;
- (id)initWithConnectionFactory:(id)arg1;
- (id)initializationOptions;
- (id)operationForToken:(unsigned int)arg1 respondingToSelector:(SEL)arg2 finished:(bool)arg3;
- (long long)remindersAuthorization;
- (void)removeCancellableRemoteOperation:(unsigned int)arg1;
- (void)setDatabaseRestoreGeneration:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasEverConnected:(bool)arg1;
- (void)setInitializationOptions:(id)arg1;
- (bool)shouldValidateObjectIDs;

@end
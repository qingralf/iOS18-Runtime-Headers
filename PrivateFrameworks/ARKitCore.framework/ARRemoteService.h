/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARRemoteService : NSObject <ARNamedService, ARRemoteServiceBaseProtocol> {
    <ARRemoteServiceAnchorDelegate> * _anchorDelegate;
    NSMutableDictionary * _anchorsByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _anchorsLock;
    NSObject<OS_dispatch_queue> * _asyncServiceQueue;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_group> * _connectionDispatchGroup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionDispatchGroupLock;
    unsigned long long  _dispatchDataSize;
    bool  _isAnchorProviding;
    void * _messageBuffer;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _originFromWorld;
    NSObject<OS_os_activity> * _remoteServiceActivity;
    <ARDaemonServiceBaseProtocol> * _service;
    id /* block */  _serviceDidInvalidateBlock;
    bool  _skipRemoteObjectErrorHandlers;
    unsigned long long  _status;
    <ARDaemonServiceBaseProtocol> * _syncService;
    unsigned long long  _traceIdentifier;
    bool  _updateUnmodifiedAnchors;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldFromOrigin;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldOrigin;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldOriginInverse;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _worldOriginLock;
}

@property <ARRemoteServiceAnchorDelegate> *anchorDelegate;
@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } originFromWorld;
@property (nonatomic, readonly) <ARDaemonServiceBaseProtocol> *service;
@property (nonatomic, copy) id /* block */ serviceDidInvalidateBlock;
@property unsigned long long status;
@property (readonly) Class superclass;
@property (retain) <ARDaemonServiceBaseProtocol> *syncService;
@property (nonatomic) bool updateUnmodifiedAnchors;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldFromOrigin;

+ (id)createDaemonServiceInterface:(id)arg1;
+ (id)createRemoteServiceInterface:(id)arg1;
+ (id)daemonServiceInterface;
+ (bool)isSupported;
+ (bool)isSupportedWithError:(id*)arg1;
+ (id)remoteServiceInterface;
+ (id)serviceName;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_getAsyncServiceQueue;
- (void)_serverConnectionInterrupted;
- (void)_serverConnectionInvalidated;
- (void)_skipRemoteObjectProxyErrorHandlers;
- (void)_startService;
- (long long)_waitForDispatchGroup:(unsigned long long)arg1;
- (bool)_waitUntilStarted:(unsigned long long)arg1;
- (id)anchorDelegate;
- (void)asyncServiceWithCallback:(id /* block */)arg1;
- (int)clientProcessIdentifier;
- (id)clientProcessName;
- (id)connection;
- (void)connectionDispatchGroupLeave;
- (void)dealloc;
- (void)didSetWorldOrigin;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (id)initWithDaemon:(id)arg1 dispatchChannelQueue:(id)arg2;
- (id)initWithDaemon:(id)arg1 startConnection:(bool)arg2;
- (id)initWithDaemon:(id)arg1 startConnection:(bool)arg2 dispatchChannelQueue:(id)arg3;
- (id)initWithDispatchChannelQueue:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithEndpoint:(id)arg1 startConnection:(bool)arg2 dispatchChannelQueue:(id)arg3;
- (id)initWithMachServiceName:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3 dispatchChannelQueue:(id)arg4;
- (id)initWithMachServiceName:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3 endpoint:(id)arg4;
- (id)initWithMachServiceName:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3 endpoint:(id)arg4 startConnection:(bool)arg5 dispatchChannelQueue:(id)arg6;
- (void)invalidate;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })originFromWorld;
- (void)reconnect;
- (id)service;
- (void)serviceConfiguredWithCompletionHandler:(id /* block */)arg1;
- (void)serviceConfiguredWithError:(id)arg1;
- (id /* block */)serviceDidInvalidateBlock;
- (void)serviceDidReconnect:(bool)arg1;
- (void)serviceFailedWithError:(id)arg1;
- (void)setAnchorDelegate:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setService:(id)arg1 syncService:(id)arg2;
- (void)setServiceDidInvalidateBlock:(id /* block */)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setSyncService:(id)arg1;
- (void)setUpdateUnmodifiedAnchors:(bool)arg1;
- (unsigned long long)status;
- (id)syncService;
- (void)syncServiceWithTimeout:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (bool)updateUnmodifiedAnchors;
- (bool)waitUntilStarted:(unsigned long long)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldFromOrigin;

@end
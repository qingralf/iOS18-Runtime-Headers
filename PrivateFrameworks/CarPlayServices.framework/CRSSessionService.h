/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

@interface CRSSessionService : NSObject <BSServiceConnectionListenerDelegate, CRSSessionClientToServerInterface> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <CRSSessionServiceDelegate> * _delegate;
    BSServiceConnectionListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_connections;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CRSSessionServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSServiceConnectionListener *listener;
@property (nonatomic, retain) NSHashTable *lock_connections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (id)connectionQueue;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)isActive;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)lock_connections;
- (void)setConnectionQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setLock_connections:(id)arg1;

@end
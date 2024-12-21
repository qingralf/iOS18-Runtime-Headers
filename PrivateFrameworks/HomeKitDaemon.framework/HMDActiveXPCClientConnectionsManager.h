/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDActiveXPCClientConnectionsManager : HMFObject <HMFLogging> {
    <HMDActiveXPCClientConnectionsManagerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
    NSHashTable * _mutableClientConnections;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSSet *clientConnections;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <HMDActiveXPCClientConnectionsManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSHashTable *mutableClientConnections;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addClientConnection:(id)arg1;
- (id)clientConnections;
- (void)configure;
- (id)delegate;
- (void)handleClientConnectionDidActivate:(id)arg1;
- (void)handleClientConnectionDidDeactivate:(id)arg1;
- (id)initWithLogIdentifier:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (id)mutableClientConnections;
- (void)removeClientConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)workQueue;

@end
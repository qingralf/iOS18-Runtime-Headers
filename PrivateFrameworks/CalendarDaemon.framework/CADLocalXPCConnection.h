/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADLocalXPCConnection : NSObject <CADXPCConnection> {
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remoteObject;
    unsigned long long  _state;
}

@property (readonly) struct { unsigned int x1[8]; } auditToken;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) bool isValid;
@property (readonly) int processIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1 synchronous:(bool)arg2;
- (struct { unsigned int x1[8]; })auditToken;
- (id)initWithRemoteObject:(id)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)isValid;
- (int)processIdentifier;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
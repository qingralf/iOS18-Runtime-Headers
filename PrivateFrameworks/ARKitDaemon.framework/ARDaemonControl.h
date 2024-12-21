/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitDaemon.framework/ARKitDaemon
 */

@interface ARDaemonControl : NSObject <ARControlProtocol> {
    NSXPCConnection * _connection;
    ARServer * _server;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) ARServer *server;
@property (readonly) Class superclass;

+ (id)serviceName;

- (void).cxx_destruct;
- (void)getStatusDictionaryWithReply:(id /* block */)arg1;
- (void)getStatusDictionaryWithWaitEndOfTransition:(bool)arg1 reply:(id /* block */)arg2;
- (void)getStatusWithVerboseOutput:(bool)arg1 reply:(id /* block */)arg2;
- (void)getStatusWithVerboseOutput:(bool)arg1 waitForEndOfTransaction:(bool)arg2 reply:(id /* block */)arg3;
- (id)initWithConnection:(id)arg1;
- (void)interruptionHandler;
- (void)invalidationHandler;
- (id)server;
- (void)setServer:(id)arg1;

@end
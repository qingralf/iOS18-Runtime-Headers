/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRDeviceController_XPC : MTRDeviceController <MTRXPCClientProtocol> {
    bool  _xpcConnectedOrConnecting;
    NSXPCConnection * _xpcConnection;
    MTRXPCDeviceControllerParameters * _xpcParameters;
    double  _xpcRetryTimeInterval;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property bool xpcConnectedOrConnecting;
@property (retain) NSXPCConnection *xpcConnection;
@property (retain) MTRXPCDeviceControllerParameters *xpcParameters;
@property double xpcRetryTimeInterval;

+ (id)_allowedClasses;

- (void).cxx_destruct;
- (id)_interfaceForClientProtocol;
- (id)_interfaceForServerProtocol;
- (void)_registerNodeID:(id)arg1;
- (id)_setupDeviceForNodeID:(id)arg1 prefetchedClusterData:(id)arg2;
- (bool)_setupXPCConnection;
- (void)_startXPCConnectionRetry;
- (void)_unregisterNodeID:(id)arg1;
- (void)_updateRegistrationInfo;
- (void)_xpcConnectionRetry;
- (id)controllerNodeID;
- (id)controllerXPCID;
- (oneway void)device:(id)arg1 internalStateUpdated:(id)arg2;
- (oneway void)device:(id)arg1 receivedAttributeReport:(id)arg2;
- (oneway void)device:(id)arg1 receivedEventReport:(id)arg2;
- (oneway void)device:(id)arg1 stateChanged:(unsigned long long)arg2;
- (oneway void)deviceBecameActive:(id)arg1;
- (oneway void)deviceCachePrimed:(id)arg1;
- (oneway void)deviceConfigurationChanged:(id)arg1;
- (id)initWithParameters:(id)arg1 error:(id*)arg2;
- (bool)isRunning;
- (void)removeDevice:(id)arg1;
- (void)setXpcConnectedOrConnecting:(bool)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcParameters:(id)arg1;
- (void)setXpcRetryTimeInterval:(double)arg1;
- (void)updateControllerConfiguration:(id)arg1;
- (bool)xpcConnectedOrConnecting;
- (id)xpcConnection;
- (id)xpcParameters;
- (double)xpcRetryTimeInterval;

@end
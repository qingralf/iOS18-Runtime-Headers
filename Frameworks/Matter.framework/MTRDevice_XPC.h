/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRDevice_XPC : MTRDevice <MTRXPCClientProtocol_MTRDevice> {
    NSDictionary * _internalState;
}

@property (getter=_internalState, setter=_setInternalState:, retain) NSDictionary *_internalState;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_internalState;
- (void)_invokeCommandWithEndpointID:(id)arg1 clusterID:(id)arg2 commandID:(id)arg3 commandFields:(id)arg4 expectedValues:(id)arg5 expectedValueInterval:(id)arg6 timedInvokeTimeout:(id)arg7 serverSideProcessingTimeout:(id)arg8 queue:(id)arg9 completion:(id /* block */)arg10;
- (void)_setInternalState:(id)arg1;
- (void)dealloc;
- (id)description;
- (oneway void)device:(id)arg1 internalStateUpdated:(id)arg2;
- (oneway void)device:(id)arg1 receivedAttributeReport:(id)arg2;
- (oneway void)device:(id)arg1 receivedEventReport:(id)arg2;
- (oneway void)device:(id)arg1 stateChanged:(unsigned long long)arg2;
- (oneway void)deviceBecameActive:(id)arg1;
- (bool)deviceCachePrimed;
- (oneway void)deviceCachePrimed:(id)arg1;
- (oneway void)deviceConfigurationChanged:(id)arg1;
- (void)downloadLogOfType:(long long)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)estimatedStartTime;
- (id)estimatedSubscriptionLatency;
- (id)initWithNodeID:(id)arg1 controller:(id)arg2;
- (id)readAttributePaths:(id)arg1;
- (id)readAttributeWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 params:(id)arg4;
- (unsigned long long)state;
- (void)writeAttributeWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 value:(id)arg4 expectedValueInterval:(id)arg5 timedWriteTimeout:(id)arg6;

@end

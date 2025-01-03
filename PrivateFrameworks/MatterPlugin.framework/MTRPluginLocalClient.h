/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MatterPlugin.framework/MatterPlugin
 */

@interface MTRPluginLocalClient : NSObject <MTRDeviceControllerDelegate, MTRDeviceDelegate, MTRXPCServerProtocol> {
    NSMutableDictionary * _context;
    MTRPluginClient * _pluginClient;
    NSMutableSet * _registeredMTRDeviceControllerIDs;
    NSMutableSet * _registeredNodeIDs;
    NSMutableSet * _subscribedMTRDevices;
    bool  _suspended;
}

@property (retain) NSMutableDictionary *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property MTRPluginClient *pluginClient;
@property (retain) NSMutableSet *registeredMTRDeviceControllerIDs;
@property (retain) NSMutableSet *registeredNodeIDs;
@property (retain) NSMutableSet *subscribedMTRDevices;
@property (readonly) Class superclass;
@property (getter=isSuspended) bool suspended;

+ (id)localDispatchQueue;

- (void).cxx_destruct;
- (id)_deviceForControllerUUID:(id)arg1 nodeID:(id)arg2;
- (void)_registerDevice:(id)arg1;
- (void)_unregisterDevice:(id)arg1;
- (void)addDelegateForDevice:(id)arg1 interestedPathsForAttributes:(id)arg2 interestedPathsForEvents:(id)arg3;
- (id)context;
- (void)controller:(id)arg1 suspendedChangedTo:(bool)arg2;
- (void)dealloc;
- (id)description;
- (void)device:(id)arg1 injectAttributeReport:(id)arg2;
- (void)device:(id)arg1 injectEventReport:(id)arg2;
- (void)device:(id)arg1 internalStateUpdated:(id)arg2;
- (void)device:(id)arg1 receivedAttributeReport:(id)arg2;
- (void)device:(id)arg1 receivedEventReport:(id)arg2;
- (void)device:(id)arg1 stateChanged:(unsigned long long)arg2;
- (void)deviceBecameActive:(id)arg1;
- (void)deviceCachePrimed:(id)arg1;
- (void)deviceConfigurationChanged:(id)arg1;
- (id)deviceController;
- (oneway void)deviceController:(id)arg1 controllerNodeIDWithReply:(id /* block */)arg2;
- (oneway void)deviceController:(id)arg1 getIsRunningWithReply:(id /* block */)arg2;
- (oneway void)deviceController:(id)arg1 getUniqueIdentifierWithReply:(id /* block */)arg2;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 downloadLogOfType:(long long)arg3 timeout:(double)arg4 completion:(id /* block */)arg5;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 getDeviceCachePrimedWithReply:(id /* block */)arg3;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 getEstimatedStartTimeWithReply:(id /* block */)arg3;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 getEstimatedSubscriptionLatencyWithReply:(id /* block */)arg3;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 getStateWithReply:(id /* block */)arg3;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 invokeCommandWithEndpointID:(id)arg3 clusterID:(id)arg4 commandID:(id)arg5 commandFields:(id)arg6 expectedValues:(id)arg7 expectedValueInterval:(id)arg8 timedInvokeTimeout:(id)arg9 serverSideProcessingTimeout:(id)arg10 completion:(id /* block */)arg11;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 openCommissioningWindowWithSetupPasscode:(id)arg3 discriminator:(id)arg4 duration:(id)arg5 completion:(id /* block */)arg6;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 readAttributePaths:(id)arg3 withReply:(id /* block */)arg4;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 readAttributeWithEndpointID:(id)arg3 clusterID:(id)arg4 attributeID:(id)arg5 params:(id)arg6 withReply:(id /* block */)arg7;
- (oneway void)deviceController:(id)arg1 nodeID:(id)arg2 writeAttributeWithEndpointID:(id)arg3 clusterID:(id)arg4 attributeID:(id)arg5 value:(id)arg6 expectedValueInterval:(id)arg7 timedWriteTimeout:(id)arg8;
- (oneway void)deviceController:(id)arg1 updateControllerConfiguration:(id)arg2;
- (id)initWithPluginClient:(id)arg1;
- (void)invalidate;
- (bool)isSuspended;
- (void)logState;
- (id)pluginClient;
- (id)registeredMTRDeviceControllerIDs;
- (id)registeredNodeIDs;
- (void)removeDelegateForDevice:(id)arg1;
- (void)reportAllAttributesForDevice:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setPluginClient:(id)arg1;
- (void)setRegisteredMTRDeviceControllerIDs:(id)arg1;
- (void)setRegisteredNodeIDs:(id)arg1;
- (void)setSubscribedMTRDevices:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (id)subscribedMTRDevices;

@end

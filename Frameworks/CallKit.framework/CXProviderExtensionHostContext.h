/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXProviderExtensionHostContext : CXProviderExtensionContext <CXProviderHostProtocol, CXProviderVendorProtocol> {
    <CXProviderHostProtocol> * _delegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CXProviderHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)commitTransaction:(id)arg1;
- (id)delegate;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;
- (oneway void)registerWithConfiguration:(id)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (oneway void)reportCallWithUUID:(id)arg1 receivedDTMFUpdate:(id)arg2;
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)reportNewOutgoingCallWithUUID:(id)arg1 update:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (oneway void)requestTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end

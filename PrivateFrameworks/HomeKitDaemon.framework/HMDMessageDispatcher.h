/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMessageDispatcher : HMFMessageDispatcher {
    HMDXPCMessageTransport * _XPCTransport;
    NSCache * _homeForTarget;
    HMDHomeManager * _homeManager;
    HMDMessageFilterChain * _messageFilterChain;
    NSMutableDictionary * _remoteGateways;
    HMDSecureRemoteMessageFilter * _secureRemoteMessageFilter;
    HMDSecureRemoteMessageTransport * _secureRemoteTransport;
}

@property (nonatomic, readonly) HMDXPCMessageTransport *XPCTransport;
@property (nonatomic, retain) NSCache *homeForTarget;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, readonly) HMDMessageFilterChain *messageFilterChain;
@property (nonatomic, retain) NSMutableDictionary *remoteGateways;
@property (nonatomic, readonly) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter;
@property (nonatomic, readonly) HMDSecureRemoteMessageTransport *secureRemoteTransport;

+ (id)defaultDispatcher;
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(bool)arg4;
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(bool)arg4 accountRegistry:(id)arg5;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)XPCTransport;
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(bool)arg3;
- (void)configureHTTPTransport:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (void)dealloc;
- (void)disableMessageServer;
- (void)dispatchMessage:(id)arg1;
- (void)electDeviceForHH1User:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)enableMessageServer;
- (void)handleSecureSessionError:(id)arg1;
- (id)homeForMessageTarget:(id)arg1;
- (id)homeForTarget;
- (id)homeManager;
- (id)httpMessageTransport;
- (id)initWithXPCTransport:(id)arg1 secureRemoteTransport:(id)arg2 messageFilterChain:(id)arg3;
- (id)messageFilterChain;
- (id)messageHandlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
- (id)remoteAccessDeviceForHome:(id)arg1;
- (id)remoteGateways;
- (void)reset;
- (id)residentCommunicationHandlerForHome:(id)arg1;
- (id)secureRemoteMessageFilter;
- (id)secureRemoteTransport;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sendMessageExpectingResponse:(id)arg1;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;
- (void)setHomeForTarget:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;
- (void)setRemoteGateways:(id)arg1;

@end

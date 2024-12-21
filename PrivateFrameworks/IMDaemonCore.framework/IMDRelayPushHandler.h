/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDRelayPushHandler : NSObject <IDSServiceDelegatePrivate> {
    IDSAccount * _account;
    NSCache * _guidToListenersCache;
    NSMutableArray * _handlers;
    bool  _isListening;
    bool  _registeredForPush;
    IDSService * _relayService;
    IDSService * _smsWatchService;
}

@property (nonatomic, retain) IDSAccount *account;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *guidToListenersCache;
@property (nonatomic, retain) NSMutableArray *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isListening;
@property (nonatomic) bool registered;
@property (nonatomic) bool registeredForPush;
@property (nonatomic, retain) IDSService *relayService;
@property (nonatomic, retain) IDSService *smsWatchService;
@property (readonly) Class superclass;

+ (id)commandToHandlerBlock;
+ (id)localCommandToHandlerBlock;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_acceptIncomingPushes;
- (void)_cacheListeners:(id)arg1 forGUID:(id)arg2;
- (id)_cachedListenersForGUID:(id)arg1;
- (void)_calculateHandlersForLocalMessage:(id)arg1 userInfo:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_calculateHandlersForMatchType:(unsigned long long)arg1 routingBehaviors:(unsigned long long)arg2 message:(id)arg3 messageGUID:(id)arg4 fromIdentifier:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)_calculateHandlersForMessage:(id)arg1 messageGUID:(id)arg2 fromIdentifier:(id)arg3 command:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)_guidsForMessage:(id)arg1 messageGUID:(id)arg2 routingBehaviors:(unsigned long long)arg3;
- (void)_handleMessageProcessedWithGUID:(id)arg1;
- (id)_handlerForServiceName:(id)arg1;
- (id)_handlersForExplicitServiceWithMessage:(id)arg1;
- (void)_ignoreIncomingPushes;
- (unsigned long long)_listenerMatchTypeForCommand:(long long)arg1 message:(id)arg2;
- (unsigned long long)_listenerMatchTypeForLocalMessageType:(id)arg1 message:(id)arg2;
- (id)_messageDictionaryForLocalMessage:(id)arg1 type:(id)arg2;
- (id)_messageReplayObjectWithService:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4;
- (id)_messageReplayObjectWithService:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4;
- (bool)_messageRequestsServiceForSendingBypass:(id)arg1;
- (unsigned long long)_routingBehaviorsForCommand:(long long)arg1;
- (unsigned long long)_routingBehaviorsForLocalMessageType:(id)arg1;
- (void)_service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 isBeingReplayed:(bool)arg6;
- (void)_service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 isBeingReplayed:(bool)arg6;
- (id)_serviceNameForMessage:(id)arg1;
- (id)_serviceNameOrCompatibilityServiceNameFromDictionary:(id)arg1;
- (void)_updateListenerIfNeeded;
- (id)account;
- (void)addListener:(id)arg1;
- (id)copyHandlersForEnumerating;
- (void)dealloc;
- (id)guidToListenersCache;
- (id)handlers;
- (id)init;
- (id)initWithIDSAccount:(id)arg1;
- (bool)isListening;
- (bool)registered;
- (bool)registeredForPush;
- (id)relayService;
- (void)removeListener:(id)arg1;
- (void)replayMessage:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
- (void)setAccount:(id)arg1;
- (void)setGuidToListenersCache:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setIsListening:(bool)arg1;
- (void)setRegistered:(bool)arg1;
- (void)setRegisteredForPush:(bool)arg1;
- (void)setRelayService:(id)arg1;
- (void)setSmsWatchService:(id)arg1;
- (id)smsWatchService;

@end
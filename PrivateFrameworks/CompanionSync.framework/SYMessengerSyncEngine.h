/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYMessengerSyncEngine : SYSyncEngine <NMSMessageCenterDelegate> {
    SYDevice * _activeDevice;
    NSMapTable * _callbackLookup;
    NSDictionary * _customIDSOptions;
    NSObject<OS_dispatch_queue> * _idsQueue;
    NSObject<OS_dispatch_semaphore> * _lookupLock;
    NMSMessageCenter * _messageCenter;
    NSMapTable * _requestLookup;
    NSString * _sessionDeviceID;
}

@property (nonatomic, copy) NSDictionary *customIDSOptions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *idsQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_checkMessageHeader:(id)arg1 messageID:(id)arg2;
- (id)_fileTransferHeader;
- (id)_getRequestHeader:(id)arg1;
- (id)_getResponseHeader:(id)arg1;
- (void)_handleError:(id)arg1 forMessageID:(unsigned short)arg2;
- (void)_hookupMessageHandler;
- (void)_recordLastSeqNo:(id)arg1;
- (void)_resumeIncomingMessages;
- (void)_suspendIncomingMessages;
- (void)_updateMessageCenterPrefs:(id)arg1;
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;
- (void)beginSession;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (id)customIDSOptions;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* block */)arg6;
- (id)idsQueue;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (id)messageCenter;
- (void)messageCenter:(id)arg1 activeDeviceChanged:(id)arg2 acknowledgement:(id /* block */)arg3;
- (void)messageCenter:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)messageCenter:(id)arg1 didReceiveIncomingFileTransfer:(id)arg2;
- (void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forFileTransfer:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 failedToSendMessageWithIdentifier:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)messageCenter:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5;
- (bool)resume:(id*)arg1;
- (void)setCustomIDSOptions:(id)arg1;
- (id)stateForLogging;
- (void)suspend;
- (bool)targetConnected;
- (bool)targetIsNearby;

@end

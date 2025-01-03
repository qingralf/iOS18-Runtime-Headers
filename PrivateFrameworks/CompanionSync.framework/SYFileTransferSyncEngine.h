/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYFileTransferSyncEngine : SYSyncEngine <IDSServiceDelegate> {
    SYDevice * _activeDevice;
    NSObject<OS_os_transaction> * _closureTransaction;
    NSDictionary * _customIDSOptions;
    NSMutableArray * _deferredIncomingSessions;
    NSObject<OS_dispatch_queue> * _idsQueue;
    bool  _idsQueueIsSuspended;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _idsQueueLock;
    bool  _idsQueueResumedLock;
    IDSService * _idsService;
    bool  _inSession;
    NSURL * _inputFileURL;
    IDSMessageContext * _inputPriorityBoostContext;
    _SYInputStreamer * _inputStream;
    NSMutableDictionary * _messageIDsToSessionIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _messageMapLock;
    NSMutableIndexSet * _messageRows;
    NSURL * _outputFileURL;
    _SYOutputStreamer * _outputStream;
    SYDevice * _responseDevice;
    NSURL * _responseFileURL;
    NSMutableIndexSet * _responseMessageRows;
    NSObject<OS_os_transaction> * _responseSessionTransaction;
    _SYOutputStreamer * _responseStream;
    bool  _responsesCanceled;
    bool  _sessionCanceled;
    SYDevice * _sessionDevice;
    SYStartSyncSession * _sessionStartMessage;
    NSMutableSet * _singleMessageUUIDs;
}

@property (nonatomic, copy) NSDictionary *customIDSOptions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assumeOwnershipOfURL:(id)arg1 error:(id*)arg2;
- (void)_cancelResponses;
- (void)_cancelSession;
- (void)_consumeRemainingStreamDataWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)_crcChecksum:(id)arg1;
- (void)_enqueueSingleMessage:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* block */)arg6;
- (id)_fileTransferHeader;
- (void)_handleError:(id)arg1 messageID:(id)arg2 streamer:(id)arg3;
- (void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;
- (void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;
- (void)_handleIncomingStreamDataWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleProtobuf:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 isResponse:(bool)arg4 withCompletion:(id /* block */)arg5;
- (void)_handleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id /* block */)arg5;
- (void)_processNMSMessageData:(id)arg1 context:(id)arg2;
- (void)_readNextProtobuf:(id /* block */)arg1;
- (void)_reallyHandleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id /* block */)arg5;
- (void)_recordLastSeqNo:(id)arg1;
- (void)_resumeIdsQueue;
- (bool)_sessionDeviceCanUseSingleMessages;
- (bool)_shouldTreatAsSessionEnd:(id)arg1;
- (void)_suspendIdsQueue;
- (id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;
- (id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3;
- (void)beginResponseSession;
- (void)beginSession;
- (bool)buffersHandshake;
- (bool)buffersSessions;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (id)customIDSOptions;
- (void)dealloc;
- (void)endFileTransferForStream:(id)arg1 atURL:(id)arg2 target:(id)arg3 wasCancelled:(bool)arg4 messageRows:(id)arg5;
- (void)endResponseSession;
- (void)endSession;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* block */)arg6;
- (id)idsOptions:(id)arg1;
- (id)idsOptions:(id)arg1 forFileTransfer:(bool)arg2;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (bool)isInSession;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5;
- (bool)resume:(id*)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(id /* block */)arg3;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setCustomIDSOptions:(id)arg1;
- (id)stateForLogging;
- (void)suspend;
- (bool)targetIsNearby;

@end

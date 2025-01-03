/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSMessageCenter : NSObject <IDSServiceDelegate> {
    HDDaemon * _daemon;
    <HDIDSMessageCenterDelegate> * _delegate;
    NSMutableDictionary * _errorHandlers;
    NSObject<OS_dispatch_source> * _expireTimer;
    _Atomic bool  _invalidated;
    double  _nextExpireTimerFireDate;
    NSUUID * _pairingUUID;
    NSMutableDictionary * _pbMapping;
    HDIDSPersistentDictionary * _persistentContextStore;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requestHandlers;
    NSMutableDictionary * _responseHandlers;
    IDSService * _service;
    NSString * _serviceIdentifier;
    NSString * _shortServiceIdentifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HDIDSMessageCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSService *idsService;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property (readonly) Class superclass;

+ (id)createPersistentDictionaryWithURL:(id)arg1;

- (void).cxx_destruct;
- (void)addErrorHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addRequestHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addResponseHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)cancelPendingRequestsWithMessageID:(unsigned short)arg1 device:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)deviceForFromID:(id)arg1;
- (id)idsService;
- (id)initWithIDSServiceIdentifier:(id)arg1 persistentDictionary:(id)arg2 queue:(id)arg3 daemon:(id)arg4;
- (void)invalidate;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (id)nanoSyncDevices;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(bool)arg2;
- (void)resume;
- (void)sendRequest:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(id /* block */)arg3;
- (id)serviceIdentifier;
- (void)setDelegate:(id)arg1;

@end

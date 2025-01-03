/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCClient : NSObject {
    unsigned int  _assignedServerMachPort;
    NSString * _clientIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientIdentifierLock;
    struct __CFRunLoopSource { } * _clientSource;
    bool  _connected;
    unsigned long long  _connectionAttempts;
    AXAccessQueue * _connectionQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionServiceLock;
    NSMutableArray * _outstandingAsyncRequests;
    int  _pid;
    id /* block */  _portDeathHandler;
    NSMutableArray * _postConnectionTasks;
    struct __CFMachPort { } * _serverPort;
    NSString * _serviceName;
    float  _timeout;
    bool  _usesPerPidLookup;
    unsigned int  clientCallbackPort;
    struct __CFRunLoopSource { } * clientCallbackSource;
    bool  shouldRegisterCallbackSourceOnMainRunloop;
}

@property (nonatomic, readonly) unsigned int clientCallbackPort;
@property (nonatomic, readonly) struct __CFRunLoopSource { }*clientCallbackSource;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (getter=isConnected, nonatomic) bool connected;
@property (nonatomic, retain) AXAccessQueue *connectionQueue;
@property (nonatomic) int pid;
@property (nonatomic, copy) id /* block */ portDeathHandler;
@property (nonatomic, retain) NSMutableArray *postConnectionTasks;
@property (nonatomic, readonly) struct __CFMachPort { }*serverPort;
@property (nonatomic, readonly) unsigned int serviceMachPort;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic) bool shouldRegisterCallbackSourceOnMainRunloop;
@property (nonatomic) float timeout;
@property (nonatomic) bool usesPerPidLookup;

+ (id)allClients;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_attemptToEstablishConnection;
- (void)_commonInit;
- (id)_createRegistrationWithReplyMachPort:(unsigned int)arg1 forAsyncReplyOnQueue:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)_descriptionForMachError:(int)arg1;
- (bool)_handleErrorWithMessage:(id)arg1 machError:(int)arg2 outError:(id*)arg3;
- (bool)_handleErrorWithMessage:(id)arg1 outError:(id*)arg2;
- (bool)_prepareToSendMessage:(id)arg1 withError:(id*)arg2 prepSuccessHandler:(id /* block */)arg3;
- (void)_registerWithServer;
- (void)_sendRegistrationMessageWithRetries:(int)arg1;
- (void)_serverDied;
- (bool)_verifyConnectionWithError:(id*)arg1;
- (unsigned int)clientCallbackPort;
- (struct __CFRunLoopSource { }*)clientCallbackSource;
- (id)clientIdentifier;
- (bool)connectWithError:(id*)arg1;
- (id)connectionQueue;
- (void)dealloc;
- (id)description;
- (bool)disconnectWithError:(id*)arg1;
- (void)establishConnectionWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithServiceName:(id)arg1;
- (bool)isConnected;
- (int)pid;
- (id /* block */)portDeathHandler;
- (id)postConnectionTasks;
- (bool)sendAsyncMessage:(id)arg1 replyOnQueue:(id)arg2 replyHandler:(id /* block */)arg3;
- (bool)sendAsyncMessage:(id)arg1 withReplyHandler:(id /* block */)arg2;
- (id)sendMessage:(id)arg1 withError:(id*)arg2;
- (void)sendSimpleMessage:(id)arg1;
- (bool)sendSimpleMessage:(id)arg1 synchronizationPort:(unsigned int)arg2 error:(id*)arg3;
- (bool)sendSimpleMessage:(id)arg1 withError:(id*)arg2;
- (struct __CFMachPort { }*)serverPort;
- (unsigned int)serviceMachPort;
- (id)serviceName;
- (void)setClientIdentifier:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setPortDeathHandler:(id /* block */)arg1;
- (void)setPostConnectionTasks:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldRegisterCallbackSourceOnMainRunloop:(bool)arg1;
- (void)setTimeout:(float)arg1;
- (void)setUsesPerPidLookup:(bool)arg1;
- (bool)shouldRegisterCallbackSourceOnMainRunloop;
- (float)timeout;
- (bool)usesPerPidLookup;
- (bool)verifyConnectionExists;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
 */

@interface SKConnection : NSObject <CUActivatable, CUAuthenticatableClient, CUAuthenticatableServer, CULabelable> {
    bool  _activateCalled;
    id /* block */  _authCompletionHandler;
    id /* block */  _authHidePasswordHandler;
    id /* block */  _authPromptHandler;
    id /* block */  _authShowPasswordHandler;
    unsigned long long  _authThrottleDeadlineTicks;
    NSObject<OS_dispatch_source> * _authThrottleTimer;
    CBConnection * _bleConnection;
    SKDevice * _blePeerDevice;
    unsigned int  _bluetoothUseCase;
    bool  _clientMode;
    bool  _conditionalPersistent;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    struct { 
        unsigned char frameType; 
        unsigned char frameLen[3]; 
    }  _frameHeader;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    unsigned long long  _mainAuthTagLength;
    CUPairingStream * _mainStream;
    id /* block */  _pairSetupConfigHandler;
    CUPairingSession * _pairSetupSession;
    CUPairingSession * _pairVerifySession;
    NSString * _password;
    int  _passwordType;
    bool  _persistentPairing;
    NSData * _pskData;
    bool  _readRequested;
    id /* block */  _receivedEventHandler;
    id /* block */  _receivedRequestHandler;
    bool  _receivingHeader;
    <CUReadWriteRequestable> * _requestable;
    NSMutableDictionary * _requests;
    bool  _reversePairing;
    int  _runState;
    NSMutableArray * _sendArray;
    id /* block */  _sendDataHandler;
    bool  _showPasswordCalled;
    NSObject<OS_dispatch_source> * _startTimer;
    int  _state;
    id /* block */  _stateChangedHandler;
    bool  _stepDone;
    NSError * _stepError;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    unsigned int  _xidLast;
}

@property (nonatomic, copy) id /* block */ authCompletionHandler;
@property (nonatomic, copy) id /* block */ authHidePasswordHandler;
@property (nonatomic, copy) id /* block */ authPromptHandler;
@property (nonatomic, copy) id /* block */ authShowPasswordHandler;
@property (nonatomic, retain) CBConnection *bleConnection;
@property (nonatomic, retain) SKDevice *blePeerDevice;
@property (nonatomic) unsigned int bluetoothUseCase;
@property (nonatomic) bool clientMode;
@property (nonatomic) bool conditionalPersistent;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id /* block */ pairSetupConfigHandler;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic) bool persistentPairing;
@property (nonatomic, copy) NSData *pskData;
@property (nonatomic, copy) id /* block */ receivedEventHandler;
@property (nonatomic, copy) id /* block */ receivedRequestHandler;
@property (nonatomic) bool reversePairing;
@property (nonatomic, copy) id /* block */ sendDataHandler;
@property (nonatomic) int state;
@property (nonatomic, copy) id /* block */ stateChangedHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abortRequestsWithError:(id)arg1;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_clientConnectCompleted:(id)arg1;
- (void)_clientConnectStart;
- (void)_clientConnectStartBLE;
- (void)_clientError:(id)arg1;
- (void)_clientPairSetupCompleted:(id)arg1;
- (void)_clientPairSetupContinueWithData:(id)arg1;
- (void)_clientPairSetupPromptWithFlags:(unsigned int)arg1 passwordType:(int)arg2 throttleSeconds:(int)arg3;
- (void)_clientPairSetupStart;
- (void)_clientPairSetupStartReverse;
- (void)_clientPairVerifyCompleted:(id)arg1;
- (void)_clientPairVerifyStart;
- (void)_clientPairVerifyWithData:(id)arg1;
- (void)_clientRun;
- (void)_invalidateCore:(id)arg1;
- (void)_invalidateWithError:(id)arg1;
- (void)_invalidated;
- (void)_pairSetupInvalidate;
- (void)_pairVerifyInvalidate;
- (void)_processSends;
- (void)_pskPrepareClientMode:(bool)arg1;
- (void)_receiveCompletion:(id)arg1;
- (void)_receiveStart:(id)arg1;
- (void)_receivedEvent:(id)arg1;
- (void)_receivedHeader:(const struct { unsigned char x1; unsigned char x2[3]; }*)arg1 body:(id)arg2;
- (void)_receivedHeader:(const struct { unsigned char x1; unsigned char x2[3]; }*)arg1 encryptedObjectData:(id)arg2;
- (void)_receivedHeader:(const struct { unsigned char x1; unsigned char x2[3]; }*)arg1 unencryptedObjectData:(id)arg2;
- (void)_receivedObject:(id)arg1;
- (void)_receivedRequest:(id)arg1;
- (void)_receivedResponse:(id)arg1;
- (void)_run;
- (void)_sendEventID:(id)arg1 data:(id)arg2 xid:(unsigned int)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)_sendFrameType:(unsigned char)arg1 body:(id)arg2;
- (void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2;
- (void)_sendHeaderData:(id)arg1 bodyData:(id)arg2 completion:(id /* block */)arg3;
- (void)_sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 sendEntry:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)_sendResponse:(id)arg1 error:(id)arg2 xid:(id)arg3 requestID:(id)arg4 completion:(id /* block */)arg5;
- (void)_serverAccept;
- (void)_serverAcceptBLE;
- (void)_serverError:(id)arg1;
- (void)_serverPairSetupCompleted:(id)arg1;
- (void)_serverPairSetupContinueWithData:(id)arg1 start:(bool)arg2;
- (void)_serverPairVerifyCompleted:(id)arg1;
- (void)_serverPairVerifyContinueWithData:(id)arg1 start:(bool)arg2;
- (void)_serverRun;
- (void)_timeoutForSendEntry:(id)arg1;
- (void)_timeoutForXID:(id)arg1;
- (void)_updateExternalState;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)authCompletionHandler;
- (id /* block */)authHidePasswordHandler;
- (id /* block */)authPromptHandler;
- (id /* block */)authShowPasswordHandler;
- (id)bleConnection;
- (id)blePeerDevice;
- (unsigned int)bluetoothUseCase;
- (bool)clientMode;
- (bool)conditionalPersistent;
- (void)dealloc;
- (id)deriveKeyWithSaltPtr:(const void*)arg1 saltLen:(unsigned long long)arg2 infoPtr:(const void*)arg3 infoLen:(unsigned long long)arg4 keyLen:(unsigned long long)arg5 error:(id*)arg6;
- (id)description;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id /* block */)pairSetupConfigHandler;
- (id)password;
- (int)passwordType;
- (bool)persistentPairing;
- (id)pskData;
- (void)receivedData:(id)arg1;
- (id /* block */)receivedEventHandler;
- (id /* block */)receivedRequestHandler;
- (bool)reversePairing;
- (id /* block */)sendDataHandler;
- (void)sendEventID:(id)arg1 data:(id)arg2 xid:(unsigned int)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)setAuthCompletionHandler:(id /* block */)arg1;
- (void)setAuthHidePasswordHandler:(id /* block */)arg1;
- (void)setAuthPromptHandler:(id /* block */)arg1;
- (void)setAuthShowPasswordHandler:(id /* block */)arg1;
- (void)setBleConnection:(id)arg1;
- (void)setBlePeerDevice:(id)arg1;
- (void)setBluetoothUseCase:(unsigned int)arg1;
- (void)setClientMode:(bool)arg1;
- (void)setConditionalPersistent:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPairSetupConfigHandler:(id /* block */)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordType:(int)arg1;
- (void)setPersistentPairing:(bool)arg1;
- (void)setPskData:(id)arg1;
- (void)setReceivedEventHandler:(id /* block */)arg1;
- (void)setReceivedRequestHandler:(id /* block */)arg1;
- (void)setReversePairing:(bool)arg1;
- (void)setSendDataHandler:(id /* block */)arg1;
- (void)setState:(int)arg1;
- (void)setStateChangedHandler:(id /* block */)arg1;
- (int)state;
- (id /* block */)stateChangedHandler;
- (void)tryPassword:(id)arg1;
- (void)updatePasswordType:(int)arg1;

@end

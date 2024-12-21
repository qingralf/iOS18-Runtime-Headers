/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPNearbyInvitationSession : NSObject <NSSecureCoding, RPMessageable, RPNearbyInvitationXPCClientInterface> {
    bool  _activateCalled;
    RPNearbyInvitationDevice * _daemonDevice;
    RPNearbyInvitationDevice * _destinationDevice;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    NSMutableDictionary * _eventRegistrations;
    bool  _failedToConnect;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSMutableDictionary * _requestRegistrations;
    RPNearbyInvitationServer * _server;
    NSString * _serviceType;
    NSNumber * _sessionID;
    bool  _waitingToConnect;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) RPNearbyInvitationDevice *daemonDevice;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RPNearbyInvitationDevice *destinationDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic) bool failedToConnect;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) RPNearbyInvitationServer *server;
@property (nonatomic, retain) NSString *serviceType;
@property (nonatomic, copy) NSNumber *sessionID;
@property (readonly) Class superclass;
@property (nonatomic) bool waitingToConnect;
@property (nonatomic, retain) NSXPCConnection *xpcCnx;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)daemonDevice;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (id)destinationDevice;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)errorHandler;
- (bool)failedToConnect;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)nearbyInvitationReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4;
- (void)nearbyInvitationReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4 sessionID:(id)arg5;
- (void)nearbyInvitationSessionError:(id)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (id)server;
- (id)serviceType;
- (id)sessionID;
- (void)setDaemonDevice:(id)arg1;
- (void)setDestinationDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFailedToConnect:(bool)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setServer:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setWaitingToConnect:(bool)arg1;
- (void)setXpcCnx:(id)arg1;
- (bool)waitingToConnect;
- (id)xpcCnx;

@end
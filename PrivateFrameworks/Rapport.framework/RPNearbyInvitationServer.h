/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPNearbyInvitationServer : NSObject <NSSecureCoding> {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _serviceType;
    id /* block */  _sessionEndedHandler;
    id /* block */  _sessionStartHandler;
    NSMutableDictionary * _sessions;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) id /* block */ sessionEndedHandler;
@property (nonatomic, copy) id /* block */ sessionStartHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)nearbyInvitationReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4;
- (void)nearbyInvitationReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4 sessionID:(id)arg5;
- (void)nearbyInvitationSessionEndedWithID:(id)arg1;
- (void)nearbyInvitationSessionError:(id)arg1 withID:(id)arg2;
- (void)nearbyInvitationStartServerSessionID:(id)arg1 device:(id)arg2 completion:(id /* block */)arg3;
- (id)serviceType;
- (id /* block */)sessionEndedHandler;
- (id /* block */)sessionStartHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSessionEndedHandler:(id /* block */)arg1;
- (void)setSessionStartHandler:(id /* block */)arg1;

@end

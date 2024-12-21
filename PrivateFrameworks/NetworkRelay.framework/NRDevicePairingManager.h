/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
 */

@interface NRDevicePairingManager : NSObject {
    id /* block */  _authRequestHandler;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _candidateDiscoveredHandler;
    id /* block */  _candidateLostHandler;
    unsigned long long  _internalManagerState;
    id /* block */  _invalidationHandler;
    NRDevicePairingManagerInfo * _managerInfo;
    unsigned long long  _managerState;
    NSObject<OS_dispatch_queue> * _operationQueue;
    NRDevicePairingManagerMux * _pairingManagerMux;
    id /* block */  _pairingResultBlock;
}

@property (nonatomic, copy) id /* block */ authRequestHandler;
@property (nonatomic, copy) id /* block */ candidateDiscoveredHandler;
@property (nonatomic, copy) id /* block */ candidateLostHandler;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) unsigned long long managerState;

+ (void)unpairDevice:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)authRequestHandler;
- (void)cancelDiscovery;
- (void)cancelPairing;
- (id /* block */)candidateDiscoveredHandler;
- (id /* block */)candidateLostHandler;
- (void)dealloc;
- (id)description;
- (id)fullDescription;
- (void)getDataForAuthMethod:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithIdentifier:(id)arg1 pairingCriteria:(id)arg2 metadata:(id)arg3 queue:(id)arg4;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (unsigned long long)managerState;
- (void)requestAuthMethodForDevice:(id)arg1 authMethod:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)setAuthRequestHandler:(id /* block */)arg1;
- (void)setCandidateDiscoveredHandler:(id /* block */)arg1;
- (void)setCandidateLostHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setManagerState:(unsigned long long)arg1;
- (void)startDiscoveryWithCompletion:(id /* block */)arg1;
- (void)startPairingDevice:(id)arg1 withCompletion:(id /* block */)arg2 resultBlock:(id /* block */)arg3;

@end
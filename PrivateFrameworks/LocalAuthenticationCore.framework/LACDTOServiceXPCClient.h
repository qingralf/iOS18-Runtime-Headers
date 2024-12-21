/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOServiceXPCClient : NSObject <LACDTOServiceXPCClient> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    <LACDTOServiceXPCEndpointProvider> * _endpointProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectionWithErrorHandler:(id /* block */)arg1;
- (void)_handleConnectionClose;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)cancelPendingEvaluationWithRatchetIdentifier:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)checkCanEnableFeatureWithCompletion:(id /* block */)arg1;
- (void)checkIsFeatureAvailableWithCompletion:(id /* block */)arg1;
- (void)checkIsFeatureEnabledWithCompletion:(id /* block */)arg1;
- (void)checkIsFeatureStrictModeEnabledWithCompletion:(id /* block */)arg1;
- (void)checkIsFeatureSupportedWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)disableFeatureStrictModeWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)disableFeatureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)enableFeatureActivatingGracePeriodWithCompletion:(id /* block */)arg1;
- (void)enableFeatureStrictModeWithCompletion:(id /* block */)arg1;
- (void)enableFeatureWithCompletion:(id /* block */)arg1;
- (id)initWithEndpointProvider:(id)arg1;
- (bool)isFeatureAvailable;
- (bool)isFeatureEnabled;
- (bool)isFeatureStrictModeEnabled;
- (bool)isFeatureSupported;
- (bool)isSensorTrusted;
- (id)ratchetState;
- (void)ratchetStateCompositeWithCompletion:(id /* block */)arg1;
- (void)ratchetStateWithCompletion:(id /* block */)arg1;

@end
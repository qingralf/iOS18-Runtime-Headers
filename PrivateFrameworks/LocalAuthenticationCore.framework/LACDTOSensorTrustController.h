/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOSensorTrustController : NSObject <LACEvaluationRequestProcessor> {
    <LACFeatureFlagsProviderDTO> * _flags;
    <LACDTOSensorTrustStore> * _store;
    <LACUserInterfacePresenting> * _ui;
    <LACDTOSensorTrustVerifier> * _verifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isHardwareTrustError:(id)arg1;
- (bool)canProcessRequest:(id)arg1;
- (id)initWithReplyQueue:(id)arg1 ui:(id)arg2 store:(id)arg3 verifier:(id)arg4 flags:(id)arg5;
- (void)postProcessRequest:(id)arg1 result:(id)arg2 completion:(id /* block */)arg3;
- (void)processRequest:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;

@end

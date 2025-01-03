/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOServiceXPCHost : NSObject <LACDTOServiceXPC> {
    <LACDTOFeatureControlling> * _featureController;
    <LACDTOPendingPolicyEvaluationController> * _pendingEvaluationController;
    <LACDTORatchetStateProvider> * _ratchetStateProvider;
    <LACDTOSensorTrustStateProvider> * _trustStateProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelPendingEvaluationWithRatchetIdentifier:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)checkCanEnableFeatureWithCompletion:(id /* block */)arg1;
- (void)checkIsFeatureAvailableWithCompletion:(id /* block */)arg1;
- (void)checkIsFeatureEnabledWithCompletion:(id /* block */)arg1;
- (void)checkIsFeatureStrictModeEnabledWithCompletion:(id /* block */)arg1;
- (void)checkIsFeatureSupportedWithCompletion:(id /* block */)arg1;
- (void)checkIsSensorTrustedWithCompletion:(id /* block */)arg1;
- (void)disableFeatureStrictModeWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)disableFeatureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)enableFeatureActivatingGracePeriodWithCompletion:(id /* block */)arg1;
- (void)enableFeatureStrictModeWithCompletion:(id /* block */)arg1;
- (void)enableFeatureWithCompletion:(id /* block */)arg1;
- (id)initWithFeatureController:(id)arg1 ratchetStateProvider:(id)arg2 trustStateProvider:(id)arg3 pendingEvaluationController:(id)arg4;
- (void)ratchetStateCompositeWithCompletion:(id /* block */)arg1;
- (void)ratchetStateWithCompletion:(id /* block */)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRBaseClusterDeviceEnergyManagement : MTRGenericBaseCluster

+ (void)readAttributeAbsMaxPowerWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeAbsMinPowerWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeESACanGenerateWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeESAStateWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeESATypeWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeEventListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeForecastWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeOptOutStateWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributePowerAdjustmentCapabilityWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

- (void)cancelPowerAdjustRequestWithCompletion:(id /* block */)arg1;
- (void)cancelPowerAdjustRequestWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelRequestWithCompletion:(id /* block */)arg1;
- (void)cancelRequestWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)modifyForecastRequestWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)pauseRequestWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)powerAdjustRequestWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)readAttributeAbsMaxPowerWithCompletion:(id /* block */)arg1;
- (void)readAttributeAbsMinPowerWithCompletion:(id /* block */)arg1;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)arg1;
- (void)readAttributeESACanGenerateWithCompletion:(id /* block */)arg1;
- (void)readAttributeESAStateWithCompletion:(id /* block */)arg1;
- (void)readAttributeESATypeWithCompletion:(id /* block */)arg1;
- (void)readAttributeEventListWithCompletion:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)arg1;
- (void)readAttributeForecastWithCompletion:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeOptOutStateWithCompletion:(id /* block */)arg1;
- (void)readAttributePowerAdjustmentCapabilityWithCompletion:(id /* block */)arg1;
- (void)requestConstraintBasedForecastWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)resumeRequestWithCompletion:(id /* block */)arg1;
- (void)resumeRequestWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)startTimeAdjustRequestWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeAttributeAbsMaxPowerWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeAbsMinPowerWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeAttributeListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeClusterRevisionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeESACanGenerateWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeESAStateWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeESATypeWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeEventListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeFeatureMapWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeForecastWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeOptOutStateWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributePowerAdjustmentCapabilityWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;

@end
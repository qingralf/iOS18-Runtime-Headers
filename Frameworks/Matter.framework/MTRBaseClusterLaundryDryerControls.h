/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRBaseClusterLaundryDryerControls : MTRGenericBaseCluster

+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeEventListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeSelectedDrynessLevelWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeSupportedDrynessLevelsWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)arg1;
- (void)readAttributeEventListWithCompletion:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeSelectedDrynessLevelWithCompletion:(id /* block */)arg1;
- (void)readAttributeSupportedDrynessLevelsWithCompletion:(id /* block */)arg1;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeAttributeListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeClusterRevisionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeEventListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeFeatureMapWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeSelectedDrynessLevelWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeSupportedDrynessLevelsWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)writeAttributeSelectedDrynessLevelWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributeSelectedDrynessLevelWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;

@end
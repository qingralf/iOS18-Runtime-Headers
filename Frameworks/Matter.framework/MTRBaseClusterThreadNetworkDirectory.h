/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRBaseClusterThreadNetworkDirectory : MTRGenericBaseCluster

+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeEventListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributePreferredExtendedPanIDWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeThreadNetworkTableSizeWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeThreadNetworksWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

- (void)addNetworkWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)getOperationalDatasetWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)arg1;
- (void)readAttributeEventListWithCompletion:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributePreferredExtendedPanIDWithCompletion:(id /* block */)arg1;
- (void)readAttributeThreadNetworkTableSizeWithCompletion:(id /* block */)arg1;
- (void)readAttributeThreadNetworksWithCompletion:(id /* block */)arg1;
- (void)removeNetworkWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeAttributeListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeClusterRevisionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeEventListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeFeatureMapWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributePreferredExtendedPanIDWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeThreadNetworkTableSizeWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeThreadNetworksWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)writeAttributePreferredExtendedPanIDWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributePreferredExtendedPanIDWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;

@end

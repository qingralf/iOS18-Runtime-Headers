/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMClient : CDMClientInterface <CDMEmbeddingClient, CDMNLUClient, CDMPlannerClient, CDMSsuInferenceClient> {
    CDMClientInterface * _client;
}

+ (id)defaultGraphNameForPlanner;
+ (id)graphNameForEmbedding;
+ (id)graphNameForNLU;
+ (id)graphNameForSsuInference;
+ (id)graphNamesForPlanner;
+ (bool)useXPC;

- (void).cxx_destruct;
- (bool)areAssetsAvailable:(id)arg1;
- (bool)daemonKilled;
- (void)dealloc;
- (void)doHandleCommand:(id)arg1 forCallback:(id /* block */)arg2;
- (void)doServiceCenterInitWithConfig:(id)arg1;
- (id)errorFromSetup;
- (id)init;
- (void)initProxyObject:(bool)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initWithXPC:(bool)arg1;
- (id)initWithXPCDelegate:(bool)arg1 withDelegate:(id)arg2;
- (bool)isLighthouseAPIEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)processCDMNluRequest:(id)arg1;
- (void)processCDMNluRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processEmbeddingRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processEmbeddingRequest:(id)arg1 requestId:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processNLUPreprocessRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processPlannerRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processSsuInferenceRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processText:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processText:(id)arg1 requestConnectionId:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)registerWithAssetsDelegate:(id)arg1 withType:(long long)arg2;
- (void)setDataDispatcherContext:(id)arg1;
- (void)setup:(id)arg1;
- (void)setup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setupKVOForwarding;
- (void)setupNLUWithLocale:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setupSsuInference:(id)arg1 serviceStateDirectory:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setupWithLocale:(id)arg1 embeddingVersion:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setupWithLocale:(id)arg1 forGraph:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sharedInitTasks;
- (bool)successFromSetup;
- (void)waitForDataDispatcherCompletion;
- (void)warmupWithCompletionHandler:(id /* block */)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface AssistantSiriAnalyticsService : NSObject <SiriAnalyticsSensitiveConditionsObserverDelegate> {
    AssistantSiriAnalyticsClockWatcher * _clockWatcher;
    <SiriAnalyticsServiceHostDelegate> * _delegate;
    SiriAnalyticsFBFStorage * _fbf;
    _TtC13SiriAnalytics32SiriAnalyticsFirstUnlockObserver * _firstUnlockObserver;
    SiriAnalyticsClockInactivityScheduler * _inactivityScheduler;
    SiriAnalyticsInternalTelemetry * _internalTelemetry;
    bool  _killSwitchEnabled;
    SiriAnalyticsLargeMessageStorage * _largeMessageStorage;
    SiriAnalyticsMessageProcessingStrategy * _messageProcessingStrategy;
    SiriAnalyticsMessageResolutionPipeline * _messageResolutionPipeline;
    _TtC13SiriAnalytics27SiriAnalyticsMessageStaging * _messageStaging;
    SiriAnalyticsMessageStore * _messageStore;
    AssistantSiriAnalyticsMessageTailing * _messageTailing;
    SiriAnalyticsMetastore * _metastore;
    SiriAnalyticsPreferences * _preferences;
    SiriAnalyticsPreprocessor * _preprocessor;
    NSObject<OS_dispatch_queue> * _queue;
    SiriAnalyticsRawUnifiedStream * _rawUnifiedStream;
    SiriAnalyticsSensitiveConditionsObservers * _sensitiveConditionsObservers;
    SiriAnalyticsXPCServiceListener * _siriAnalyticsListener;
    SiriAnalyticsUserHistoryPolicy * _userHistoryPolicy;
    SiriAnalyticsWhiteRose * _whiteRose;
}

- (void).cxx_destruct;
- (bool)_analyticsEnabled;
- (void)_bootstrapStorageOnQueueWithCompletion:(id /* block */)arg1;
- (void)_bootstrapStorageWithCompletion:(id /* block */)arg1;
- (void)_buildDependenciesOnQueue;
- (void)_buildDependenciesWithCompletion:(id /* block */)arg1;
- (id)_getPreprocessor;
- (void)_setupIncomingConnections;
- (void)_setupMaintenanceWorkOnQueueWithCompletion:(id /* block */)arg1;
- (void)_setupMaintenanceWorkWithCompletion:(id /* block */)arg1;
- (void)handler:(id)arg1 createTag:(id)arg2 completion:(id /* block */)arg3;
- (void)handler:(id)arg1 fetchKillSwitchWithCompletion:(id /* block */)arg2;
- (void)handler:(id)arg1 fetchLogicalClocks:(id /* block */)arg2;
- (void)handler:(id)arg1 fetchStateForPluginName:(id)arg2 completion:(id /* block */)arg3;
- (void)handler:(id)arg1 fetchTags:(id /* block */)arg2;
- (void)handler:(id)arg1 largeMessageReceivedWithPath:(id)arg2 requestIdentifier:(id)arg3 messageWrapper:(id)arg4 completion:(id /* block */)arg5;
- (void)handler:(id)arg1 messagesReceived:(id)arg2;
- (void)handler:(id)arg1 purgeStagedMessagesWithCompletion:(id /* block */)arg2;
- (void)handler:(id)arg1 resetLogicalClockWithCompletion:(id /* block */)arg2;
- (void)handler:(id)arg1 runPipelineWithCompletion:(id /* block */)arg2;
- (void)handler:(id)arg1 saveState:(id)arg2 forPluginName:(id)arg3 completion:(id /* block */)arg4;
- (void)handler:(id)arg1 sensitiveCondition:(int)arg2 endedAt:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)handler:(id)arg1 sensitiveCondition:(int)arg2 startedAt:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)handler:(id)arg1 setKillSwitchEnabled:(bool)arg2 completion:(id /* block */)arg3;
- (void)handler:(id)arg1 unorderedMessagesReceived:(id)arg2 topic:(id)arg3;
- (void)handler:(id)arg1 unresolvedMessagesReceived:(id)arg2;
- (void)handler:(id)arg1 vendResource:(long long)arg2 readonly:(bool)arg3 completion:(id /* block */)arg4;
- (void)handler:(id)arg1 vendSandboxExtensionWithResource:(long long)arg2 readonly:(bool)arg3 completion:(id /* block */)arg4;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (void)registerMessageResolver:(id)arg1;
- (void)registerSensitiveConditionsObserver:(id)arg1;
- (void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2;
- (void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2;
- (void)sensitiveConditionRangesForBootSessionUUIDs:(id)arg1 completion:(id /* block */)arg2;

@end

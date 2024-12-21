/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface WAClient : NSObject {
    double  _allowPurgeJSONFilesAfterSec;
    unsigned char  _blockDaemonConnection;
    NSMutableDictionary * _configuredMessageIdentifiers;
    NSXPCConnection * _conn;
    double  _connectionRecoveryStartTime;
    unsigned char  _daemonConnectionValid;
    NSDictionary * _deviceAnalyticsConfig;
    NSObject<OS_dispatch_queue> * _fileHandlingQueue;
    NSString * _identifierForThisClient;
    NSMutableDictionary * _interestedMessageIdentifiers;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSObject<OS_dispatch_queue> * _queryableQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queuedInvocations;
    id /* block */  _recoveryTickBlock;
    NSMutableSet * _registeredGroupTypes;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSString * _tokenForThisClient;
    NSURL * _wifianalyticsTmpDir;
}

@property (nonatomic) double allowPurgeJSONFilesAfterSec;
@property (nonatomic) unsigned char blockDaemonConnection;
@property (nonatomic, retain) NSMutableDictionary *configuredMessageIdentifiers;
@property (nonatomic, retain) NSXPCConnection *conn;
@property (nonatomic) double connectionRecoveryStartTime;
@property (nonatomic) unsigned char daemonConnectionValid;
@property (nonatomic, retain) NSDictionary *deviceAnalyticsConfig;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fileHandlingQueue;
@property (nonatomic, retain) NSString *identifierForThisClient;
@property (nonatomic, retain) NSMutableDictionary *interestedMessageIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queryableQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableArray *queuedInvocations;
@property (nonatomic, copy) id /* block */ recoveryTickBlock;
@property (nonatomic, retain) NSMutableSet *registeredGroupTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *replyQueue;
@property (nonatomic, retain) NSString *tokenForThisClient;
@property (nonatomic, retain) NSURL *wifianalyticsTmpDir;

+ (id)sharedClient;
+ (id)sharedClientWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_clearMessageStoreAndReply:(id /* block */)arg1 queuedInvocation:(id)arg2;
- (void)_connectionRecovered;
- (void)_connectionRecoveryTick;
- (void)_connectionTimedOut;
- (void)_dequeueInvocation:(id)arg1;
- (void)_establishDaemonConnection;
- (id /* block */)_getConnectionIssueHandlerBlock;
- (void)_getDeviceAnalyticsConfigurationAndReply:(id /* block */)arg1 queuedInvocation:(id)arg2;
- (void)_getDpsStatsandReply:(id /* block */)arg1 queuedInvocation:(id)arg2;
- (void)_getMessagesModelForGroupType:(long long)arg1 andReply:(id /* block */)arg2 queuedInvocation:(id)arg3;
- (void)_getNewMessageForKey:(id)arg1 groupType:(long long)arg2 withCopy:(id)arg3 andReply:(id /* block */)arg4 queuedInvocation:(id)arg5;
- (void)_getUsageStatsandReply:(id /* block */)arg1 queuedInvocation:(id)arg2;
- (id)_initPrivate;
- (void)_issueIOReportManagementCommand:(unsigned long long)arg1 andReply:(id /* block */)arg2 queuedInvocation:(id)arg3;
- (void)_killDaemonAndReply:(id /* block */)arg1 queuedInvocation:(id)arg2;
- (void)_lqmCrashTracerNotifyForInterfaceWithName:(id)arg1 andReply:(id /* block */)arg2 queuedInvocation:(id)arg3;
- (void)_lqmCrashTracerReceiveBlock:(id)arg1 forInterfaceWithName:(id)arg2 andReply:(id /* block */)arg3 queuedInvocation:(id)arg4;
- (void)_processWAMessageForCoreAnalytics:(id)arg1;
- (long long)_processWAMessageForJSONDump:(id)arg1;
- (void)_registerMessageGroup:(long long)arg1 andReply:(id /* block */)arg2 queuedInvocation:(id)arg3;
- (void)_removeAllQueuedInvocations;
- (void)_replyAllWithTimeoutErrorAndRemove;
- (void)_reregister;
- (void)_sendMemoryPressureRequestAndReply:(id /* block */)arg1 queuedInvocation:(id)arg2;
- (void)_setDeviceAnalyticsConfiguration:(id)arg1 andReply:(id /* block */)arg2 queuedInvocation:(id)arg3;
- (void)_startConnectionRecovery;
- (void)_submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(id /* block */)arg3 queuedInvocation:(id)arg4;
- (void)_submitWiFiAnalyticsMessageAdvanced:(id)arg1 andReply:(id /* block */)arg2 queuedInvocation:(id)arg3;
- (void)_trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(id /* block */)arg2 queuedInvocation:(id)arg3;
- (void)_triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(id /* block */)arg3 queuedInvocation:(id)arg4;
- (void)_triggerDeviceAnalyticsStoreMigrationAndReply:(id /* block */)arg1 queuedInvocation:(id)arg2;
- (void)_triggerQueryForNWActivity:(long long)arg1 andReply:(id /* block */)arg2 queuedInvocation:(id)arg3;
- (void)_wakeUpNotificationForThisClientReceived:(id)arg1;
- (long long)_writeWiFiAnalyticsMessageToJSONFile:(id)arg1 metricInfo:(id)arg2;
- (double)allowPurgeJSONFilesAfterSec;
- (unsigned char)blockDaemonConnection;
- (void)clearMessageStoreAndReply:(id /* block */)arg1;
- (id)configuredMessageIdentifiers;
- (id)conn;
- (double)connectionRecoveryStartTime;
- (void)convertWiFiStatsIntoPercentile:(id)arg1 analysisGroup:(long long)arg2 groupTarget:(id)arg3 andReply:(id /* block */)arg4;
- (void)convertWiFiStatsIntoPercentile:(id)arg1 analysisGroup:(long long)arg2 groupTarget:(id)arg3 andReply:(id /* block */)arg4 queuedInvocation:(id)arg5;
- (unsigned char)daemonConnectionValid;
- (void)dealloc;
- (id)deviceAnalyticsConfig;
- (void)fakeDaemonConnectionDead:(unsigned char)arg1;
- (id)fileHandlingQueue;
- (void)getDeviceAnalyticsConfigurationAndReply:(id /* block */)arg1;
- (void)getDpsStatsandReply:(id /* block */)arg1;
- (void)getMessagesModelForGroupType:(long long)arg1 andReply:(id /* block */)arg2;
- (void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(id /* block */)arg3;
- (void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 withCopy:(id)arg3 andReply:(id /* block */)arg4;
- (void)getUsageStatsandReply:(id /* block */)arg1;
- (id)identifierForThisClient;
- (id)init;
- (id)interestedMessageIdentifiers;
- (void)issueIOReportManagementCommand:(unsigned long long)arg1 andReply:(id /* block */)arg2;
- (void)killDaemonAndReply:(id /* block */)arg1;
- (void)lqmCrashTracerNotifyForInterfaceWithName:(id)arg1 andReply:(id /* block */)arg2;
- (void)lqmCrashTracerReceiveBlock:(id)arg1 forInterfaceWithName:(id)arg2 andReply:(id /* block */)arg3;
- (id)propertyQueue;
- (id)queryableQueue;
- (id)queue;
- (id)queuedInvocations;
- (id /* block */)recoveryTickBlock;
- (void)registerMessageGroup:(long long)arg1 andReply:(id /* block */)arg2;
- (id)registeredGroupTypes;
- (id)replyQueue;
- (void)sendMemoryPressureRequestAndReply:(id /* block */)arg1;
- (void)setAllowPurgeJSONFilesAfterSec:(double)arg1;
- (void)setBlockDaemonConnection:(unsigned char)arg1;
- (void)setConfiguredMessageIdentifiers:(id)arg1;
- (void)setConn:(id)arg1;
- (void)setConnectionRecoveryStartTime:(double)arg1;
- (void)setDaemonConnectionValid:(unsigned char)arg1;
- (void)setDeviceAnalyticsConfig:(id)arg1;
- (void)setDeviceAnalyticsConfiguration:(id)arg1 andReply:(id /* block */)arg2;
- (void)setFileHandlingQueue:(id)arg1;
- (void)setIdentifierForThisClient:(id)arg1;
- (void)setInterestedMessageIdentifiers:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setQueryableQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueuedInvocations:(id)arg1;
- (void)setRecoveryTickBlock:(id /* block */)arg1;
- (void)setRegisteredGroupTypes:(id)arg1;
- (void)setReplyQueue:(id)arg1;
- (void)setTokenForThisClient:(id)arg1;
- (void)setWifianalyticsTmpDir:(id)arg1;
- (void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(id /* block */)arg3;
- (void)submitWiFiAnalyticsMessageAdvanced:(id)arg1;
- (void)summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2 andReply:(id /* block */)arg3;
- (void)summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2 andReply:(id /* block */)arg3 queuedInvocation:(id)arg4;
- (id)tokenForThisClient;
- (void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(id /* block */)arg2;
- (void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(id /* block */)arg3;
- (void)triggerDeviceAnalyticsStoreMigrationAndReply:(id /* block */)arg1;
- (void)triggerQueryForNWActivity:(long long)arg1 andReply:(id /* block */)arg2;
- (id)wifianalyticsTmpDir;

@end
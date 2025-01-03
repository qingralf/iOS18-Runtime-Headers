/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTStandardIDService : NSObject <MTIDService> {
    MTInterprocessChangeNotifier * _accountChanged;
    NSString * _applicationBundleIdentifierOverrideForNetworkAttribution;
    NSMutableDictionary * _associatedObjects;
    MTIDCache * _cache;
    MTIDConfig * _cachedConfig;
    MTPromise * _configDictPromise;
    NSNumber * _defaultDSID;
    NSNumber * _dsId;
    <MTIDSecretStore> * _secretStore;
}

@property (nonatomic, retain) MTInterprocessChangeNotifier *accountChanged;
@property (nonatomic, copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic, retain) NSMutableDictionary *associatedObjects;
@property (nonatomic, retain) MTIDCache *cache;
@property (nonatomic, retain) MTIDConfig *cachedConfig;
@property (nonatomic, retain) MTPromise *configDictPromise;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) NSNumber *defaultDSID;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *dsId;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTIDSecretStore> *secretStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (bool)isTinkerPaired;
+ (id)localCachePath;
+ (void)registerInterprocessChangeNotifier:(id)arg1;
+ (void)setLocalCachePath:(id)arg1;
+ (void)triggerInterprocessChangeNotifier:(id)arg1;
+ (id)writeDebugData:(id)arg1 toFileWithNameFormat:(id)arg2;

- (void).cxx_destruct;
- (id)IDFieldsForTopic:(id)arg1 options:(id)arg2;
- (void)IDFieldsForTopic:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)IDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3;
- (id)IDInfoForNamespace:(id)arg1 options:(id)arg2 fromConfig:(id)arg3;
- (id)IDsForNamespaces:(id)arg1 options:(id)arg2 fromConfig:(id)arg3;
- (id)_IDInfoForNamespace:(id)arg1 options:(id)arg2 fromConfig:(id)arg3;
- (void)_clearLocalData;
- (void)_getConfig;
- (void)_getIDs;
- (void)_getSecrets;
- (void)_resetIDs;
- (id)accountChanged;
- (id)applicationBundleIdentifierOverrideForNetworkAttribution;
- (id)associatedObjects;
- (id)cache;
- (id)cachedConfig;
- (id)configDictPromise;
- (id)configPromise;
- (void)dealloc;
- (id)defaultDSID;
- (id)dsId;
- (id)filledOptions:(id)arg1;
- (void)flushPerfKitEvents;
- (id)generateIDInfo:(id)arg1 secret:(id)arg2 dsId:(id)arg3 correlationIDs:(id)arg4;
- (void)handleAccountNotification;
- (void)handleApplicationStateChange:(id)arg1;
- (void)handleRecordNotification;
- (void)handleResetNotification:(id)arg1;
- (id)init;
- (id)initWithAMSBag:(id)arg1;
- (id)initWithConfigDictPromise:(id)arg1 bag:(id)arg2;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithConfigPromise:(id)arg1;
- (void)maybeSubscribeToDarwinNotifications;
- (void)performMaintenanceWithCompletion:(id /* block */)arg1;
- (void)queryIDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)resetIDForTopics:(id)arg1 options:(id)arg2;
- (void)resetIDForTopics:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)secretStore;
- (id)secretValueForNamespace:(id)arg1 options:(id)arg2;
- (id)serialQueue;
- (void)setAccountChanged:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(id)arg1;
- (void)setAssociatedObjects:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCachedConfig:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setConfigDictPromise:(id)arg1;
- (void)setDefaultDSID:(id)arg1;
- (void)setDsId:(id)arg1;
- (void)setSecretStore:(id)arg1;
- (id)sync;
- (id)sync:(id)arg1;

@end

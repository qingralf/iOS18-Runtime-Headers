/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBag : NSObject <AMSBagProtocol, AMSMescalBagContract, AMSMetricsBagContract> {
    NSObject<OS_dispatch_queue> * _changeNotificationQueue;
    <AMSBagDataSourceProtocol> * _dataSource;
    AMSBagUnderlyingDataPersistence * _persistence;
    bool  _persistenceAPIWasCalled;
    NSObject<OS_dispatch_queue> * _persistenceQueue;
    AMSProcessInfo * _processInfo;
    AMSBagUnderlyingData * _temporaryPreloadedBagData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _updateHandlerConsistencyLock;
    AMSBagCachedValueUpdateHandlers * _updateHandlers;
}

@property (nonatomic, readonly) AMSBagValue *TFOSamplingPercentage; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *TFOSamplingSessionDuration; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *TLSSamplingPercentage; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *TLSSamplingSessionDuration; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *apsAllowedProductTypes; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *apsEnabledPatterns; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *apsSamplingPercent; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *changeNotificationQueue;
@property (nonatomic, retain) <AMSBagDataSourceProtocol> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionExtended;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) AMSBagValue *guidRegexes; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *guidSchemes; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSBagValue *mescalCertificateURL;
@property (nonatomic, readonly) <AMSMescalBagContract> *mescalContract; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *mescalPrimingURL; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *mescalSetupURL;
@property (nonatomic, readonly) AMSBagValue *mescalSignSapRequests; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *mescalSignSapResponses; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *mescalSignedActions; /* unknown property attribute: ? */
@property (nonatomic, readonly) <AMSMetricsBagContract> *metricsContract; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *metricsDictionary; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *metricsURL; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagValue *metricsUrl; /* unknown property attribute: ? */
@property (nonatomic, readonly) AMSBagUnderlyingDataPersistence *persistence;
@property bool persistenceAPIWasCalled;
@property (nonatomic, readonly) bool persistenceIsEnabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (nonatomic, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (nonatomic, readonly) AMSBagValue *storefrontSuffix; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSBagUnderlyingData *temporaryPreloadedBagData;
@property (nonatomic, readonly) AMSBagValue *trustedDomains; /* unknown property attribute: ? */
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } updateHandlerConsistencyLock;
@property (nonatomic, readonly) AMSBagCachedValueUpdateHandlers *updateHandlers;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)_bagForProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3 accountProvider:(id)arg4;
+ (id)bagCache;
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2;
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3;
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3 account:(id)arg4;
+ (void)resetBagCache;
+ (id)sharedPersistenceQueue;
+ (id)sharedPersistenceWithDefaultDirectory;
+ (unsigned long long)uninitializedToken;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLForKey:(id)arg1 account:(id)arg2;
- (id)URLFromURLString:(id)arg1;
- (id)URLFromURLString:(id)arg1 account:(id)arg2;
- (id)_availableValuesFromCachedData:(id)arg1 keys:(id)arg2 partialIdentifier:(id)arg3 expirationDate:(id)arg4 updateHandler:(id /* block */)arg5 outToken:(unsigned long long*)arg6;
- (id)_availableValuesFromPersistedBagData:(id)arg1 error:(id)arg2 keys:(id)arg3 partialIdentifier:(id)arg4 updateHandler:(id /* block */)arg5 outToken:(unsigned long long*)arg6;
- (void)_configureDataSourceHandlers;
- (id)_initWithDataSource:(id)arg1 persistence:(id)arg2 persistenceQueue:(id)arg3 updateHandlers:(id)arg4 shouldConfigureDataSourceHandlers:(bool)arg5;
- (void)_loadAndPersistBag;
- (void)_persistBagDictionary:(id)arg1 withIdentifier:(id)arg2 partialIdentifier:(id)arg3 expirationDate:(id)arg4 onlyIfPreExisting:(bool)arg5;
- (id)_temporaryDictionary;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)cachedValuesForKeys:(id)arg1 observationToken:(unsigned long long*)arg2 updateHandler:(id /* block */)arg3;
- (id)changeNotificationQueue;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dataSource;
- (id)description;
- (id)descriptionExtended;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 persistenceDirectoryURL:(id)arg2 persistenceQueue:(id)arg3 changeHandlerQueue:(id)arg4 shouldConfigureDataSourceHandlers:(bool)arg5;
- (id)initWithDataSource:(id)arg1 shouldConfigureDataSourceHandlers:(bool)arg2;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (bool)isLoaded;
- (id)persistence;
- (bool)persistenceAPIWasCalled;
- (bool)persistenceIsEnabled;
- (id)persistenceQueue;
- (id)processInfo;
- (id)profile;
- (id)profileVersion;
- (void)removeObserverWithToken:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)setPersistenceAPIWasCalled:(bool)arg1;
- (void)setProcessInfo:(id)arg1;
- (void)setTemporaryPreloadedBagData:(id)arg1;
- (void)setUpdateHandlerConsistencyLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (id)stringForKey:(id)arg1;
- (id)temporaryPreloadedBagData;
- (struct os_unfair_lock_s { unsigned int x1; })updateHandlerConsistencyLock;
- (id)updateHandlers;
- (void)waitUntilPersistenceWorkComplete;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)vs_defaultBag;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

+ (id)amsui_internalBag;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

+ (id)metricsAMSBagWithProfileName:(id)arg1 profileVersion:(id)arg2;

- (id)mescalCertificateURL;
- (id)mescalPrimingURL;
- (id)mescalSetupURL;
- (id)mescalSignSapRequests;
- (id)mescalSignSapResponses;
- (id)mescalSignedActions;
- (id)metricsDictionary;
- (id)trustedDomains;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)vui_defaultBag;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (id)wlk_defaultBag;

// Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota

+ (id)quotaBag;

@end

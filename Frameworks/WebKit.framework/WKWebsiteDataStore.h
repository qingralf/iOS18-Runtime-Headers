/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebsiteDataStore : NSObject <NSSecureCoding, WKObject> {
    struct WeakObjCPtr<id<_WKWebsiteDataStoreDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _proxyConfigurations;
    struct ObjectStorage<WebKit::WebsiteDataStore> { 
        struct type { 
            unsigned char __lx[504]; 
        } data; 
    }  _websiteDataStore;
}

@property (setter=_setAllowsCellularAccess:, nonatomic) bool _allowsCellularAccess;
@property (setter=_setAllowsTLSFallback:, nonatomic) bool _allowsTLSFallback;
@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (setter=_setBoundInterfaceIdentifier:, nonatomic) NSString *_boundInterfaceIdentifier;
@property (nonatomic, readonly, copy) _WKWebsiteDataStoreConfiguration *_configuration;
@property (nonatomic) <_WKWebsiteDataStoreDelegate> *_delegate;
@property (nonatomic, readonly) NSUUID *_identifier;
@property (setter=_setPerOriginStorageQuota:, nonatomic) unsigned long long _perOriginStorageQuota;
@property (setter=_setPersistedSites:, nonatomic) NSArray *_persistedSites;
@property (setter=_setProxyConfiguration:, nonatomic) NSDictionary *_proxyConfiguration;
@property (setter=_setResourceLoadStatisticsDebugMode:, nonatomic) bool _resourceLoadStatisticsDebugMode;
@property (setter=_setResourceLoadStatisticsEnabled:, nonatomic) bool _resourceLoadStatisticsEnabled;
@property (setter=_setStorageSiteValidationEnabled:, nonatomic) bool _storageSiteValidationEnabled;
@property (nonatomic, readonly) NSString *_webPushPartition;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKHTTPCookieStore *httpCookieStore;
@property (nonatomic, readonly) NSUUID *identifier;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (nonatomic, copy) NSArray *proxyConfigurations;
@property (nonatomic, readonly) NSString *safari_profileIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_allWebsiteDataTypesIncludingPrivate;
+ (void)_allowWebsiteDataRecordsForAllOrigins;
+ (bool)_defaultDataStoreExists;
+ (bool)_defaultNetworkProcessExists;
+ (void)_deleteDefaultDataStoreForTesting;
+ (void)_fetchAllIdentifiers:(id /* block */)arg1;
+ (void)_makeNextNetworkProcessLaunchFailForTesting;
+ (void)_removeDataStoreWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_setCachedProcessSuspensionDelayForTesting:(double)arg1;
+ (void)_setNetworkProcessSuspensionAllowedForTesting:(bool)arg1;
+ (void)_setWebPushActionHandler:(id /* block */)arg1;
+ (struct OpaqueWKNotificationManager { }*)_sharedServiceWorkerNotificationManager;
+ (bool)accessInstanceVariablesDirectly;
+ (id)allWebsiteDataTypes;
+ (id)dataStoreForIdentifier:(id)arg1;
+ (id)defaultDataStore;
+ (void)fetchAllDataStoreIdentifiers:(id /* block */)arg1;
+ (bool)handleNotificationResponse:(id)arg1;
+ (id)nonPersistentDataStore;
+ (void)removeDataStoreForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_abortBackgroundFetch:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_allowTLSCertificateChain:(id)arg1 forHost:(id)arg2;
- (bool)_allowsCellularAccess;
- (bool)_allowsTLSFallback;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)_appBoundDomains:(id /* block */)arg1;
- (void)_appBoundSchemes:(id /* block */)arg1;
- (id)_boundInterfaceIdentifier;
- (void)_clearLoadedSubresourceDomainsFor:(id)arg1;
- (void)_clearPrevalentDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_clearResourceLoadStatistics:(id /* block */)arg1;
- (void)_clickBackgroundFetch:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_closeDatabases:(id /* block */)arg1;
- (id)_configuration;
- (void)_countNonDefaultSessionSets:(id /* block */)arg1;
- (id)_delegate;
- (void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_getAllBackgroundFetchIdentifiers:(id /* block */)arg1;
- (void)_getAppBadgeForTesting:(id /* block */)arg1;
- (void)_getBackgroundFetchState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_getIsPrevalentDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_getPendingPushMessage:(id /* block */)arg1;
- (void)_getPendingPushMessages:(id /* block */)arg1;
- (void)_getResourceLoadStatisticsDataSummary:(id /* block */)arg1;
- (void)_grantStorageAccessForTesting:(id)arg1 withSubFrameDomains:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleNextPushMessageWithCompletionHandler:(id /* block */)arg1;
- (void)_handleWebPushAction:(id)arg1;
- (bool)_hasServiceWorkerBackgroundActivityForTesting;
- (id)_identifier;
- (id)_initWithConfiguration:(id)arg1;
- (void)_isRegisteredAsSubresourceUnderFirstParty:(id)arg1 thirdParty:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_isRelationshipOnlyInDatabaseOnce:(id)arg1 thirdParty:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_loadedSubresourceDomainsFor:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_logUserInteraction:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_networkProcessExists;
- (bool)_networkProcessHasEntitlementForTesting:(id)arg1;
- (int)_networkProcessIdentifier;
- (void)_originDirectoryForTesting:(id)arg1 topOrigin:(id)arg2 type:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_pauseBackgroundFetch:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)_perOriginStorageQuota;
- (id)_persistedSites;
- (void)_processPersistentNotificationClick:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_processPersistentNotificationClose:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_processPushMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_processStatisticsAndDataRecords:(id /* block */)arg1;
- (void)_processWebCorePersistentNotificationClick:(const void*)arg1 completionHandler:(id /* block */)arg2;
- (void)_processWebCorePersistentNotificationClose:(const void*)arg1 completionHandler:(id /* block */)arg2;
- (id)_proxyConfiguration;
- (void)_renameOrigin:(id)arg1 to:(id)arg2 forDataOfTypes:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)_resourceLoadStatisticsDebugMode;
- (bool)_resourceLoadStatisticsEnabled;
- (void)_resumeBackgroundFetch:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_scheduleCookieBlockingUpdate:(id /* block */)arg1;
- (void)_scopeURL:(id)arg1 hasPushSubscriptionForTesting:(id /* block */)arg2;
- (void)_sendNetworkProcessDidResume;
- (void)_sendNetworkProcessPrepareToSuspend:(id /* block */)arg1;
- (void)_sendNetworkProcessWillSuspendImminently;
- (void)_setAllowsCellularAccess:(bool)arg1;
- (void)_setAllowsTLSFallback:(bool)arg1;
- (void)_setBackupExclusionPeriodForTesting:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)_setBoundInterfaceIdentifier:(id)arg1;
- (void)_setCompletionHandlerForRemovalFromNetworkProcess:(id /* block */)arg1;
- (void)_setPerOriginStorageQuota:(unsigned long long)arg1;
- (void)_setPersistedSites:(id)arg1;
- (void)_setPrevalentDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setPrivateClickMeasurementDebugModeEnabled:(bool)arg1;
- (void)_setPrivateClickMeasurementDebugModeEnabledForTesting:(bool)arg1;
- (void)_setPrivateTokenIPCForTesting:(bool)arg1;
- (void)_setProxyConfiguration:(id)arg1;
- (void)_setResourceLoadStatisticsDebugMode:(bool)arg1;
- (void)_setResourceLoadStatisticsEnabled:(bool)arg1;
- (void)_setResourceLoadStatisticsTestingCallback:(id /* block */)arg1;
- (void)_setResourceLoadStatisticsTimeAdvanceForTesting:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)_setRestrictedOpenerTypeForTesting:(unsigned char)arg1 forDomain:(id)arg2;
- (void)_setServiceWorkerOverridePreferences:(id)arg1;
- (void)_setStorageAccessPromptQuirkForTesting:(id)arg1 withSubFrameDomains:(id)arg2 withTriggerPages:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_setStorageSiteValidationEnabled:(bool)arg1;
- (void)_setThirdPartyCookieBlockingMode:(bool)arg1 onlyOnSitesWithoutUserInteraction:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_setUserAgentStringQuirkForTesting:(id)arg1 withUserAgent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_statisticsDatabaseHasAllTables:(id /* block */)arg1;
- (bool)_storageSiteValidationEnabled;
- (void)_storeServiceWorkerRegistrations:(id /* block */)arg1;
- (void)_synthesizeAppIsBackground:(bool)arg1;
- (void)_terminateNetworkProcess;
- (void)_trustServerForLocalPCMTesting:(struct __SecTrust { }*)arg1;
- (id)_webPushPartition;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)httpCookieStore;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPersistent;
- (id)proxyConfigurations;
- (void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setProxyConfigurations:(id)arg1;
- (void)set_delegate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)_dataStoresByAutomationSessionIdentifier;
+ (id)_dataStoresByProfileIdentifier;
+ (id)_newDataStoreForAutomationSessionIdentifier:(id)arg1;
+ (id)_newDataStoreForProfileIdentifier:(id)arg1;
+ (id)_safari_dataStoreForProfileWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2 cacheNewDataStoreInMemory:(bool)arg3;
+ (id)safari_allDataTypes;
+ (id)safari_allPersistentDataStores;
+ (void)safari_clearHSTSSuperCookies;
+ (id)safari_dataStoreForAutomationSessionWithIdentifier:(id)arg1;
+ (id)safari_dataStoreForProfileWithIdentifier:(id)arg1;
+ (id)safari_dataStoreForProfileWithIdentifierIfExists:(id)arg1;
+ (id)safari_dataStoreWithConfiguration:(id)arg1;
+ (id)safari_dataStoreWithoutCachingForProfileWithIdentifier:(id)arg1;
+ (id)safari_defaultDataStore;
+ (void)safari_fetchExistingDataStoresForProfilesWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)safari_nonPersistentDataStore;
+ (void)safari_removeDataStoreForProfileWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)safari_setCommonProperties:(id)arg1;
+ (id)safari_webViewForDownloadsForProfileWithIdentifier:(id)arg1;

- (id)safari_profileIdentifier;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface _ASWebsiteNameProvider : NSObject <WBSRemotelyUpdatableDataControllerDelegate, WBSSavedAccountStoreWebsiteNameProvider> {
    WBSPrivacyProxyAvailabilityManager * _availabilityManager;
    NSMutableDictionary * _cachedWebsiteNamesFromDatabase;
    NSMutableDictionary * _cachedWebsiteNamesFromKeychain;
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSObject<OS_dispatch_queue> * _internalQueueForCachedWebsiteNames;
    bool  _isDatabaseOpen;
    bool  _isForTesting;
    WBSRemotelyUpdatableDataController * _remotelyUpdatableDataController;
    NSOperationQueue * _websiteFetchingQueue;
    WBSPasswordManagerWebsiteMetadataStore * _websiteMetadataStore;
    <WBSSavedAccountStoreWebsiteNameConsumer> * _websiteNameConsumer;
    _ASWebsiteNameDictionary * _websiteNameDictionary;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForTesting;
@property (readonly) Class superclass;
@property (nonatomic, retain) <WBSSavedAccountStoreWebsiteNameConsumer> *websiteNameConsumer;

+ (id)_bestTitleFromCandidateTitles:(id)arg1;
+ (id)_candidateWebsiteNameForLinkMetadata:(id)arg1;
+ (bool)_candidateWebsiteNameHasObviousFlaw:(id)arg1;
+ (id)_commonTitleDelimiters;
+ (id)_siteNameFromOpenGraphSiteName:(id)arg1 withURL:(id)arg2;
+ (id)_siteNameFromTitle:(id)arg1 withURL:(id)arg2;
+ (id)_siteNameFromTitleLikeString:(id)arg1 withURL:(id)arg2 useHostAndTitlePrefixMatch:(bool)arg3;
+ (id)_trimErrantLeadingAndTrailingCharacters:(id)arg1;
+ (id)_undesirableCharactersCharacterSet;
+ (void)fetchWebsiteNameForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)siteNameForDomain:(id)arg1 fromBusinessName:(id)arg2 title:(id)arg3 openGraphSiteName:(id)arg4 applicationName:(id)arg5;
+ (id)websiteNameForLinkMetadata:(id)arg1;

- (void).cxx_destruct;
- (void)_cacheDatabaseBackedWebsiteName:(id)arg1 forDomain:(id)arg2;
- (void)_cacheFetchedAndKeychainBackedWebsiteName:(id)arg1 forDomain:(id)arg2;
- (id)_initWithShouldLoadQuirksList:(bool)arg1;
- (bool)_openDatabaseIfNeeded;
- (void)_privacyProxyDidChange:(id)arg1;
- (void)_processFetchedMetadataEntry:(id)arg1 forDomain:(id)arg2;
- (void)_suspendOrResumeWebsiteFetchingOperationQueue;
- (void)beginLoadingBuiltInAndRemotelyUpdatableWebsiteNames;
- (void)dealloc;
- (void)debug_deleteAllPersistedData;
- (void)debug_fetchWebsiteNamesForDomains:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchOperation:(id)arg1 finishedWithResult:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initForPasswordManager;
- (bool)isForTesting;
- (id)knownWebsiteNameForDomain:(id)arg1;
- (void)prepareForTermination;
- (void)prewarm;
- (void)setIsForTesting:(bool)arg1;
- (void)setWebsiteNameConsumer:(id)arg1;
- (id)test_initWithWebsiteNameDictionary:(id)arg1;
- (void)test_waitUntilBuiltInAndRemotelyUpdatableWebsiteNamesAreLoaded;
- (id)websiteNameConsumer;

@end
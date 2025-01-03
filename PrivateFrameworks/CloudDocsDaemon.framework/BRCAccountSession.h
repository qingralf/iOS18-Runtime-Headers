/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver, BRCSessionContext, BRCZoneAppRetriever> {
    NSString * _acAccountID;
    BRDSIDString * _accountDSID;
    BRCAccountHandler * _accountHandler;
    bool  _accountIsReady;
    BRCAccountWaitOperation * _accountWaitOperation;
    BRCAnalyticsReporter * _analyticsReporter;
    NSMutableDictionary * _appLibrariesByRowID;
    BRCThrottle * _appLibraryAliasRemovalThrottle;
    BRCThrottle * _appLibraryResetThrottle;
    BRCThrottle * _appLibraryScanThrottle;
    BRCApplyScheduler * _applyScheduler;
    BRCTimerScheduler * _autoResumeSyncTimerScheduler;
    unsigned long long  _availableDiskSpace;
    NSString * _cacheDirPath;
    BRCPQLConnection * _clientDB;
    BRCClientState * _clientState;
    NSObject<OS_dispatch_workloop> * _clientTruthWorkloop;
    int  _cloudDocsFD;
    BRCContainerScheduler * _containerScheduler;
    NSString * _databaseID;
    NSObject<OS_dispatch_queue> * _dbCorruptionQueue;
    NSObject<OS_dispatch_queue> * _dbFixupQueue;
    BRCBarrier * _dbLoadingBarrier;
    id /* block */  _dbProfilingHook;
    NSURL * _dbURL;
    NSObject<OS_dispatch_source> * _dbWatcher;
    NSObject<OS_dispatch_queue> * _dbWatcherQueue;
    BRCDeadlineScheduler * _defaultScheduler;
    BRCDiskSpaceReclaimer * _diskReclaimer;
    BRCDownloadTrackers * _downloadTrackers;
    BRCPQLConnection * _expensiveReadOnlyDB;
    BRCFairScheduler * _fairClientDBScheduler;
    BRCFileUnlinker * _fileUnlinker;
    bool  _forDBDump;
    NSFileProviderDomain * _fpDomain;
    BRCFSDownloader * _fsDownloader;
    NSMutableDictionary * _fsEventsMonitors;
    BRCFSReader * _fsReader;
    BRCFSUploader * _fsUploader;
    BRCFSWriter * _fsWriter;
    BRCGlobalProgress * _globalProgress;
    bool  _isCancelled;
    bool  _isDBOpened;
    bool  _isDataSeparated;
    bool  _isGreedy;
    NSNumber * _isInCarry;
    bool  _isOpen;
    BRCItemTransmogrifier * _itemTransmogrifier;
    unsigned long long  _lastDiskSpaceCheckTime;
    NSMutableDictionary * _libraryRowIDsByMangledID;
    BRCThrottle * _lostItemThrottle;
    NSHashTable * _miscOperations;
    BRCNotificationManager * _notificationManager;
    bool  _offline;
    BRCThrottle * _operationFailureThrottle;
    NSString * _personaIdentifier;
    NSMutableDictionary * _privateClientZonesByID;
    NSMutableDictionary * _privateServerZonesByID;
    BRCPQLConnection * _readOnlyDB;
    NSObject<OS_dispatch_workloop> * _readOnlyWorkloop;
    BRCRecentsEnumerator * _recentsEnumerator;
    br_pacer * _reschedulePendingDiskItemsPacer;
    NSObject<OS_dispatch_queue> * _resetQueue;
    bool  _resumed;
    NSMutableDictionary * _rootsByFolderType;
    BRCPQLConnection * _serverDB;
    BRCServerPersistedState * _serverState;
    NSObject<OS_dispatch_workloop> * _serverTruthWorkloop;
    NSMutableDictionary * _serverZonesByZoneRowID;
    NSString * _sessionDirPath;
    BRCThrottle * _sharedAppLibraryResetThrottle;
    NSMutableDictionary * _sharedClientZonesByMangledID;
    NSMutableDictionary * _sharedServerZonesByMangledID;
    BRCStageRegistry * _stageRegistry;
    BRCThrottle * _syncClientZoneErrorThrottle;
    BRCThrottle * _syncClientZoneThrottle;
    BRCSyncContextProvider * _syncContextProvider;
    BRCSyncUpScheduler * _syncUpScheduler;
    BRCTapToRadarManager * _tapToRadarManager;
    unsigned long long  _totalDiskSpace;
    NSString * _ubiquityTokenSalt;
    br_pacer * _updateDiskSpacePacer;
    BRCUserNotification * _userNotification;
    BRCVolume * _volume;
    NSMutableSet * _xpcClients;
    struct brc_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } pthread; 
    }  _zonesCreationLock;
    struct brc_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } pthread; 
    }  _zonesLock;
}

@property (nonatomic, readonly) BRDSIDString *accountDSID;
@property (nonatomic, readonly) BRCAccountHandler *accountHandler;
@property (nonatomic, readonly) BRCAccountWaitOperation *accountWaitOperation;
@property (nonatomic, readonly) BRCAnalyticsReporter *analyticsReporter;
@property (nonatomic, readonly) BRCThrottle *appLibraryAliasRemovalThrottle;
@property (nonatomic, readonly) BRCThrottle *appLibraryResetThrottle;
@property (nonatomic, readonly) BRCThrottle *appLibraryScanThrottle;
@property (nonatomic, readonly) BRCApplyScheduler *applyScheduler;
@property (nonatomic, readonly) BRCTimerScheduler *autoResumeSyncTimerScheduler;
@property (nonatomic, readonly) unsigned long long availableDiskSpace;
@property (nonatomic, retain) NSString *cacheDirPath;
@property (nonatomic, readonly) BRCPQLConnection *clientDB;
@property (nonatomic, readonly) BRCClientState *clientState;
@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *clientTruthWorkloop;
@property (nonatomic, readonly) BRCContainerScheduler *containerScheduler;
@property (nonatomic, readonly) NSString *databaseID;
@property (nonatomic, readonly) unsigned long long databaseIDHash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dbFixupQueue;
@property (nonatomic, readonly) BRCBarrier *dbLoadingBarrier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) BRCDeadlineScheduler *defaultScheduler;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BRCDiskSpaceReclaimer *diskReclaimer;
@property (nonatomic, readonly) <BRCDownloadStagingProtocol> *downloadStager;
@property (nonatomic, readonly) BRCDownloadTrackers *downloadTrackers;
@property (nonatomic, readonly) BRCPQLConnection *expensiveReadOnlyDB;
@property (nonatomic, readonly) BRCFairScheduler *fairClientDBScheduler;
@property (nonatomic, readonly) BRCFileUnlinker *fileUnlinker;
@property (nonatomic, retain) NSFileProviderDomain *fpDomain;
@property (nonatomic, readonly) BRCFSDownloader *fsDownloader;
@property (nonatomic, readonly) BRCFSReader *fsReader;
@property (nonatomic, readonly) BRCFSUploader *fsUploader;
@property (nonatomic, readonly) BRCFSWriter *fsWriter;
@property (nonatomic, readonly) BRCGlobalProgress *globalProgress;
@property (nonatomic, readonly) bool hasOptimizeStorageEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isDataSeparated;
@property (nonatomic, readonly) bool isGreedy;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly) BRCItemTransmogrifier *itemTransmogrifier;
@property (nonatomic, readonly) BRCThrottle *lostItemThrottle;
@property (nonatomic, readonly) BRCNotificationManager *notificationManager;
@property (nonatomic, readonly) bool offline;
@property (nonatomic, readonly) BRCThrottle *operationFailureThrottle;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, readonly) BRCPQLConnection *readOnlyDB;
@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *readOnlyWorkloop;
@property (nonatomic, readonly) BRCRecentsEnumerator *recentsEnumerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resetQueue;
@property (nonatomic, readonly) BRCPQLConnection *serverDB;
@property (nonatomic, readonly) BRCServerPersistedState *serverState;
@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *serverTruthWorkloop;
@property (nonatomic, retain) NSString *sessionDirPath;
@property (nonatomic, readonly) BRCThrottle *sharedAppLibraryResetThrottle;
@property (nonatomic, readonly) BRCStageRegistry *stageRegistry;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BRCThrottle *syncClientZoneErrorThrottle;
@property (nonatomic, readonly) BRCThrottle *syncClientZoneThrottle;
@property (nonatomic, readonly) BRCSyncContextProvider *syncContextProvider;
@property (nonatomic, readonly) BRCSyncUpScheduler *syncUpScheduler;
@property (nonatomic, readonly) <BRCSyncUpStagingProtocol> *syncUpStager;
@property (nonatomic, readonly) BRCTapToRadarManager *tapToRadarManager;
@property (nonatomic, readonly) NSString *ubiquityTokenSalt;
@property (nonatomic, readonly) BRCUserNotification *userNotification;
@property (nonatomic, readonly) BRCVolume *volume;
@property (nonatomic, readonly) <BRCZoneAppRetriever> *zoneAppRetriever;

+ (bool)_checkIntegrity:(id)arg1 serverTruth:(bool)arg2 session:(id)arg3 skipControlFiles:(bool)arg4 deviceIDChanged:(bool*)arg5 error:(id*)arg6;
+ (id)_classesForClientState;
+ (bool)_openConnection:(id)arg1 databaseName:(id)arg2 baseURL:(id)arg3 readonly:(bool)arg4 error:(id*)arg5;
+ (bool)_openConnection:(id)arg1 serverTruth:(bool)arg2 databaseName:(id)arg3 baseURL:(id)arg4 initialVersion:(unsigned int*)arg5 lastCurrentVersion:(unsigned int*)arg6 error:(id*)arg7;
+ (void)_registerLastBootIfNeeded:(id)arg1 table:(id)arg2 skipControlFiles:(bool)arg3 deviceIDChanged:(bool*)arg4;
+ (bool)_registerStaticDBFunctions:(id)arg1 error:(id*)arg2;
+ (bool)_validateDatabase:(id)arg1 baseURL:(id)arg2 session:(id)arg3 serverTruth:(bool)arg4 initialVersion:(unsigned int)arg5 lastCurrentVersion:(unsigned int)arg6 error:(id*)arg7;
+ (id)nameComponentsForKey:(id)arg1 db:(id)arg2;
+ (id)nameComponentsForName:(id)arg1 db:(id)arg2;
+ (bool)openAndValidateDatabase:(id)arg1 serverTruth:(bool)arg2 session:(id)arg3 baseURL:(id)arg4 skipControlFiles:(bool)arg5 initialVersion:(unsigned int*)arg6 lastCurrentVersion:(unsigned int*)arg7 deviceIDChanged:(bool*)arg8 error:(id*)arg9;
+ (id)sessionForBackingUpDatabasesAtURL:(id)arg1;
+ (id)sessionForCheckingInconsistencies;
+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;
+ (id)sessionForDumpingDatabasesAtURL:(id)arg1 with:(id)arg2;
+ (id)sessionForSendingTelemetryAtURL:(id)arg1;
+ (bool)upgradeOfflineDB:(id)arg1 serverTruth:(bool)arg2 session:(id)arg3 error:(id*)arg4;
+ (id)userIdentityForKey:(id)arg1 db:(id)arg2;
+ (id)userIdentityForName:(id)arg1 db:(id)arg2;

- (void).cxx_destruct;
- (bool)PCSMigrationComplete;
- (id)__getOrCreateAppLibrary:(id)arg1 rowID:(id)arg2 createOnDisk:(bool)arg3 alreadyExists:(bool*)arg4 withClientZone:(id)arg5 createCZMMoved:(bool)arg6;
- (id)__getOrCreateClientZone:(id)arg1 withServerZone:(id)arg2 alreadyExists:(bool*)arg3;
- (id)__getOrCreateServerZone:(id)arg1;
- (void)__registerServerZone:(id)arg1 clientZone:(id)arg2 appLibrary:(id)arg3 isShared:(bool)arg4;
- (id)_appLibrariesEnumerator:(id)arg1;
- (id)_appLibrariesEnumerator:(id)arg1 version:(int)arg2;
- (id)_appLibrariesMatchingSearchString:(id)arg1;
- (id)_appLibraryByName:(id)arg1 db:(id)arg2;
- (void)_cleanupOldCiconiaLocations;
- (void)_clearNeedsUpgradeErrorsWithBrVersion:(id)arg1;
- (id)_clientZonesMatchingSearchString:(id)arg1;
- (void)_closeSharedPackageExtensionsPlist;
- (void)_cloudDocsAppsListDidChange:(id)arg1;
- (id)_computePathOfItemWithName:(id)arg1 appLibrary:(id)arg2 parentClientZoneRowID:(id)arg3 parentID:(id)arg4 type:(BOOL)arg5 needsLocalName:(bool)arg6 db:(id)arg7;
- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1 requestID:(unsigned long long)arg2;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(bool)arg2;
- (bool)_createAppLibrary:(id)arg1;
- (bool)_createAppLibraryRootIfNeededAtPath:(id)arg1 error:(id*)arg2;
- (bool)_createAppLibraryRootsIfNeededWithError:(id*)arg1;
- (bool)_createClientZone:(id)arg1;
- (bool)_createPrivateAppLibrary:(id)arg1;
- (bool)_deleteAppLibrary:(id)arg1;
- (bool)_deleteClientZone:(id)arg1;
- (void)_destroyLocalDataWaitingForFilesToBeUnlinked:(bool)arg1 pristineContainerIDs:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)_dumpClientZone:(id)arg1 toContext:(id)arg2 includeAllItems:(bool)arg3 error:(id*)arg4;
- (void)_dumpClientZoneBlockedState:(id)arg1 toContext:(id)arg2;
- (bool)_dumpClientZoneStatus:(id)arg1 toContext:(id)arg2 error:(id*)arg3;
- (void)_enumerateAccountHandlerSupportedFolderTypes:(id /* block */)arg1;
- (void)_enumerateAppLibraryRowIDs:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)_finishClientTruthConnectionSetupWithError:(id*)arg1;
- (bool)_finishServerTruthConnectionSetupWithError:(id*)arg1;
- (void)_fixupItemsAtStartup;
- (id)_getFPFSMigrationStatus:(id)arg1 withError:(id*)arg2;
- (id)_getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 creationFlags:(unsigned int*)arg2;
- (id)_getPartiallySaltedItemWithAppLibrary:(id)arg1;
- (bool)_getRootPathXattrValue:(id*)arg1 forRootPath:(id)arg2 error:(id*)arg3;
- (void)_handleUnloadedZones:(id)arg1;
- (void)_loadClientStateFromDB:(id)arg1;
- (void)_loadClientZonesFromDisk;
- (void)_markDBOpened;
- (void)_mutexZonesLock;
- (id)_old_privateAppLibraryByZoneName:(id)arg1 db:(id)arg2;
- (bool)_openConnection:(id)arg1 databaseName:(id)arg2 readonly:(bool)arg3 error:(id*)arg4;
- (void)_pcsChainAllItemsWithActivity:(id)arg1;
- (id)_prepareXPCActivityIdentifierWithName:(id)arg1;
- (id)_privateClientZoneByID:(id)arg1 db:(id)arg2;
- (id)_privateClientZoneByName:(id)arg1 db:(id)arg2;
- (id)_privateClientZonesEnumerator;
- (id)_privateServerZoneByName:(id)arg1 db:(id)arg2;
- (id)_privateServerZonesEnumerator:(id)arg1;
- (unsigned int)_recoverAndReportBoosting;
- (unsigned int)_recoverAndReportBrokenShareOptions;
- (void)_recoverAndReportStateIntegrityWithCompletion:(id /* block */)arg1;
- (void)_recreateSymlinkIfNecessaryForDocumentsPath:(id)arg1 folderName:(id)arg2 destinationPath:(id)arg3;
- (bool)_recursivelyPrepareFolderForLogOutAtURL:(id)arg1 pruneEmptyFolders:(bool)arg2 pruneEmptyTopLevelFolder:(bool)arg3 maxDepth:(unsigned long long)arg4;
- (void)_refreshRootsCache;
- (void)_registerBackgroundXPCActivities;
- (bool)_registerDynamicDBFunctions:(id)arg1 error:(id*)arg2;
- (void)_registerObfuscationFunction:(id)arg1;
- (unsigned int)_reportBasehashSalting;
- (id)_reserveRowIDForLibrary:(id)arg1;
- (int)_resolveDeviceID;
- (void)_resolvePathInMobileDocsRoot:(id)arg1 appLibrary:(id*)arg2;
- (void)_saltPartiallySaltedItemsWithActivity:(id)arg1;
- (void)_setDatabaseProfilingForDB:(id)arg1 enabled:(bool)arg2 verbose:(bool)arg3;
- (void)_setUserIdentity:(id)arg1 forName:(id)arg2;
- (bool)_setupBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (bool)_setupConnection:(id)arg1 readonly:(bool)arg2 forChecker:(bool)arg3 error:(id*)arg4;
- (void)_setupSharedPackageExtensionsPlist;
- (void)_setupThrottles;
- (id)_sharedClientZonesEnumerator;
- (id)_sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (id)_sharedServerZonesEnumerator:(id)arg1;
- (bool)_shouldPrivateAppLibraryBeCZMMoved:(id)arg1;
- (void)_startWatcher;
- (bool)_stepBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 newState:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg2 error:(id*)arg3;
- (void)_submitDBCorruptionTelemetryEventIfNeeded;
- (void)_submitDelayedTelemetryEventIfNeeded:(id)arg1 wait:(double)arg2 withBlock:(id /* block */)arg3;
- (void)_submitReimportDomainFailedTelemetryEventIfNeeded;
- (void)_submitSessionOpenFailedTelemetryEventIfNeeded;
- (void)_unlinkContainersWithPristineContainerIDs:(id)arg1 containersActualRoot:(id)arg2;
- (void)_unlinkContainersWithRootURL:(id)arg1;
- (id)_unloadClientZones;
- (void)_validatePersona;
- (id)accountDSID;
- (id)accountHandler;
- (unsigned long long)accountSize;
- (id)accountStatisticsWithDB:(id)arg1;
- (id)accountWaitOperation;
- (void)addMiscOperation:(id)arg1;
- (void)addOfflineAppLibrary:(id)arg1;
- (void)addOfflineClientZone:(id)arg1;
- (void)addOfflineServerZone:(id)arg1;
- (id)analyticsReporter;
- (id)appLibraries;
- (id)appLibrariesMatchingSearchString:(id)arg1 error:(id*)arg2;
- (id)appLibraryAliasRemovalThrottle;
- (id)appLibraryByID:(id)arg1;
- (id)appLibraryByMangledID:(id)arg1;
- (id)appLibraryByRowID:(id)arg1;
- (id)appLibraryResetThrottle;
- (id)appLibraryScanThrottle;
- (id)applyScheduler;
- (bool)applySyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2 isInitialCreation:(bool)arg3 error:(id*)arg4;
- (void)assertNotOnZoneMutex;
- (id)autoResumeSyncTimerScheduler;
- (unsigned long long)availableDiskSpace;
- (void)availableDiskSpaceDidChange;
- (unsigned long long)availableDiskSpaceUsingCache:(bool)arg1;
- (unsigned long long)availableDiskSpaceUsingCache:(bool)arg1 schedulingPendingDiskItemsIfNeeded:(bool)arg2;
- (bool)backupDatabaseToURL:(id)arg1 error:(id*)arg2;
- (bool)backupDatabaseToURL:(id)arg1 includeServer:(bool)arg2 doNotObfuscate:(bool)arg3 error:(id*)arg4;
- (id)bouncedItemsEnumerator;
- (void)bumpNotificationRankOnItemGlobalID:(id)arg1;
- (id)cacheDirPath;
- (id)cachedCurrentUserRecordName;
- (id)cachedCurrentUserRecordNameIfExists;
- (void)captureDBCorruptionInfoWithDescription:(id)arg1 error:(id)arg2;
- (void)captureSessionOpenFailedInfoWithError:(id)arg1;
- (id)clientDB;
- (id)clientState;
- (id)clientTruthWorkloop;
- (id)clientZoneByMangledID:(id)arg1;
- (id)clientZones;
- (id)clientZonesMatchingSearchString:(id)arg1 error:(id*)arg2;
- (void)close;
- (void)closeAndResetLocalStateWithDescription:(id)arg1 error:(id)arg2;
- (void)closeDBs;
- (void)closeXPCClientsSync;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (id)cloudDocsClientZone;
- (void)computeDocumentEvictableSizesForLowTime:(unsigned long long)arg1 medTime:(unsigned long long)arg2 highTime:(unsigned long long)arg3 lowSize:(unsigned long long)arg4 medSize:(unsigned long long)arg5 highSize:(unsigned long long)arg6 minRowID:(unsigned long long)arg7 minSize:(unsigned long long)arg8 batchSize:(unsigned long long)arg9 injection:(id)arg10 db:(id)arg11 reply:(id /* block */)arg12;
- (void)computeTotalEvictableSizeWithAccessLowTimeDelta:(double)arg1 medTimeDelta:(double)arg2 highTimeDelta:(double)arg3 db:(id)arg4 reply:(id /* block */)arg5;
- (unsigned long long)computeTotalLiveDocumentSizeWithDb:(id)arg1;
- (id)containerScheduler;
- (bool)createAppLibrariesIfNeededWithError:(id*)arg1;
- (bool)createAppLibraryOnDisk:(id)arg1 createdRoot:(bool*)arg2 createdDocuments:(bool*)arg3 rootFileID:(unsigned long long*)arg4;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (id)createFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)createRootForSyncedFolderType:(unsigned long long)arg1;
- (bool)createServerZone:(id)arg1;
- (id)createUserKeyForOwnerName:(id)arg1;
- (id)databaseID;
- (unsigned long long)databaseIDHash;
- (void)dbBecameCorruptedWithDescription:(id)arg1 error:(id)arg2;
- (id)dbFixupQueue;
- (id)dbLoadingBarrier;
- (void)dealloc;
- (id)defaultScheduler;
- (bool)deleteServerZone:(id)arg1;
- (id)description;
- (void)destroyLocalData;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)destroyLocalDataWithPristineContainerIDs:(id)arg1;
- (void)destroySharedClientZone:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (id)dirPathForSyncedFolderType:(unsigned long long)arg1;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (id)diskReclaimer;
- (id)downloadStager;
- (id)downloadTrackers;
- (bool)dumpDatabaseToFileHandle:(id)arg1 zoneName:(id)arg2 includeAllItems:(bool)arg3 verbose:(bool)arg4 tracker:(id)arg5 error:(id*)arg6;
- (bool)dumpFPFSMigrationStatusToFileHandle:(id)arg1 tracker:(id)arg2 includeNonMigratedItems:(bool)arg3 error:(id*)arg4;
- (bool)dumpFileCoordinationInfoToFileHandle:(id)arg1 error:(id*)arg2;
- (bool)dumpItemsToHandle:(id)arg1 itemType:(id)arg2 tracker:(id)arg3 error:(id*)arg4;
- (bool)dumpItemsURLsToHandle:(id)arg1 itemRowIDs:(id)arg2 error:(id*)arg3;
- (void)dumpMiscOperationsToContext:(id)arg1;
- (bool)dumpStatusToFileHandle:(id)arg1 zoneName:(id)arg2 tracker:(id)arg3 error:(id*)arg4;
- (void)dumpXPCClientsToContext:(id)arg1;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (bool)enableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(bool)arg2 error:(id*)arg3;
- (void)enumerateAppLibraries:(id /* block */)arg1;
- (void)enumerateClientZones:(id /* block */)arg1;
- (void)enumerateContainersWithDB:(id)arg1 handler:(id /* block */)arg2;
- (void)enumerateFileTypesWithFilterBlock:(id /* block */)arg1 enumerationBlock:(id /* block */)arg2;
- (void)enumerateItemsWithShareIDUnderParent:(id)arg1 block:(id /* block */)arg2;
- (bool)enumerateItemsWithType:(id)arg1 itemRowIDs:(id)arg2 db:(id)arg3 withBlock:(id /* block */)arg4;
- (void)enumeratePrivateClientZones:(id /* block */)arg1;
- (void)enumeratePrivateServerZones:(id /* block */)arg1;
- (void)enumerateServerZones:(id /* block */)arg1;
- (void)enumerateSharedClientZones:(id /* block */)arg1;
- (bool)enumerateSharedToMeItemsWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (void)enumerateSideFaultsUnderParent:(id)arg1 db:(id)arg2 block:(id /* block */)arg3;
- (void)enumerateSupportedFolderTypes:(id /* block */)arg1;
- (id)expensiveReadOnlyDB;
- (id)fairClientDBScheduler;
- (id)fallbackAppLibraryForClientZone:(id)arg1 extension:(id)arg2;
- (id)fetchAccountWaitOperationWithAccountReady:(bool*)arg1;
- (void)fetchUserRecordIDWithCompletionHandler:(id /* block */)arg1;
- (id)fileUnlinker;
- (id)fixObfuscatedMangledID:(id)arg1;
- (id)foldersNeedingTransmogrifyEnumerator;
- (id)fpDomain;
- (id)fsDownloader;
- (id)fsEventsMonitorForAppLibraryID:(id)arg1;
- (id)fsEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitors;
- (id)fsReader;
- (id)fsReader;
- (id)fsUploader;
- (id)fsWriter;
- (id)fsWriter;
- (id)getFPFSNonMigratedItemsWithDB:(id)arg1;
- (id)getMiscOperations;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 appLibraryExists:(bool*)arg2;
- (id)getOrCreateSharedZones:(id)arg1;
- (id)getOrCreateSharedZones:(id)arg1 shareAcceptOp:(id)arg2;
- (id)getOrReserveLibraryRowIDForLibrary:(id)arg1;
- (bool)globalID:(id)arg1 isStrictChildOfGlobalID:(id)arg2;
- (id)globalItemByDocumentID:(unsigned int)arg1;
- (id)globalItemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)globalItemByFileID:(unsigned long long)arg1;
- (id)globalItemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)globalProgress;
- (bool)hasFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (bool)hasOptimizeStorageEnabled;
- (bool)hasRootForSyncedFolderType:(unsigned long long)arg1;
- (bool)icloudAccountIsInCarry;
- (id)init;
- (id)initWithACAccountID:(id)arg1 dbAccountDSID:(id)arg2 salt:(id)arg3 accountHandler:(id)arg4;
- (bool)initializeOfflineDatabaseWhileUpgrading:(bool)arg1 error:(id*)arg2;
- (bool)initializeOfflineDatabaseWhileUpgrading:(bool)arg1 loadClientState:(bool)arg2 error:(id*)arg3;
- (bool)initializeOfflineDatabaseWhileUpgrading:(bool)arg1 loadClientState:(bool)arg2 forDBDump:(bool)arg3 error:(id*)arg4;
- (void)invalidateAccountStatus;
- (bool)isCancelled;
- (bool)isDataSeparated;
- (bool)isGreedy;
- (bool)isOpen;
- (id)itemByFileObjectID:(id)arg1;
- (id)itemByFileObjectID:(id)arg1 db:(id)arg2;
- (id)itemByItemGlobalID:(id)arg1;
- (id)itemByItemGlobalID:(id)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemTransmogrifier;
- (id)itemsNeedingIndexingEnumeratorFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 db:(id)arg3;
- (id)itemsWithSideCarInFlightDiffsEnumerator;
- (long long)lastBootHistoryTime;
- (void)learnParticipantIdentitiesForShare:(id)arg1 forceUpdate:(bool)arg2;
- (id)localAliasForSharedItem:(id)arg1 inZone:(id)arg2;
- (id)lostItemThrottle;
- (void)markAccountMigrationComplete;
- (id)newAppLibraryFromPQLResultSet:(id)arg1 version:(int)arg2;
- (id)newConnection:(id)arg1;
- (id)newConnectionWithLabel:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (id)newLocalItemFromPQLResultSet:(id)arg1 db:(id)arg2 error:(id*)arg3;
- (id)newPrivateClientZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newServerItemFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newSharedClientZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)notificationManager;
- (bool)offline;
- (bool)openAndValidateDatabase:(id)arg1 serverTruth:(bool)arg2 initialVersion:(unsigned int*)arg3 lastCurrentVersion:(unsigned int*)arg4 deviceIDChanged:(bool*)arg5 error:(id*)arg6;
- (bool)openDBWithError:(id*)arg1;
- (void)openForDumping;
- (void)openForSendingTelemetry;
- (bool)openWithError:(id*)arg1 pushWorkloop:(id)arg2;
- (id)operationFailureThrottle;
- (void)performBlock:(id /* block */)arg1 whileRemovingPrivateClientZone:(id)arg2;
- (id)personaIdentifier;
- (void)preventDatabaseFromBeingReused;
- (id)privateClientZoneByID:(id)arg1;
- (id)privateServerZoneByID:(id)arg1;
- (id)readOnlyDB;
- (id)readOnlyWorkloop;
- (id)recentsEnumerator;
- (void)recomputeAppSyncBlockStateForPrivateClientZone:(id)arg1;
- (void)recreateDesktopSymlinksIfNecessary;
- (bool)registerClient:(id)arg1;
- (void)removeDesktopSymlink:(bool)arg1 andDocumentsSymlink:(bool)arg2;
- (void)removeFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (void)removeRootForSyncedFolderType:(unsigned long long)arg1;
- (id)resetQueue;
- (void)resetThrottles;
- (int)resolvePathAdditionalMetadata:(id)arg1 appLibrary:(id*)arg2;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(bool)arg2 allowResolveInPkg:(bool)arg3 errcode:(int*)arg4;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(bool)arg2 errcode:(int*)arg3;
- (void)resumeIfNecessary;
- (id)rootForSyncedFolderType:(unsigned long long)arg1;
- (id)roots;
- (bool)saveAppLibrary:(id)arg1 toDB:(id)arg2;
- (bool)saveAppLibrary:(id)arg1 toDB:(id)arg2 supportsEnhancedDrivePrivacy:(bool)arg3;
- (bool)saveAppLibraryToDB:(id)arg1;
- (bool)saveClientZoneToDB:(id)arg1;
- (bool)saveServerZone:(id)arg1 toDB:(id)arg2;
- (bool)saveServerZoneToDB:(id)arg1;
- (void)scheduleZoneMovesToCloudDocs:(id)arg1;
- (id)serverAliasItemForSharedItem:(id)arg1;
- (id)serverAliasItemForSharedItem:(id)arg1 db:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2 db:(id)arg3;
- (id)serverDB;
- (id)serverState;
- (id)serverTruthWorkloop;
- (id)serverZoneByCKZoneID:(id)arg1;
- (id)serverZoneByMangledID:(id)arg1;
- (id)serverZoneByName:(id)arg1 ownerName:(id)arg2;
- (id)serverZoneByRowID:(id)arg1;
- (id)sessionDirPath;
- (void)setCacheDirPath:(id)arg1;
- (void)setFSEventsMonitor:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)setFpDomain:(id)arg1;
- (void)setNeedsPCSMigration:(bool)arg1;
- (void)setOptimizeStorageEnabled:(bool)arg1 forKey:(id)arg2 synchronous:(bool)arg3;
- (void)setOptimizeStorageEnabled:(bool)arg1 synchronous:(bool)arg2;
- (void)setRoot:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)setSessionDirPath:(id)arg1;
- (void)setupDatabase;
- (id)sharedAppLibraryResetThrottle;
- (id)sharedClientZoneByMangledID:(id)arg1;
- (id)sharedServerZoneByMangledID:(id)arg1;
- (id)sharedServerZoneRowIDsByOwnerNamePrefix:(id)arg1;
- (bool)shouldPathBeDesktopSymlink:(id)arg1;
- (bool)shouldPerformPCSMigration;
- (id)singleAppLibraryMatchingSearchString:(id)arg1 error:(id*)arg2;
- (id)singleClientZoneMatchingSearchString:(id)arg1 error:(id*)arg2;
- (id)stageRegistry;
- (id)stagedItemsEnumerator;
- (void)startDownloadsForGreediness;
- (void)stopDBWatcher;
- (id)syncClientZoneErrorThrottle;
- (id)syncClientZoneThrottle;
- (id)syncContextProvider;
- (id)syncUpScheduler;
- (id)syncUpStager;
- (unsigned long long)syncedFolderTypeForURL:(id)arg1;
- (id)tapToRadarManager;
- (id)ubiquityTokenSalt;
- (void)unregisterClient:(id)arg1;
- (void)userDefaultsChanged;
- (id)userIdentityForKey:(id)arg1;
- (id)userKeyForOwnerName:(id)arg1 db:(id)arg2;
- (id)userNameForKey:(id)arg1 db:(id)arg2;
- (id)userNotification;
- (id)volume;
- (id)zoneAppRetriever;

@end

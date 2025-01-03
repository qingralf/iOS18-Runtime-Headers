/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSqliteApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSObject<OS_dispatch_queue> * _dbQueue;
    unsigned long long  _dbQueue_batchDepth;
    BSSqliteDatabaseConnection * _dbQueue_dbConnection;
    int  _dbQueue_firstUnlockToken;
    <FBApplicationDataStoreRepositoryDelegate> * _delegate;
    NSURL * _storeURL;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <FBApplicationDataStoreRepositoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_generateParameterizedQuery:(id)arg1 forKeyList:(id)arg2 outBindings:(id*)arg3;
+ (id)_objectForResultRow:(id)arg1 index:(unsigned long long)arg2;
+ (bool)_objectRequiresSerialization:(id)arg1;

- (void).cxx_destruct;
- (id)_dbQueue_applicationIdentifiersWithState;
- (bool)_dbQueue_containsKey:(id)arg1 forApplication:(id)arg2;
- (void)_dbQueue_createTables;
- (bool)_dbQueue_databaseIntegrityCheck;
- (long long)_dbQueue_databaseVersion;
- (bool)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(id /* block */)arg3;
- (bool)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(id /* block */)arg3 error:(out id*)arg4;
- (id)_dbQueue_keysForApplication:(id)arg1;
- (void)_dbQueue_load;
- (bool)_dbQueue_loadDatabase;
- (void)_dbQueue_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2;
- (void)_dbQueue_notifyDelegateOfLateLoad;
- (void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1;
- (id)_dbQueue_objectForKey:(id)arg1 forApplication:(id)arg2;
- (id)_dbQueue_objectsForKeys:(id)arg1;
- (id)_dbQueue_openDatabase;
- (void)_dbQueue_performWithSavepoint:(id)arg1 handler:(id /* block */)arg2;
- (bool)_dbQueue_truncateDamagedDatabase;
- (bool)_dbQueue_tryPreserveDamagedDatabase;
- (bool)_inAlternateSystemApp;
- (bool)_isEligibleForSaving:(id)arg1;
- (bool)_preserveFileAtURL:(id)arg1;
- (id)allObjectsForKeys:(id)arg1;
- (id)applicationIdentifiersWithState;
- (void)beginBatchedUpdate;
- (void)close;
- (bool)containsKey:(id)arg1 forApplication:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endBatchedUpdate;
- (void)flushSynchronously;
- (id)initWithStorePath:(id)arg1;
- (id)keysForApplication:(id)arg1;
- (id)migrateIdentifier:(id)arg1 toIdentifier:(id)arg2;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (void)removeAllObjectsForApplication:(id)arg1;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2;
- (void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (id)urlByAppendingString:(id)arg1 toURL:(id)arg2;

@end

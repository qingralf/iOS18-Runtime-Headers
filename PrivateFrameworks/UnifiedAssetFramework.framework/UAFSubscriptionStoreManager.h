/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UnifiedAssetFramework.framework/UnifiedAssetFramework
 */

@interface UAFSubscriptionStoreManager : NSObject {
    bool  _allowCreate;
    struct sqlite3_stmt { } * _clearSystemAssetSetUsages;
    NSString * _databaseName;
    bool  _dbUpToDate;
    struct sqlite3_stmt { } * _fetchAllConfiguration;
    struct sqlite3_stmt { } * _fetchAllSystemAssetSetUsages;
    struct sqlite3_stmt { } * _fetchExpiredSubscriptions;
    struct sqlite3_stmt { } * _fetchSystemAssetSetUsages;
    NSString * _oldDatabaseName;
    struct sqlite3_stmt { } * _readAllSubscribers;
    struct sqlite3_stmt { } * _readAllSubscriptions;
    struct sqlite3_stmt { } * _readAllSubscriptionsAndSubscribers;
    struct sqlite3_stmt { } * _readConfigurationKey;
    struct sqlite3_stmt { } * _readDbVersion;
    bool  _readOnly;
    struct sqlite3_stmt { } * _readSubscription;
    struct sqlite3_stmt { } * _readSubscriptionsForSubscriber;
    struct sqlite3_stmt { } * _removeAllSubscriptions;
    struct sqlite3_stmt { } * _removeAllSystemAssetSetUsages;
    struct sqlite3_stmt { } * _removeSubscription;
    struct sqlite3_stmt { } * _setDbVersion;
    struct sqlite3_stmt { } * _setSystemAssetSetUsages;
    struct sqlite3 { } * _store;
    unsigned long long  _updateCount;
    struct sqlite3_stmt { } * _writeConfigurationKey;
    struct sqlite3_stmt { } * _writeSubscription;
}

@property (readonly) unsigned long long updateCount;

+ (id)_getManagerReadOnly:(bool)arg1;
+ (id)defaultManager;
+ (id)getSerialQueue;
+ (id)writeManager;

- (void).cxx_destruct;
- (int)_beginDatabaseTransaction;
- (bool)_checkDbVersion;
- (void)_closeDatabase;
- (bool)_createDbVersionTable;
- (id)_dataFromSystemAssetSetUsages:(id)arg1;
- (id)_dataFromUAFAssetSubscription:(id)arg1;
- (int)_endDatabaseTransaction;
- (id)_getSubscription:(struct sqlite3_stmt { }*)arg1;
- (id)_getSubscription:(id)arg1 subscription:(id)arg2;
- (id)_getSubscriptions:(id)arg1;
- (id)_getSubscriptions:(struct sqlite3_stmt { }*)arg1 subscriptionsFor:(id)arg2;
- (bool)_isUsageLimitExceeded:(id)arg1;
- (bool)_moveDatabase;
- (bool)_openDatabase:(id)arg1;
- (int)_performDbUpgrade:(int)arg1;
- (bool)_removeAllSubscriptions;
- (bool)_removeAllSystemAssetSetUsages;
- (int)_rollbackDatabaseTransaction;
- (int)_setDbVersion:(int)arg1;
- (int)_setSystemAssetSetUsages:(id)arg1;
- (int)_setSystemAssetSetUsages:(id)arg1 usages:(id)arg2;
- (bool)_subscribeSubscription:(id)arg1 subscriptionName:(id)arg2 assetSetSubscription:(id)arg3 expires:(id)arg4;
- (id)_subscriptionTime:(id)arg1;
- (id)_systemAssetSetUsagesFromData:(id)arg1;
- (id)_uafAssetSetSubscriptionFromData:(id)arg1;
- (bool)_unsubscribeSubscription:(id)arg1 subscription:(id)arg2;
- (int)_updateSystemAssetSetUsages:(id*)arg1 assetSetUsages:(id*)arg2 configurationManager:(id)arg3;
- (int)bindData:(struct sqlite3_stmt { }*)arg1 col:(int)arg2 data:(id)arg3;
- (int)bindDate:(struct sqlite3_stmt { }*)arg1 col:(int)arg2 date:(id)arg3;
- (int)bindString:(struct sqlite3_stmt { }*)arg1 col:(int)arg2 string:(id)arg3;
- (bool)clearSystemAssetSetUsages:(id)arg1;
- (void)dealloc;
- (int)doDatabaseOperation:(id /* block */)arg1 useTransaction:(bool)arg2 logDescription:(id)arg3 error:(id*)arg4;
- (int)executeSQL:(const char *)arg1;
- (void)expireSubscriptions;
- (id)getAllSubscriptions:(id*)arg1;
- (id)getAllSystemAssetSetUsages:(id*)arg1;
- (id)getAllSystemConfiguration;
- (id)getSubscribers;
- (id)getSubscription:(id)arg1 subscriber:(id)arg2;
- (id)getSubscriptions:(id)arg1 error:(id*)arg2;
- (id)getSystemAssetSetUsages:(id)arg1;
- (id)getSystemConfigurationForKey:(id)arg1;
- (id)initWithDbDirPath:(id)arg1 dbName:(id)arg2;
- (id)initWithDbDirPath:(id)arg1 dbName:(id)arg2 readOnly:(bool)arg3 allowCreate:(bool)arg4;
- (bool)performDbUpgradeToVersion:(int)arg1;
- (id)readData:(struct sqlite3_stmt { }*)arg1 col:(int)arg2;
- (id)readString:(struct sqlite3_stmt { }*)arg1 col:(int)arg2;
- (bool)removeAllSubscriptions;
- (bool)removeAllSystemAssetSetUsages;
- (void)setSystemConfigurationForKey:(id)arg1 withValue:(id)arg2;
- (bool)subscribe:(id)arg1 subscriptions:(id)arg2 expires:(id)arg3;
- (bool)unsubscribe:(id)arg1 subscriptions:(id)arg2;
- (unsigned long long)updateCount;
- (id)updateSystemAssetSetUsages:(id*)arg1;
- (id)updateSystemAssetSetUsages:(id*)arg1 configurationManager:(id)arg2;

@end

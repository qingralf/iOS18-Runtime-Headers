/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBSQLContext : HMFObject <HMFLogging> {
    struct sqlite3 { } * _connection;
    bool  _finalized;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
    HMBPreparedStatementsCache * _preparedStatementsCache;
    NSURL * _url;
}

@property (nonatomic) struct sqlite3 { }*connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool finalized;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logIdentifier;
@property (nonatomic, readonly) HMBPreparedStatementsCache *preparedStatementsCache;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_performBlockWithContextManagedStatementForString:(const char *)arg1 block:(id /* block */)arg2;
- (struct sqlite3_stmt { }*)_statementForString:(const char *)arg1 error:(id*)arg2;
- (id)attributeDescriptions;
- (id)begin;
- (id)commit;
- (struct sqlite3 { }*)connection;
- (void)dealloc;
- (id)execSQLite3:(struct sqlite3_stmt { }*)arg1;
- (unsigned long long)execSQLite3:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (bool)fetchSQLite3:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)fetchSQLite3:(struct sqlite3_stmt { }*)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)fetchSQLite3One:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)finalize;
- (bool)finalized;
- (id)initWithURL:(id)arg1;
- (bool)initializeNewlyCreatedDatabaseWithError:(id*)arg1;
- (unsigned long long)insertSQLite3:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)logIdentifier;
- (long long)migrateFromSchemaVersion:(long long)arg1 error:(id*)arg2;
- (bool)prepareWithError:(id*)arg1;
- (id)preparedStatementsCache;
- (void)rollback;
- (id)runSQLite3:(const char *)arg1;
- (bool)runSQLite3:(const char *)arg1 error:(id*)arg2;
- (void)setConnection:(struct sqlite3 { }*)arg1;
- (void)setFinalized:(bool)arg1;
- (void)setLogIdentifier:(id)arg1;
- (bool)setSchemaVersion:(long long)arg1 error:(id*)arg2;
- (id)sqlBlockWithActivity:(id)arg1 block:(id /* block */)arg2;
- (id)sqlTransactionWithActivity:(id)arg1 block:(id /* block */)arg2;
- (id)url;

@end
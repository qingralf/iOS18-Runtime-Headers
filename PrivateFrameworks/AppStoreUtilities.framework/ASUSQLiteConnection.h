/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUtilities.framework/AppStoreUtilities
 */

@interface ASUSQLiteConnection : NSObject {
    NSMutableArray * _afterTransactionBlocks;
    struct sqlite3 { } * _database;
    <ASUSQLiteConnectionDelegate> * _delegate;
    ASUSQLiteConnectionOptions * _options;
    NSMapTable * _preparedStatements;
    long long  _transactionDepth;
    bool  _transactionWantsRollback;
}

@property (nonatomic) <ASUSQLiteConnectionDelegate> *delegate;
@property (nonatomic, readonly) long long lastChangeCount;
@property (nonatomic, readonly, copy) ASUSQLiteConnectionOptions *options;

- (void).cxx_destruct;
- (bool)close;
- (void)dealloc;
- (id)delegate;
- (void)dispatchAfterTransaction:(id /* block */)arg1;
- (void)executePreparedQuery:(id)arg1 withResults:(id /* block */)arg2;
- (bool)executePreparedStatement:(id)arg1 error:(id*)arg2;
- (bool)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(id /* block */)arg3;
- (void)executeQuery:(id)arg1 withResults:(id /* block */)arg2;
- (bool)executeStatement:(id)arg1 error:(id*)arg2;
- (bool)executeStatement:(id)arg1 error:(id*)arg2 bindings:(id /* block */)arg3;
- (bool)finalizePreparedStatement:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1;
- (long long)lastChangeCount;
- (bool)open;
- (id)options;
- (bool)performSavepoint:(id /* block */)arg1;
- (bool)performTransaction:(id /* block */)arg1 error:(id*)arg2;
- (id)prepareStatement:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)tableExists:(id)arg1;

@end
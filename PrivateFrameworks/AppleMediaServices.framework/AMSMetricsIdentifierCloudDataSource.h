/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetricsIdentifierCloudDataSource : NSObject {
    <AMSMetricsIdentifierCloudDataSourceDelegate> * _delegate;
}

@property (nonatomic) <AMSMetricsIdentifierCloudDataSourceDelegate> *delegate;

+ (id)_database;
+ (id)_saveCloudObject:(id)arg1 intoDatabase:(id)arg2 isServerRecord:(bool)arg3;
+ (id)_saveIdInfo:(id)arg1 intoDatabase:(id)arg2 isServerRecord:(bool)arg3;
+ (id)_saveStoreInfo:(id)arg1 intoDatabase:(id)arg2 isServerRecord:(bool)arg3;
+ (id)_sharedQueue;
+ (void)cleanupIdentifiers;
+ (void)clearSyncState;
+ (void)removeAllRecords;

- (void).cxx_destruct;
- (id)_createRecordForIdentifier:(id)arg1;
- (id)_createRecordForIdentifierStore:(id)arg1;
- (id)_parseRecord:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (void)fetchModifiedRecordsWithCompletion:(id /* block */)arg1;
- (void)removeRecordWithIdentifier:(id)arg1;
- (void)saveRecord:(id)arg1 isServerRecord:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end

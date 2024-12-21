/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKContentQueryOperation : FCOperation {
    NSDictionary * _additionalRequestHTTPHeaders;
    CKQueryCursor * _cursor;
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    FCEdgeCacheHint * _edgeCacheHint;
    bool  _ignoreCache;
    id /* block */  _networkActivityBlock;
    int  _networkEventType;
    NSArray * _networkEvents;
    CKQuery * _query;
    id /* block */  _queryCompletionBlock;
    unsigned long long  _queryPriority;
    id /* block */  _recordFetchedBlock;
    NSArray * _requestUUIDs;
    CKQueryCursor * _resultCursor;
    unsigned long long  _resultsLimit;
}

- (void).cxx_destruct;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)throttleGroup;
- (bool)validateOperation;

@end
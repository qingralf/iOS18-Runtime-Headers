/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOfflineANFArticlesFetchOperation : FCOperation {
    <FCANFHelper> * _ANFHelper;
    id /* block */  _archiveHandler;
    NSArray * _articleIDs;
    bool  _cachedOnly;
    FCOfflineDownloadsConfiguration * _config;
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    NSArray * _inputHeadlines;
    id /* block */  _interestTokenHandler;
    unsigned long long  _maxBatchSize;
    unsigned long long  _maxMissingArticles;
    id /* block */  _progressHandler;
}

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (bool)validateOperation;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FPFS.framework/FPFS
 */

@interface libfssync.FPFSSearchEnumerator : NSObject <FPXEnumerator> {
    void backend;
    void changedItemsByID;
    void deletedItemsIDs;
    void extensionEnumerator;
    void invalidated;
    void keepAlive;
    void lifetimeExtender;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void observer;
    void searchIdentifier;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)currentSyncAnchorWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateChangesFromToken:(id)arg1 suggestedBatchSize:(long long)arg2 reply:(id /* block */)arg3;
- (void)enumerateItemsFromPage:(id)arg1 suggestedPageSize:(long long)arg2 reply:(id /* block */)arg3;
- (void)enumerateItemsFromPage:(id)arg1 suggestedPageSize:(long long)arg2 upTo:(long long)arg3 reply:(id /* block */)arg4;
- (id)init;
- (void)invalidate;
- (void)keepAliveConnectionForRegisteredObserver:(id /* block */)arg1;

@end

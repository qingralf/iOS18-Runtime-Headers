/* Generated by RuntimeBrowser.
 */

@protocol AMSEngagementServiceProtocol

@required

- (void)beginObservingMessages;
- (void)contentInfoForApp:(void *)arg1 cacheKey:(void *)arg2 version:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)enqueueWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AMSEngagementEnqueueRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementEnqueueResult *, NSError *, void*
- (void)notifyBlockedMessages:(NSArray *)arg1;
- (void)syncWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AMSEngagementSyncRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementSyncResult *, NSError *, void*
- (void)treatmentStoreServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <AMSTreatmentStoreServiceProtocol> *, NSError *, void*

@optional

- (oneway void)fetchMetricsIdentifiers;
- (void)manualSyncMetricsIdentifiers;
- (oneway void)syncMetricsIdentifiers;

@end
/* Generated by RuntimeBrowser.
 */

@protocol HKCloudSyncObserverServerInterface <NSObject>

@required

- (NSProgress *)remote_retrieveProgressForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remote_startObservingSyncRequestsMatchingFilter:(unsigned long long)arg1;
- (void)remote_startObservingSyncStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSProgress *)remote_startSyncIfRestoreNotCompletedWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)remote_stopObservingSyncRequests;

@end

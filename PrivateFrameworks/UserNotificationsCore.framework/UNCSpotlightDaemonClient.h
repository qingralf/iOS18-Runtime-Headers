/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsCore.framework/UserNotificationsCore
 */

@interface UNCSpotlightDaemonClient : NSObject <SpotlightDaemonClient> {
    NSHashTable * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)provideDataForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)provideFileURLForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)reindexAllItemsForBundleID:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)reindexItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 acknowledgementHandler:(id /* block */)arg4;
- (void)searchableItemsDidUpdate:(id)arg1 mask:(long long)arg2;

@end

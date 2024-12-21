/* Generated by RuntimeBrowser.
 */

@protocol CNUIUserActionTargetDiscovering <NSObject>

@required

- (NSDictionary *)defaultMessagingAppsBundleIdentifierScorer;
- (void)emptyDefaultAppsCaches;
- (CNObservable *)observableForTargetsChangedForActionType:(NSString *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)targetsForActionType:(NSString *)arg1;
- (CNFuture *)thirdPartyTargetsForActionTypes:(NSArray *)arg1;
- (CNFuture *)thirdPartyTargetsForBundleIdentifier:(NSString *)arg1;

@end
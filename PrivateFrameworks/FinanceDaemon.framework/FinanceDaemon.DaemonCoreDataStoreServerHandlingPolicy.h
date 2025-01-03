/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FinanceDaemon.framework/FinanceDaemon
 */

@interface FinanceDaemon.DaemonCoreDataStoreServerHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {
    void authStatusProvider;
    void bundleInfoProvider;
    void entitlementChecker;
    void policyLevelProvider;
}

- (void).cxx_destruct;
- (id)allowableClassesForClientWithContext:(id)arg1;
- (id)init;
- (id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (bool)shouldAcceptConnectionsFromClientWithContext:(id)arg1;
- (bool)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1;

@end

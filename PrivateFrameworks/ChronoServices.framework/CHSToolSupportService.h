/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSToolSupportService : NSObject {
    CHSToolServiceConnection * _connection;
}

@property (nonatomic, readonly) CHSToolServiceConnection *connection;

- (void).cxx_destruct;
- (void)allCachedSnapshotURLsWithCompletion:(id /* block */)arg1;
- (void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (void)contentURLForActivityID:(id)arg1 completion:(id /* block */)arg2;
- (void)expireLocationGracePeriods;
- (void)extensionInfo:(id /* block */)arg1;
- (void)extensionInfoForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchStateForItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)arg1;
- (void)reloadControlsOfKind:(id)arg1 containedIn:(id)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)reloadDescriptorsForExtensionBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadTimelinesOfKind:(id)arg1 containedIn:(id)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)resetCaches:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)runMigrationReaper;
- (void)runReaper;
- (void)timelineForWidgetKey:(id)arg1 completion:(id /* block */)arg2;
- (void)widgetsWithTimelines:(id /* block */)arg1;

@end
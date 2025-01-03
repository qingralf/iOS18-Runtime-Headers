/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFContentBlockerManager : NSObject <WBSCloudExtensionStateProvider, WBSExtensionsExportDataSource, _EXQueryControllerDelegate> {
    WBSPersistentPropertyListStore * _contentBlockerStateStore;
    bool  _contentBlockerStateStoreRequiresReload;
    <SFContentBlockerManagerDelegate> * _delegate;
    WBSDiagnosticStateCollector * _diagnosticStateCollector;
    _EXQueryController * _extensionKitQueryController;
    id  _extensionMatchingContext;
    NSSet * _extensions;
    NSMutableDictionary * _extensionsRecompiledAfterBackup;
    bool  _hasPopulatedExtensionsFromExtensionDiscoveryAtLeastOnce;
    bool  _lastExtensionDiscoveryHadError;
    NSMutableSet * _observers;
    NSString * _profileServerID;
    NSObject<OS_dispatch_queue> * _recompilationInformationAccessQueue;
    WKUserContentController * _userContentController;
    WBSWebExtensionsController * _webExtensionsController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SFContentBlockerManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *enabledExtensions;
@property (nonatomic, readonly) NSSet *extensions;
@property (nonatomic, readonly) bool hasPopulatedExtensionsFromExtensionDiscoveryAtLeastOnce;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *profileServerID;
@property (nonatomic, readonly) unsigned long long recentlyInstalledExtensionCount;
@property (readonly) Class superclass;
@property (nonatomic, retain) WBSWebExtensionsController *webExtensionsController;

+ (id)_contentBlockerLoaderConnection;
+ (void)_createContentExtensionsDirectoryWithURL:(id)arg1;
+ (void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)contentBlockerStore;
+ (void)getStateOfContentBlockerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_applyContentBlockerInPrivateBrowsing:(id)arg1;
- (void)_beginContentBlockerDiscovery;
- (void)_commonInit;
- (void)_contentBlockerDiscoveryHasNewResults:(id)arg1 error:(id)arg2;
- (void)_contentBlockerEnabledStateDidChange:(id)arg1;
- (id)_contentBlockerManagerForDefaultProfile;
- (void)_contentBlockerStateInPrivateBrowsingDidChange:(id)arg1;
- (id)_contentBlockerStateURL;
- (id)_contentBlockerWithComposedIdentifier:(id)arg1;
- (id)_contentBlockersWithAdamID:(id)arg1;
- (void)_didDiscoverExtensions:(id)arg1;
- (id)_findNewExtensionsAdded:(id)arg1 toExistingExtensions:(id)arg2;
- (bool)_hasRecompilationBeenAttemptedForExtension:(id)arg1;
- (id)_installationDateForExtension:(id)arg1;
- (bool)_isManagingDefaultProfile;
- (void)_loadBuiltInContentBlockers;
- (void)_loadContentBlockerRecompilationInformationIfNeeded;
- (void)_loadContentBlockerStateFromDisk;
- (void)_noteRecompilationWasAttemptedForExtension:(id)arg1;
- (void)_populateExtensionsIfNecessaryUsingManagerForDefaultProfile;
- (void)_recompileEnabledContentBlockersIfNeeded:(id)arg1;
- (void)_removeAllContentRuleLists;
- (void)_removeContentBlockerInPrivateBrowsing:(id)arg1;
- (void)_saveContentBlockerRecompilationInformation;
- (bool)_supportsExtensionDiscovery;
- (void)_updateContentBlockerStateFromDiscoveredContentBlockers:(id)arg1;
- (void)addContentRuleList:(id)arg1 forExtension:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)cloudExtensionStateForStateManager:(id)arg1;
- (void)copyEnabledExtensionStateFromContentBlockerManager:(id)arg1;
- (id)debugDescription;
- (id)delegate;
- (id)displayNameForExtension:(id)arg1;
- (id)enabledExtensions;
- (bool)extensionIsEnabled:(id)arg1;
- (id)extensionStateKeysToCopy;
- (id)extensions;
- (id)extensionsDataForExport;
- (bool)hasExtensionWithComposedIdentifier:(id)arg1;
- (bool)hasPopulatedExtensionsFromExtensionDiscoveryAtLeastOnce;
- (void)informObserversThatContentBlockerManagerExtensionListDidChange;
- (id)init;
- (id)initWithUserContentController:(id)arg1 webExtensionsController:(id)arg2;
- (bool)isContentBlockerAllowedInPrivateBrowsing:(id)arg1;
- (id)profileServerID;
- (id)profileServerIDForStateManager:(id)arg1;
- (void)queryControllerDidUpdate:(id)arg1 resultDifference:(id)arg2;
- (unsigned long long)recentlyInstalledExtensionCount;
- (void)reloadUserContentControllerReadingStateFromDisk:(bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1 isEnabled:(bool)arg2 byUserGesture:(bool)arg3;
- (void)setExtension:(id)arg1 isEnabledInPrivateBrowsing:(bool)arg2 updateUserContentController:(bool)arg3;
- (void)setExtensionWithComposedIdentifier:(id)arg1 isEnabledInCloud:(bool)arg2;
- (void)setWebExtensionsController:(id)arg1;
- (void)unloadAndDeleteStateForAllExtensions;
- (id)webExtensionsController;

@end

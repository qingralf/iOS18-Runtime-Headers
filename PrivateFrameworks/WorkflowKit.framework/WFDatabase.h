/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFDatabase : NSObject <WFDatabaseProvider> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _changeNotificationQueue;
    NSManagedObjectContext * _context;
    bool  _destroysOnDeallocation;
    NSURL * _fileURL;
    WFLibrary * _library;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    WFCoreDataChangeNotification * _pendingLocalChangeNotification;
    WFCoreDataChangeNotification * _pendingRemoteChangeNotification;
    NSPersistentStoreDescription * _persistentStoreDescription;
    bool  _postDistributedNotifications;
    WFDebouncer * _remoteChangeNotificationDebouncer;
    NSObject<OS_dispatch_queue> * _remoteChangeQueue;
    NSHashTable * _resultsToNotify;
    NSManagedObjectContext * _suggestionsContext;
    long long  _transactionCount;
}

@property (nonatomic, readonly) NSArray *activeObjectObservers;
@property (nonatomic, readonly) NSArray *activeResults;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *changeNotificationQueue;
@property (nonatomic, retain) NSManagedObjectContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool destroysOnDeallocation;
@property (nonatomic, readonly) NSURL *exportableURL;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) bool hasValidLibrary;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } observersLock;
@property (nonatomic, retain) WFCoreDataChangeNotification *pendingLocalChangeNotification;
@property (nonatomic, retain) WFCoreDataChangeNotification *pendingRemoteChangeNotification;
@property (nonatomic, retain) NSPersistentStoreDescription *persistentStoreDescription;
@property (getter=isPostingDistributedNotifications, nonatomic) bool postDistributedNotifications;
@property (nonatomic, readonly) WFDebouncer *remoteChangeNotificationDebouncer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *remoteChangeQueue;
@property (nonatomic, retain) NSHashTable *resultsToNotify;
@property (nonatomic, retain) NSManagedObjectContext *suggestionsContext;
@property (readonly) Class superclass;
@property (nonatomic) long long transactionCount;

+ (id)appDescriptorFromData:(id)arg1;
+ (id)createDatabaseForTesting;
+ (id)dataFromObject:(id)arg1 error:(id*)arg2;
+ (id)defaultDatabase;
+ (id)disabledAutoShortcutsFromData:(id)arg1;
+ (id)identifierForAppDescriptor:(id)arg1;
+ (void)setDefaultDatabase:(id)arg1;

- (void).cxx_destruct;
- (id)_createWorkflowWithOptions:(id)arg1 error:(id*)arg2;
- (void)_deleteSmartPromptState:(id)arg1 forReference:(id)arg2;
- (bool)_moveReferences:(id)arg1 toIndexes:(id)arg2 ofCollectionID:(id)arg3 error:(id*)arg4;
- (id)_rootCollection;
- (void)_saveSmartPromptStateData:(id)arg1 actionUUID:(id)arg2 forWorkflow:(id)arg3;
- (id)_syncTokenWithError:(id*)arg1;
- (void)_updateDeletionAuthorizationsToMatchAuthorization:(id)arg1 forWorkflow:(id)arg2;
- (void)_updateStatesToMatchSmartPromptState:(id)arg1 forWorkflow:(id)arg2;
- (void)accessStorageForDescriptor:(id)arg1 forWriting:(bool)arg2 readingRecordProperties:(id)arg3 usingBlock:(id /* block */)arg4 withError:(id*)arg5;
- (id)activeObjectObservers;
- (id)activeResults;
- (void)addActionCountsToShortcutsIfNecessary;
- (void)addObjectObserver:(id)arg1;
- (void)addPendingDeletedDescriptor:(id)arg1;
- (void)addPendingInsertedDescriptor:(id)arg1;
- (void)addPendingLocalChangeNotification:(id)arg1;
- (void)addPendingUpdatedDescriptor:(id)arg1;
- (void)addSyncHashesToShortcutsIfNecessary;
- (id)allCollections;
- (id)allConfiguredTriggers;
- (id)allConfiguredTriggersNeedingRunningNotifications;
- (id)allLatestLibraries;
- (id)allLatestLibrariesLimitedTo:(unsigned long long)arg1;
- (id)allShortcutBookmarks;
- (id)allShortcutSuggestions;
- (id)allShortcuts;
- (id)allStatesDataForReference:(id)arg1 actionUUID:(id)arg2;
- (id)applyConflictResolution:(id)arg1;
- (id)approvalResultForContentAttributionSet:(id)arg1 contentDestination:(id)arg2 actionUUID:(id)arg3 actionIdentifier:(id)arg4 actionIndex:(unsigned long long)arg5 reference:(id)arg6 allowedOnceStates:(id)arg7;
- (id)associateWorkflowToTrigger:(id)arg1 workflow:(id)arg2 error:(id*)arg3;
- (id)autoShortcutsPreferencesForAppDescriptor:(id)arg1 error:(id*)arg2;
- (id)autoShortcutsPreferencesForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)autoShortcutsPreferencesForIdentifier:(id)arg1 error:(id*)arg2;
- (id)autoShortcutsPreferencesFromCoreDataAutoShortcutsPreferences:(id)arg1;
- (id)badgeTypeForEntityIdentifier:(id)arg1 error:(id*)arg2;
- (id)bookmarkDataForWorkflowID:(id)arg1 path:(id)arg2 error:(id*)arg3;
- (id)bookmarksForWorkflowID:(id)arg1 error:(id*)arg2;
- (id)callbackQueue;
- (id)changeNotificationQueue;
- (id)changedWorkflowIDsForSync;
- (void)clearTombstonesAndSyncState;
- (id)collectionForWorkflowType:(id)arg1;
- (id)collectionRecordForCollectionIdentifier:(id)arg1 createIfNecessary:(bool)arg2;
- (id)collectionResultWithFetchRequest:(id)arg1;
- (id)collectionResultWithLibraryQuery:(id)arg1;
- (id)collectionWithIdentifier:(id)arg1;
- (id)collectionWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2;
- (id)collectionsForWorkflowReference:(id)arg1;
- (id)collectionsWithOutOfSyncWalrusStatus;
- (void)compactDeletionAuthorizationsIfNecessaryForWorkflowReference:(id)arg1;
- (id)configuredTriggerForTriggerID:(id)arg1;
- (id)configuredTriggersForWorkflowID:(id)arg1;
- (id)conflictForWorkflowReference:(id)arg1;
- (id)conflictingReferenceForReference:(id)arg1;
- (id)context;
- (void)contextDidSave:(id)arg1;
- (id)coreDataAutoShortcutsPreferencesForAppDescriptor:(id)arg1 error:(id*)arg2;
- (id)coreDataAutoShortcutsPreferencesForIdentifier:(id)arg1 error:(id*)arg2;
- (id)coreDataLibraryWithIdentifier:(id)arg1;
- (id)coreDataLibraryWithPredicate:(id)arg1;
- (id)coreDataLibraryWithVersion:(id)arg1;
- (unsigned long long)countForResult:(id)arg1;
- (unsigned long long)countOfAllVisibleWorkflows;
- (unsigned long long)countOfWorkflowsInAFolder;
- (id)createBookmarkWithWorkflowID:(id)arg1 path:(id)arg2 bookmarkData:(id)arg3 error:(id*)arg4;
- (id)createFolderWithName:(id)arg1 icon:(unsigned short)arg2 error:(id*)arg3;
- (id)createLibraryFromCurrentDatabaseSnapshot;
- (void)createSmartPromptStatesForInsertedActions:(id)arg1 forReference:(id)arg2;
- (id)createTriggerEventWithTriggerID:(id)arg1 eventInfo:(id)arg2 confirmed:(bool)arg3 error:(id*)arg4;
- (id)createTriggerWithRecord:(id)arg1 error:(id*)arg2;
- (id)createTriggerWithRecord:(id)arg1 workflow:(id)arg2 error:(id*)arg3;
- (id)createWorkflowWithError:(id*)arg1;
- (bool)createWorkflowWithIdentifier:(id)arg1 record:(id)arg2 error:(id*)arg3;
- (id)createWorkflowWithOptions:(id)arg1 error:(id*)arg2;
- (id)createWorkflowWithOptions:(id)arg1 nameCollisionBehavior:(unsigned long long)arg2 error:(id*)arg3;
- (id)currentDeletionAuthorizationStatusWithContentItemClassName:(id)arg1 actionUUID:(id)arg2 actionIdentifier:(id)arg3 actionIndex:(unsigned long long)arg4 count:(unsigned long long)arg5 reference:(id)arg6;
- (id)databaseWithError:(id*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultCoreDataAutoShortcutsPreferencesForAppDescriptor:(id)arg1 error:(id*)arg2;
- (bool)deleteAllBookmarksForWorkflowID:(id)arg1 error:(id*)arg2;
- (void)deleteAllDeletionAuthorizationsForReference:(id)arg1;
- (void)deleteAllSmartPromptStateDataForReference:(id)arg1;
- (bool)deleteAutoShortcutsPreferencesForIdentifier:(id)arg1 error:(id*)arg2;
- (void)deleteDonationsForShortcutWithIdentifier:(id)arg1;
- (bool)deleteReference:(id)arg1 error:(id*)arg2;
- (bool)deleteReference:(id)arg1 tombstone:(bool)arg2 deleteConflictIfPresent:(bool)arg3 error:(id*)arg4;
- (void)deleteShortcutSuggestionsFromApps:(id)arg1;
- (void)deleteSmartPromptState:(id)arg1 forReference:(id)arg2;
- (void)deleteSmartPromptStatesForDeletedActionUUIDs:(id)arg1 forReference:(id)arg2;
- (id)deletedFolders;
- (id)deletedWorkflowIDsForSync;
- (id)deletionAuthorizationStatesForReference:(id)arg1;
- (id)descriptorsForCoreDataResult:(id)arg1 state:(id*)arg2 error:(id*)arg3;
- (id)descriptorsForFetchOperation:(id)arg1 state:(id*)arg2 error:(id*)arg3;
- (bool)destroysOnDeallocation;
- (id)duplicateNameErrorWithName:(id)arg1;
- (id)duplicateReference:(id)arg1 error:(id*)arg2;
- (id)duplicateReference:(id)arg1 newName:(id)arg2 error:(id*)arg3;
- (id)exportableURL;
- (id)fetchBuiltInCollections;
- (id)fetchFirstAllowedStateMatching:(id)arg1 actionUUID:(id)arg2 forReference:(id)arg3;
- (id)fileURL;
- (id)folderForWorkflowReference:(id)arg1;
- (id)generateAndPersistUUIDForActionWithIdentifier:(id)arg1 actionIndex:(unsigned long long)arg2 workflowIdentifier:(id)arg3;
- (bool)hasConflictWithName:(id)arg1;
- (bool)hasConflictingReferenceForReference:(id)arg1;
- (bool)hasValidLibrary;
- (bool)hasVisibleWorkflowsWithName:(id)arg1;
- (id)initWithStoreDescription:(id)arg1 runMigrationsIfNecessary:(bool)arg2 useLockFile:(bool)arg3 error:(id*)arg4;
- (void)invalidateAllObjectsAndNotify;
- (bool)isAutoShortcutDisabledForAppDescriptor:(id)arg1 autoShortcutIdentifier:(id)arg2 error:(id*)arg3;
- (bool)isAutoShortcutDisabledForBundleIdentifier:(id)arg1 autoShortcutIdentifier:(id)arg2;
- (bool)isAutoShortcutDisabledForBundleIdentifier:(id)arg1 autoShortcutIdentifier:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isPostingDistributedNotifications;
- (bool)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2;
- (bool)isSiriEnabledForAutoShortcutsWithAppDescriptor:(id)arg1 error:(id*)arg2;
- (bool)isSiriEnabledForAutoShortcutsWithBundleIdentifier:(id)arg1;
- (bool)isSiriEnabledForAutoShortcutsWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (bool)isSpotlightEnabledForAutoShortcutsWithAppDescriptor:(id)arg1 error:(id*)arg2;
- (bool)isSpotlightEnabledForAutoShortcutsWithBundleIdentifier:(id)arg1;
- (bool)isSpotlightEnabledForAutoShortcutsWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)latestCoreDataLibrary;
- (id)latestLibrary;
- (id)latestRunEvent;
- (id)latestWorkflowSiriRunEvent;
- (id)libraryDotRepresentation;
- (id)libraryRecordForVersion:(id)arg1;
- (id)localConflictingReferenceForReference:(id)arg1;
- (id)logRunOfWorkflow:(id)arg1 atDate:(id)arg2 withIdentifier:(id)arg3 source:(id)arg4 triggerID:(id)arg5;
- (id)logRunOfWorkflow:(id)arg1 withSource:(id)arg2 triggerID:(id)arg3;
- (void)markTriggersAsRunAfterConfirmationIfNeeded;
- (bool)mergeAutoShortcutsPreferencesWithNewPreferences:(id)arg1 error:(id*)arg2;
- (bool)mergeAutomationsAndShortcuts;
- (id)migrateAccountStateToAppOriginIfNecessary:(id)arg1 reference:(id)arg2 actionUUID:(id)arg3;
- (id)missingErrorForDescriptor:(id)arg1;
- (id)mostRunOrLatestImportedVisibleShortcut;
- (bool)moveCollections:(id)arg1 toIndexes:(id)arg2 error:(id*)arg3;
- (bool)moveCollections:(id)arg1 toIndexes:(id)arg2 ofCollectionWithIdentifier:(id)arg3 error:(id*)arg4;
- (bool)moveReferences:(id)arg1 toIndex:(long long)arg2 ofCollection:(id)arg3 error:(id*)arg4;
- (bool)moveReferences:(id)arg1 toIndexes:(id)arg2 ofCollection:(id)arg3 error:(id*)arg4;
- (void)notifyResultsAboutChange:(id)arg1;
- (bool)object:(id)arg1 didUpdateProperties:(id)arg2 error:(id*)arg3;
- (id)objectForDescriptor:(id)arg1 properties:(id)arg2;
- (id)objectForDescriptor:(id)arg1 properties:(id)arg2 createIfNecessary:(bool)arg3;
- (id)objectOfClass:(Class)arg1 withIdentifier:(id)arg2 forKey:(id)arg3 createIfNecessary:(bool)arg4 properties:(id)arg5;
- (void)objectWasCreated:(id)arg1 identifier:(id)arg2;
- (id)observers;
- (struct os_unfair_lock_s { unsigned int x1; })observersLock;
- (id)orphanedFolders;
- (id)orphanedFoldersPredicate;
- (id)orphanedShortcuts;
- (id)orphanedWorkflowsPredicate;
- (id)pendingLocalChangeNotification;
- (id)pendingRemoteChangeNotification;
- (id)performDatabaseLookupForState:(id)arg1 actionUUID:(id)arg2 reference:(id)arg3;
- (id)performOperationWithReason:(id)arg1 block:(id /* block */)arg2 error:(id*)arg3;
- (id)performSaveOperationWithReason:(id)arg1 block:(id /* block */)arg2 error:(id*)arg3;
- (id)performSuggestionsOperationWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (void)performTransactionWithReason:(id)arg1 block:(id /* block */)arg2 error:(id*)arg3;
- (id)persistentStoreDescription;
- (bool)prependReferences:(id)arg1 toCollection:(id)arg2 error:(id*)arg3;
- (bool)prependReferences:(id)arg1 toCollectionWithType:(id)arg2 error:(id*)arg3;
- (id)recentlyModifiedShortcuts;
- (id)recentlyRunShortcuts;
- (id)recentlyRunShortcutsWithLimit:(long long)arg1;
- (Class)recordClassForObjectType:(unsigned long long)arg1;
- (id)recordWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)recordWithDescriptor:(id)arg1 properties:(id)arg2 error:(id*)arg3;
- (id)referenceForWorkflowID:(id)arg1;
- (id)referenceForWorkflowID:(id)arg1 includingTombstones:(bool)arg2;
- (void)reloadLibrary;
- (bool)reloadRecord:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3;
- (void)remoteChangeDebouncerDidFire;
- (id)remoteChangeNotificationDebouncer;
- (id)remoteChangeQueue;
- (id)remoteConflictingReferenceForReference:(id)arg1;
- (void)remoteContextDidSave:(id)arg1;
- (void)removeAllSerializedParametersForQueryName:(id)arg1 error:(id*)arg2;
- (void)removeObjectObserver:(id)arg1;
- (bool)removeReferences:(id)arg1 fromCollectionWithIdentifier:(id)arg2 error:(id*)arg3;
- (void)removeRunEventsWithoutAssociatedShortcuts;
- (id)renameReference:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)replaceWithFileAtURL:(id)arg1 error:(id*)arg2;
- (id)resultsToNotify;
- (id)saveAutoShortcutsPreferencesForAppDescriptor:(id)arg1 update:(id /* block */)arg2 error:(id*)arg3;
- (bool)saveContextOrRollback:(id)arg1 error:(id*)arg2;
- (void)saveLibraryToDatabase:(id)arg1;
- (void)saveOutputActionSmartPromtDataForWorkflowReference:(id)arg1 error:(id*)arg2;
- (bool)saveRecord:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3;
- (bool)saveSmartPromptState:(id)arg1 reference:(id)arg2 error:(id*)arg3;
- (bool)saveSmartPromptStateData:(id)arg1 actionUUID:(id)arg2 reference:(id)arg3 error:(id*)arg4;
- (void)saveSmartPromptStatesForInsertedAction:(id)arg1 contentDestination:(id)arg2 reference:(id)arg3;
- (id)serializedParametersForIdentifier:(id)arg1 error:(id*)arg2;
- (bool)setAutoShortcutDisabledForAppDescriptor:(id)arg1 autoShortcutDisabled:(bool)arg2 autoShortcutIdentifier:(id)arg3 error:(id*)arg4;
- (bool)setAutoShortcutDisabledForBundleIdentifier:(id)arg1 autoShortcutDisabled:(bool)arg2 autoShortcutIdentifier:(id)arg3 source:(unsigned long long)arg4 error:(id*)arg5;
- (void)setConfirmedForTriggerEventWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)setConflictingReference:(id)arg1 forReference:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setDestroysOnDeallocation:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setOutcome:(long long)arg1 forRunEvent:(id)arg2;
- (void)setPendingLocalChangeNotification:(id)arg1;
- (void)setPendingRemoteChangeNotification:(id)arg1;
- (void)setPersistentStoreDescription:(id)arg1;
- (void)setPostDistributedNotifications:(bool)arg1;
- (void)setResultsToNotify:(id)arg1;
- (bool)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 error:(id*)arg3;
- (bool)setSiriAutoShortcutsEnablement:(bool)arg1 forAppDescriptor:(id)arg2 error:(id*)arg3;
- (bool)setSiriAutoShortcutsEnablement:(bool)arg1 forBundleIdentifier:(id)arg2 source:(unsigned long long)arg3 error:(id*)arg4;
- (bool)setSpotlightAutoShortcutsEnablement:(bool)arg1 forAppDescriptor:(id)arg2 error:(id*)arg3;
- (bool)setSpotlightAutoShortcutsEnablement:(bool)arg1 forBundleIdentifier:(id)arg2 source:(unsigned long long)arg3 error:(id*)arg4;
- (void)setSuggestionsContext:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (void)setTransactionCount:(long long)arg1;
- (void)setTrustedToRunScripts:(bool)arg1 forReference:(id)arg2 onDomain:(id)arg3;
- (bool)setWalrusStateForTesting:(long long)arg1 withError:(id*)arg2;
- (id)shortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 shortcutAvailability:(unsigned long long)arg2 error:(id*)arg3;
- (id)shortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 shortcutAvailability:(unsigned long long)arg2 error:(id*)arg3;
- (id)shortcutsWithOutOfSyncWalrusStatus;
- (bool)shouldAddWorkflowToLibrary:(id)arg1;
- (bool)shouldPromptForCurrentContentItemCount:(unsigned long long)arg1 previousCount:(unsigned long long)arg2;
- (id)smartPromptStatesForReference:(id)arg1;
- (id)smartPromptStatesForReference:(id)arg1 actionUUID:(id)arg2;
- (id)sortedRunEventsForTriggerID:(id)arg1;
- (id)sortedRunEventsWithSource:(id)arg1;
- (id)sortedRunEventsWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)sortedTriggerEventsWithConfirmationOnly:(bool)arg1;
- (id)sortedVisibleAppAssociatedWorkflows;
- (id)sortedVisibleFolders;
- (id)sortedVisibleWorkflowsByLastRunOrModificationDateWithLimit:(long long)arg1;
- (id)sortedVisibleWorkflowsByName;
- (id)sortedVisibleWorkflowsByNameWithLimit:(long long)arg1;
- (id)sortedVisibleWorkflowsInCollection:(id)arg1;
- (id)sortedVisibleWorkflowsNameContains:(id)arg1 limit:(long long)arg2;
- (id)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(id)arg1;
- (id)sortedVisibleWorkflowsWithType:(id)arg1;
- (id)sortedWorkflowsWithQuery:(id)arg1;
- (bool)startObservingChangesForResult:(id)arg1;
- (void)storeSerializedParameters:(id)arg1 forIdentifier:(id)arg2 queryName:(id)arg3 badgeType:(unsigned long long)arg4 error:(id*)arg5;
- (id)suggestedFolderNameForName:(id)arg1;
- (id)suggestedWorkflowNameForName:(id)arg1;
- (id)suggestionsContext;
- (id)syncToken;
- (id)tombstonedShortcutsPredicate;
- (void)trackMetricsForToggleType:(unsigned long long)arg1 source:(unsigned long long)arg2 bundleIdentifier:(id)arg3 isEnabled:(bool)arg4;
- (long long)transactionCount;
- (id)triggerEventForIdentifier:(id)arg1 error:(id*)arg2;
- (id)triggerResultWithFetchRequest:(id)arg1;
- (id)triggerRunEventsInTheLastWeek;
- (id)uniqueVisibleReferenceForWorkflowName:(id)arg1;
- (void)updateAppDescriptor:(id)arg1 atKey:(id)arg2 actionUUID:(id)arg3 actionIndex:(id)arg4 actionIdentifier:(id)arg5 workflowID:(id)arg6;
- (bool)updateAutoShortcutsPreferencesWithNewPreferences:(id)arg1 error:(id*)arg2;
- (id)updateFolder:(id)arg1 newName:(id)arg2 newIcon:(unsigned short)arg3 error:(id*)arg4;
- (void)updateWalrusStatus;
- (id)validateFolderName:(id)arg1 forCollection:(id)arg2 error:(id*)arg3;
- (id)validateWorkflowName:(id)arg1 forCreation:(bool)arg2 overwriting:(bool)arg3 error:(id*)arg4;
- (id)visibleCollectionForFolderName:(id)arg1;
- (id)visiblePredicate;
- (id)visibleReferencesForWorkflowIDs:(id)arg1 sortBy:(unsigned long long)arg2 nameContaining:(id)arg3 nameEqualing:(id)arg4 associatedAppBundleIdentifier:(id)arg5 hasTombstonedConflicts:(bool)arg6 isRecentlyModified:(bool)arg7 isRecentlyRun:(bool)arg8 limitTo:(unsigned long long)arg9;
- (id)visibleReferencesForWorkflowIDs:(id)arg1 sortByKeys:(id)arg2 nameContaining:(id)arg3 nameEqualing:(id)arg4 associatedAppBundleIdentifier:(id)arg5 hasTombstonedConflicts:(bool)arg6 isRecentlyModified:(bool)arg7 isRecentlyRun:(bool)arg8 limitTo:(unsigned long long)arg9;
- (id)visibleReferencesForWorkflowName:(id)arg1;
- (bool)wipeAllLibrariesWithError:(id*)arg1;
- (id)workflowFetchRequestWithCollectionID:(id)arg1 includeTombstones:(bool)arg2 limit:(unsigned long long)arg3;
- (id)workflowRelationshipKeysAffectingDescriptors;
- (id)workflowResultWithFetchRequest:(id)arg1;
- (id)workflowResultWithLibraryQuery:(id)arg1;
- (id)workflowSiriRunEventWithIdentifier:(id)arg1;
- (id)workflowsWithTombstonedConflicts;

@end

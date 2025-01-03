/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexingEngine : NSObject <PLSearchIndexingIncrementalUpdateEngineDelegate, PLSearchIndexingRebuildEngineDelegate> {
    PLSearchIndexingAccessManager * _accessManager;
    PLSearchIndexConfiguration * _configuration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dropLock;
    NSObject<OS_dispatch_group> * _dropLock_dropGroup;
    bool  _dropLock_dropInProgress;
    PLResult * _dropLock_dropResult;
    <PLSearchIndexingEngineLibraryServicesProvider> * _libraryServicesProvider;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_closed;
    NSMutableArray * _queue_eventHistory;
    CSManagedSearchableIndex * _queue_managedSpotlightIndex;
    PSIDatabase * _queue_psiDatabase;
    PLSearchIndexingRebuildEngine * _queue_rebuildEngine;
    CSSearchableIndex * _queue_spotlightIndex;
    long long  _queue_spotlightSandboxExtensionHandle;
    PLSearchIndexingIncrementalUpdateEngine * _queue_updateEngine;
}

@property (nonatomic, readonly) PLSearchIndexConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientStateResultAndLogWithCode:(unsigned long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3;
- (void)_dropSearchIndexWithSourceName:(id)arg1 reasons:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_inLibraryPerform_donateAssets:(id)arg1 library:(id)arg2 completion:(id /* block */)arg3;
- (void)_inLibraryPerform_donateManagedObjects:(id)arg1 partialUpdateMasks:(id)arg2 entity:(unsigned long long)arg3 deleteIdentifiers:(id)arg4 identifiersRequiringAdditionalWorkByEntity:(id)arg5 library:(id)arg6 progress:(id)arg7 completion:(id /* block */)arg8;
- (bool)_inq_acquireSpotlightSandboxExtensionIfNeeded;
- (void)_inq_close;
- (void)_inq_donatePSIObjectsByType:(id)arg1 spotlightItemsByBundleID:(id)arg2 deleteIdentifiers:(id)arg3 spotlightClientState:(id)arg4 completion:(id /* block */)arg5;
- (void)_inq_dropSearchIndexWithSourceName:(id)arg1 reasons:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_inq_handleClientStateValidationError:(id)arg1 library:(id)arg2;
- (void)_inq_open;
- (void)_inq_releaseSpotlightSandboxExtension;
- (void)_inq_validateSpotlightClientStateAgainstExpectedClientState:(id)arg1 completion:(id /* block */)arg2;
- (void)_safePerformBlock:(id /* block */)arg1;
- (id)_spotlightIndexName;
- (void)close;
- (id)configuration;
- (id)configurationForIncrementalUpdateEngine:(id)arg1;
- (void)disableUISearch;
- (void)dropSearchIndexForSearchIndexingRebuildEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)dropSearchIndexWithSourceName:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRemainingWorkWithLibrary:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasRebuildWorkToDoForLibrary:(id)arg1;
- (void)inLibraryPerform_donateForIncrementalUpdateEngine:(id)arg1 managedObjects:(id)arg2 partialUpdateMasks:(id)arg3 entity:(unsigned long long)arg4 deleteIdentifiers:(id)arg5 identifiersRequiringAdditionalWorkByEntity:(id)arg6 library:(id)arg7 progress:(id)arg8 completion:(id /* block */)arg9;
- (void)inLibraryPerform_donateForSearchIndexingRebuildEngine:(id)arg1 managedObjects:(id)arg2 entity:(unsigned long long)arg3 entityName:(id)arg4 library:(id)arg5 progress:(id)arg6 queue:(id)arg7 completion:(id /* block */)arg8;
- (void)indexAssetsIfNeededWithObjectIDs:(id)arg1 library:(id)arg2 completion:(id /* block */)arg3;
- (void)indexAssetsWithUUIDs:(id)arg1 partialUpdateMask:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)initWithLibraryServicesProvider:(id)arg1;
- (void)openWithCompletion:(id /* block */)arg1;
- (void)pauseProcessingIncrementalUpdates;
- (void)pauseSearchIndexRebuildWithSourceName:(id)arg1;
- (id)processBatchOfJobsWithType:(short)arg1 flags:(long long)arg2 library:(id)arg3 completion:(id /* block */)arg4;
- (void)removeUnusedGroupsFromPSI;
- (void)resetSearchIndexWithReason:(long long)arg1 library:(id)arg2 dropCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)resumeProcessingIncrementalUpdatesInLibrary:(id)arg1 completion:(id /* block */)arg2;
- (void)resumeSearchIndexRebuildIfNeededForLibrary:(id)arg1 calledBy:(id)arg2 completion:(id /* block */)arg3;
- (id)sceneTaxonomyDigestsForSearchIndexingRebuildEngine:(id)arg1;
- (bool)supportsPSI;
- (bool)supportsSpotlightClientState;
- (bool)supportsSpotlightDelete;
- (bool)supportsSpotlightDonate;
- (long long)wellKnownLibraryIdentifierForIncrementalUpdateEngine:(id)arg1;
- (long long)wellKnownLibraryIdentifierForSearchIndexingRebuildEngine:(id)arg1;

@end

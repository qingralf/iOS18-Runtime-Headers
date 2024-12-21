/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGManager : NSObject {
    CPAnalytics * _analytics;
    CLSAOICache * _aoiCache;
    NSURL * _cachedGraphPersistenceParentDirectoryURL;
    NSURL * _cachedGraphPersistentStoreURL;
    NSMutableArray * _coalescingGraphIsReady;
    PGCurationManager * _curationManager;
    NSObject<OS_os_log> * _enrichmentLoggingConnection;
    NSObject<OS_os_log> * _externalRelevanceLoggingConnection;
    _Atomic unsigned long long  _fullGraphRebuildStamp;
    PGGraph * _graph;
    NSObject<OS_dispatch_queue> * _graphAccessQueue;
    NSObject<OS_os_log> * _graphConsistencyCheckLoggingConnection;
    NSObject<OS_os_log> * _graphLoggingConnection;
    NSString * _graphName;
    NSObject<OS_dispatch_queue> * _graphUpdateQueue;
    NSObject<OS_os_log> * _guessWhoLoggingConnection;
    NSObject<OS_os_log> * _ingestLoggingConnection;
    unsigned long long  _libraryAnalysisState;
    CLSLocationCache * _locationCache;
    NSObject<OS_os_log> * _loggingConnection;
    NSObject<OS_os_log> * _memoriesLoggingConnection;
    NSURL * _metadataSnapshotOutputPathURL;
    NSObject<OS_os_log> * _metricsLoggingConnection;
    PGMusicBag * _musicBag;
    PGMusicCache * _musicCache;
    PGMutableGraph * _mutableGraph;
    CLSNatureCache * _natureCache;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    _Atomic unsigned long long  _numberOfCurrentGraphAccesses;
    PHPhotoLibrary * _photoLibrary;
    bool  _photoLibraryIsReadonly;
    CLSPOICache * _poiCache;
    CLSPublicEventManager * _publicEventManager;
    NSProgress * _rebuildProgress;
    NSObject<OS_os_log> * _relatedLoggingConnection;
    CLSROICache * _roiCache;
    CLSServiceManager * _serviceManager;
    NSObject<OS_os_log> * _suggestionsLoggingConnection;
    NSObject<OS_os_log> * _upNextLoggingConnection;
}

@property (nonatomic, readonly) CPAnalytics *analytics;
@property (nonatomic, readonly) CLSAOICache *aoiCache;
@property (nonatomic, readonly, copy) NSArray *availableMetricEvents;
@property (nonatomic, readonly) PGCurationManager *curationManager;
@property (nonatomic, readonly) NSDate *dateOfLastIncrementalUpdateInvocation;
@property (nonatomic, readonly) NSObject<OS_os_log> *enrichmentLoggingConnection;
@property (nonatomic, readonly) NSObject<OS_os_log> *externalRelevanceLoggingConnection;
@property (nonatomic, readonly) NSObject<OS_os_log> *graphConsistencyCheckLoggingConnection;
@property (nonatomic, readonly) NSObject<OS_os_log> *graphLoggingConnection;
@property (readonly, copy) NSString *graphName;
@property (nonatomic, readonly) NSURL *graphPersistenceParentDirectoryURL;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *graphUpdateQueue;
@property (nonatomic, readonly) NSObject<OS_os_log> *guessWhoLoggingConnection;
@property (nonatomic, readonly) NSObject<OS_os_log> *ingestLoggingConnection;
@property (readonly) unsigned long long libraryAnalysisState;
@property unsigned long long libraryAnalysisState;
@property (nonatomic, readonly) CLSLocationCache *locationCache;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) NSObject<OS_os_log> *memoriesLoggingConnection;
@property (nonatomic, retain) NSURL *metadataSnapshotOutputPathURL;
@property (nonatomic, readonly) NSObject<OS_os_log> *metricsLoggingConnection;
@property (nonatomic, retain) PGMusicBag *musicBag;
@property (nonatomic, readonly) CLSNatureCache *natureCache;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) bool photoLibraryIsReadonly;
@property (nonatomic, readonly) CLSPOICache *poiCache;
@property (nonatomic, readonly) CLSPublicEventManager *publicEventManager;
@property (nonatomic, retain) NSProgress *rebuildProgress;
@property (nonatomic, readonly) NSObject<OS_os_log> *relatedLoggingConnection;
@property (nonatomic, readonly) CLSROICache *roiCache;
@property (nonatomic, readonly) CLSServiceManager *serviceManager;
@property (nonatomic, readonly) NSObject<OS_os_log> *suggestionsLoggingConnection;
@property (nonatomic, readonly) NSObject<OS_os_log> *upNextLoggingConnection;

+ (id)_calendarEventsBetweenDate:(id)arg1 andDate:(id)arg2 atLocation:(id)arg3 withPersonLocalIdentifiers:(id)arg4 inPhotoLibrary:(id)arg5 serviceManager:(id)arg6 locationCache:(id)arg7;
+ (id)_nodesOfClass:(id)arg1 matchingNodes:(id)arg2 inGraph:(id)arg3;
+ (long long)_totalNumberOfIdenticalNodesFromNode1ByNode2:(id)arg1 withNumberOfIdenticalNodesByDomain:(id)arg2 loggingConnection:(id)arg3 progressBlock:(id /* block */)arg4;
+ (id)consistencyCheckResultOfGraph:(id)arg1 andGraph:(id)arg2 loggingConnection:(id)arg3 progressBlock:(id /* block */)arg4;
+ (id)consistencyIgnoredNodeDomainClasses;
+ (id)consistencyIgnoredNodeDomainCodes;
+ (id)defaultRulesWithOptions:(id)arg1 graph:(id)arg2;
+ (id)edgesByNodeFromEdges:(id)arg1 andNode:(id)arg2;
+ (id)exportableDictionaryFromKeywords:(id)arg1;
+ (bool)geoServiceProviderDidChangeForGraph:(id)arg1;
+ (Class)graphClass;
+ (bool)graphConsistencyCheckIsEnabled;
+ (id)graphServicesURLWithPhotoLibrary:(id)arg1;
+ (void)initialize;
+ (id)nodeDomainsFromGraph:(id)arg1;
+ (id)nodesByClassFromGraph:(id)arg1;
+ (id)nodesOfClass:(id)arg1 matchingNode:(id)arg2 inGraph:(id)arg3;
+ (bool)photosChallengeIsEnabled;
+ (id)stringFromPGDuration:(unsigned long long)arg1;
+ (id)summaryCurationForHighlight:(id)arg1;

- (void).cxx_destruct;
- (id)UUIDForMoment:(id)arg1;
- (bool)_addressesDidChangeBetweenAddressesInGraph:(id)arg1 andAddressesInContacts:(id)arg2 addressType:(unsigned long long)arg3 person:(id)arg4 graph:(id)arg5;
- (id)_behavioralStatisticsWithGraph:(id)arg1;
- (id)_changingPropertyKeysForPersonProperties:(id)arg1 andPersonContactProperties:(id)arg2;
- (id)_checkConsistencyOfGraph:(id)arg1;
- (id)_collectionStatisticsForCurrentPhotoLibrary;
- (id)_curationDebugInformationForHighlight:(id)arg1 options:(id)arg2;
- (id)_dateFormatter;
- (id)_dayOfWeekStatisticsWithGraph:(id)arg1;
- (id)_debugInformationForRelated:(id)arg1 referenceKeywords:(id)arg2 andRelatedMoment:(id)arg3 relatedType:(unsigned long long)arg4 curationContext:(id)arg5;
- (id)_defaultStatisticsWithGraph:(id)arg1 verbose:(bool)arg2 forDiagnostics:(bool)arg3;
- (id)_diagnosticSummaryInfoForMemory:(id)arg1;
- (id)_domainLabelCountStatisticsWithGraph:(id)arg1;
- (id)_entityTagsStatistics:(id)arg1;
- (id)_extractDatesAndAssetCountsFromMemory:(id)arg1;
- (id)_extractYearStatsFromOrderedCollectionFetchResults:(id)arg1 fetchOptions:(id)arg2 yearEntryKey:(id)arg3 numberOfYearsEntryKey:(id)arg4;
- (id)_fallbackCurationOfLength:(unsigned long long)arg1 forMemory:(id)arg2 customDuration:(double)arg3 curationContext:(id)arg4;
- (id)_featureNodesForEncodedFeatures:(id)arg1 inGraph:(id)arg2;
- (id)_fetchResultMatchingInternalPredicate:(id)arg1;
- (id)_getDefaultOutputPathForMetadataSnapshot;
- (id)_highlightEstimatesStatisticsWithCurationContext:(id)arg1;
- (id)_highlightTitleStatisticsWithGraph:(id)arg1 titleGenerationContext:(id)arg2;
- (id)_homeWorkNodesByPersonNodeForContactIdentifiers:(id)arg1 inGraph:(id)arg2;
- (id)_interestingStatisticsWithGraph:(id)arg1;
- (void)_invalidatePersistentCaches;
- (void)_invalidatePersistentCachesBeforeDateWithTimestamp:(double)arg1;
- (void)_invalidatePersistentCachesForGeoServiceProviderChange;
- (void)_invalidateTransientCaches;
- (bool)_isReadyWithError:(id*)arg1;
- (id)_mobilityStatisticsWithGraph:(id)arg1;
- (id)_momentNodesFromMemory:(id)arg1 inGraph:(id)arg2;
- (id)_momentsStatisticsForCurrentPhotoLibrary;
- (id)_moodStatisticsWithGraph:(id)arg1;
- (unsigned long long)_numberOfAssetsMatchingInternalPredicate:(id)arg1;
- (unsigned long long)_numberOfFamilyHolidayMomentsWithGraph:(id)arg1;
- (unsigned long long)_numberOfMomentsOverWeekendsWithGraph:(id)arg1;
- (unsigned long long)_numberOfNightOutMomentsWithGraph:(id)arg1;
- (id)_oneOnOneTripsWithGraph:(id)arg1;
- (id)_partOfDayStatisticsWithGraph:(id)arg1 titleGenerationContext:(id)arg2;
- (id)_peopleNameBiologicalSexStatisticsWithGraph:(id)arg1;
- (id)_peopleRelationshipsStatisticsWithGraph:(id)arg1 includingDebugInfo:(bool)arg2;
- (id)_peopleVisionAgeStatisticsWithGraph:(id)arg1;
- (id)_peopleVisionBiologicalSexStatisticsWithGraph:(id)arg1;
- (id)_poiStatisticsWithGraph:(id)arg1;
- (void)_precachePersonsInformationFromGraph:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)_recentlyUsedSongAdamIDsFromCurationOptions:(id)arg1;
- (id)_sanitizeGraphDataDictionaryForArchiving:(id)arg1 referencedMemory:(id)arg2;
- (unsigned long long)_sexHintForGivenNameOfContactForIdentifier:(id)arg1 inGraph:(id)arg2;
- (id)_sharedLibraryStatistics:(id)arg1;
- (id)_snapshotFilenameForLookupKey:(id)arg1;
- (id)_socialGroupsDebugStatistics:(id)arg1;
- (id)_socialGroupsDebugStringIncludingMeNode:(bool)arg1 withGraph:(id)arg2;
- (id)_socialGroupsDebugStringWithGraph:(id)arg1;
- (id)_socialGroupsStatistics:(id)arg1;
- (id)_sortedTextFeaturesFromTextFeatures:(id)arg1;
- (id)_stringDescriptionForBusinessItemsWithGraph:(id)arg1 includingInferredThroughPublicEvents:(bool)arg2 verbose:(bool)arg3;
- (id)_stringDescriptionForDisambiguatedLocationsWithGraph:(id)arg1;
- (id)_stringDescriptionForDisambiguatedPOIsInMomentNodes:(id)arg1;
- (id)_stringDescriptionForInterestingAreas:(id)arg1;
- (id)_stringDescriptionForInterestingCities:(id)arg1;
- (id)_stringDescriptionForLanguagesWithGraph:(id)arg1;
- (id)_stringDescriptionForLocationsWithGraph:(id)arg1;
- (id)_stringDescriptionForMeNode:(id)arg1;
- (id)_stringDescriptionForMeaningfulEvents:(id)arg1 isTrip:(bool)arg2 forDiagnostics:(bool)arg3 titleGenerationContext:(id)arg4;
- (id)_stringDescriptionForMemoriesNotification;
- (id)_stringDescriptionForMusicWithGraph:(id)arg1 summaryOnly:(bool)arg2;
- (id)_stringDescriptionForPeopleEventsWithGraph:(id)arg1;
- (id)_stringDescriptionForPetsWithGraph:(id)arg1;
- (id)_stringDescriptionForPublicEventsWithGraph:(id)arg1 verbose:(bool)arg2;
- (id)_stringDescriptionForSocialGroups:(id)arg1 includeImportance:(bool)arg2;
- (id)_stringDescriptionForUrbanCities:(id)arg1;
- (id)_summaryOfInferencesForMomentNodes:(id)arg1 inGraph:(id)arg2;
- (bool)_supportsSemanticalDedupingForMemory:(id)arg1;
- (id)_titleStatisticsWithGraph:(id)arg1 titleGenerationContext:(id)arg2;
- (void)_unloadGraph;
- (void)_waitGraphUntilFinishedUsingBlock:(id /* block */)arg1;
- (void)_waitLibraryUpdateUntilFinishedUsingBlock:(id /* block */)arg1;
- (id)_yearsStatisticsForCurrentPhotoLibrary;
- (id)allSocialGroupsForMemberLocalIdentifier:(id)arg1 options:(id)arg2;
- (id)analytics;
- (id)aoiCache;
- (id)assetCollectionFingerprintsWithVersion:(long long)arg1 forAssetCollections:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4;
- (id)assetCollectionsForPersonLocalIdentifiers:(id)arg1;
- (id)assetFingerprintsWithVersion:(long long)arg1 forAssets:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4;
- (id)assetIdentifiersForPersonLocalIdentifiers:(id)arg1;
- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 progressReporter:(id)arg3;
- (id)availableMetricEvents;
- (id)blockedFeatures;
- (bool)canProceedWithFullGraphRebuildStamp:(void *)arg1; // needs 1 arg types, found 2: _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long long
- (id)clsPersonByContactIdentifierWithPersonContactIdentifiers:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)commonInitWithPhotoLibrary:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)copyGraphToURL:(id)arg1;
- (id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 curationContext:(id)arg4;
- (id)curationDebugInformationForAssetCollection:(id)arg1 options:(id)arg2 curationContext:(id)arg3;
- (id)curationManager;
- (id)curationOfLength:(unsigned long long)arg1 forMemory:(id)arg2 customDuration:(double)arg3 useAssetEligibility:(bool)arg4 curationContext:(id)arg5;
- (_Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*)currentFullGraphRebuildStamp:(SEL)arg1;
- (unsigned long long)currentGraphVersion;
- (bool)date:(id)arg1 isEqualToDate:(id)arg2;
- (id)dateOfLastIncrementalUpdateInvocation;
- (id)defaultGraphExportFullPath;
- (id)defaultPeopleClustersExportIntermediatePath;
- (id)defaultSnapshotRootPath;
- (bool)destroyValidationGraph;
- (id)diagnosticsSummaryInfoOnExistingMemoriesForCurrentPhotoLibrary;
- (id)enrichmentLoggingConnection;
- (id)externalRelevanceLoggingConnection;
- (id)fastGraphExportFullPath;
- (bool)generateDefaultRulesForLibraryScopeWithLocalIdentifier:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (id)graphAndAlgorithmVersionsWithGraph:(id)arg1;
- (id)graphConsistencyCheckLoggingConnection;
- (id)graphForLibraryFullAnalysisAtURL:(id)arg1 alreadyIngestedMomentIdentifiers:(id*)arg2 alreadyIngestedHighlightIdentifiers:(id*)arg3 progressBlock:(id /* block */)arg4 error:(id*)arg5;
- (bool)graphIsUsable:(id)arg1 error:(id*)arg2;
- (id)graphLoggingConnection;
- (id)graphName;
- (id)graphPersistenceParentDirectoryCandidateURLs;
- (id)graphPersistenceParentDirectoryURL;
- (id)graphPersistentStoreURL;
- (double)graphScoreForMoment:(id)arg1;
- (id)graphUpdateForContactsChangesWithProgressReporter:(id)arg1;
- (id)graphUpdateQueue;
- (id)guessWhoLoggingConnection;
- (bool)hasPendingGraphAccess;
- (id)highlightDebugInformationWithHighlight:(id)arg1;
- (id)homeCircularRegions;
- (bool)homeWorkAddressesDidChangeForPersonInContact:(id)arg1 andPersonNode:(id)arg2 withHomeWorkNodesByPersonNode:(id)arg3 graph:(id)arg4;
- (unsigned int)identifierForMoment:(id)arg1;
- (id)ingestLoggingConnection;
- (id)init;
- (id)initForTesting;
- (id)initWithGraph:(id)arg1;
- (id)initWithGraph:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithGraph:(id)arg1 readonlyPhotoLibrary:(id)arg2;
- (id)initWithGraphPersistentStoreURL:(id)arg1 photoLibrary:(id)arg2 analytics:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)initWithImmutableGraph:(id)arg1;
- (id)initWithImmutableGraph:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 analytics:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)initWithPhotoLibrary:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithReadonlyPhotoLibrary:(id)arg1;
- (id)instantiateMutableGraphWithError:(id*)arg1;
- (void)invalidatePersistentCaches;
- (void)invalidateTransientCaches;
- (bool)isBusy;
- (bool)isInterestingForMoment:(id)arg1;
- (bool)isReady;
- (bool)isReadyWithError:(id*)arg1;
- (bool)isSmartInterestingForMoment:(id)arg1;
- (id)keywordsForAsset:(id)arg1 relatedType:(unsigned long long)arg2;
- (id)keywordsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2;
- (id)keywordsForMomentNodeName:(id)arg1 relatedType:(unsigned long long)arg2;
- (void)legacyPerformAsynchronousBarrierGraphWriteUsingBlock:(id /* block */)arg1;
- (unsigned long long)libraryAnalysisState;
- (double)libraryDuration;
- (id)libraryStatisticsForCurrentPhotoLibrary;
- (void)loadGraphWithProgressBlock:(id /* block */)arg1;
- (id)locationCache;
- (id)loggingConnection;
- (void)matchWithVisualFormat:(id)arg1 elements:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)matchWithVisualFormat:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)maximalSocialGroupsOverlappingMemberLocalIdentifiers:(id)arg1;
- (bool)mePersonContactIdentifierDidChangeWithGraphUpdate:(id)arg1;
- (unsigned long long)medianValueFromUnsignedItegerArray:(id)arg1;
- (id)memoriesLoggingConnection;
- (id)memoryDebugInformationWithMoments:(id)arg1 meaningLabels:(id)arg2;
- (id)metadataSnapshotOutputPathURL;
- (id)metricsLoggingConnection;
- (id)momentLocalIdentifiersInDateInterval:(id)arg1 error:(id*)arg2;
- (id)musicBag;
- (id)musicCurationInflationContextWithInflationOptions:(id)arg1 error:(id*)arg2;
- (id)musicCuratorContextWithCurationOptions:(id)arg1 error:(id*)arg2;
- (id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)arg1 error:(id*)arg2;
- (id)natureCache;
- (double)neighborScoreForMoment:(id)arg1;
- (id)newSearchComputationCache;
- (void)notifyCoalescingBlocksGraphAnalysisFinished:(bool)arg1 error:(id)arg2;
- (void)performAsynchronousGraphBarrierUsingBlock:(id /* block */)arg1;
- (void)performAsynchronousGraphWriteUsingBlock:(id /* block */)arg1;
- (void)performAsynchronousNotification:(id /* block */)arg1;
- (void)performFullLibraryAnalysisInGraph:(id)arg1 withRecipe:(id)arg2 withAlreadyIngestedMomentIdentifiers:(id)arg3 alreadyIngestedHighlightIdentifiers:(id)arg4 processedGraphUpdate:(id*)arg5 progressBlock:(id /* block */)arg6;
- (long long)performLibraryAnalysisWithGraphURL:(id)arg1 withRecipe:(id)arg2 processedGraphUpdate:(id*)arg3 progressBlock:(id /* block */)arg4;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(id /* block */)arg1;
- (id)performerIdentifiersForMomentUUIDs:(id)arg1;
- (id)photoLibrary;
- (bool)photoLibraryIsReadonly;
- (id)poiCache;
- (id)processSubdirectoryName;
- (id)publicEventManager;
- (id)rebuildProgress;
- (id)recentFrequentLocationRegions;
- (void)regenerateMemoriesOfCategory:(unsigned long long)arg1 progressReporter:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)registerCoalescingBlockWhenGraphAnalysisFinishes:(id /* block */)arg1;
- (id)relatedDebugInformationBetweenAsset:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 curationContext:(id)arg4;
- (id)relatedDebugInformationBetweenReferenceAssetCollection:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 curationContext:(id)arg4;
- (id)relatedLoggingConnection;
- (id)relationshipInferencesForPersonLocalIdentifiers:(id)arg1;
- (void)reportMetricsLogWithConsistencyCheckResult:(id)arg1 loggingConnection:(id)arg2;
- (id)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)requestAssetLocalIdentifiersWithinLocationRadiusOfAssetLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)requestGraleSemanticLabelPropagationWithError:(id*)arg1;
- (bool)requiresReadOnly;
- (id)roiCache;
- (bool)saveGraphToURL:(id)arg1;
- (id)searchKeywordsByEventWithUUIDs:(id)arg1 ofType:(unsigned long long)arg2 progressReporter:(id)arg3;
- (id)searchMetadataWithOptions:(id)arg1 progressReporter:(id)arg2;
- (id)searchSynonymsDictionariesWithProgressReporter:(id)arg1;
- (id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(bool)arg3 progressReporter:(id)arg4;
- (id)serviceManager;
- (void)setGraph:(id)arg1;
- (void)setGraphInfoDateOfLastIncrementalUpdateInvocationWithDate:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setGraphPersistentStoreURL:(id)arg1;
- (void)setLibraryAnalysisState:(unsigned long long)arg1;
- (void)setMetadataSnapshotOutputPathURL:(id)arg1;
- (void)setMusicBag:(id)arg1;
- (void)setMutableGraph:(id)arg1;
- (void)setRebuildProgress:(id)arg1;
- (id)sharingMessageSuggestionDebugInformationForAssetCollection:(id)arg1;
- (id)sharingSuggestionDebugInformationForSuggestion:(id)arg1;
- (bool)shouldValidateGraphConsistency;
- (id)snapshotOuputFilePathURLForKey:(id)arg1;
- (id)socialGroupsOverlappingMemberLocalIdentifiers:(id)arg1;
- (id)sortedArrayForPersonLocalIdentifiers:(id)arg1;
- (void)stampFullGraphRebuild;
- (void)startGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)startLibraryAnalysis:(id /* block */)arg1 keepExistingGraph:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)startLibraryAnalysisWithRecipe:(id)arg1 progressBlock:(id /* block */)arg2 keepExistingGraph:(bool)arg3 completionBlock:(id /* block */)arg4;
- (id)statisticsWithTypeStrings:(id)arg1;
- (id)suggestedContributionsForAssetsMetadata:(id)arg1;
- (id)suggestedMomentLocalIdentifiersForPersonLocalIdentifiers:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (id)suggestedPersonsForHome;
- (id)suggestedPersonsForSharedLibraryContentInclusion;
- (id)suggestedPersonsForSharedLibraryParticipants;
- (id)suggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 sharingOptions:(id)arg3;
- (id)suggestionsLoggingConnection;
- (bool)suggestsToStartSharedLibraryWithError:(id*)arg1;
- (id)summaryOfInferencesPerMomentByLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)summaryOfInferencesPerMomentInDateInterval:(id)arg1 error:(id*)arg2;
- (bool)swapInGraphAtURL:(id)arg1 progressBlock:(id /* block */)arg2 error:(id*)arg3;
- (double)targetCurationDurationWithCurationLength:(unsigned long long)arg1 customDuration:(double)arg2;
- (id)textFeaturesForMomentLocalIdentifiers:(id)arg1;
- (double)timeIntervalSinceLastGraphFullRebuild;
- (id)titleTupleForAlbum:(id)arg1 format:(long long)arg2 error:(id*)arg3;
- (id)titleTupleForAssetCollection:(id)arg1 format:(long long)arg2 error:(id*)arg3;
- (id)titleTupleForMoment:(id)arg1 format:(long long)arg2 error:(id*)arg3;
- (id)titleTupleForMomentList:(id)arg1 format:(long long)arg2 error:(id*)arg3;
- (id)titleTupleForPersonLocalIdentifiers:(id)arg1 format:(long long)arg2 error:(id*)arg3;
- (void)unloadGraph;
- (id)upNextLoggingConnection;
- (bool)updateGraph:(id)arg1 withGraphUpdate:(id)arg2 withRecipe:(id)arg3 progressBlock:(id /* block */)arg4;
- (void)updateGraphWithRecipe:(id)arg1 keepExistingGraph:(bool)arg2 progressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)utilityAssetInformation;
- (void)validateGraphConsistencyIfNeededWithProgressBlock:(id /* block */)arg1;
- (long long)validatePHObject:(id)arg1 featureAggregationValidator:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id*)arg4;
- (long long)validatePHObject:(id)arg1 graphRelationsFeatureValidator:(id)arg2 error:(id*)arg3;
- (void)waitUntilFinishedUsingBlock:(id /* block */)arg1;
- (id)workingContext;
- (id)workingContextForEnrichment;
- (id)workingContextForExternalRelevance;
- (id)workingContextForGraphConsistencyCheck;
- (id)workingContextForMemories;
- (id)workingContextForMetrics;
- (id)workingContextForRelated;
- (id)workingContextForSuggestions;
- (id)workingContextForUpNext;
- (id)zeroKeywordsWithOptions:(id)arg1 progressReporter:(id)arg2;

@end
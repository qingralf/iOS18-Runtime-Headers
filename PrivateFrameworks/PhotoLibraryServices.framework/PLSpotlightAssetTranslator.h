/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSpotlightAssetTranslator : NSObject

+ (id)_albumsUUIDsForAsset:(id)arg1 fetchHelper:(id)arg2 libraryIdentifier:(long long)arg3 assetCounts:(out id*)arg4;
+ (id)_audioClassificationsForAsset:(id)arg1;
+ (id)_contentRatingForAsset:(id)arg1 fetchHelper:(id)arg2;
+ (void)_getGraphAttributesForMomentFromFetchHelper:(id)arg1 businessNames:(out id*)arg2 businessCategories:(out id*)arg3 eventNames:(out id*)arg4 eventCategories:(out id*)arg5 eventPerformers:(out id*)arg6 meanings:(out id*)arg7 holidays:(out id*)arg8 locationKeywords:(out id*)arg9;
+ (id)_highlightUUIDsForAsset:(id)arg1 libraryIdentifier:(long long)arg2 assetCounts:(out id*)arg3;
+ (id)_humanActionScenesForAsset:(id)arg1 fetchHelper:(id)arg2;
+ (id)_jsonRepresentationForCSPersons:(id)arg1;
+ (id)_jsonRepresentationForScenesFromAsset:(id)arg1 fetchHelper:(id)arg2 indexingContext:(id)arg3 isSensitiveLocation:(out bool*)arg4;
+ (id)_jsonRepresentationFromAsset:(id)arg1 libraryIdentifier:(long long)arg2 graphData:(id)arg3 indexingContext:(id)arg4 includeEmbeddingData:(bool)arg5;
+ (id)_libraryScopeForAsset:(id)arg1;
+ (id)_locationNamesForAsset:(id)arg1 graphData:(id)arg2;
+ (id)_locationNamesForAsset:(id)arg1 graphLocations:(id)arg2;
+ (id)_mediaTypesForAsset:(id)arg1;
+ (id)_memoryUUIDsForAsset:(id)arg1 fetchHelper:(id)arg2 libraryIdentifier:(long long)arg3 assetCounts:(out id*)arg4;
+ (id)_nameForContributor:(id)arg1;
+ (id)_personsForAsset:(id)arg1 fetchHelper:(id)arg2 personSynonyms:(id)arg3;
+ (id)_privateEncryptedComputeScenesForAsset:(id)arg1 fetchHelper:(id)arg2 csuTaxonomyObjectStore:(id)arg3 locale:(id)arg4 isSensitiveLocation:(out bool*)arg5;
+ (id)_revGeoLocationNamesForAsset:(id)arg1;
+ (id)_scenesForAsset:(id)arg1 fetchHelper:(id)arg2 sceneTaxonomyProvider:(id)arg3;
+ (id)_sharedLibraryContributorsForAsset:(id)arg1;
+ (id)_spotlightSearchableAttributesForAsset:(id)arg1 fetchHelper:(id)arg2 libraryIdentifier:(long long)arg3 graphData:(id)arg4 indexingContext:(id)arg5 documentObservation:(id)arg6 propertySets:(unsigned long long)arg7 embeddingsFetcher:(id)arg8;
+ (id)_utilityTypesForAsset:(id)arg1 indexingContext:(id)arg2;
+ (id)jsonRepresentationKeys;
+ (id)partialSpotlightSearchableItemFromAsset:(id)arg1 fetchHelper:(id)arg2 libraryIdentifier:(long long)arg3 propertySets:(unsigned long long)arg4 graphData:(id)arg5 indexingContext:(id)arg6 documentObservation:(id)arg7 embeddingsFetcher:(id)arg8;
+ (id)spotlightSearchableItemFromAsset:(id)arg1 libraryIdentifier:(long long)arg2 graphData:(id)arg3 indexingContext:(id)arg4 documentObservation:(id)arg5;

@end

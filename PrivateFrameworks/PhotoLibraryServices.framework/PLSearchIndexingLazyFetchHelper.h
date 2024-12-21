/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexingLazyFetchHelper : NSObject {
    NSArray * _albumsEligibleForSearchIndexing;
    NSArray * _allDetectedFaces;
    NSArray * _allSceneClasifications;
    long long  _libraryIdentifier;
    NSArray * _memoriesBeingCuratedAssets;
    NSManagedObjectContext * _moc;
    NSArray * _momentSearchEntities;
    PLManagedObject * _object;
    NSMutableDictionary * _relationsByPersonUUID;
}

- (void).cxx_destruct;
- (id)albumsEligibleForSearchIndexing;
- (id)allDetectedFaces;
- (id)allSceneClassifications;
- (void)enumerateMomentSearchEntitiesWithBlock:(id /* block */)arg1;
- (void)enumerateSearchEntityRelationsForPerson:(id)arg1 block:(id /* block */)arg2;
- (id)initWithObject:(id)arg1 libraryIdentifier:(long long)arg2 managedObjectContext:(id)arg3;
- (id)memoriesEligibleForSearchIndexing;

@end
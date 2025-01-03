/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexingIncrementalUpdateBatch : NSObject {
    NSArray * _coalescedWorkItems;
    NSArray * _eligibleManagedObjects;
    NSError * _error;
    NSMutableSet * _identifiers;
    NSArray * _identifiersRequiringAdditionalWork;
    NSArray * _ineligibleIdentifiers;
    NSMutableDictionary * _normalizedWorkItemsByIdentifiers;
    long long  _originalFlags;
    NSDictionary * _partialUpdateMasks;
    NSArray * _possibleEntities;
    NSArray * _workItems;
}

@property (nonatomic, readonly, copy) NSArray *coalescedWorkItems;
@property (nonatomic, readonly, copy) NSArray *eligibleManagedObjects;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) bool hasDonations;
@property (nonatomic, readonly, copy) NSArray *identifiersRequiringAdditionalWork;
@property (nonatomic, readonly, copy) NSArray *ineligibleIdentifiers;
@property (nonatomic, readonly, copy) NSDictionary *partialUpdateMasks;

- (void).cxx_destruct;
- (id)_descriptionForSearchableIdentifiers:(id)arg1 ineligibleIdentifiers:(id)arg2 entity:(unsigned long long)arg3;
- (bool)_flagsAreAmbiguous;
- (bool)_flagsAreIncompatible;
- (unsigned long long)_inLibraryPerform_searchableEntityForAmbiguousIdentifier:(id)arg1 library:(id)arg2;
- (void)_inPerformBlock_coalesceWithLibrary:(id)arg1;
- (void)_inPerformBlock_removeWorkItemsNotMatchingOriginalFlags;
- (void)_inPerformTransaction_processAmbiguousEntityJobsWithFlags:(long long)arg1 library:(id)arg2;
- (id)coalescedWorkItems;
- (id)eligibleManagedObjects;
- (id)error;
- (bool)hasDonations;
- (id)identifiersRequiringAdditionalWork;
- (void)inPerformBlock_prepareDonationsWithLibrary:(id)arg1;
- (void)inPerformTransaction_cleanUpWithSuccess:(bool)arg1 library:(id)arg2;
- (id)ineligibleIdentifiers;
- (id)initWithWorkItems:(id)arg1 flags:(long long)arg2;
- (id)partialUpdateMasks;
- (unsigned long long)targetEntity;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListDataSection : PXDataSection {
    NSDictionary * _childDataSections;
    NSDictionary * _childIndexHints;
    PXCollectionsDataSection * _collectionsDataSection;
    NSNumber * _countNumber;
    NSIndexSet * _dataSubsectionIndexes;
    NSArray * _dataSubsections;
    long long  _indentationLevel;
    NSArray * _sectionRangeMap;
    bool  _skipAssetCountFetches;
}

@property (nonatomic, readonly, copy) NSDictionary *childDataSections;
@property (nonatomic, readonly, copy) NSDictionary *childIndexHints;
@property (nonatomic, readonly) PXCollectionsDataSection *collectionsDataSection;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) NSArray *sectionRangeMap;

- (void).cxx_destruct;
- (void)_createDataSubsectionsIfNecessary;
- (unsigned long long)_dataSubsectionIndexForListItemAtIndex:(long long)arg1;
- (id)childDataSections;
- (id)childIndexHints;
- (id)collectionsDataSection;
- (id)content;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)debugDescription;
- (id)existingFetchResultForListItem:(id)arg1;
- (long long)indentationLevel;
- (long long)indexForListItem:(id)arg1;
- (long long)indexInCollectionsDataSectionOfListItem:(id)arg1 hintIndex:(long long)arg2;
- (id)initWithCollectionsDataSection:(id)arg1;
- (id)initWithCollectionsDataSection:(id)arg1 indentationLevel:(long long)arg2 childDataSections:(id)arg3 childIndexHints:(id)arg4 skipAssetCountFetches:(bool)arg5;
- (id)initWithOutlineObject:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
- (id)parentOfListItemAtIndex:(long long)arg1 localIndex:(long long*)arg2;
- (id)sectionRangeMap;
- (long long)validatedIndexOfListItem:(id)arg1 hintIndex:(long long)arg2;

@end
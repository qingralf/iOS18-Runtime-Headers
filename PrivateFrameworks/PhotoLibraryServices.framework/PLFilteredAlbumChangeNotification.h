/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLDerivedNotification, PLIndexMapperDataSource> {
    PLFilteredAlbum * _album;
    PLAssetContainerChangeNotification * _backingNotification;
    NSIndexSet * _filteredIndexes;
    PLIndexMapper * _indexMapper;
    NSIndexSet * _oldFilteredIndexes;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSIndexSet *filteredIndexes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) PLIndexMapper *indexMapper;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSIndexSet *updatedFilteredIndexes;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (void).cxx_destruct;
- (id)_changedObjects;
- (id)_diffDescription;
- (bool)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)album;
- (bool)countDidChange;
- (id)description;
- (id)filteredIndexes;
- (id)indexMapper;
- (id)init;
- (id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (bool)keyAssetDidChange;
- (id)object;
- (void)setFilteredIndexes:(id)arg1;
- (bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (bool)shouldReload;
- (bool)titleDidChange;
- (id)updatedFilteredIndexes;

@end

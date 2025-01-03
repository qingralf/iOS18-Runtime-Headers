/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache> {
    NSObject<PLAlbumContainer> * _backingAlbumList;
    struct __CFArray { } * _fromBackingMap;
    id /* block */  _sortComparator;
    struct __CFArray { } * _toBackingMap;
    NSMutableOrderedSet * _weak_albums;
}

@property (nonatomic, retain) NSMutableOrderedSet *_albums;
@property (nonatomic, readonly, retain) NSString *_prettyDescription;
@property (nonatomic, readonly, retain) NSString *_typeDescription;
@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly, copy) id /* block */ albumsSortingComparator;
@property (nonatomic, retain) NSObject<PLAlbumContainer> *backingAlbumList;
@property (nonatomic, readonly, copy) <NSObject><NSCopying> *cachedIndexMapState;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, copy) id /* block */ sortComparator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;

- (void).cxx_destruct;
- (id)_albums;
- (id)_prettyDescription;
- (id)_typeDescription;
- (bool)albumHasFixedOrder:(id)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned long long)albumsCount;
- (id /* block */)albumsSortingComparator;
- (id)backingAlbumList;
- (id)cachedIndexMapState;
- (bool)canEditAlbums;
- (bool)canEditContainers;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (unsigned long long)countOfSortedAlbums;
- (void)createSortedIndexesMap;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (int)filter;
- (bool)hasAtLeastOneAlbum;
- (id)identifier;
- (unsigned long long)indexInSortedAlbumsOfObject:(id)arg1;
- (id)initWithAlbumList:(id)arg1 sortComparator:(id /* block */)arg2;
- (void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned long long)arg2;
- (bool)isEmpty;
- (bool)isFolder;
- (id)managedObjectContext;
- (bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (bool)needsReordering;
- (id)objectInSortedAlbumsAtIndex:(unsigned long long)arg1;
- (id)photoLibrary;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setBackingAlbumList:(id)arg1;
- (void)setNeedsReordering;
- (void)setSortComparator:(id /* block */)arg1;
- (void)set_albums:(id)arg1;
- (id /* block */)sortComparator;
- (unsigned long long)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;

@end

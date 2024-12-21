/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
 */

@interface MSFavoriteItem : MapsSync.MapsSyncObject {
    void _customName;
    void _handleChanges;
    void _hidden;
    void _latitude;
    void _longitude;
    void _mapItemAddress;
    void _mapItemCategory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _mapItemLastRefreshed;
    void _mapItemName;
    void _mapItemStorage;
    void _muid;
    void _originatingAddressString;
    void _positionIndex;
    void _shortcutIdentifier;
    void _source;
    void _type;
    void _version;
}

@property (nonatomic, copy) NSString *customName;
@property (nonatomic) short favoriteType;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSString *mapItemAddress;
@property (nonatomic, copy) NSString *mapItemCategory;
@property (nonatomic, copy) NSDate *mapItemLastRefreshed;
@property (nonatomic, copy) NSString *mapItemName;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic, copy) NSString *placeItemNote;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short sourceType;
@property (nonatomic) short type;
@property (nonatomic) short version;

// Image: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync

+ (id)findDuplicatesWithContext:(id)arg1;
+ (Class)managedClass;
+ (id)mergeWithDuplicates:(id)arg1;
+ (id)optionsWith:(id)arg1;
+ (id)strippedMapItemWith:(id)arg1;

- (void).cxx_destruct;
- (void)addContactHandle:(id)arg1;
- (id)customName;
- (short)favoriteType;
- (id)fetchContactHandles;
- (void)flushChanges;
- (bool)hidden;
- (id)initWithCustomName:(id)arg1 hidden:(bool)arg2 latitude:(id)arg3 longitude:(id)arg4 mapItemAddress:(id)arg5 mapItemCategory:(id)arg6 mapItemLastRefreshed:(id)arg7 mapItemName:(id)arg8 muid:(id)arg9 originatingAddressString:(id)arg10 positionIndex:(long long)arg11 shortcutIdentifier:(id)arg12 source:(short)arg13 type:(short)arg14 version:(short)arg15;
- (id)initWithObject:(id)arg1 store:(id)arg2 lazyLoad:(bool)arg3;
- (id)initWithStore:(id)arg1 customName:(id)arg2 hidden:(bool)arg3 latitude:(id)arg4 longitude:(id)arg5 mapItemAddress:(id)arg6 mapItemCategory:(id)arg7 mapItemLastRefreshed:(id)arg8 mapItemName:(id)arg9 muid:(id)arg10 originatingAddressString:(id)arg11 positionIndex:(long long)arg12 shortcutIdentifier:(id)arg13 source:(short)arg14 type:(short)arg15 version:(short)arg16;
- (id)latitude;
- (id)longitude;
- (id)mapItemAddress;
- (id)mapItemCategory;
- (id)mapItemLastRefreshed;
- (id)mapItemName;
- (id)mapItemStorage;
- (void)moveAfterItem:(id)arg1 completion:(id /* block */)arg2;
- (void)moveBeforeItem:(id)arg1 completion:(id /* block */)arg2;
- (void)moveToBackWithCompletion:(id /* block */)arg1;
- (void)moveToFrontWithCompletion:(id /* block */)arg1;
- (id)muid;
- (void)onFirstSaveWithObject:(id)arg1 context:(id)arg2;
- (id)originatingAddressString;
- (id)placeItemNote;
- (long long)positionIndex;
- (void)removeContactHandle:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setFavoriteType:(short)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapItemAddress:(id)arg1;
- (void)setMapItemCategory:(id)arg1;
- (void)setMapItemLastRefreshed:(id)arg1;
- (void)setMapItemName:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setMuid:(id)arg1;
- (void)setOriginatingAddressString:(id)arg1;
- (void)setPlaceItemNote:(id)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1 lazyLoad:(bool)arg2;
- (void)setShortcutIdentifier:(id)arg1;
- (void)setSource:(short)arg1;
- (void)setSourceType:(short)arg1;
- (void)setType:(short)arg1;
- (void)setVersion:(short)arg1;
- (id)shortcutIdentifier;
- (short)source;
- (short)sourceType;
- (short)type;
- (short)version;

// Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions

+ (id)favoriteItemWithShortcut:(id)arg1;

- (void)updateWithShortcut:(id)arg1 didChange:(bool*)arg2;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
 */

@interface MSCollectionPlaceItem : MSCollectionItem {
    void _customName;
    void _droppedPinCoordinate;
    void _droppedPinFloorOrdinal;
    void _latitude;
    void _longitude;
    void _mapItemAddress;
    void _mapItemCategory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _mapItemLastRefreshed;
    void _mapItemName;
    void _mapItemStorage;
    void _muid;
    void _origin;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _originalIdentifier;
    void _placeItemNote;
    void _type;
}

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSData *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSString *mapItemAddress;
@property (nonatomic, copy) NSString *mapItemCategory;
@property (nonatomic, copy) NSDate *mapItemLastRefreshed;
@property (nonatomic, copy) NSString *mapItemName;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic) short origin;
@property (nonatomic, copy) NSUUID *originalIdentifier;
@property (nonatomic, copy) NSString *placeItemNote;
@property (nonatomic) short type;

+ (Class)managedClass;
+ (id)optionsWith:(id)arg1;
+ (id)strippedMapItemWith:(id)arg1;

- (void).cxx_destruct;
- (id)customName;
- (id)droppedPinCoordinate;
- (int)droppedPinFloorOrdinal;
- (id)initWithCustomName:(id)arg1 droppedPinCoordinate:(id)arg2 droppedPinFloorOrdinal:(int)arg3 latitude:(id)arg4 longitude:(id)arg5 mapItemAddress:(id)arg6 mapItemCategory:(id)arg7 mapItemLastRefreshed:(id)arg8 mapItemName:(id)arg9 muid:(id)arg10 origin:(short)arg11 originalIdentifier:(id)arg12 placeItemNote:(id)arg13 type:(short)arg14;
- (id)initWithObject:(id)arg1 store:(id)arg2 lazyLoad:(bool)arg3;
- (id)initWithStore:(id)arg1 customName:(id)arg2 droppedPinCoordinate:(id)arg3 droppedPinFloorOrdinal:(int)arg4 latitude:(id)arg5 longitude:(id)arg6 mapItemAddress:(id)arg7 mapItemCategory:(id)arg8 mapItemLastRefreshed:(id)arg9 mapItemName:(id)arg10 muid:(id)arg11 origin:(short)arg12 originalIdentifier:(id)arg13 placeItemNote:(id)arg14 type:(short)arg15;
- (id)latitude;
- (id)longitude;
- (id)mapItemAddress;
- (id)mapItemCategory;
- (id)mapItemLastRefreshed;
- (id)mapItemName;
- (id)mapItemStorage;
- (id)muid;
- (short)origin;
- (id)originalIdentifier;
- (id)placeItemNote;
- (void)setCustomName:(id)arg1;
- (void)setDroppedPinCoordinate:(id)arg1;
- (void)setDroppedPinFloorOrdinal:(int)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapItemAddress:(id)arg1;
- (void)setMapItemCategory:(id)arg1;
- (void)setMapItemLastRefreshed:(id)arg1;
- (void)setMapItemName:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setMuid:(id)arg1;
- (void)setOrigin:(short)arg1;
- (void)setOriginalIdentifier:(id)arg1;
- (void)setPlaceItemNote:(id)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1 lazyLoad:(bool)arg2;
- (void)setType:(short)arg1;
- (short)type;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
 */

@interface MSUserRoute : MapsSync.MapsSyncObject {
    void _addressObject;
    void _customName;
    void _customNote;
    void _eastLongitude;
    void _hikeType;
    void _length;
    void _northLatitude;
    void _originLatitude;
    void _originLongitude;
    void _positionIndex;
    void _routeGeometry;
    void _southLatitude;
    void _totalAscent;
    void _totalDescent;
    void _tourIdentifier;
    void _transportType;
    void _westLongitude;
}

@property (nonatomic, copy) NSData *addressObject;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSString *customNote;
@property (nonatomic, retain) NSNumber *eastLongitude;
@property (nonatomic) long long hikeType;
@property (nonatomic, retain) NSNumber *length;
@property (nonatomic, retain) NSNumber *northLatitude;
@property (nonatomic, retain) NSNumber *originLatitude;
@property (nonatomic, retain) NSNumber *originLongitude;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSData *routeGeometry;
@property (nonatomic, retain) NSNumber *southLatitude;
@property (nonatomic, retain) NSNumber *totalAscent;
@property (nonatomic, retain) NSNumber *totalDescent;
@property (nonatomic) long long tourIdentifier;
@property (nonatomic, retain) NSNumber *transportType;
@property (nonatomic, retain) NSNumber *westLongitude;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)addressObject;
- (id)customName;
- (id)customNote;
- (id)eastLongitude;
- (long long)hikeType;
- (id)initWithAddressObject:(id)arg1 customName:(id)arg2 customNote:(id)arg3 eastLongitude:(id)arg4 hikeType:(long long)arg5 length:(id)arg6 northLatitude:(id)arg7 originLatitude:(id)arg8 originLongitude:(id)arg9 positionIndex:(long long)arg10 routeGeometry:(id)arg11 southLatitude:(id)arg12 totalAscent:(id)arg13 totalDescent:(id)arg14 tourIdentifier:(long long)arg15 transportType:(id)arg16 westLongitude:(id)arg17;
- (id)initWithObject:(id)arg1 store:(id)arg2 lazyLoad:(bool)arg3;
- (id)initWithStore:(id)arg1 addressObject:(id)arg2 customName:(id)arg3 customNote:(id)arg4 eastLongitude:(id)arg5 hikeType:(long long)arg6 length:(id)arg7 northLatitude:(id)arg8 originLatitude:(id)arg9 originLongitude:(id)arg10 positionIndex:(long long)arg11 routeGeometry:(id)arg12 southLatitude:(id)arg13 totalAscent:(id)arg14 totalDescent:(id)arg15 tourIdentifier:(long long)arg16 transportType:(id)arg17 westLongitude:(id)arg18;
- (id)length;
- (id)northLatitude;
- (id)originLatitude;
- (id)originLongitude;
- (long long)positionIndex;
- (id)routeGeometry;
- (void)setAddressObject:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setCustomNote:(id)arg1;
- (void)setEastLongitude:(id)arg1;
- (void)setHikeType:(long long)arg1;
- (void)setLength:(id)arg1;
- (void)setNorthLatitude:(id)arg1;
- (void)setOriginLatitude:(id)arg1;
- (void)setOriginLongitude:(id)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1 lazyLoad:(bool)arg2;
- (void)setRouteGeometry:(id)arg1;
- (void)setSouthLatitude:(id)arg1;
- (void)setTotalAscent:(id)arg1;
- (void)setTotalDescent:(id)arg1;
- (void)setTourIdentifier:(long long)arg1;
- (void)setTransportType:(id)arg1;
- (void)setWestLongitude:(id)arg1;
- (id)southLatitude;
- (id)totalAscent;
- (id)totalDescent;
- (long long)tourIdentifier;
- (id)transportType;
- (id)westLongitude;

@end
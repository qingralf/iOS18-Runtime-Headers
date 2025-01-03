/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFLocation : NSObject <FMAnnotation, NSCopying, NSSecureCoding> {
    double  _TTL;
    long long  _activityState;
    NSString * _age;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    double  _distance;
    NSString * _distanceDescription;
    double  _distanceFromUser;
    FMFHandle * _handle;
    double  _horizontalAccuracy;
    bool  _isBorderEnabled;
    NSString * _label;
    UIImage * _largeAnnotationIcon;
    UIImage * _largeOverlayIcon;
    bool  _locatingInProgress;
    CLLocation * _location;
    long long  _locationType;
    NSString * _longAddress;
    double  _maxLocatingInterval;
    FMAccuracyOverlay * _overlay;
    FMFPlacemark * _placemark;
    NSString * _shortAddressString;
    UIImage * _smallAnnotationIcon;
    UIImage * _smallOverlayIcon;
    NSDate * _timestamp;
    UIColor * _tintColor;
}

@property (nonatomic) double TTL;
@property (nonatomic) long long activityState;
@property (nonatomic, retain) NSString *age;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) double distance;
@property (nonatomic, retain) NSString *distanceDescription;
@property (nonatomic) double distanceFromUser;
@property (nonatomic, retain) FMFHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) bool isBorderEnabled;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) UIImage *largeAnnotationIcon;
@property (nonatomic, retain) UIImage *largeOverlayIcon;
@property (getter=isLocatingInProgress, nonatomic) bool locatingInProgress;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) long long locationType;
@property (nonatomic, copy) NSString *longAddress;
@property (nonatomic) double maxLocatingInterval;
@property (nonatomic, retain) FMAccuracyOverlay *overlay;
@property (nonatomic, retain) FMFPlacemark *placemark;
@property (nonatomic, readonly, copy) NSString *shortAddress;
@property (nonatomic, copy) NSString *shortAddressString;
@property (nonatomic, retain) UIImage *smallAnnotationIcon;
@property (nonatomic, retain) UIImage *smallOverlayIcon;
@property (nonatomic, readonly, copy) NSString *subtitle; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly, copy) NSString *title; /* unknown property attribute: ? */

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)TTL;
- (void)_updateLocation:(id)arg1;
- (long long)activityState;
- (id)age;
- (id)agingItemTimestamp;
- (bool)conformsToProtocol:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)distance;
- (id)distanceDescription;
- (double)distanceFromUser;
- (long long)distanceThenNameCompare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (bool)hasKnownLocation;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4;
- (id)initWithHandle:(id)arg1 locationType:(long long)arg2 location:(id)arg3 activityState:(long long)arg4 label:(id)arg5 locatingInProgress:(bool)arg6 shortAddress:(id)arg7 longAddress:(id)arg8 placemark:(id)arg9;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (bool)isBorderEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isLocatingInProgress;
- (bool)isMoreRecentThan:(id)arg1;
- (bool)isThisDevice;
- (bool)isValid;
- (id)label;
- (id)largeAnnotationIcon;
- (id)largeOverlayIcon;
- (id)location;
- (id)locationAge;
- (id)locationShortAddressWithAge;
- (id)locationShortAddressWithAgeIncludeLocating;
- (long long)locationType;
- (id)longAddress;
- (double)maxLocatingInterval;
- (id)overlay;
- (id)placemark;
- (void)resetLocateInProgress:(id)arg1;
- (void)resetLocateInProgressTimer;
- (void)setActivityState:(long long)arg1;
- (void)setAge:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setDistance:(double)arg1;
- (void)setDistanceDescription:(id)arg1;
- (void)setDistanceFromUser:(double)arg1;
- (void)setHandle:(id)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setIsBorderEnabled:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLargeAnnotationIcon:(id)arg1;
- (void)setLargeOverlayIcon:(id)arg1;
- (void)setLocatingInProgress:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationType:(long long)arg1;
- (void)setLongAddress:(id)arg1;
- (void)setMaxLocatingInterval:(double)arg1;
- (void)setOverlay:(id)arg1;
- (void)setPlacemark:(id)arg1;
- (void)setShortAddressString:(id)arg1;
- (void)setSmallAnnotationIcon:(id)arg1;
- (void)setSmallOverlayIcon:(id)arg1;
- (void)setTTL:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)shortAddress;
- (id)shortAddressString;
- (id)smallAnnotationIcon;
- (id)smallOverlayIcon;
- (id)subtitle;
- (id)timestamp;
- (id)tintColor;
- (id)title;
- (void)updateHandle:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)updateLocationForCache:(id)arg1;

@end

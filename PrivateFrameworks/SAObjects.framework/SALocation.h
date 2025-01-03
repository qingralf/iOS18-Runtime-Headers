/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocation : SADomainObject <SAAceComparable>

@property (nonatomic, copy) NSNumber *accuracy;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entryPoints;
@property (nonatomic, copy) NSData *forwardGeoData;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic, copy) NSNumber *longitude;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *regionType;
@property (nonatomic, retain) SADistance *relativeDistance;
@property (nonatomic, copy) NSString *stateCode;
@property (nonatomic, copy) NSString *street;
@property (nonatomic, copy) NSString *subAdministrativeArea;
@property (nonatomic, copy) NSString *subLocality;
@property (nonatomic, copy) NSString *subThoroughfare;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *thoroughfare;
@property (nonatomic, copy) NSString *timezoneId;
@property (nonatomic, copy) NSNumber *travelDistance;
@property (nonatomic, copy) NSNumber *travelTime;

+ (id)location;
+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;

- (id)accuracy;
- (id)city;
- (id)countryCode;
- (id)encodedClassName;
- (id)entryPoints;
- (id)forwardGeoData;
- (id)groupIdentifier;
- (id)label;
- (id)latitude;
- (id)longitude;
- (id)postalCode;
- (id)regionType;
- (id)relativeDistance;
- (void)setAccuracy:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setEntryPoints:(id)arg1;
- (void)setForwardGeoData:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setRegionType:(id)arg1;
- (void)setRelativeDistance:(id)arg1;
- (void)setStateCode:(id)arg1;
- (void)setStreet:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (void)setTimezoneId:(id)arg1;
- (void)setTravelDistance:(id)arg1;
- (void)setTravelTime:(id)arg1;
- (id)stateCode;
- (id)street;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)timezoneId;
- (id)travelDistance;
- (id)travelTime;

@end

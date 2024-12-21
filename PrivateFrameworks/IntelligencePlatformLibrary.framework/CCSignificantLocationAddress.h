/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatformLibrary.framework/IntelligencePlatformLibrary
 */

@interface CCSignificantLocationAddress : CCItemMessage {
    NSString * _administrativeArea;
    NSString * _administrativeAreaCode;
    NSArray * _areasOfInterest;
    NSString * _country;
    NSString * _countryCode;
    bool  _hasIsIsland;
    NSString * _inlandWater;
    bool  _isIsland;
    NSString * _iso3166CountryCode;
    NSString * _iso3166SubdivisionCode;
    NSString * _locality;
    NSString * _mergedThoroughfare;
    NSString * _ocean;
    NSString * _postalCode;
    NSString * _subAministrativeArea;
    NSString * _subLocality;
    NSArray * _subPremises;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
}

@property (nonatomic, readonly) NSString *administrativeArea;
@property (nonatomic, readonly) NSString *administrativeAreaCode;
@property (nonatomic, readonly) NSArray *areasOfInterest;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic) bool hasIsIsland;
@property (nonatomic, readonly) NSString *inlandWater;
@property (nonatomic, readonly) bool isIsland;
@property (nonatomic, readonly) NSString *iso3166CountryCode;
@property (nonatomic, readonly) NSString *iso3166SubdivisionCode;
@property (nonatomic, readonly) NSString *locality;
@property (nonatomic, readonly) NSString *mergedThoroughfare;
@property (nonatomic, readonly) NSString *ocean;
@property (nonatomic, readonly) NSString *postalCode;
@property (nonatomic, readonly) NSString *subAministrativeArea;
@property (nonatomic, readonly) NSString *subLocality;
@property (nonatomic, readonly) NSArray *subPremises;
@property (nonatomic, readonly) NSString *subThoroughfare;
@property (nonatomic, readonly) NSString *thoroughfare;

+ (Class)contentMessageClass;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemType;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)administrativeArea;
- (id)administrativeAreaCode;
- (id)areasOfInterest;
- (id)country;
- (id)countryCode;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1 parentFieldType:(unsigned short)arg2;
- (bool)hasIsIsland;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithThoroughfare:(id)arg1 subLocality:(id)arg2 locality:(id)arg3 country:(id)arg4 error:(id*)arg5;
- (id)initWithThoroughfare:(id)arg1 subLocality:(id)arg2 locality:(id)arg3 country:(id)arg4 subPremises:(id)arg5 subThoroughfare:(id)arg6 subAministrativeArea:(id)arg7 administrativeArea:(id)arg8 administrativeAreaCode:(id)arg9 postalCode:(id)arg10 countryCode:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14 isIsland:(id)arg15 iso3166CountryCode:(id)arg16 iso3166SubdivisionCode:(id)arg17 mergedThoroughfare:(id)arg18 error:(id*)arg19;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)inlandWater;
- (bool)isIsland;
- (id)iso3166CountryCode;
- (id)iso3166SubdivisionCode;
- (id)jsonDictionary;
- (id)locality;
- (id)mergedThoroughfare;
- (id)ocean;
- (id)postalCode;
- (void)setHasIsIsland:(bool)arg1;
- (id)subAministrativeArea;
- (id)subLocality;
- (id)subPremises;
- (id)subThoroughfare;
- (id)thoroughfare;

@end
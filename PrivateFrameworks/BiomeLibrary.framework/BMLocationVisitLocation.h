/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMLocationVisitLocation : BMEventBase <BMStoreData> {
    double  _altitude;
    unsigned int  _dataVersion;
    bool  _hasAltitude;
    bool  _hasHorizontalUncertainty;
    bool  _hasLatitude;
    bool  _hasLongitude;
    bool  _hasRaw_date;
    bool  _hasVerticalUncertainty;
    double  _horizontalUncertainty;
    double  _latitude;
    double  _longitude;
    double  _raw_date;
    int  _referenceFrame;
    int  _sourceAccuracy;
    double  _verticalUncertainty;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasHorizontalUncertainty;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasVerticalUncertainty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double horizontalUncertainty;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) int referenceFrame;
@property (nonatomic, readonly) int sourceAccuracy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double verticalUncertainty;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (double)altitude;
- (unsigned int)dataVersion;
- (id)date;
- (id)description;
- (bool)hasAltitude;
- (bool)hasHorizontalUncertainty;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasVerticalUncertainty;
- (double)horizontalUncertainty;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 horizontalUncertainty:(id)arg3 altitude:(id)arg4 verticalUncertainty:(id)arg5 date:(id)arg6 referenceFrame:(int)arg7 sourceAccuracy:(int)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (double)latitude;
- (double)longitude;
- (int)referenceFrame;
- (id)serialize;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasHorizontalUncertainty:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasVerticalUncertainty:(bool)arg1;
- (int)sourceAccuracy;
- (double)verticalUncertainty;
- (void)writeTo:(id)arg1;

@end

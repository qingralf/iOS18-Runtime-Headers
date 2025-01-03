/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMOasisAnalyticsRegionInfo : BMEventBase <BMStoreData> {
    int  _countryCode;
    unsigned int  _dataVersion;
    NSString * _date;
    NSString * _timezone;
}

@property (nonatomic, readonly) int countryCode;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, readonly) NSString *date;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *timezone;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)countryCode;
- (unsigned int)dataVersion;
- (id)date;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithCountryCode:(int)arg1 timezone:(id)arg2 date:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)timezone;
- (void)writeTo:(id)arg1;

@end

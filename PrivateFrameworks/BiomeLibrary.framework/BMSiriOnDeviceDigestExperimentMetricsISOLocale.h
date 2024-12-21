/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSiriOnDeviceDigestExperimentMetricsISOLocale : BMEventBase <BMStoreData> {
    int  _countryCode;
    unsigned int  _dataVersion;
    bool  _hasCountryCode;
    bool  _hasLanguageCode;
    int  _languageCode;
}

@property (nonatomic, readonly) int countryCode;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCountryCode;
@property (nonatomic) bool hasLanguageCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int languageCode;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (int)countryCode;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasCountryCode;
- (bool)hasLanguageCode;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithLanguageCode:(id)arg1 countryCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)languageCode;
- (id)serialize;
- (void)setHasCountryCode:(bool)arg1;
- (void)setHasLanguageCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
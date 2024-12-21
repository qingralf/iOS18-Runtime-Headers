/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSiriAssistantSuggestionFeaturesAppUsageFeaturesAppUsageTimeBucketAppUsage : BMEventBase <BMStoreData> {
    unsigned int  _count;
    unsigned int  _dataVersion;
    bool  _hasCount;
    bool  _hasTotal;
    NSString * _key;
    unsigned int  _total;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasTotal;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *key;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int total;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)count;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasCount;
- (bool)hasTotal;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithKey:(id)arg1 count:(id)arg2 total:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)key;
- (id)serialize;
- (void)setHasCount:(bool)arg1;
- (void)setHasTotal:(bool)arg1;
- (unsigned int)total;
- (void)writeTo:(id)arg1;

@end
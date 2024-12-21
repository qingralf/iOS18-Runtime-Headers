/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSiriUserSeed : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    bool  _hasRaw_adoptedOn;
    bool  _hasRaw_createdOn;
    bool  _hasRaw_effectiveFrom;
    bool  _hasSwitchedCount;
    bool  _hasValidityDays;
    double  _raw_adoptedOn;
    double  _raw_createdOn;
    double  _raw_effectiveFrom;
    NSData * _raw_seed;
    unsigned int  _switchedCount;
    unsigned int  _validityDays;
}

@property (nonatomic, readonly) NSDate *adoptedOn;
@property (nonatomic, readonly) NSDate *createdOn;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *effectiveFrom;
@property (nonatomic) bool hasSwitchedCount;
@property (nonatomic) bool hasValidityDays;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *seed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int switchedCount;
@property (nonatomic, readonly) unsigned int validityDays;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)adoptedOn;
- (id)createdOn;
- (unsigned int)dataVersion;
- (id)description;
- (id)effectiveFrom;
- (bool)hasSwitchedCount;
- (bool)hasValidityDays;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSeed:(id)arg1 effectiveFrom:(id)arg2 validityDays:(id)arg3 createdOn:(id)arg4 adoptedOn:(id)arg5 switchedCount:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)seed;
- (id)serialize;
- (void)setHasSwitchedCount:(bool)arg1;
- (void)setHasValidityDays:(bool)arg1;
- (unsigned int)switchedCount;
- (unsigned int)validityDays;
- (void)writeTo:(id)arg1;

@end
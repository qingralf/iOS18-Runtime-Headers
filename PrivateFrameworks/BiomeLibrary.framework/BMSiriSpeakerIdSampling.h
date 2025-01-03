/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSiriSpeakerIdSampling : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    NSString * _enrollmentIdentifier;
    bool  _hasRaw_timestamp;
    NSArray * _onDeviceSampleIdentifiers;
    double  _raw_timestamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *enrollmentIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *onDeviceSampleIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_onDeviceSampleIdentifiersJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)enrollmentIdentifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTimestamp:(id)arg1 onDeviceSampleIdentifiers:(id)arg2 enrollmentIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)onDeviceSampleIdentifiers;
- (id)serialize;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMOasisAnalyticsGazeEnrollmentEvent : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    NSArray * _fixationSamples;
    BMOasisAnalyticsMetadata * _metadata;
    BMGazeEnrollmentSample * _payload;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *fixationSamples;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMOasisAnalyticsMetadata *metadata;
@property (nonatomic, readonly) BMGazeEnrollmentSample *payload;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_fixationSamplesJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)fixationSamples;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithMetadata:(id)arg1 payload:(id)arg2 fixationSamples:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)metadata;
- (id)payload;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end

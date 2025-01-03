/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PnROnDeviceFramework.framework/PnROnDeviceFramework
 */

@interface PNROnDeviceProvisionalPNRIntervalDurationMetric : SISchemaInstrumentationMessage {
    long long  _endTimestamp;
    NSString * _endTimestampEventName;
    struct { 
        unsigned int metricValue : 1; 
        unsigned int startTimestamp : 1; 
        unsigned int endTimestamp : 1; 
    }  _has;
    bool  _hasEndTimestampEventName;
    bool  _hasStartTimestampEventName;
    double  _metricValue;
    long long  _startTimestamp;
    NSString * _startTimestampEventName;
}

@property (nonatomic) long long endTimestamp;
@property (nonatomic, copy) NSString *endTimestampEventName;
@property (nonatomic) bool hasEndTimestamp;
@property (nonatomic) bool hasEndTimestampEventName;
@property (nonatomic) bool hasMetricValue;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic) bool hasStartTimestampEventName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double metricValue;
@property (nonatomic) long long startTimestamp;
@property (nonatomic, copy) NSString *startTimestampEventName;

- (void).cxx_destruct;
- (void)deleteEndTimestamp;
- (void)deleteEndTimestampEventName;
- (void)deleteMetricValue;
- (void)deleteStartTimestamp;
- (void)deleteStartTimestampEventName;
- (id)dictionaryRepresentation;
- (long long)endTimestamp;
- (id)endTimestampEventName;
- (bool)hasEndTimestamp;
- (bool)hasEndTimestampEventName;
- (bool)hasMetricValue;
- (bool)hasStartTimestamp;
- (bool)hasStartTimestampEventName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)metricValue;
- (bool)readFrom:(id)arg1;
- (void)setEndTimestamp:(long long)arg1;
- (void)setEndTimestampEventName:(id)arg1;
- (void)setHasEndTimestamp:(bool)arg1;
- (void)setHasEndTimestampEventName:(bool)arg1;
- (void)setHasMetricValue:(bool)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (void)setHasStartTimestampEventName:(bool)arg1;
- (void)setMetricValue:(double)arg1;
- (void)setStartTimestamp:(long long)arg1;
- (void)setStartTimestampEventName:(id)arg1;
- (long long)startTimestamp;
- (id)startTimestampEventName;
- (void)writeTo:(id)arg1;

@end

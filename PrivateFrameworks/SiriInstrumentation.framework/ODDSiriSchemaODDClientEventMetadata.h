/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDClientEventMetadata : SISchemaInstrumentationMessage {
    ODDSiriSchemaODDTimeInterval * _aggregationInterval;
    SISchemaUUID * _deviceAggregationId;
    unsigned long long  _eventTimestampInMsSince1970;
    struct { 
        unsigned int eventTimestampInMsSince1970 : 1; 
        unsigned int userAggregationIdRotationTimestampMs : 1; 
        unsigned int userAggregationIdExpirationTimestampMs : 1; 
    }  _has;
    bool  _hasAggregationInterval;
    bool  _hasDeviceAggregationId;
    bool  _hasOddId;
    SISchemaUUID * _oddId;
    unsigned long long  _userAggregationIdExpirationTimestampMs;
    unsigned long long  _userAggregationIdRotationTimestampMs;
}

@property (nonatomic, retain) ODDSiriSchemaODDTimeInterval *aggregationInterval;
@property (nonatomic, retain) SISchemaUUID *deviceAggregationId;
@property (nonatomic) unsigned long long eventTimestampInMsSince1970;
@property (nonatomic) bool hasAggregationInterval;
@property (nonatomic) bool hasDeviceAggregationId;
@property (nonatomic) bool hasEventTimestampInMsSince1970;
@property (nonatomic) bool hasOddId;
@property (nonatomic) bool hasUserAggregationIdExpirationTimestampMs;
@property (nonatomic) bool hasUserAggregationIdRotationTimestampMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *oddId;
@property (nonatomic) unsigned long long userAggregationIdExpirationTimestampMs;
@property (nonatomic) unsigned long long userAggregationIdRotationTimestampMs;

- (void).cxx_destruct;
- (id)aggregationInterval;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAggregationInterval;
- (void)deleteDeviceAggregationId;
- (void)deleteEventTimestampInMsSince1970;
- (void)deleteOddId;
- (void)deleteUserAggregationIdExpirationTimestampMs;
- (void)deleteUserAggregationIdRotationTimestampMs;
- (id)deviceAggregationId;
- (id)dictionaryRepresentation;
- (unsigned long long)eventTimestampInMsSince1970;
- (bool)hasAggregationInterval;
- (bool)hasDeviceAggregationId;
- (bool)hasEventTimestampInMsSince1970;
- (bool)hasOddId;
- (bool)hasUserAggregationIdExpirationTimestampMs;
- (bool)hasUserAggregationIdRotationTimestampMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)oddId;
- (bool)readFrom:(id)arg1;
- (void)setAggregationInterval:(id)arg1;
- (void)setDeviceAggregationId:(id)arg1;
- (void)setEventTimestampInMsSince1970:(unsigned long long)arg1;
- (void)setHasAggregationInterval:(bool)arg1;
- (void)setHasDeviceAggregationId:(bool)arg1;
- (void)setHasEventTimestampInMsSince1970:(bool)arg1;
- (void)setHasOddId:(bool)arg1;
- (void)setHasUserAggregationIdExpirationTimestampMs:(bool)arg1;
- (void)setHasUserAggregationIdRotationTimestampMs:(bool)arg1;
- (void)setOddId:(id)arg1;
- (void)setUserAggregationIdExpirationTimestampMs:(unsigned long long)arg1;
- (void)setUserAggregationIdRotationTimestampMs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)userAggregationIdExpirationTimestampMs;
- (unsigned long long)userAggregationIdRotationTimestampMs;
- (void)writeTo:(id)arg1;

@end
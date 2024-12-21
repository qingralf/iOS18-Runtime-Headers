/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHSensorControlStatusReported : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sensorControlStatus : 1; 
    }  _has;
    int  _sensorControlStatus;
}

@property (nonatomic) bool hasSensorControlStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int sensorControlStatus;

- (void)deleteSensorControlStatus;
- (id)dictionaryRepresentation;
- (bool)hasSensorControlStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)sensorControlStatus;
- (void)setHasSensorControlStatus:(bool)arg1;
- (void)setSensorControlStatus:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
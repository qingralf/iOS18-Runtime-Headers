/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface RTSSchemaRTSMotionData : SISchemaInstrumentationMessage {
    NSArray * _accelerationDatas;
}

@property (nonatomic, copy) NSArray *accelerationDatas;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)accelerationDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)accelerationDataCount;
- (id)accelerationDatas;
- (void)addAccelerationData:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAccelerationData;
- (void)deleteAccelerationData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAccelerationDatas:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

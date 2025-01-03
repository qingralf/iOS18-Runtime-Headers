/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface GATSchemaGATRequestEnded : SISchemaInstrumentationMessage {
    bool  _hasPerfMetrics;
    GATSchemaGATPnRMetrics * _perfMetrics;
}

@property (nonatomic) bool hasPerfMetrics;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) GATSchemaGATPnRMetrics *perfMetrics;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePerfMetrics;
- (id)dictionaryRepresentation;
- (bool)hasPerfMetrics;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)perfMetrics;
- (bool)readFrom:(id)arg1;
- (void)setHasPerfMetrics:(bool)arg1;
- (void)setPerfMetrics:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

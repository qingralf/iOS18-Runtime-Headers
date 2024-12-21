/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PSESchemaPSEMapsSignalGenerated : SISchemaInstrumentationMessage {
    PSESchemaPSECommonSignal * _commonSignal;
    bool  _hasCommonSignal;
    bool  _hasMapsSignal;
    PSESchemaPSEMaps * _mapsSignal;
}

@property (nonatomic, retain) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) bool hasCommonSignal;
@property (nonatomic) bool hasMapsSignal;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PSESchemaPSEMaps *mapsSignal;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)commonSignal;
- (void)deleteCommonSignal;
- (void)deleteMapsSignal;
- (id)dictionaryRepresentation;
- (bool)hasCommonSignal;
- (bool)hasMapsSignal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mapsSignal;
- (bool)readFrom:(id)arg1;
- (void)setCommonSignal:(id)arg1;
- (void)setHasCommonSignal:(bool)arg1;
- (void)setHasMapsSignal:(bool)arg1;
- (void)setMapsSignal:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
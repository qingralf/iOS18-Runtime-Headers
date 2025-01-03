/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface RGSiriSchemaRGInferenceStarted : SISchemaInstrumentationMessage {
    bool  _hasModelVersion;
    bool  _hasPromptVersion;
    SISchemaVersion * _modelVersion;
    SISchemaVersion * _promptVersion;
}

@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasPromptVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaVersion *modelVersion;
@property (nonatomic, retain) SISchemaVersion *promptVersion;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteModelVersion;
- (void)deletePromptVersion;
- (id)dictionaryRepresentation;
- (bool)hasModelVersion;
- (bool)hasPromptVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelVersion;
- (id)promptVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasPromptVersion:(bool)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setPromptVersion:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

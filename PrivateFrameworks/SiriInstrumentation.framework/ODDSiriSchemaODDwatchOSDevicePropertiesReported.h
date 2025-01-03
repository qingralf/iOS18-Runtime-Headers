/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDwatchOSDevicePropertiesReported : SISchemaInstrumentationMessage {
    ODDSiriSchemaODDAssistantProperties * _assistant;
    ODDSiriSchemaODDDictationProperties * _dictation;
    ODDSiriSchemaODDGeneralProperties * _general;
    bool  _hasAssistant;
    bool  _hasDictation;
    bool  _hasGeneral;
    bool  _hasWatchOSAssistant;
    ODDSiriSchemaODDwatchOSAssistantProperties * _watchOSAssistant;
}

@property (nonatomic, retain) ODDSiriSchemaODDAssistantProperties *assistant;
@property (nonatomic, retain) ODDSiriSchemaODDDictationProperties *dictation;
@property (nonatomic, retain) ODDSiriSchemaODDGeneralProperties *general;
@property (nonatomic) bool hasAssistant;
@property (nonatomic) bool hasDictation;
@property (nonatomic) bool hasGeneral;
@property (nonatomic) bool hasWatchOSAssistant;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ODDSiriSchemaODDwatchOSAssistantProperties *watchOSAssistant;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assistant;
- (void)deleteAssistant;
- (void)deleteDictation;
- (void)deleteGeneral;
- (void)deleteWatchOSAssistant;
- (id)dictation;
- (id)dictionaryRepresentation;
- (id)general;
- (bool)hasAssistant;
- (bool)hasDictation;
- (bool)hasGeneral;
- (bool)hasWatchOSAssistant;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssistant:(id)arg1;
- (void)setDictation:(id)arg1;
- (void)setGeneral:(id)arg1;
- (void)setHasAssistant:(bool)arg1;
- (void)setHasDictation:(bool)arg1;
- (void)setHasGeneral:(bool)arg1;
- (void)setHasWatchOSAssistant:(bool)arg1;
- (void)setWatchOSAssistant:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)watchOSAssistant;
- (void)writeTo:(id)arg1;

@end

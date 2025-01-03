/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDiOSDevicePropertiesReported : SISchemaInstrumentationMessage {
    ODDSiriSchemaODDAssistantProperties * _assistant;
    ODDSiriSchemaODDDictationProperties * _dictation;
    ODDSiriSchemaODDGeneralProperties * _general;
    bool  _hasAssistant;
    bool  _hasDictation;
    bool  _hasGeneral;
    bool  _hasIOSAssistant;
    bool  _hasIOSGeneral;
    ODDSiriSchemaODDiOSAssistantProperties * _iOSAssistant;
    ODDSiriSchemaODDiOSGeneralProperties * _iOSGeneral;
}

@property (nonatomic, retain) ODDSiriSchemaODDAssistantProperties *assistant;
@property (nonatomic, retain) ODDSiriSchemaODDDictationProperties *dictation;
@property (nonatomic, retain) ODDSiriSchemaODDGeneralProperties *general;
@property (nonatomic) bool hasAssistant;
@property (nonatomic) bool hasDictation;
@property (nonatomic) bool hasGeneral;
@property (nonatomic) bool hasIOSAssistant;
@property (nonatomic) bool hasIOSGeneral;
@property (nonatomic, retain) ODDSiriSchemaODDiOSAssistantProperties *iOSAssistant;
@property (nonatomic, retain) ODDSiriSchemaODDiOSGeneralProperties *iOSGeneral;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assistant;
- (void)deleteAssistant;
- (void)deleteDictation;
- (void)deleteGeneral;
- (void)deleteIOSAssistant;
- (void)deleteIOSGeneral;
- (id)dictation;
- (id)dictionaryRepresentation;
- (id)general;
- (bool)hasAssistant;
- (bool)hasDictation;
- (bool)hasGeneral;
- (bool)hasIOSAssistant;
- (bool)hasIOSGeneral;
- (unsigned long long)hash;
- (id)iOSAssistant;
- (id)iOSGeneral;
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
- (void)setHasIOSAssistant:(bool)arg1;
- (void)setHasIOSGeneral:(bool)arg1;
- (void)setIOSAssistant:(id)arg1;
- (void)setIOSGeneral:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

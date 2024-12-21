/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDVoiceProperties : SISchemaInstrumentationMessage {
    SISchemaISOLocale * _accent;
    int  _gender;
    struct { 
        unsigned int gender : 1; 
        unsigned int name : 1; 
    }  _has;
    bool  _hasAccent;
    NSArray * _installedVoices;
    int  _name;
}

@property (nonatomic, retain) SISchemaISOLocale *accent;
@property (nonatomic) int gender;
@property (nonatomic) bool hasAccent;
@property (nonatomic) bool hasGender;
@property (nonatomic) bool hasName;
@property (nonatomic, copy) NSArray *installedVoices;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int name;

- (void).cxx_destruct;
- (id)accent;
- (void)addInstalledVoices:(int)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearInstalledVoices;
- (void)deleteAccent;
- (void)deleteGender;
- (void)deleteInstalledVoices;
- (void)deleteName;
- (id)dictionaryRepresentation;
- (int)gender;
- (bool)hasAccent;
- (bool)hasGender;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)installedVoices;
- (int)installedVoicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)installedVoicesCount;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)name;
- (bool)readFrom:(id)arg1;
- (void)setAccent:(id)arg1;
- (void)setGender:(int)arg1;
- (void)setHasAccent:(bool)arg1;
- (void)setHasGender:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setInstalledVoices:(id)arg1;
- (void)setName:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
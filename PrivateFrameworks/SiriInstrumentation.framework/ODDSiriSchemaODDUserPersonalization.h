/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDUserPersonalization : SISchemaInstrumentationMessage {
    NSArray * _activeSubscriptions;
    struct { 
        unsigned int isPersonalDomainRequestsEnabled : 1; 
    }  _has;
    bool  _hasVoiceSettings;
    bool  _isPersonalDomainRequestsEnabled;
    SISchemaVoiceSettings * _voiceSettings;
}

@property (nonatomic, copy) NSArray *activeSubscriptions;
@property (nonatomic) bool hasIsPersonalDomainRequestsEnabled;
@property (nonatomic) bool hasVoiceSettings;
@property (nonatomic) bool isPersonalDomainRequestsEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaVoiceSettings *voiceSettings;

- (void).cxx_destruct;
- (id)activeSubscriptions;
- (int)activeSubscriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeSubscriptionsCount;
- (void)addActiveSubscriptions:(int)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActiveSubscriptions;
- (void)deleteActiveSubscriptions;
- (void)deleteIsPersonalDomainRequestsEnabled;
- (void)deleteVoiceSettings;
- (id)dictionaryRepresentation;
- (bool)hasIsPersonalDomainRequestsEnabled;
- (bool)hasVoiceSettings;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPersonalDomainRequestsEnabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActiveSubscriptions:(id)arg1;
- (void)setHasIsPersonalDomainRequestsEnabled:(bool)arg1;
- (void)setHasVoiceSettings:(bool)arg1;
- (void)setIsPersonalDomainRequestsEnabled:(bool)arg1;
- (void)setVoiceSettings:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceSettings;
- (void)writeTo:(id)arg1;

@end

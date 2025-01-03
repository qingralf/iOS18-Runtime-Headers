/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PEGASUSSchemaPEGASUSAMPSafetyLoggingInfo : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isSearchNoResults : 1; 
        unsigned int hasSafetyMessage : 1; 
        unsigned int pegasusSafetyStatus : 1; 
    }  _has;
    bool  _hasModelVersion;
    bool  _hasSafetyMessage;
    bool  _isSearchNoResults;
    NSString * _modelVersion;
    NSArray * _pegasusSafetyScores;
    int  _pegasusSafetyStatus;
}

@property (nonatomic) bool hasHasSafetyMessage;
@property (nonatomic) bool hasIsSearchNoResults;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasPegasusSafetyStatus;
@property (nonatomic) bool hasSafetyMessage;
@property (nonatomic) bool isSearchNoResults;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic, copy) NSArray *pegasusSafetyScores;
@property (nonatomic) int pegasusSafetyStatus;

- (void).cxx_destruct;
- (void)addPegasusSafetyScores:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearPegasusSafetyScores;
- (void)deleteHasSafetyMessage;
- (void)deleteIsSearchNoResults;
- (void)deleteModelVersion;
- (void)deletePegasusSafetyScores;
- (void)deletePegasusSafetyStatus;
- (id)dictionaryRepresentation;
- (bool)hasHasSafetyMessage;
- (bool)hasIsSearchNoResults;
- (bool)hasModelVersion;
- (bool)hasPegasusSafetyStatus;
- (bool)hasSafetyMessage;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSearchNoResults;
- (id)jsonData;
- (id)modelVersion;
- (id)pegasusSafetyScores;
- (id)pegasusSafetyScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)pegasusSafetyScoresCount;
- (int)pegasusSafetyStatus;
- (bool)readFrom:(id)arg1;
- (void)setHasHasSafetyMessage:(bool)arg1;
- (void)setHasIsSearchNoResults:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasPegasusSafetyStatus:(bool)arg1;
- (void)setHasSafetyMessage:(bool)arg1;
- (void)setIsSearchNoResults:(bool)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setPegasusSafetyScores:(id)arg1;
- (void)setPegasusSafetyStatus:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

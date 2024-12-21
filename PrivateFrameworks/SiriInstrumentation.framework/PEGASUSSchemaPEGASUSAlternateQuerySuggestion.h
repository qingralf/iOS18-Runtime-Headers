/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PEGASUSSchemaPEGASUSAlternateQuerySuggestion : SISchemaInstrumentationMessage {
    int  _alternateQuerySuggestionCount;
    struct { 
        unsigned int alternateQuerySuggestionCount : 1; 
    }  _has;
}

@property (nonatomic) int alternateQuerySuggestionCount;
@property (nonatomic) bool hasAlternateQuerySuggestionCount;
@property (nonatomic, readonly) NSData *jsonData;

- (int)alternateQuerySuggestionCount;
- (void)deleteAlternateQuerySuggestionCount;
- (id)dictionaryRepresentation;
- (bool)hasAlternateQuerySuggestionCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAlternateQuerySuggestionCount:(int)arg1;
- (void)setHasAlternateQuerySuggestionCount:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SUGSchemaSUGAutoCompleteSuggestionMetaData : SISchemaInstrumentationMessage {
    int  _autoCompleteSuggestionSource;
    struct { 
        unsigned int autoCompleteSuggestionSource : 1; 
    }  _has;
}

@property (nonatomic) int autoCompleteSuggestionSource;
@property (nonatomic) bool hasAutoCompleteSuggestionSource;
@property (nonatomic, readonly) NSData *jsonData;

- (int)autoCompleteSuggestionSource;
- (void)deleteAutoCompleteSuggestionSource;
- (id)dictionaryRepresentation;
- (bool)hasAutoCompleteSuggestionSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAutoCompleteSuggestionSource:(int)arg1;
- (void)setHasAutoCompleteSuggestionSource:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
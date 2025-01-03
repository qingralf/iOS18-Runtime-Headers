/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MTSchemaMTLanguageIdentificationConfidence : SISchemaInstrumentationMessage {
    unsigned int  _confidenceInThousands;
    struct { 
        unsigned int locale : 1; 
        unsigned int confidenceInThousands : 1; 
    }  _has;
    int  _locale;
}

@property (nonatomic) unsigned int confidenceInThousands;
@property (nonatomic) bool hasConfidenceInThousands;
@property (nonatomic) bool hasLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int locale;

- (unsigned int)confidenceInThousands;
- (void)deleteConfidenceInThousands;
- (void)deleteLocale;
- (id)dictionaryRepresentation;
- (bool)hasConfidenceInThousands;
- (bool)hasLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)locale;
- (bool)readFrom:(id)arg1;
- (void)setConfidenceInThousands:(unsigned int)arg1;
- (void)setHasConfidenceInThousands:(bool)arg1;
- (void)setHasLocale:(bool)arg1;
- (void)setLocale:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

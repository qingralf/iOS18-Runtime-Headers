/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaTapToEditInvocationContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isTranscriptEdited : 1; 
    }  _has;
    bool  _isTranscriptEdited;
}

@property (nonatomic) bool hasIsTranscriptEdited;
@property (nonatomic) bool isTranscriptEdited;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsTranscriptEdited;
- (id)dictionaryRepresentation;
- (bool)hasIsTranscriptEdited;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTranscriptEdited;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsTranscriptEdited:(bool)arg1;
- (void)setIsTranscriptEdited:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

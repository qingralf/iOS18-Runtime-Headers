/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface GATSchemaGATLoadScreenContentEventStarted : SISchemaInstrumentationMessage {
    bool  _exist;
    struct { 
        unsigned int exist : 1; 
    }  _has;
}

@property (nonatomic) bool exist;
@property (nonatomic) bool hasExist;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteExist;
- (id)dictionaryRepresentation;
- (bool)exist;
- (bool)hasExist;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setExist:(bool)arg1;
- (void)setHasExist:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
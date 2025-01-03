/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PFARepackagingExecutionFBFFailure : SISchemaInstrumentationMessage {
    int  _flErrorCode;
    struct { 
        unsigned int flErrorCode : 1; 
    }  _has;
}

@property (nonatomic) int flErrorCode;
@property (nonatomic) bool hasFlErrorCode;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteFlErrorCode;
- (id)dictionaryRepresentation;
- (int)flErrorCode;
- (bool)hasFlErrorCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFlErrorCode:(int)arg1;
- (void)setHasFlErrorCode:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

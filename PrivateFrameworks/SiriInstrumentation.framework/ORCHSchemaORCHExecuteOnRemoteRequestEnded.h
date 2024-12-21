/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHExecuteOnRemoteRequestEnded : SISchemaInstrumentationMessage {
    int  _aceCommandType;
    struct { 
        unsigned int aceCommandType : 1; 
    }  _has;
}

@property (nonatomic) int aceCommandType;
@property (nonatomic) bool hasAceCommandType;
@property (nonatomic, readonly) NSData *jsonData;

- (int)aceCommandType;
- (void)deleteAceCommandType;
- (id)dictionaryRepresentation;
- (bool)hasAceCommandType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceCommandType:(int)arg1;
- (void)setHasAceCommandType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
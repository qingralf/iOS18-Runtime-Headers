/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTToolDefinition : SISchemaInstrumentationMessage {
    struct { 
        unsigned int toolType : 1; 
    }  _has;
    bool  _hasToolId;
    NSString * _toolId;
    int  _toolType;
}

@property (nonatomic) bool hasToolId;
@property (nonatomic) bool hasToolType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *toolId;
@property (nonatomic) int toolType;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteToolId;
- (void)deleteToolType;
- (id)dictionaryRepresentation;
- (bool)hasToolId;
- (bool)hasToolType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasToolId:(bool)arg1;
- (void)setHasToolType:(bool)arg1;
- (void)setToolId:(id)arg1;
- (void)setToolType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (id)toolId;
- (int)toolType;
- (void)writeTo:(id)arg1;

@end

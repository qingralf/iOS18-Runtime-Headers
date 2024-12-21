/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTParameterNeedsValue : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
    }  _has;
    bool  _hasParameterId;
    NSString * _parameterId;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasParameterId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *parameterId;

- (void).cxx_destruct;
- (void)deleteExists;
- (void)deleteParameterId;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasParameterId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)parameterId;
- (bool)readFrom:(id)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasParameterId:(bool)arg1;
- (void)setParameterId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
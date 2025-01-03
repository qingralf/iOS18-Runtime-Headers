/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTExecutorError : SISchemaInstrumentationMessage {
    bool  _failedToExecute;
    bool  _hasFailedToExecute;
    bool  _hasOther;
    IFTSchemaIFTIntelligenceFlowError * _other;
    unsigned long long  _whichOneof_Executorerror;
}

@property (nonatomic) bool failedToExecute;
@property (nonatomic) bool hasFailedToExecute;
@property (nonatomic) bool hasOther;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IFTSchemaIFTIntelligenceFlowError *other;
@property (nonatomic, readonly) unsigned long long whichOneof_Executorerror;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFailedToExecute;
- (void)deleteOther;
- (id)dictionaryRepresentation;
- (bool)failedToExecute;
- (bool)hasFailedToExecute;
- (bool)hasOther;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)other;
- (bool)readFrom:(id)arg1;
- (void)setFailedToExecute:(bool)arg1;
- (void)setHasFailedToExecute:(bool)arg1;
- (void)setHasOther:(bool)arg1;
- (void)setOther:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichOneof_Executorerror;
- (void)writeTo:(id)arg1;

@end

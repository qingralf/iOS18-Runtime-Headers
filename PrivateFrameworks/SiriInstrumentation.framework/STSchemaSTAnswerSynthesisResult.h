/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface STSchemaSTAnswerSynthesisResult : SISchemaInstrumentationMessage {
    STSchemaSTAnswerSynthesisDataMetrics * _dataMetrics;
    struct { 
        unsigned int isContentSearchFallback : 1; 
    }  _has;
    bool  _hasDataMetrics;
    bool  _hasModelNumber;
    bool  _hasPerfMetrics;
    bool  _isContentSearchFallback;
    NSString * _modelNumber;
    STSchemaSTAnswerSynthesisPerfMetrics * _perfMetrics;
}

@property (nonatomic, retain) STSchemaSTAnswerSynthesisDataMetrics *dataMetrics;
@property (nonatomic) bool hasDataMetrics;
@property (nonatomic) bool hasIsContentSearchFallback;
@property (nonatomic) bool hasModelNumber;
@property (nonatomic) bool hasPerfMetrics;
@property (nonatomic) bool isContentSearchFallback;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic, retain) STSchemaSTAnswerSynthesisPerfMetrics *perfMetrics;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)dataMetrics;
- (void)deleteDataMetrics;
- (void)deleteIsContentSearchFallback;
- (void)deleteModelNumber;
- (void)deletePerfMetrics;
- (id)dictionaryRepresentation;
- (bool)hasDataMetrics;
- (bool)hasIsContentSearchFallback;
- (bool)hasModelNumber;
- (bool)hasPerfMetrics;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isContentSearchFallback;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelNumber;
- (id)perfMetrics;
- (bool)readFrom:(id)arg1;
- (void)setDataMetrics:(id)arg1;
- (void)setHasDataMetrics:(bool)arg1;
- (void)setHasIsContentSearchFallback:(bool)arg1;
- (void)setHasModelNumber:(bool)arg1;
- (void)setHasPerfMetrics:(bool)arg1;
- (void)setIsContentSearchFallback:(bool)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setPerfMetrics:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface POMMESSchemaPOMMESRequestResult : SISchemaInstrumentationMessage {
    struct { 
        unsigned int pommesConfidenceScore : 1; 
        unsigned int isFromResponseCache : 1; 
        unsigned int pegasusPromptType : 1; 
        unsigned int isLowConfidenceKnowledgeResult : 1; 
    }  _has;
    bool  _hasPegasusDomain;
    bool  _isFromResponseCache;
    bool  _isLowConfidenceKnowledgeResult;
    NSString * _pegasusDomain;
    int  _pegasusPromptType;
    double  _pommesConfidenceScore;
}

@property (nonatomic) bool hasIsFromResponseCache;
@property (nonatomic) bool hasIsLowConfidenceKnowledgeResult;
@property (nonatomic) bool hasPegasusDomain;
@property (nonatomic) bool hasPegasusPromptType;
@property (nonatomic) bool hasPommesConfidenceScore;
@property (nonatomic) bool isFromResponseCache;
@property (nonatomic) bool isLowConfidenceKnowledgeResult;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *pegasusDomain;
@property (nonatomic) int pegasusPromptType;
@property (nonatomic) double pommesConfidenceScore;

- (void).cxx_destruct;
- (void)deleteIsFromResponseCache;
- (void)deleteIsLowConfidenceKnowledgeResult;
- (void)deletePegasusDomain;
- (void)deletePegasusPromptType;
- (void)deletePommesConfidenceScore;
- (id)dictionaryRepresentation;
- (bool)hasIsFromResponseCache;
- (bool)hasIsLowConfidenceKnowledgeResult;
- (bool)hasPegasusDomain;
- (bool)hasPegasusPromptType;
- (bool)hasPommesConfidenceScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromResponseCache;
- (bool)isLowConfidenceKnowledgeResult;
- (id)jsonData;
- (id)pegasusDomain;
- (int)pegasusPromptType;
- (double)pommesConfidenceScore;
- (bool)readFrom:(id)arg1;
- (void)setHasIsFromResponseCache:(bool)arg1;
- (void)setHasIsLowConfidenceKnowledgeResult:(bool)arg1;
- (void)setHasPegasusDomain:(bool)arg1;
- (void)setHasPegasusPromptType:(bool)arg1;
- (void)setHasPommesConfidenceScore:(bool)arg1;
- (void)setIsFromResponseCache:(bool)arg1;
- (void)setIsLowConfidenceKnowledgeResult:(bool)arg1;
- (void)setPegasusDomain:(id)arg1;
- (void)setPegasusPromptType:(int)arg1;
- (void)setPommesConfidenceScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface STSchemaSTGeneralSearchResult : SISchemaInstrumentationMessage {
    NSString * _bundleId;
    SISchemaUUID * _generalSearchResultId;
    struct { 
        unsigned int resultType : 1; 
    }  _has;
    bool  _hasBundleId;
    bool  _hasGeneralSearchResultId;
    int  _resultType;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, retain) SISchemaUUID *generalSearchResultId;
@property (nonatomic) bool hasBundleId;
@property (nonatomic) bool hasGeneralSearchResultId;
@property (nonatomic) bool hasResultType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int resultType;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)bundleId;
- (void)deleteBundleId;
- (void)deleteGeneralSearchResultId;
- (void)deleteResultType;
- (id)dictionaryRepresentation;
- (id)generalSearchResultId;
- (bool)hasBundleId;
- (bool)hasGeneralSearchResultId;
- (bool)hasResultType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (void)setBundleId:(id)arg1;
- (void)setGeneralSearchResultId:(id)arg1;
- (void)setHasBundleId:(bool)arg1;
- (void)setHasGeneralSearchResultId:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setResultType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

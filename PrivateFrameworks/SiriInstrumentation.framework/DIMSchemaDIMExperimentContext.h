/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DIMSchemaDIMExperimentContext : SISchemaInstrumentationMessage {
    NSArray * _experimentInfos;
    unsigned int  _experimentalBucketId;
    struct { 
        unsigned int experimentalBucketId : 1; 
    }  _has;
}

@property (nonatomic, copy) NSArray *experimentInfos;
@property (nonatomic) unsigned int experimentalBucketId;
@property (nonatomic) bool hasExperimentalBucketId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addExperimentInfo:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearExperimentInfo;
- (void)deleteExperimentInfo;
- (void)deleteExperimentalBucketId;
- (id)dictionaryRepresentation;
- (id)experimentInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentInfoCount;
- (id)experimentInfos;
- (unsigned int)experimentalBucketId;
- (bool)hasExperimentalBucketId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setExperimentInfos:(id)arg1;
- (void)setExperimentalBucketId:(unsigned int)arg1;
- (void)setHasExperimentalBucketId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

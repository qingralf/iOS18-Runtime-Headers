/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleManifestReported : SISchemaInstrumentationMessage {
    int  _collectionStatus;
    struct { 
        unsigned int collectionStatus : 1; 
    }  _has;
    bool  _hasUserSamplingId;
    NSArray * _odsampleIds;
    SISchemaUUID * _userSamplingId;
}

@property (nonatomic) int collectionStatus;
@property (nonatomic) bool hasCollectionStatus;
@property (nonatomic) bool hasUserSamplingId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *odsampleIds;
@property (nonatomic, retain) SISchemaUUID *userSamplingId;

- (void).cxx_destruct;
- (void)addOdsampleIds:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearOdsampleIds;
- (int)collectionStatus;
- (void)deleteCollectionStatus;
- (void)deleteOdsampleIds;
- (void)deleteUserSamplingId;
- (id)dictionaryRepresentation;
- (bool)hasCollectionStatus;
- (bool)hasUserSamplingId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)odsampleIds;
- (id)odsampleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)odsampleIdsCount;
- (bool)readFrom:(id)arg1;
- (void)setCollectionStatus:(int)arg1;
- (void)setHasCollectionStatus:(bool)arg1;
- (void)setHasUserSamplingId:(bool)arg1;
- (void)setOdsampleIds:(id)arg1;
- (void)setUserSamplingId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userSamplingId;
- (void)writeTo:(id)arg1;

@end

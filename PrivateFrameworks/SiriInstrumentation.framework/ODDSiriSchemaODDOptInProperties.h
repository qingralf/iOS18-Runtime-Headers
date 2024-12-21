/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDOptInProperties : SISchemaInstrumentationMessage {
    int  _dataSharingOptInStatus;
    NSArray * _gradingOptInStateChanges;
    struct { 
        unsigned int isMteUploadEnabled : 1; 
        unsigned int dataSharingOptInStatus : 1; 
        unsigned int isServerUserDataSyncEnabled : 1; 
    }  _has;
    bool  _isMteUploadEnabled;
    bool  _isServerUserDataSyncEnabled;
}

@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic, copy) NSArray *gradingOptInStateChanges;
@property (nonatomic) bool hasDataSharingOptInStatus;
@property (nonatomic) bool hasIsMteUploadEnabled;
@property (nonatomic) bool hasIsServerUserDataSyncEnabled;
@property (nonatomic) bool isMteUploadEnabled;
@property (nonatomic) bool isServerUserDataSyncEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addGradingOptInStateChanges:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearGradingOptInStateChanges;
- (int)dataSharingOptInStatus;
- (void)deleteDataSharingOptInStatus;
- (void)deleteGradingOptInStateChanges;
- (void)deleteIsMteUploadEnabled;
- (void)deleteIsServerUserDataSyncEnabled;
- (id)dictionaryRepresentation;
- (id)gradingOptInStateChanges;
- (id)gradingOptInStateChangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)gradingOptInStateChangesCount;
- (bool)hasDataSharingOptInStatus;
- (bool)hasIsMteUploadEnabled;
- (bool)hasIsServerUserDataSyncEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMteUploadEnabled;
- (bool)isServerUserDataSyncEnabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDataSharingOptInStatus:(int)arg1;
- (void)setGradingOptInStateChanges:(id)arg1;
- (void)setHasDataSharingOptInStatus:(bool)arg1;
- (void)setHasIsMteUploadEnabled:(bool)arg1;
- (void)setHasIsServerUserDataSyncEnabled:(bool)arg1;
- (void)setIsMteUploadEnabled:(bool)arg1;
- (void)setIsServerUserDataSyncEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
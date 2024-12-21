/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODDSiriSchemaODDDeviceAndUsageAppTaskCounts : SISchemaInstrumentationMessage {
    unsigned int  _cancelledSiriAppTaskCount;
    unsigned int  _completedSiriAppTaskCount;
    unsigned int  _completedUIAppTaskCount;
    unsigned int  _failedSiriAppTaskCount;
    struct { 
        unsigned int completedSiriAppTaskCount : 1; 
        unsigned int failedSiriAppTaskCount : 1; 
        unsigned int cancelledSiriAppTaskCount : 1; 
        unsigned int completedUIAppTaskCount : 1; 
    }  _has;
}

@property (nonatomic) unsigned int cancelledSiriAppTaskCount;
@property (nonatomic) unsigned int completedSiriAppTaskCount;
@property (nonatomic) unsigned int completedUIAppTaskCount;
@property (nonatomic) unsigned int failedSiriAppTaskCount;
@property (nonatomic) bool hasCancelledSiriAppTaskCount;
@property (nonatomic) bool hasCompletedSiriAppTaskCount;
@property (nonatomic) bool hasCompletedUIAppTaskCount;
@property (nonatomic) bool hasFailedSiriAppTaskCount;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned int)cancelledSiriAppTaskCount;
- (unsigned int)completedSiriAppTaskCount;
- (unsigned int)completedUIAppTaskCount;
- (void)deleteCancelledSiriAppTaskCount;
- (void)deleteCompletedSiriAppTaskCount;
- (void)deleteCompletedUIAppTaskCount;
- (void)deleteFailedSiriAppTaskCount;
- (id)dictionaryRepresentation;
- (unsigned int)failedSiriAppTaskCount;
- (bool)hasCancelledSiriAppTaskCount;
- (bool)hasCompletedSiriAppTaskCount;
- (bool)hasCompletedUIAppTaskCount;
- (bool)hasFailedSiriAppTaskCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCancelledSiriAppTaskCount:(unsigned int)arg1;
- (void)setCompletedSiriAppTaskCount:(unsigned int)arg1;
- (void)setCompletedUIAppTaskCount:(unsigned int)arg1;
- (void)setFailedSiriAppTaskCount:(unsigned int)arg1;
- (void)setHasCancelledSiriAppTaskCount:(bool)arg1;
- (void)setHasCompletedSiriAppTaskCount:(bool)arg1;
- (void)setHasCompletedUIAppTaskCount:(bool)arg1;
- (void)setHasFailedSiriAppTaskCount:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PNRODSchemaPNRODSiriTurnGrainSummary : SISchemaInstrumentationMessage {
    PNRODSchemaPNRODMetricDuration * _epd;
    PNRODSchemaPNRODFailureInfo * _failureInfo;
    struct { 
        unsigned int status : 1; 
        unsigned int hasAssistantPerformanceData : 1; 
        unsigned int hasDictationPerformanceData : 1; 
        unsigned int hasReliabilityData : 1; 
    }  _has;
    bool  _hasAssistantPerformanceData;
    bool  _hasDictationPerformanceData;
    bool  _hasEpd;
    bool  _hasFailureInfo;
    bool  _hasLaunch;
    bool  _hasReliabilityData;
    bool  _hasSrt;
    bool  _hasTtfw;
    bool  _hasTurnid;
    bool  _hasUufr;
    PNRODSchemaPNRODMetricDuration * _launch;
    PNRODSchemaPNRODMetricDuration * _srt;
    long long  _status;
    PNRODSchemaPNRODMetricDuration * _ttfw;
    SISchemaUUID * _turnid;
    PNRODSchemaPNRODMetricDuration * _uufr;
}

@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *epd;
@property (nonatomic, retain) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) bool hasAssistantPerformanceData;
@property (nonatomic) bool hasDictationPerformanceData;
@property (nonatomic) bool hasEpd;
@property (nonatomic) bool hasFailureInfo;
@property (nonatomic) bool hasHasAssistantPerformanceData;
@property (nonatomic) bool hasHasDictationPerformanceData;
@property (nonatomic) bool hasHasReliabilityData;
@property (nonatomic) bool hasLaunch;
@property (nonatomic) bool hasReliabilityData;
@property (nonatomic) bool hasSrt;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTtfw;
@property (nonatomic) bool hasTurnid;
@property (nonatomic) bool hasUufr;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *launch;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *srt;
@property (nonatomic) long long status;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *ttfw;
@property (nonatomic, retain) SISchemaUUID *turnid;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *uufr;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEpd;
- (void)deleteFailureInfo;
- (void)deleteHasAssistantPerformanceData;
- (void)deleteHasDictationPerformanceData;
- (void)deleteHasReliabilityData;
- (void)deleteLaunch;
- (void)deleteSrt;
- (void)deleteStatus;
- (void)deleteTtfw;
- (void)deleteTurnid;
- (void)deleteUufr;
- (id)dictionaryRepresentation;
- (id)epd;
- (id)failureInfo;
- (bool)hasAssistantPerformanceData;
- (bool)hasDictationPerformanceData;
- (bool)hasEpd;
- (bool)hasFailureInfo;
- (bool)hasHasAssistantPerformanceData;
- (bool)hasHasDictationPerformanceData;
- (bool)hasHasReliabilityData;
- (bool)hasLaunch;
- (bool)hasReliabilityData;
- (bool)hasSrt;
- (bool)hasStatus;
- (bool)hasTtfw;
- (bool)hasTurnid;
- (bool)hasUufr;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)launch;
- (bool)readFrom:(id)arg1;
- (void)setEpd:(id)arg1;
- (void)setFailureInfo:(id)arg1;
- (void)setHasAssistantPerformanceData:(bool)arg1;
- (void)setHasDictationPerformanceData:(bool)arg1;
- (void)setHasEpd:(bool)arg1;
- (void)setHasFailureInfo:(bool)arg1;
- (void)setHasHasAssistantPerformanceData:(bool)arg1;
- (void)setHasHasDictationPerformanceData:(bool)arg1;
- (void)setHasHasReliabilityData:(bool)arg1;
- (void)setHasLaunch:(bool)arg1;
- (void)setHasReliabilityData:(bool)arg1;
- (void)setHasSrt:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTtfw:(bool)arg1;
- (void)setHasTurnid:(bool)arg1;
- (void)setHasUufr:(bool)arg1;
- (void)setLaunch:(id)arg1;
- (void)setSrt:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTtfw:(id)arg1;
- (void)setTurnid:(id)arg1;
- (void)setUufr:(id)arg1;
- (id)srt;
- (long long)status;
- (id)suppressMessageUnderConditions;
- (id)ttfw;
- (id)turnid;
- (id)uufr;
- (void)writeTo:(id)arg1;

@end
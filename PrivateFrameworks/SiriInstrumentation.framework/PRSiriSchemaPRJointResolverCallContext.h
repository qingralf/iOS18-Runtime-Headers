/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PRSiriSchemaPRJointResolverCallContext : SISchemaInstrumentationMessage {
    unsigned int  _actionStatementId;
    PRSiriSchemaPRJointResolverCallEnded * _ended;
    PRSiriSchemaPRJointResolverCallFailed * _failed;
    struct { 
        unsigned int actionStatementId : 1; 
    }  _has;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasPlanEventId;
    bool  _hasStartedOrChanged;
    bool  _hasTraceId;
    SISchemaUUID * _planEventId;
    PRSiriSchemaPRJointResolverCallStarted * _startedOrChanged;
    SISchemaUUID * _traceId;
    unsigned long long  _whichContextevent;
}

@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic, retain) PRSiriSchemaPRJointResolverCallEnded *ended;
@property (nonatomic, retain) PRSiriSchemaPRJointResolverCallFailed *failed;
@property (nonatomic) bool hasActionStatementId;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasPlanEventId;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic) bool hasTraceId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *planEventId;
@property (nonatomic, retain) PRSiriSchemaPRJointResolverCallStarted *startedOrChanged;
@property (nonatomic, retain) SISchemaUUID *traceId;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (unsigned int)actionStatementId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteActionStatementId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deletePlanEventId;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasActionStatementId;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasPlanEventId;
- (bool)hasStartedOrChanged;
- (bool)hasTraceId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)planEventId;
- (bool)readFrom:(id)arg1;
- (void)setActionStatementId:(unsigned int)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasActionStatementId:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasPlanEventId:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setHasTraceId:(bool)arg1;
- (void)setPlanEventId:(id)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (void)setTraceId:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (id)traceId;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
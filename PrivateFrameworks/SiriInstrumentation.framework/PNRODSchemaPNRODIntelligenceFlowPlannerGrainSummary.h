/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PNRODSchemaPNRODIntelligenceFlowPlannerGrainSummary : SISchemaInstrumentationMessage {
    PNRODSchemaPNRODMetricDuration * _actionResolverRequestToLastResolverEventTime;
    SISchemaUUID * _clientRequestId;
    PNRODSchemaPNRODFailureInfo * _failureInfo;
    struct { 
        unsigned int status : 1; 
        unsigned int plannerGrainStage : 1; 
        unsigned int numPlansCreated : 1; 
        unsigned int numQueriesCreated : 1; 
        unsigned int numQueriesExecuted : 1; 
        unsigned int numClientActionsCreated : 1; 
        unsigned int numActionResolverRequests : 1; 
        unsigned int numStatementsEvaluated : 1; 
        unsigned int numStatementsEvaluatedFromPlanner : 1; 
        unsigned int numSystemPromptsResolved : 1; 
    }  _has;
    bool  _hasActionResolverRequestToLastResolverEventTime;
    bool  _hasClientRequestId;
    bool  _hasFailureInfo;
    bool  _hasLastQueryDecorationEventToPlanCreatedTime;
    bool  _hasLastResolverEventToResponseGeneratedTime;
    bool  _hasPlanCreatedToActionResolverRequestTime;
    bool  _hasPlanCreatedToLastResolverEventTime;
    bool  _hasPlanId;
    bool  _hasPlannerResponseTime;
    bool  _hasRawQueryEventId;
    bool  _hasResolverTotalQueryTime;
    bool  _hasStartToActionResolverRequestTime;
    bool  _hasStartToContextRetrievedTime;
    bool  _hasStartToEntitySpanMatchedTime;
    bool  _hasStartToLastQueryDecorationEventTime;
    bool  _hasStartToLastResolverEventTime;
    bool  _hasStartToPlanCreatedTime;
    bool  _hasStartToToolsRetrievedTime;
    PNRODSchemaPNRODMetricDuration * _lastQueryDecorationEventToPlanCreatedTime;
    PNRODSchemaPNRODMetricDuration * _lastResolverEventToResponseGeneratedTime;
    unsigned int  _numActionResolverRequests;
    unsigned int  _numClientActionsCreated;
    unsigned int  _numPlansCreated;
    unsigned int  _numQueriesCreated;
    unsigned int  _numQueriesExecuted;
    unsigned int  _numStatementsEvaluated;
    unsigned int  _numStatementsEvaluatedFromPlanner;
    unsigned int  _numSystemPromptsResolved;
    PNRODSchemaPNRODMetricDuration * _planCreatedToActionResolverRequestTime;
    PNRODSchemaPNRODMetricDuration * _planCreatedToLastResolverEventTime;
    SISchemaUUID * _planId;
    long long  _plannerGrainStage;
    PNRODSchemaPNRODMetricDuration * _plannerResponseTime;
    SISchemaUUID * _rawQueryEventId;
    PNRODSchemaPNRODMetricDuration * _resolverTotalQueryTime;
    PNRODSchemaPNRODMetricDuration * _startToActionResolverRequestTime;
    PNRODSchemaPNRODMetricDuration * _startToContextRetrievedTime;
    PNRODSchemaPNRODMetricDuration * _startToEntitySpanMatchedTime;
    PNRODSchemaPNRODMetricDuration * _startToLastQueryDecorationEventTime;
    PNRODSchemaPNRODMetricDuration * _startToLastResolverEventTime;
    PNRODSchemaPNRODMetricDuration * _startToPlanCreatedTime;
    PNRODSchemaPNRODMetricDuration * _startToToolsRetrievedTime;
    long long  _status;
}

@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *actionResolverRequestToLastResolverEventTime;
@property (nonatomic, retain) SISchemaUUID *clientRequestId;
@property (nonatomic, retain) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) bool hasActionResolverRequestToLastResolverEventTime;
@property (nonatomic) bool hasClientRequestId;
@property (nonatomic) bool hasFailureInfo;
@property (nonatomic) bool hasLastQueryDecorationEventToPlanCreatedTime;
@property (nonatomic) bool hasLastResolverEventToResponseGeneratedTime;
@property (nonatomic) bool hasNumActionResolverRequests;
@property (nonatomic) bool hasNumClientActionsCreated;
@property (nonatomic) bool hasNumPlansCreated;
@property (nonatomic) bool hasNumQueriesCreated;
@property (nonatomic) bool hasNumQueriesExecuted;
@property (nonatomic) bool hasNumStatementsEvaluated;
@property (nonatomic) bool hasNumStatementsEvaluatedFromPlanner;
@property (nonatomic) bool hasNumSystemPromptsResolved;
@property (nonatomic) bool hasPlanCreatedToActionResolverRequestTime;
@property (nonatomic) bool hasPlanCreatedToLastResolverEventTime;
@property (nonatomic) bool hasPlanId;
@property (nonatomic) bool hasPlannerGrainStage;
@property (nonatomic) bool hasPlannerResponseTime;
@property (nonatomic) bool hasRawQueryEventId;
@property (nonatomic) bool hasResolverTotalQueryTime;
@property (nonatomic) bool hasStartToActionResolverRequestTime;
@property (nonatomic) bool hasStartToContextRetrievedTime;
@property (nonatomic) bool hasStartToEntitySpanMatchedTime;
@property (nonatomic) bool hasStartToLastQueryDecorationEventTime;
@property (nonatomic) bool hasStartToLastResolverEventTime;
@property (nonatomic) bool hasStartToPlanCreatedTime;
@property (nonatomic) bool hasStartToToolsRetrievedTime;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *lastQueryDecorationEventToPlanCreatedTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *lastResolverEventToResponseGeneratedTime;
@property (nonatomic) unsigned int numActionResolverRequests;
@property (nonatomic) unsigned int numClientActionsCreated;
@property (nonatomic) unsigned int numPlansCreated;
@property (nonatomic) unsigned int numQueriesCreated;
@property (nonatomic) unsigned int numQueriesExecuted;
@property (nonatomic) unsigned int numStatementsEvaluated;
@property (nonatomic) unsigned int numStatementsEvaluatedFromPlanner;
@property (nonatomic) unsigned int numSystemPromptsResolved;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *planCreatedToActionResolverRequestTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *planCreatedToLastResolverEventTime;
@property (nonatomic, retain) SISchemaUUID *planId;
@property (nonatomic) long long plannerGrainStage;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *plannerResponseTime;
@property (nonatomic, retain) SISchemaUUID *rawQueryEventId;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *resolverTotalQueryTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *startToActionResolverRequestTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *startToContextRetrievedTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *startToEntitySpanMatchedTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *startToLastQueryDecorationEventTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *startToLastResolverEventTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *startToPlanCreatedTime;
@property (nonatomic, retain) PNRODSchemaPNRODMetricDuration *startToToolsRetrievedTime;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (id)actionResolverRequestToLastResolverEventTime;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)clientRequestId;
- (void)deleteActionResolverRequestToLastResolverEventTime;
- (void)deleteClientRequestId;
- (void)deleteFailureInfo;
- (void)deleteLastQueryDecorationEventToPlanCreatedTime;
- (void)deleteLastResolverEventToResponseGeneratedTime;
- (void)deleteNumActionResolverRequests;
- (void)deleteNumClientActionsCreated;
- (void)deleteNumPlansCreated;
- (void)deleteNumQueriesCreated;
- (void)deleteNumQueriesExecuted;
- (void)deleteNumStatementsEvaluated;
- (void)deleteNumStatementsEvaluatedFromPlanner;
- (void)deleteNumSystemPromptsResolved;
- (void)deletePlanCreatedToActionResolverRequestTime;
- (void)deletePlanCreatedToLastResolverEventTime;
- (void)deletePlanId;
- (void)deletePlannerGrainStage;
- (void)deletePlannerResponseTime;
- (void)deleteRawQueryEventId;
- (void)deleteResolverTotalQueryTime;
- (void)deleteStartToActionResolverRequestTime;
- (void)deleteStartToContextRetrievedTime;
- (void)deleteStartToEntitySpanMatchedTime;
- (void)deleteStartToLastQueryDecorationEventTime;
- (void)deleteStartToLastResolverEventTime;
- (void)deleteStartToPlanCreatedTime;
- (void)deleteStartToToolsRetrievedTime;
- (void)deleteStatus;
- (id)dictionaryRepresentation;
- (id)failureInfo;
- (bool)hasActionResolverRequestToLastResolverEventTime;
- (bool)hasClientRequestId;
- (bool)hasFailureInfo;
- (bool)hasLastQueryDecorationEventToPlanCreatedTime;
- (bool)hasLastResolverEventToResponseGeneratedTime;
- (bool)hasNumActionResolverRequests;
- (bool)hasNumClientActionsCreated;
- (bool)hasNumPlansCreated;
- (bool)hasNumQueriesCreated;
- (bool)hasNumQueriesExecuted;
- (bool)hasNumStatementsEvaluated;
- (bool)hasNumStatementsEvaluatedFromPlanner;
- (bool)hasNumSystemPromptsResolved;
- (bool)hasPlanCreatedToActionResolverRequestTime;
- (bool)hasPlanCreatedToLastResolverEventTime;
- (bool)hasPlanId;
- (bool)hasPlannerGrainStage;
- (bool)hasPlannerResponseTime;
- (bool)hasRawQueryEventId;
- (bool)hasResolverTotalQueryTime;
- (bool)hasStartToActionResolverRequestTime;
- (bool)hasStartToContextRetrievedTime;
- (bool)hasStartToEntitySpanMatchedTime;
- (bool)hasStartToLastQueryDecorationEventTime;
- (bool)hasStartToLastResolverEventTime;
- (bool)hasStartToPlanCreatedTime;
- (bool)hasStartToToolsRetrievedTime;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)lastQueryDecorationEventToPlanCreatedTime;
- (id)lastResolverEventToResponseGeneratedTime;
- (unsigned int)numActionResolverRequests;
- (unsigned int)numClientActionsCreated;
- (unsigned int)numPlansCreated;
- (unsigned int)numQueriesCreated;
- (unsigned int)numQueriesExecuted;
- (unsigned int)numStatementsEvaluated;
- (unsigned int)numStatementsEvaluatedFromPlanner;
- (unsigned int)numSystemPromptsResolved;
- (id)planCreatedToActionResolverRequestTime;
- (id)planCreatedToLastResolverEventTime;
- (id)planId;
- (long long)plannerGrainStage;
- (id)plannerResponseTime;
- (id)rawQueryEventId;
- (bool)readFrom:(id)arg1;
- (id)resolverTotalQueryTime;
- (void)setActionResolverRequestToLastResolverEventTime:(id)arg1;
- (void)setClientRequestId:(id)arg1;
- (void)setFailureInfo:(id)arg1;
- (void)setHasActionResolverRequestToLastResolverEventTime:(bool)arg1;
- (void)setHasClientRequestId:(bool)arg1;
- (void)setHasFailureInfo:(bool)arg1;
- (void)setHasLastQueryDecorationEventToPlanCreatedTime:(bool)arg1;
- (void)setHasLastResolverEventToResponseGeneratedTime:(bool)arg1;
- (void)setHasNumActionResolverRequests:(bool)arg1;
- (void)setHasNumClientActionsCreated:(bool)arg1;
- (void)setHasNumPlansCreated:(bool)arg1;
- (void)setHasNumQueriesCreated:(bool)arg1;
- (void)setHasNumQueriesExecuted:(bool)arg1;
- (void)setHasNumStatementsEvaluated:(bool)arg1;
- (void)setHasNumStatementsEvaluatedFromPlanner:(bool)arg1;
- (void)setHasNumSystemPromptsResolved:(bool)arg1;
- (void)setHasPlanCreatedToActionResolverRequestTime:(bool)arg1;
- (void)setHasPlanCreatedToLastResolverEventTime:(bool)arg1;
- (void)setHasPlanId:(bool)arg1;
- (void)setHasPlannerGrainStage:(bool)arg1;
- (void)setHasPlannerResponseTime:(bool)arg1;
- (void)setHasRawQueryEventId:(bool)arg1;
- (void)setHasResolverTotalQueryTime:(bool)arg1;
- (void)setHasStartToActionResolverRequestTime:(bool)arg1;
- (void)setHasStartToContextRetrievedTime:(bool)arg1;
- (void)setHasStartToEntitySpanMatchedTime:(bool)arg1;
- (void)setHasStartToLastQueryDecorationEventTime:(bool)arg1;
- (void)setHasStartToLastResolverEventTime:(bool)arg1;
- (void)setHasStartToPlanCreatedTime:(bool)arg1;
- (void)setHasStartToToolsRetrievedTime:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setLastQueryDecorationEventToPlanCreatedTime:(id)arg1;
- (void)setLastResolverEventToResponseGeneratedTime:(id)arg1;
- (void)setNumActionResolverRequests:(unsigned int)arg1;
- (void)setNumClientActionsCreated:(unsigned int)arg1;
- (void)setNumPlansCreated:(unsigned int)arg1;
- (void)setNumQueriesCreated:(unsigned int)arg1;
- (void)setNumQueriesExecuted:(unsigned int)arg1;
- (void)setNumStatementsEvaluated:(unsigned int)arg1;
- (void)setNumStatementsEvaluatedFromPlanner:(unsigned int)arg1;
- (void)setNumSystemPromptsResolved:(unsigned int)arg1;
- (void)setPlanCreatedToActionResolverRequestTime:(id)arg1;
- (void)setPlanCreatedToLastResolverEventTime:(id)arg1;
- (void)setPlanId:(id)arg1;
- (void)setPlannerGrainStage:(long long)arg1;
- (void)setPlannerResponseTime:(id)arg1;
- (void)setRawQueryEventId:(id)arg1;
- (void)setResolverTotalQueryTime:(id)arg1;
- (void)setStartToActionResolverRequestTime:(id)arg1;
- (void)setStartToContextRetrievedTime:(id)arg1;
- (void)setStartToEntitySpanMatchedTime:(id)arg1;
- (void)setStartToLastQueryDecorationEventTime:(id)arg1;
- (void)setStartToLastResolverEventTime:(id)arg1;
- (void)setStartToPlanCreatedTime:(id)arg1;
- (void)setStartToToolsRetrievedTime:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)startToActionResolverRequestTime;
- (id)startToContextRetrievedTime;
- (id)startToEntitySpanMatchedTime;
- (id)startToLastQueryDecorationEventTime;
- (id)startToLastResolverEventTime;
- (id)startToPlanCreatedTime;
- (id)startToToolsRetrievedTime;
- (long long)status;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

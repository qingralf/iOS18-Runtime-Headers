/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLSchemaFLTaskEvaluation : SISchemaInstrumentationMessage {
    int  _actionResolutionState;
    NSArray * _evaluationNodes;
    struct { 
        unsigned int actionResolutionState : 1; 
    }  _has;
    bool  _hasTaskOutcome;
    FLSchemaFLTaskOutcome * _taskOutcome;
}

@property (nonatomic) int actionResolutionState;
@property (nonatomic, copy) NSArray *evaluationNodes;
@property (nonatomic) bool hasActionResolutionState;
@property (nonatomic) bool hasTaskOutcome;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLSchemaFLTaskOutcome *taskOutcome;

- (void).cxx_destruct;
- (int)actionResolutionState;
- (void)addEvaluationNodes:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearEvaluationNodes;
- (void)deleteActionResolutionState;
- (void)deleteEvaluationNodes;
- (void)deleteTaskOutcome;
- (id)dictionaryRepresentation;
- (id)evaluationNodes;
- (id)evaluationNodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)evaluationNodesCount;
- (bool)hasActionResolutionState;
- (bool)hasTaskOutcome;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionResolutionState:(int)arg1;
- (void)setEvaluationNodes:(id)arg1;
- (void)setHasActionResolutionState:(bool)arg1;
- (void)setHasTaskOutcome:(bool)arg1;
- (void)setTaskOutcome:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)taskOutcome;
- (void)writeTo:(id)arg1;

@end
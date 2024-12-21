/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionContext : SISchemaInstrumentationMessage {
    MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded * _ended;
    bool  _hasEnded;
    bool  _hasStartedOrChanged;
    MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded *ended;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (bool)hasEnded;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IDENTITYSchemaIDENTITYClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    IDENTITYSchemaIDENTITYIdentityRequestContext * _entityKitRequestContext;
    IDENTITYSchemaIDENTITYClientEventMetadata * _eventMetadata;
    IDENTITYSchemaIDENTITYFirstIdentityReceived * _firstIdentityReceived;
    IDENTITYSchemaIDENTITYFirstVoiceObservationSubmitted * _firstVoiceIdSubmitted;
    bool  _hasEntityKitRequestContext;
    bool  _hasEventMetadata;
    bool  _hasFirstIdentityReceived;
    bool  _hasFirstVoiceIdSubmitted;
    bool  _hasResultCandidateReceived;
    bool  _hasScoreCardsGenerated;
    bool  _hasUserDisambiguationDecisionReported;
    bool  _hasUserPresenceSourceCaptured;
    bool  _hasUsersPresencesCaptured;
    IDENTITYSchemaIDENTITYResultCandidateReceived * _resultCandidateReceived;
    IDENTITYSchemaIDENTITYScoreCardsGenerated * _scoreCardsGenerated;
    IDENTITYSchemaIDENTITYAskUserForDisambiguationDecisionReported * _userDisambiguationDecisionReported;
    IDENTITYSchemaIDENTITYUserPresenceSourceCaptured * _userPresenceSourceCaptured;
    IDENTITYSchemaIDENTITYUsersPresencesCaptured * _usersPresencesCaptured;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) IDENTITYSchemaIDENTITYIdentityRequestContext *entityKitRequestContext;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYClientEventMetadata *eventMetadata;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYFirstIdentityReceived *firstIdentityReceived;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYFirstVoiceObservationSubmitted *firstVoiceIdSubmitted;
@property (nonatomic) bool hasEntityKitRequestContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasFirstIdentityReceived;
@property (nonatomic) bool hasFirstVoiceIdSubmitted;
@property (nonatomic) bool hasResultCandidateReceived;
@property (nonatomic) bool hasScoreCardsGenerated;
@property (nonatomic) bool hasUserDisambiguationDecisionReported;
@property (nonatomic) bool hasUserPresenceSourceCaptured;
@property (nonatomic) bool hasUsersPresencesCaptured;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYResultCandidateReceived *resultCandidateReceived;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYScoreCardsGenerated *scoreCardsGenerated;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYAskUserForDisambiguationDecisionReported *userDisambiguationDecisionReported;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYUserPresenceSourceCaptured *userPresenceSourceCaptured;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYUsersPresencesCaptured *usersPresencesCaptured;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)arg1;
+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEntityKitRequestContext;
- (void)deleteEventMetadata;
- (void)deleteFirstIdentityReceived;
- (void)deleteFirstVoiceIdSubmitted;
- (void)deleteResultCandidateReceived;
- (void)deleteScoreCardsGenerated;
- (void)deleteUserDisambiguationDecisionReported;
- (void)deleteUserPresenceSourceCaptured;
- (void)deleteUsersPresencesCaptured;
- (id)dictionaryRepresentation;
- (id)entityKitRequestContext;
- (id)eventMetadata;
- (id)firstIdentityReceived;
- (id)firstVoiceIdSubmitted;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEntityKitRequestContext;
- (bool)hasEventMetadata;
- (bool)hasFirstIdentityReceived;
- (bool)hasFirstVoiceIdSubmitted;
- (bool)hasResultCandidateReceived;
- (bool)hasScoreCardsGenerated;
- (bool)hasUserDisambiguationDecisionReported;
- (bool)hasUserPresenceSourceCaptured;
- (bool)hasUsersPresencesCaptured;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateReceived;
- (id)scoreCardsGenerated;
- (void)setEntityKitRequestContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setFirstIdentityReceived:(id)arg1;
- (void)setFirstVoiceIdSubmitted:(id)arg1;
- (void)setHasEntityKitRequestContext:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasFirstIdentityReceived:(bool)arg1;
- (void)setHasFirstVoiceIdSubmitted:(bool)arg1;
- (void)setHasResultCandidateReceived:(bool)arg1;
- (void)setHasScoreCardsGenerated:(bool)arg1;
- (void)setHasUserDisambiguationDecisionReported:(bool)arg1;
- (void)setHasUserPresenceSourceCaptured:(bool)arg1;
- (void)setHasUsersPresencesCaptured:(bool)arg1;
- (void)setResultCandidateReceived:(id)arg1;
- (void)setScoreCardsGenerated:(id)arg1;
- (void)setUserDisambiguationDecisionReported:(id)arg1;
- (void)setUserPresenceSourceCaptured:(id)arg1;
- (void)setUsersPresencesCaptured:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userDisambiguationDecisionReported;
- (id)userPresenceSourceCaptured;
- (id)usersPresencesCaptured;
- (unsigned long long)whichEvent_Type;
- (unsigned long long)whichInnerEventType;
- (void)writeTo:(id)arg1;

@end
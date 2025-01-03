/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLSchemaFLClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    FLSchemaFLInteractionDonationContext * _donationContext;
    FLSchemaFLActionEvaluationContext * _evaluationContext;
    FLSchemaFLClientEventMetadata * _eventMetadata;
    bool  _hasDonationContext;
    bool  _hasEvaluationContext;
    bool  _hasEventMetadata;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) FLSchemaFLInteractionDonationContext *donationContext;
@property (nonatomic, retain) FLSchemaFLActionEvaluationContext *evaluationContext;
@property (nonatomic, retain) FLSchemaFLClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasDonationContext;
@property (nonatomic) bool hasEvaluationContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)arg1;
+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteDonationContext;
- (void)deleteEvaluationContext;
- (void)deleteEventMetadata;
- (id)dictionaryRepresentation;
- (id)donationContext;
- (id)evaluationContext;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasDonationContext;
- (bool)hasEvaluationContext;
- (bool)hasEventMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setDonationContext:(id)arg1;
- (void)setEvaluationContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasDonationContext:(bool)arg1;
- (void)setHasEvaluationContext:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (unsigned long long)whichInnerEventType;
- (void)writeTo:(id)arg1;

@end

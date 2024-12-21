/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface RTSSchemaRTSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    RTSSchemaRTSClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasRtsFalseRejectDetected;
    bool  _hasRtsFirstPassPolicyTriggered;
    bool  _hasRtsMotionData;
    bool  _hasRtsSecondPassPolicyDecisionMade;
    bool  _hasRtsTriggered;
    RTSSchemaRTSFalseRejectDetected * _rtsFalseRejectDetected;
    RTSSchemaRTSFirstPassPolicyTriggered * _rtsFirstPassPolicyTriggered;
    RTSSchemaRTSMotionData * _rtsMotionData;
    RTSSchemaRTSSecondPassPolicyDecisionMade * _rtsSecondPassPolicyDecisionMade;
    RTSSchemaRTSTriggered * _rtsTriggered;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) RTSSchemaRTSClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasRtsFalseRejectDetected;
@property (nonatomic) bool hasRtsFirstPassPolicyTriggered;
@property (nonatomic) bool hasRtsMotionData;
@property (nonatomic) bool hasRtsSecondPassPolicyDecisionMade;
@property (nonatomic) bool hasRtsTriggered;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RTSSchemaRTSFalseRejectDetected *rtsFalseRejectDetected;
@property (nonatomic, retain) RTSSchemaRTSFirstPassPolicyTriggered *rtsFirstPassPolicyTriggered;
@property (nonatomic, retain) RTSSchemaRTSMotionData *rtsMotionData;
@property (nonatomic, retain) RTSSchemaRTSSecondPassPolicyDecisionMade *rtsSecondPassPolicyDecisionMade;
@property (nonatomic, retain) RTSSchemaRTSTriggered *rtsTriggered;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)arg1;
+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteRtsFalseRejectDetected;
- (void)deleteRtsFirstPassPolicyTriggered;
- (void)deleteRtsMotionData;
- (void)deleteRtsSecondPassPolicyDecisionMade;
- (void)deleteRtsTriggered;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasRtsFalseRejectDetected;
- (bool)hasRtsFirstPassPolicyTriggered;
- (bool)hasRtsMotionData;
- (bool)hasRtsSecondPassPolicyDecisionMade;
- (bool)hasRtsTriggered;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)rtsFalseRejectDetected;
- (id)rtsFirstPassPolicyTriggered;
- (id)rtsMotionData;
- (id)rtsSecondPassPolicyDecisionMade;
- (id)rtsTriggered;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasRtsFalseRejectDetected:(bool)arg1;
- (void)setHasRtsFirstPassPolicyTriggered:(bool)arg1;
- (void)setHasRtsMotionData:(bool)arg1;
- (void)setHasRtsSecondPassPolicyDecisionMade:(bool)arg1;
- (void)setHasRtsTriggered:(bool)arg1;
- (void)setRtsFalseRejectDetected:(id)arg1;
- (void)setRtsFirstPassPolicyTriggered:(id)arg1;
- (void)setRtsMotionData:(id)arg1;
- (void)setRtsSecondPassPolicyDecisionMade:(id)arg1;
- (void)setRtsTriggered:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (unsigned long long)whichInnerEventType;
- (void)writeTo:(id)arg1;

@end
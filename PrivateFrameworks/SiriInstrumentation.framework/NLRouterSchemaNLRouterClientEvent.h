/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLRouterSchemaNLRouterClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    NLRouterSchemaNLRouterClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasNlRouterBridgeHandleContext;
    bool  _hasNlRouterHandleContext;
    bool  _hasNlRouterPromptGenerationSignalsCaptured;
    bool  _hasNlRouterSubComponentHandleContext;
    bool  _hasNlRouterSubComponentSetupContext;
    bool  _hasNlRouterSubComponentTriggeredHeuristicRuleTier1;
    NLRouterSchemaNLRouterBridgeHandleContext * _nlRouterBridgeHandleContext;
    NLRouterSchemaNLRouterHandleContext * _nlRouterHandleContext;
    NLRouterSchemaNLRouterPromptGenerationSignalsCaptured * _nlRouterPromptGenerationSignalsCaptured;
    NLRouterSchemaNLRouterSubComponentHandleContext * _nlRouterSubComponentHandleContext;
    NLRouterSchemaNLRouterSubComponentSetupContext * _nlRouterSubComponentSetupContext;
    NLRouterSchemaNLRouterSubComponentTriggeredHeuristicRuleTier1 * _nlRouterSubComponentTriggeredHeuristicRuleTier1;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) NLRouterSchemaNLRouterClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasNlRouterBridgeHandleContext;
@property (nonatomic) bool hasNlRouterHandleContext;
@property (nonatomic) bool hasNlRouterPromptGenerationSignalsCaptured;
@property (nonatomic) bool hasNlRouterSubComponentHandleContext;
@property (nonatomic) bool hasNlRouterSubComponentSetupContext;
@property (nonatomic) bool hasNlRouterSubComponentTriggeredHeuristicRuleTier1;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLRouterSchemaNLRouterBridgeHandleContext *nlRouterBridgeHandleContext;
@property (nonatomic, retain) NLRouterSchemaNLRouterHandleContext *nlRouterHandleContext;
@property (nonatomic, retain) NLRouterSchemaNLRouterPromptGenerationSignalsCaptured *nlRouterPromptGenerationSignalsCaptured;
@property (nonatomic, retain) NLRouterSchemaNLRouterSubComponentHandleContext *nlRouterSubComponentHandleContext;
@property (nonatomic, retain) NLRouterSchemaNLRouterSubComponentSetupContext *nlRouterSubComponentSetupContext;
@property (nonatomic, retain) NLRouterSchemaNLRouterSubComponentTriggeredHeuristicRuleTier1 *nlRouterSubComponentTriggeredHeuristicRuleTier1;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)arg1;
+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteNlRouterBridgeHandleContext;
- (void)deleteNlRouterHandleContext;
- (void)deleteNlRouterPromptGenerationSignalsCaptured;
- (void)deleteNlRouterSubComponentHandleContext;
- (void)deleteNlRouterSubComponentSetupContext;
- (void)deleteNlRouterSubComponentTriggeredHeuristicRuleTier1;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasNlRouterBridgeHandleContext;
- (bool)hasNlRouterHandleContext;
- (bool)hasNlRouterPromptGenerationSignalsCaptured;
- (bool)hasNlRouterSubComponentHandleContext;
- (bool)hasNlRouterSubComponentSetupContext;
- (bool)hasNlRouterSubComponentTriggeredHeuristicRuleTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)nlRouterBridgeHandleContext;
- (id)nlRouterHandleContext;
- (id)nlRouterPromptGenerationSignalsCaptured;
- (id)nlRouterSubComponentHandleContext;
- (id)nlRouterSubComponentSetupContext;
- (id)nlRouterSubComponentTriggeredHeuristicRuleTier1;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasNlRouterBridgeHandleContext:(bool)arg1;
- (void)setHasNlRouterHandleContext:(bool)arg1;
- (void)setHasNlRouterPromptGenerationSignalsCaptured:(bool)arg1;
- (void)setHasNlRouterSubComponentHandleContext:(bool)arg1;
- (void)setHasNlRouterSubComponentSetupContext:(bool)arg1;
- (void)setHasNlRouterSubComponentTriggeredHeuristicRuleTier1:(bool)arg1;
- (void)setNlRouterBridgeHandleContext:(id)arg1;
- (void)setNlRouterHandleContext:(id)arg1;
- (void)setNlRouterPromptGenerationSignalsCaptured:(id)arg1;
- (void)setNlRouterSubComponentHandleContext:(id)arg1;
- (void)setNlRouterSubComponentSetupContext:(id)arg1;
- (void)setNlRouterSubComponentTriggeredHeuristicRuleTier1:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (unsigned long long)whichInnerEventType;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DialogEngineSchemaDLGENGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    DialogEngineSchemaDLGENGNamedEntitiesUsed * _DLGENGNamedEntitiesUsed;
    DialogEngineSchemaDLGENGClientEventMetadata * _eventMetadata;
    bool  _hasDLGENGNamedEntitiesUsed;
    bool  _hasEventMetadata;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) DialogEngineSchemaDLGENGNamedEntitiesUsed *DLGENGNamedEntitiesUsed;
@property (nonatomic, retain) DialogEngineSchemaDLGENGClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasDLGENGNamedEntitiesUsed;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)arg1;
+ (int)joinability;

- (void).cxx_destruct;
- (id)DLGENGNamedEntitiesUsed;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteDLGENGNamedEntitiesUsed;
- (void)deleteEventMetadata;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasDLGENGNamedEntitiesUsed;
- (bool)hasEventMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setDLGENGNamedEntitiesUsed:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasDLGENGNamedEntitiesUsed:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (unsigned long long)whichInnerEventType;
- (void)writeTo:(id)arg1;

@end
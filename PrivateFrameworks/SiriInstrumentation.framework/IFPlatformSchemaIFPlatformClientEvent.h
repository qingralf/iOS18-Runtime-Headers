/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFPlatformSchemaIFPlatformClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    IFPlatformSchemaIFPlatformClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasIfPlatformTargetContext;
    IFPlatformSchemaIFPlatformTargetContext * _ifPlatformTargetContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) IFPlatformSchemaIFPlatformClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasIfPlatformTargetContext;
@property (nonatomic, retain) IFPlatformSchemaIFPlatformTargetContext *ifPlatformTargetContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)arg1;
+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteIfPlatformTargetContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasIfPlatformTargetContext;
- (unsigned long long)hash;
- (id)ifPlatformTargetContext;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasIfPlatformTargetContext:(bool)arg1;
- (void)setIfPlatformTargetContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (unsigned long long)whichInnerEventType;
- (void)writeTo:(id)arg1;

@end

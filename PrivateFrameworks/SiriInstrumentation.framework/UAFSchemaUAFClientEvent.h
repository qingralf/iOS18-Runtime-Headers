/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface UAFSchemaUAFClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    UAFSchemaUAFClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasUafAssetDailyStatus;
    UAFSchemaUAFAssetDailyStatusWithDeviceProperties * _uafAssetDailyStatus;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) UAFSchemaUAFClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasUafAssetDailyStatus;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) UAFSchemaUAFAssetDailyStatusWithDeviceProperties *uafAssetDailyStatus;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEventMetadata;
- (void)deleteUafAssetDailyStatus;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (bool)hasEventMetadata;
- (bool)hasUafAssetDailyStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasUafAssetDailyStatus:(bool)arg1;
- (void)setUafAssetDailyStatus:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)uafAssetDailyStatus;
- (unsigned long long)whichEvent_Type;
- (unsigned long long)whichInnerEventType;
- (void)writeTo:(id)arg1;

@end

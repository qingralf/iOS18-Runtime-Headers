/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLRouterSchemaNLRouterSubComponentTriggeredHeuristicRuleTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    bool  _hasTriggeredHeuristicRule;
    SISchemaUUID * _linkId;
    NSString * _triggeredHeuristicRule;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasTriggeredHeuristicRule;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSString *triggeredHeuristicRule;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLinkId;
- (void)deleteTriggeredHeuristicRule;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (bool)hasTriggeredHeuristicRule;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasTriggeredHeuristicRule:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setTriggeredHeuristicRule:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)triggeredHeuristicRule;
- (void)writeTo:(id)arg1;

@end

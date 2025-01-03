/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PLATFORMProvisionalConnectedComponents : SISchemaInstrumentationMessage {
    NSArray * _componentIds;
    bool  _hasRepresentativeId;
    PLATFORMProvisionalConnectecedComponentIdentifier * _representativeId;
}

@property (nonatomic, copy) NSArray *componentIds;
@property (nonatomic) bool hasRepresentativeId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PLATFORMProvisionalConnectecedComponentIdentifier *representativeId;

- (void).cxx_destruct;
- (void)addComponentIds:(id)arg1;
- (void)clearComponentIds;
- (id)componentIds;
- (id)componentIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)componentIdsCount;
- (void)deleteComponentIds;
- (void)deleteRepresentativeId;
- (id)dictionaryRepresentation;
- (bool)hasRepresentativeId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)representativeId;
- (void)setComponentIds:(id)arg1;
- (void)setHasRepresentativeId:(bool)arg1;
- (void)setRepresentativeId:(id)arg1;
- (void)writeTo:(id)arg1;

@end

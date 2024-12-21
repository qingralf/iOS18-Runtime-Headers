/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface QDSchemaQDEntityType : SISchemaInstrumentationMessage {
    NSString * _bundleId;
    bool  _hasBundleId;
    bool  _hasNameOfTypedValue;
    NSString * _nameOfTypedValue;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic) bool hasBundleId;
@property (nonatomic) bool hasNameOfTypedValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *nameOfTypedValue;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)bundleId;
- (void)deleteBundleId;
- (void)deleteNameOfTypedValue;
- (id)dictionaryRepresentation;
- (bool)hasBundleId;
- (bool)hasNameOfTypedValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)nameOfTypedValue;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasBundleId:(bool)arg1;
- (void)setHasNameOfTypedValue:(bool)arg1;
- (void)setNameOfTypedValue:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
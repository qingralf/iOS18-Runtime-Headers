/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface INFERENCESchemaINFERENCEAsrEuclidEmbedding : SISchemaInstrumentationMessage {
    INFERENCESchemaINFERENCEEuclidDebugMetrics * _euclidDebugMetrics;
    INFERENCESchemaINFERENCEEuclidServiceMetrics * _euclidServiceMetrics;
    bool  _hasEuclidDebugMetrics;
    bool  _hasEuclidServiceMetrics;
}

@property (nonatomic, retain) INFERENCESchemaINFERENCEEuclidDebugMetrics *euclidDebugMetrics;
@property (nonatomic, retain) INFERENCESchemaINFERENCEEuclidServiceMetrics *euclidServiceMetrics;
@property (nonatomic) bool hasEuclidDebugMetrics;
@property (nonatomic) bool hasEuclidServiceMetrics;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEuclidDebugMetrics;
- (void)deleteEuclidServiceMetrics;
- (id)dictionaryRepresentation;
- (id)euclidDebugMetrics;
- (id)euclidServiceMetrics;
- (bool)hasEuclidDebugMetrics;
- (bool)hasEuclidServiceMetrics;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEuclidDebugMetrics:(id)arg1;
- (void)setEuclidServiceMetrics:(id)arg1;
- (void)setHasEuclidDebugMetrics:(bool)arg1;
- (void)setHasEuclidServiceMetrics:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VISLabeledPRPoint : PBCodable <NSSecureCoding, VISLabeledPRPoint> {
    float  _confidence;
    NSString * _label;
    float  _precision;
    NSString * _readable_label;
    float  _recall;
}

@property (nonatomic) float confidence;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) float precision;
@property (nonatomic, copy) NSString *readable_label;
@property (nonatomic) float recall;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)confidence;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)label;
- (float)precision;
- (bool)readFrom:(id)arg1;
- (id)readable_label;
- (float)recall;
- (void)setConfidence:(float)arg1;
- (void)setLabel:(id)arg1;
- (void)setPrecision:(float)arg1;
- (void)setReadable_label:(id)arg1;
- (void)setRecall:(float)arg1;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VISOperatingPointSelectors : PBCodable <NSSecureCoding, VISOperatingPointSelectors> {
    float  _confidence;
    float  _f_beta;
    float  _precision;
    float  _recall;
    unsigned long long  _whichSelectors;
}

@property (nonatomic) float confidence;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) float f_beta;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float precision;
@property (nonatomic) float recall;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long whichSelectors;

- (float)confidence;
- (id)dictionaryRepresentation;
- (float)f_beta;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)precision;
- (bool)readFrom:(id)arg1;
- (float)recall;
- (void)setConfidence:(float)arg1;
- (void)setF_beta:(float)arg1;
- (void)setPrecision:(float)arg1;
- (void)setRecall:(float)arg1;
- (unsigned long long)whichSelectors;
- (void)writeTo:(id)arg1;

@end

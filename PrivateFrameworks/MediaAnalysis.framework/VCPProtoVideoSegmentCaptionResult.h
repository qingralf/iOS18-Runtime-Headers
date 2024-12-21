/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPProtoVideoSegmentCaptionResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _confidence;
    NSString * _text;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) float confidence;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setText:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (id)text;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysisServices.framework/MediaAnalysisServices
 */

@interface MADImageEmbeddingResult : MADResult {
    MADEmbeddingResult * _embedding;
}

@property (nonatomic, readonly) MADEmbeddingResult *embedding;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)embedding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1 data:(id)arg2 type:(unsigned long long)arg3;

@end

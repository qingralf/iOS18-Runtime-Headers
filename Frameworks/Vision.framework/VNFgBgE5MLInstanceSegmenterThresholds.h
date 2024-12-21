/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFgBgE5MLInstanceSegmenterThresholds : NSObject {
    float  _IoUThreshold;
    float  _cocoConfidenceThreshold;
    float  _defaultValidMinimumMaskPixelCount;
    float  _fillGapsAreaRatio;
    float  _maskThreshold;
    float  _matchScoreThreshold;
    float  _miyoshiConfidenceThreshold;
    float  _stabilityScoreThreshold;
    float  _validMinMaskRatio;
}

@property float IoUThreshold;
@property float cocoConfidenceThreshold;
@property float defaultValidMinimumMaskPixelCount;
@property float fillGapsAreaRatio;
@property float maskThreshold;
@property float matchScoreThreshold;
@property float miyoshiConfidenceThreshold;
@property float stabilityScoreThreshold;
@property float validMinMaskRatio;

- (float)IoUThreshold;
- (float)cocoConfidenceThreshold;
- (float)defaultValidMinimumMaskPixelCount;
- (float)fillGapsAreaRatio;
- (id)initDefaultConfigRevision1;
- (id)initWithRevision:(unsigned long long)arg1 error:(id*)arg2;
- (float)maskThreshold;
- (float)matchScoreThreshold;
- (float)miyoshiConfidenceThreshold;
- (void)setCocoConfidenceThreshold:(float)arg1;
- (void)setDefaultValidMinimumMaskPixelCount:(float)arg1;
- (void)setFillGapsAreaRatio:(float)arg1;
- (void)setIoUThreshold:(float)arg1;
- (void)setMaskThreshold:(float)arg1;
- (void)setMatchScoreThreshold:(float)arg1;
- (void)setMiyoshiConfidenceThreshold:(float)arg1;
- (void)setStabilityScoreThreshold:(float)arg1;
- (void)setValidMinMaskRatio:(float)arg1;
- (float)stabilityScoreThreshold;
- (float)validMinMaskRatio;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGenerateImageSegmentationRequest : VNImageBasedRequest {
    bool  _disableConnectedComponentRefinement;
    bool  _fillGapsInMask;
    unsigned long long  _minimumMaskPixelCount;
    NSArray * _targetPoints;
}

@property (nonatomic) bool disableConnectedComponentRefinement;
@property (nonatomic) bool fillGapsInMask;
@property (nonatomic, readonly) long long maximumTargetPoints;
@property (nonatomic) unsigned long long minimumMaskPixelCount;
@property (readonly, copy) NSArray *results;
@property (nonatomic, retain) NSArray *targetPoints;

+ (Class)configurationClass;
+ (void)downloadModelForTests:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (bool)disableConnectedComponentRefinement;
- (bool)fillGapsInMask;
- (id)init;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (long long)maximumTargetPoints;
- (unsigned long long)minimumMaskPixelCount;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (void)setDisableConnectedComponentRefinement:(bool)arg1;
- (void)setFillGapsInMask:(bool)arg1;
- (void)setMinimumMaskPixelCount:(unsigned long long)arg1;
- (void)setTargetPoints:(id)arg1;
- (id)supportedFeaturesAndReturnError:(id*)arg1;
- (id)targetPoints;

@end
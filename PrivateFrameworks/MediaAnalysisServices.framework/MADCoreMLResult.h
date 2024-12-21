/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysisServices.framework/MediaAnalysisServices
 */

@interface MADCoreMLResult : MADResult {
    NSArray * _observations;
    NSArray * _visionResults;
}

@property (nonatomic, readonly) NSArray *observations;

+ (id)resultWithVisionResults:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)_packageCoreMLObservations;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisionResults:(id)arg1;
- (id)observations;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectHumanHeadRectanglesRequest : VNImageBasedRequest

@property (nonatomic, readonly) bool canOverridePrecisionRecallThreshold;
@property (nonatomic) float precisionRecallThreshold;
@property (nonatomic, readonly, copy) NSNumber *precisionRecallThresholdOverride;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;
+ (id)revisionsSupportingPrecisionRecallThresholdOverride;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)canOverridePrecisionRecallThreshold;
- (long long)dependencyProcessingOrdinality;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (float)precisionRecallThreshold;
- (id)precisionRecallThresholdOverride;
- (void)resetPrecisionRecallThreshold;
- (void)setPrecisionRecallThreshold:(float)arg1;

@end
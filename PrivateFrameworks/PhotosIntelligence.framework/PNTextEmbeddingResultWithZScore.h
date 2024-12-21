/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosIntelligence.framework/PhotosIntelligence
 */

@interface PNTextEmbeddingResultWithZScore : NSObject <PNTextEmbeddingResult> {
    NSNumber * _calibrationVersion;
    NSArray * _embedding;
    NSNumber * _mean;
    NSNumber * _standardDeviation;
}

@property (nonatomic, readonly) NSNumber *calibrationVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *embedding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calibratedThresholdForImageSearchWithBaseThreshold:(id)arg1;
- (id)calibrationVersion;
- (id)defaultThresholdForImageSearch;
- (id)embedding;
- (id)initWithEmbedding:(id)arg1 calibrationVersion:(id)arg2 mean:(id)arg3 standardDeviation:(id)arg4;

@end
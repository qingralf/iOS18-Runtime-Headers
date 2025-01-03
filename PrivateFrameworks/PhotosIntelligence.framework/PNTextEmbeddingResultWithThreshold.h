/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosIntelligence.framework/PhotosIntelligence
 */

@interface PNTextEmbeddingResultWithThreshold : NSObject <PNTextEmbeddingResult> {
    NSNumber * _calibrationVersion;
    NSArray * _embedding;
    NSObject<OS_os_log> * _log;
    NSNumber * _threshold;
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
- (id)initWithEmbedding:(id)arg1 threshold:(id)arg2;

@end

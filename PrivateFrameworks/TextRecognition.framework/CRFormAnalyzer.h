/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRFormAnalyzer : NSObject {
    CRFormAnalyzerConfiguration * _configuration;
    CRFormContourBasedDetector * _contourBasedDetector;
    CRPerformanceStatistics * _formDetectionStats;
    CRPerformanceStatistics * _formPostProcessingStats;
    CRFormDetector * _modelDetector;
    CRFormPostProcessingManager * _postProcessingManager;
    CRFormTextBasedDetector * _textBasedDetector;
}

@property (nonatomic, readonly) CRFormAnalyzerConfiguration *configuration;
@property (nonatomic, readonly) CRFormContourBasedDetector *contourBasedDetector;
@property (readonly) CRPerformanceStatistics *formDetectionStats;
@property (readonly) CRPerformanceStatistics *formPostProcessingStats;
@property (nonatomic, readonly) CRFormDetector *modelDetector;
@property (nonatomic, readonly) CRFormPostProcessingManager *postProcessingManager;
@property (nonatomic, readonly) CRFormTextBasedDetector *textBasedDetector;

+ (void)_saveAllDebugImagesForRegions:(id)arg1 image:(id)arg2 afterPostProcessing:(bool)arg3;
+ (void)_saveDebugImageForRegions:(id)arg1 image:(id)arg2 suffix:(id)arg3 displayTypes:(bool)arg4;

- (void).cxx_destruct;
- (void)analyzeImage:(id)arg1 outputRegion:(id)arg2;
- (id)configuration;
- (id)contourBasedDetector;
- (void)exportSerializedResults:(id)arg1 forImage:(id)arg2;
- (id)fetchSerializedResultsForImage:(id)arg1;
- (id)formDetectionStats;
- (id)formPostProcessingStats;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2 detectionStats:(id)arg3 postProcessingStats:(id)arg4;
- (id)modelDetector;
- (id)postProcessingManager;
- (bool)shouldRunDetectionForDocument:(id)arg1;
- (id)textBasedDetector;

@end

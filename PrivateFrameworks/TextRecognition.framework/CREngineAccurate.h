/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CREngineAccurate : NSObject <CREngine> {
    CRFormAnalyzer * _formAnalyzer;
    CRPerformanceStatistics * _formAnalyzerStats;
    CRPerformanceStatistics * _formDetectionStats;
    CRPerformanceStatistics * _formPostProcessingStats;
    CRLineWrapper * _lineWrapper;
    CRPerformanceStatistics * _lineWrappingStats;
    CRNeuralTextDetector * _ocrDetector;
    CRMultiModelTextRecognizer * _ocrRecognizer;
    NSDictionary * _options;
    CRPerformanceStatistics * _recognizerStats;
    <MLComputeDeviceProtocol> * _requestedComputeDevice;
    unsigned long long  _revision;
    bool  _shouldCancel;
    CRPerformanceStatistics * _tableStructureRecognitionStats;
    CRTableStructureRecognizer * _tableStructureRecognizer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) CRPerformanceStatistics *detectorInferenceStats;
@property (readonly) CRPerformanceStatistics *detectorStats;
@property (retain) CRFormAnalyzer *formAnalyzer;
@property (retain) CRPerformanceStatistics *formAnalyzerStats;
@property (retain) CRPerformanceStatistics *formDetectionStats;
@property (retain) CRPerformanceStatistics *formPostProcessingStats;
@property (readonly) unsigned long long hash;
@property (retain) CRLineWrapper *lineWrapper;
@property (retain) CRPerformanceStatistics *lineWrappingStats;
@property (retain) CRNeuralTextDetector *ocrDetector;
@property (retain) CRMultiModelTextRecognizer *ocrRecognizer;
@property (retain) NSDictionary *options;
@property (readonly) CRPerformanceStatistics *orientationCorrectionStats;
@property (readonly) CRPerformanceStatistics *postProcStats;
@property (readonly) CRPerformanceStatistics *recognizerDecodingStats;
@property (readonly) CRPerformanceStatistics *recognizerInferenceStats;
@property (retain) CRPerformanceStatistics *recognizerStats;
@property (retain) <MLComputeDeviceProtocol> *requestedComputeDevice;
@property unsigned long long revision;
@property bool shouldCancel;
@property (readonly) Class superclass;
@property (retain) CRPerformanceStatistics *tableStructureRecognitionStats;
@property (retain) CRTableStructureRecognizer *tableStructureRecognizer;
@property (readonly) CRPerformanceStatistics *textGroupingStats;

+ (struct CGSize { double x1; double x2; })detectorImageSizeForOptions:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)preheatModelsForOptions:(id)arg1 revision:(long long)arg2 extendedTimeoutBlock:(id /* block */)arg3 error:(id*)arg4;
+ (id)supportedComputeDevicesForRevision:(long long)arg1;
+ (id)supportedLanguagesForRevision:(long long)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_blockFromGroup:(id)arg1 engineResult:(id)arg2 titleRegion:(id*)arg3 canWrapToNextBlock:(bool)arg4;
- (id)_detectorDebugDataForResult:(id)arg1;
- (id)_documentOutputRegionResult:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_loadFormAnalyzerIfNeededWithImageReaderOptions:(id)arg1 error:(id*)arg2;
- (id)_titleRegionFromRegions:(id)arg1;
- (void)cancel;
- (id)computeDevice;
- (id)detectorInferenceStats;
- (id)detectorStats;
- (id)documentForLineRegions:(id)arg1 recognitionResult:(id)arg2;
- (id)formAnalyzer;
- (id)formAnalyzerStats;
- (id)formDetectionStats;
- (id)formPostProcessingStats;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)lineWrapper;
- (id)lineWrappingStats;
- (id)ocrDetector;
- (id)ocrRecognizer;
- (id)options;
- (id)orientationCorrectionStats;
- (id)postProcStats;
- (id)recognizerDecodingStats;
- (id)recognizerInferenceStats;
- (id)recognizerStats;
- (id)requestedComputeDevice;
- (id)resultDocumentForDetectionResult:(id)arg1 image:(id)arg2 options:(id)arg3 progressHandler:(id /* block */)arg4 error:(id*)arg5;
- (id)resultDocumentInImage:(id)arg1 options:(id)arg2 trackingSession:(id)arg3 withProgressHandler:(id /* block */)arg4 error:(id*)arg5;
- (unsigned long long)revision;
- (void)setFormAnalyzer:(id)arg1;
- (void)setFormAnalyzerStats:(id)arg1;
- (void)setFormDetectionStats:(id)arg1;
- (void)setFormPostProcessingStats:(id)arg1;
- (void)setLineWrapper:(id)arg1;
- (void)setLineWrappingStats:(id)arg1;
- (void)setOcrDetector:(id)arg1;
- (void)setOcrRecognizer:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setRecognizerStats:(id)arg1;
- (void)setRequestedComputeDevice:(id)arg1;
- (void)setRevision:(unsigned long long)arg1;
- (void)setShouldCancel:(bool)arg1;
- (void)setTableStructureRecognitionStats:(id)arg1;
- (void)setTableStructureRecognizer:(id)arg1;
- (bool)shouldCancel;
- (struct CGSize { double x1; double x2; })smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)tableStructureRecognitionStats;
- (id)tableStructureRecognizer;
- (id)textDetectorResultsForImage:(id)arg1 error:(id*)arg2;
- (id)textDetectorResultsForImage:(id)arg1 trackingSession:(id)arg2 error:(id*)arg3;
- (id)textGroupingStats;
- (id)thresholdsForTextRegion:(id)arg1 withLocale:(id)arg2;
- (id)trackingResultOnSession:(id)arg1 image:(id)arg2 options:(id)arg3 error:(id*)arg4;

@end

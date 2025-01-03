/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHGroupingAndRecognitionResults : NSObject {
    NSMutableDictionary * __intermediateRecognitionResults;
    NSMutableSet * __intermediateStrokeGroups;
    NSMutableDictionary * _intermediateCachedRecognitionResults;
    NSDictionary * _previousProcessedRecognizedResultsByGroupID;
    CHStrokeGroupingResult * _previousProcessedStrokeGroupingResult;
    NSDictionary * _recognitionResultsByGroupID;
    NSMutableDictionary * _refreshedCachedResultsFromPostProcessing;
    CHStrokeClassificationResult * _strokeClassificationResult;
    NSSet * _strokeGroupReplacements;
    CHStrokeGroupingResult * _strokeGroupingResult;
}

@property (nonatomic, readonly) NSDictionary *cachedRecognitionResultsFromPostProcessing;
@property (nonatomic, readonly) NSDictionary *previousProcessedRecognizedResultsByGroupID;
@property (nonatomic, readonly) CHStrokeGroupingResult *previousProcessedStrokeGroupingResult;
@property (nonatomic, readonly) NSDictionary *recognitionResultsByGroupID;
@property (nonatomic, readonly) CHStrokeClassificationResult *strokeClassificationResult;
@property (nonatomic, readonly) NSSet *strokeGroupReplacements;
@property (nonatomic, readonly) CHStrokeGroupingResult *strokeGroupingResult;

- (void).cxx_destruct;
- (id)cachedRecognitionResultsFromPostProcessing;
- (id)initWithGroupingResult:(id)arg1 recognitionResultsByGroupID:(id)arg2 strokeClassificationResult:(id)arg3 previousProcessedStrokeGroupingResult:(id)arg4 previousProcessedRecognizedResultsByGroupID:(id)arg5 strokeGroupReplacements:(id)arg6 cachedRecognitionResultsFromPostProcessing:(id)arg7;
- (id)previousProcessedRecognizedResultsByGroupID;
- (id)previousProcessedStrokeGroupingResult;
- (id)recognitionResultsByGroupID;
- (id)refreshedCachedResultsFromPostProcessing;
- (id)strokeClassificationResult;
- (id)strokeGroupReplacements;
- (id)strokeGroupingResult;

@end

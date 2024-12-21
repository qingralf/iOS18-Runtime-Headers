/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPImageHumanPoseAnalyzerHolistic : VCPImageAnalyzer {
    VCPANSTHandsBodyDetector * _ANSTPersonDetector;
    VCPCNNHandKeypointsDetector * _handsKeypointsDetector;
    int  _inputHeight;
    int  _inputWidth;
    int  _maxNumRegionsHands;
    int  _maxNumRegionsPerson;
    VCPCNNPersonKeypointsDetector * _personKeypointsDetector;
    NSMutableArray * _results;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (int)convertSingleResultToDict:(struct CGPoint { double x1; double x2; })arg1 keypointConfidence:(float*)arg2 box:(id)arg3 leftHandsResults:(id)arg4 RightHandsResults:(id)arg5;
- (id)initWithMaxNumRegionsPersons:(int)arg1 forceCPU:(bool)arg2 sharedModel:(bool)arg3 inputConfig:(id)arg4;
- (int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned int*)arg3;
- (int)updateInputWidth:(int)arg1 Height:(int)arg2;
- (int)updateMaxNumPersons:(id)arg1;

@end
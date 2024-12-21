/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPVideoCNNBackbone : NSObject {
    VCPCNNModelEspresso * _modelEspresso;
    float * _outputBeforeFc;
    float * _outputBeforeFcSettling;
    float * _outputBeforeSpatiialPooling;
    float * _outputBeforeTemporalPooling;
    NSArray * _outputNames;
    float * _outputRes4;
    NSData * _tensorBeforeTemporalPooling;
}

@property (readonly) float*outputBeforeFc;
@property (readonly) float*outputBeforeFcSettling;
@property (readonly) float*outputBeforeSpatiialPooling;
@property (readonly) float*outputBeforeTemporalPooling;
@property (readonly) float*outputRes4;
@property (readonly) NSData *tensorBeforeTemporalPooling;

+ (id)sharedModel:(id)arg1 outputNames:(id)arg2 properties:(id)arg3;

- (void).cxx_destruct;
- (int)inference:(float*)arg1 settling:(bool)arg2;
- (id)initWithConfig:(id)arg1;
- (float*)outputBeforeFc;
- (float*)outputBeforeFcSettling;
- (float*)outputBeforeSpatiialPooling;
- (float*)outputBeforeTemporalPooling;
- (float*)outputRes4;
- (id)tensorBeforeTemporalPooling;

@end
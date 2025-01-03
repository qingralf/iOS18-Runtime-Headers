/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureDevice * _captureDevice;
    BWNodeOutput * _faceTrackingVideoCaptureOutput;
    BWNodeOutput * _offlineVISMotionDataCaptureOutput;
    bool  _optimizedForPreview;
    int  _sourceDeviceType;
    NSString * _sourceID;
    BWPixelTransferNode * _videoDataConverterRotatorNode;
    FigCaptureVISPipeline * _visPipeline;
    BWPipelineStage * _visPipelineStage;
}

+ (void)initialize;

- (void)dealloc;
- (void)setDiscardsSampleData:(bool)arg1;

@end

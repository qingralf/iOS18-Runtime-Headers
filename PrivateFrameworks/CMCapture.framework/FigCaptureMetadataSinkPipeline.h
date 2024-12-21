/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFaceDetectionNode * _faceDetectionNode;
    BWFaceTrackingNode * _faceTrackingNode;
    BWMetadataDetectorGatingNode * _metadataGatingNode;
    bool  _mrcConnectionDisabled;
    BWMRCNode * _mrcNode;
    bool  _mrcSuspended;
    BWPreviewHistogramNode * _previewHistogramNode;
    BWNodeOutput * _sceneClassifierPipelineUpstreamOutput;
    BWSceneClassifierSinkNode * _sceneClassifierSinkNode;
    BWNodeOutput * _smartCameraInferenceOutput;
    int  _sourceDeviceType;
    NSString * _sourceID;
}

+ (void)initialize;

- (void)dealloc;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureSessionParsedLiDARDepthPipelineConfiguration : NSObject {
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    FigCaptureSourceConfiguration * _timeOfFlightCameraConfiguration;
}

@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) FigCaptureSourceConfiguration *timeOfFlightCameraConfiguration;

- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)initWithTimeOfFlightCameraConfiguration:(id)arg1 depthDataConnectionConfiguration:(id)arg2;
- (id)timeOfFlightCameraConfiguration;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {
    BWApplySmartStyleRenderer * _applySmartStyleRenderer;
    NSDictionary * _attachedMediaFromStandardResolutionImage;
    bool  _backPressureDrivenPipelining;
    BWVideoFormat * _blurMapOutputFormat;
    NSError * _blurMapRenderErrorFromStandardResolutionImage;
    struct { 
        int width; 
        int height; 
    }  _blurMapSourceImageDimensions;
    struct opaqueCMSampleBuffer { } * _blurredGainMapSbuf;
    CIContext * _cachedCIContext;
    BWColorLookupCache * _colorLookupCache;
    BWStillImageCoreImageBlurMapRenderer * _coreImageBlurMapRenderer;
    NSString * _currentPortType;
    NSDictionary * _currentSDOFRenderingParameters;
    float  _currentZoomFactorForSDOFRenderingParameters;
    NSString * _defaultPortType;
    float  _defaultZoomFactor;
    bool  _depthDataDeliveryEnabled;
    struct { 
        int width; 
        int height; 
    }  _depthDataMapDimensions;
    NSObject<OS_dispatch_queue> * _emitQueue;
    struct __CVBuffer { } * _faceAdjustedBlurMapFromStandardResolutionImage;
    bool  _hairnetEnabled;
    NSDictionary * _inferenceResultsFromStandardResolutionImage;
    struct opaqueCMSampleBuffer { } * _learnedCoefficientsSbuf;
    struct { 
        int width; 
        int height; 
    }  _maskDimensions;
    BWStillImageMetalBlurMapRenderer * _metalBlurMapRenderer;
    BWMetalColorCubeRenderer * _metalFilterRenderer;
    BWStillImageMetalSDOFRenderer * _metalSDOFRenderer;
    <MTLCommandQueue> * _mtlCommandQueue;
    BWStillImageNodeConfiguration * _nodeConfiguration;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    BWVideoFormat * _outputFormat;
    struct OpaqueVTPixelTransferSession { } * _portraitDownsamplingTransferSession;
    int  _portraitRenderQuality;
    struct CGImageMetadata { } * _portraitStillImageAuxDepthMetadata;
    BWPixelBufferPool * _processingBufferPool;
    BWRenderList * _renderList;
    BWRenderListProcessor * _renderListProcessor;
    <BWRendererResourceProvider> * _rendererProvider;
    bool  _renderersPrewarmed;
    NSDictionary * _sensorConfigurationsByPortType;
    int  _smartStyleRenderingVersion;
    <BWStillImageFilterStatusDelegate> * _statusDelegate;
    struct opaqueCMSampleBuffer { } * _styledFullResolutionSbuf;
    float  _targetAspectRatio;
    struct opaqueCMSampleBuffer { } * _unstyledFullResolutionSbuf;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)_initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 statusDelegate:(id)arg3 depthDataDeliveryEnabled:(bool)arg4 personSegmentationEnabled:(bool)arg5 refinedDepthEnabled:(bool)arg6 portraitRenderQuality:(int)arg7 targetAspectRatio:(float)arg8 defaultPortType:(id)arg9 defaultZoomFactor:(float)arg10 backPressureDrivenPipelining:(bool)arg11 renderResourceProvider:(id)arg12;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 statusDelegate:(id)arg3 depthDataDeliveryEnabled:(bool)arg4 personSegmentationEnabled:(bool)arg5 refinedDepthEnabled:(bool)arg6 portraitRenderQuality:(int)arg7 targetAspectRatio:(float)arg8 defaultPortType:(id)arg9 defaultZoomFactor:(float)arg10 backPressureDrivenPipelining:(bool)arg11;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)provideApplySmartStyleRenderer;
- (id)provideColorLookupCache;
- (id)provideCoreImageFilterRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideStillImageCoreImageBlurMapRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStreamingSDOFFilterRenderer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setSmartStyleRenderingVersion:(int)arg1;
- (int)smartStyleRenderingVersion;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMISmartStylePixelBufferRendererV1 : NSObject <CMISmartStylePixelBufferRenderer> {
    NSDictionary * _cameraInfoByPortType;
    unsigned int  _frameCount;
    struct __CVBuffer { } * _inputGainMapPixelBuffer;
    NSDictionary * _inputLinearMetadataDict;
    struct __CVBuffer { } * _inputLinearPixelBuffer;
    NSDictionary * _inputMetadataDict;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputPersonMaskCropRect;
    struct __CVBuffer { } * _inputPersonMaskPixelBuffer;
    struct __CVBuffer { } * _inputPixelBuffer;
    <MTLBuffer> * _inputSRLCoefficientsBuf;
    float  _inputSRLCurveParameter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputSkinMaskCropRect;
    struct __CVBuffer { } * _inputSkinMaskPixelBuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputSkyMaskCropRect;
    struct __CVBuffer { } * _inputSkyMaskPixelBuffer;
    struct __CVBuffer { } * _inputThumbnailPixelBuffer;
    NSString * _instanceLabel;
    bool  _isStreaming;
    <MTLTexture> * _linearImageGlobalToneCurveTexture;
    FigMetalContext * _metalContext;
    NSMutableDictionary * _outputCodedLinearMetadata;
    struct __CVBuffer { } * _outputCodedLinearPixelBuffer;
    struct __CVBuffer { } * _outputGainMapPixelBuffer;
    struct __CVBuffer { } * _outputPixelBuffer;
    struct __CVBuffer { } * _outputSmallLightMapPixelBuffer;
    struct __CVBuffer { } * _outputSmallLinearLightMapPixelBuffer;
    float  _personMasksValidHint;
    int  _semanticStyleSceneType;
    <CMISmartStyleMetalRenderer> * _smartStyleMetalRenderer;
    struct __CVMetalTextureCache { } * _textureCache;
    NSString * _tuningParameterVariant;
    NSDictionary * _tuningParameters;
    bool  _useLiveMetalAllocations;
}

@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (nonatomic) float castIntensity;
@property (nonatomic, retain) NSString *castType;
@property (nonatomic) float colorBias;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CMIExternalMemoryResource *externalMemoryResource; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CVBuffer { }*inputGainMapPixelBuffer;
@property (nonatomic, retain) NSDictionary *inputLinearMetadataDict;
@property (nonatomic) struct __CVBuffer { }*inputLinearPixelBuffer;
@property (nonatomic, retain) NSDictionary *inputMetadataDict;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputPersonMaskCropRect;
@property (nonatomic) struct __CVBuffer { }*inputPersonMaskPixelBuffer;
@property (nonatomic) struct __CVBuffer { }*inputPixelBuffer;
@property (nonatomic, retain) <MTLBuffer> *inputSRLCoefficientsBuf;
@property (nonatomic) float inputSRLCurveParameter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputSkinMaskCropRect;
@property (nonatomic) struct __CVBuffer { }*inputSkinMaskPixelBuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputSkyMaskCropRect;
@property (nonatomic) struct __CVBuffer { }*inputSkyMaskPixelBuffer;
@property (nonatomic, retain) <CMISmartStyle> *inputStyle;
@property (nonatomic) struct __CVBuffer { }*inputThumbnailPixelBuffer;
@property (nonatomic, retain) NSString *instanceLabel;
@property (nonatomic) bool isStreaming;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic, readonly) <CMISmartStyleMetalRenderer> *metalRenderer;
@property (nonatomic, retain) NSMutableDictionary *outputCodedLinearMetadata;
@property (nonatomic) struct __CVBuffer { }*outputCodedLinearPixelBuffer;
@property (nonatomic) struct __CVBuffer { }*outputGainMapPixelBuffer;
@property (nonatomic, retain) NSMutableDictionary *outputImageStatistics;
@property (nonatomic, retain) NSMutableDictionary *outputImageStatisticsExtended;
@property (nonatomic) struct __CVBuffer { }*outputPixelBuffer;
@property (nonatomic) struct __CVBuffer { }*outputSmallLightMapPixelBuffer;
@property (nonatomic) struct __CVBuffer { }*outputSmallLinearLightMapPixelBuffer;
@property (nonatomic) float personMasksValidHint;
@property (nonatomic) int semanticStyleSceneType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsExternalMemoryResource; /* unknown property attribute: ? */
@property (nonatomic) float toneBias;
@property (nonatomic, retain) NSString *tuningParameterVariant;
@property (nonatomic, retain) NSDictionary *tuningParameters;
@property (nonatomic) bool useLiveMetalAllocations;

- (void).cxx_destruct;
- (int)_bindPixelBufferToTexture:(struct __CVBuffer { }*)arg1 usage:(unsigned long long)arg2 overrideMTLPixelFormatWithFormat:(unsigned long long)arg3 planeIndex:(int)arg4 texturePtr:(id*)arg5;
- (int)_calculateROIShift;
- (int)_createGlobalToneCurveTexture;
- (id)cameraInfoByPortType;
- (float)castIntensity;
- (id)castType;
- (float)colorBias;
- (void)dealloc;
- (int)finishProcessing;
- (id)initWithOptionalMetalCommandQueue:(id)arg1 allocator:(id)arg2;
- (struct __CVBuffer { }*)inputGainMapPixelBuffer;
- (id)inputLinearMetadataDict;
- (struct __CVBuffer { }*)inputLinearPixelBuffer;
- (id)inputMetadataDict;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputPersonMaskCropRect;
- (struct __CVBuffer { }*)inputPersonMaskPixelBuffer;
- (struct __CVBuffer { }*)inputPixelBuffer;
- (id)inputSRLCoefficientsBuf;
- (float)inputSRLCurveParameter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputSkinMaskCropRect;
- (struct __CVBuffer { }*)inputSkinMaskPixelBuffer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputSkyMaskCropRect;
- (struct __CVBuffer { }*)inputSkyMaskPixelBuffer;
- (id)inputStyle;
- (struct __CVBuffer { }*)inputThumbnailPixelBuffer;
- (id)instanceLabel;
- (bool)isStreaming;
- (id)metalCommandQueue;
- (id)metalRenderer;
- (id)outputCodedLinearMetadata;
- (struct __CVBuffer { }*)outputCodedLinearPixelBuffer;
- (struct __CVBuffer { }*)outputGainMapPixelBuffer;
- (id)outputImageStatistics;
- (id)outputImageStatisticsExtended;
- (struct __CVBuffer { }*)outputPixelBuffer;
- (struct __CVBuffer { }*)outputSmallLightMapPixelBuffer;
- (struct __CVBuffer { }*)outputSmallLinearLightMapPixelBuffer;
- (float)personMasksValidHint;
- (int)prepareToProcess:(unsigned int)arg1;
- (int)prewarm;
- (int)process;
- (int)purgeResources;
- (int)resetState;
- (int)semanticStyleSceneType;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setCastIntensity:(float)arg1;
- (void)setCastType:(id)arg1;
- (void)setColorBias:(float)arg1;
- (void)setInputGainMapPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputLinearMetadataDict:(id)arg1;
- (void)setInputLinearPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputMetadataDict:(id)arg1;
- (void)setInputPersonMaskCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputPersonMaskPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputSRLCoefficientsBuf:(id)arg1;
- (void)setInputSRLCurveParameter:(float)arg1;
- (void)setInputSkinMaskCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputSkinMaskPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputSkyMaskCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputSkyMaskPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputStyle:(id)arg1;
- (void)setInputThumbnailPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInstanceLabel:(id)arg1;
- (void)setIsStreaming:(bool)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setOutputCodedLinearMetadata:(id)arg1;
- (void)setOutputCodedLinearPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setOutputGainMapPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setOutputImageStatistics:(id)arg1;
- (void)setOutputImageStatisticsExtended:(id)arg1;
- (void)setOutputPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setOutputSmallLightMapPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setOutputSmallLinearLightMapPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setPersonMasksValidHint:(float)arg1;
- (void)setSemanticStyleSceneType:(int)arg1;
- (void)setToneBias:(float)arg1;
- (void)setTuningParameterVariant:(id)arg1;
- (void)setTuningParameters:(id)arg1;
- (void)setUseLiveMetalAllocations:(bool)arg1;
- (int)setup;
- (float)toneBias;
- (id)tuningParameterVariant;
- (id)tuningParameters;
- (bool)useLiveMetalAllocations;

@end
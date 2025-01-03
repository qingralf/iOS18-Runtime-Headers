/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMISmartStyleProxyRendererV1 : NSObject <CMISmartStyleProxyRenderer> {
    NSDictionary * _cameraInfoByPortType;
    NSMutableDictionary * _colorCubeCache;
    unsigned long long  _colorCubeDimension;
    unsigned long long  _colorCubePixelFormat;
    CMISmartStyleColorCubePoolV1 * _colorCubePool;
    struct { 
        struct { 
            int transferFunction; 
            struct { 
                /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
            } colorConversionMatrix; 
        } inputImage; 
        struct { 
            int transferFunction; 
            struct { 
                void*columns[3]; 
            } colorConversionMatrix; 
        } inputMasks; 
    }  _colorManagement;
    <MTLTexture> * _cubicSplineToneCurveTexture;
    float  _currentBrightnessValueForCubes;
    int  _currentSceneTypeForCubes;
    NSDictionary * _currentStatsForCubes;
    CMIExternalMemoryResource * _externalMemoryResource;
    float  _foregroundRatio;
    <MTLComputePipelineState> * _generateColorCubesPipelineState;
    <MTLComputePipelineState> * _hueSatLumLUTPipelineState;
    NSDictionary * _hueSatLumLUTTexByCastTypeForVariant;
    NSDictionary * _inputImageStatistics;
    <MTLTexture> * _inputImageTexture;
    struct __CVBuffer { } * _inputMaskPixelBuffer;
    <MTLTexture> * _inputMaskTexture;
    NSDictionary * _inputMetadata;
    struct __CVBuffer { } * _inputPixelBuffer;
    NSArray * _inputStyles;
    SmartStyleRendererPlist * _internalTuningParams;
    NSMutableSet * _internallyAllocatedTextures;
    unsigned long long  _maxInputStylesCount;
    FigMetalContext * _metalContext;
    <MTLTexture> * _outputImageTexture;
    struct __CVBuffer { } * _outputPixelBuffer;
    <MTLBuffer> * _paramsBuf;
    float  _personMasksValidHint;
    int  _processingType;
    <MTLComputePipelineState> * _renderWithColorCubesPipelineState;
    <MTLComputePipelineState> * _renderWithColorPriorsPipelineState;
    <MTLComputePipelineState> * _renderingParamsFromStatsPipelineState;
    <MTLBuffer> * _statsBuf;
    struct __CVMetalTextureCache { } * _textureCache;
    NSMutableSet * _texturesToPurge;
    NSString * _tuningParameterVariant;
    NSDictionary * _tuningParameters;
}

@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CMIExternalMemoryResource *externalMemoryResource; /* unknown property attribute: ? */
@property (nonatomic) float foregroundRatio;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *inputImageStatistics;
@property (nonatomic) struct __CVBuffer { }*inputMaskPixelBuffer;
@property (nonatomic, retain) NSDictionary *inputMetadata;
@property (nonatomic) struct __CVBuffer { }*inputPixelBuffer;
@property (nonatomic, retain) NSArray *inputStyles;
@property (nonatomic) unsigned long long maxInputStylesCount;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic) struct __CVBuffer { }*outputPixelBuffer;
@property (nonatomic) float personMasksValidHint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsExternalMemoryResource; /* unknown property attribute: ? */
@property (nonatomic, retain) NSString *tuningParameterVariant;
@property (nonatomic, retain) NSDictionary *tuningParameters;

- (void).cxx_destruct;
- (int)_allocateParamsAndStatsBuffers;
- (int)_bindInputPixelBuffersAsTextures;
- (int)_bindPixelBufferToTexture:(struct __CVBuffer { }*)arg1 usage:(unsigned long long)arg2 overrideMTLPixelFormatWithFormat:(unsigned long long)arg3 planeIndex:(int)arg4 texturePtr:(id*)arg5;
- (int)_calculateCubicSplineToneCurve;
- (int)_calculateDynamicRenderParameters;
- (id)_calculateHueSatLumLUTTexForAllCastTypesAndVariants;
- (int)_compileMetalShadersForProcessingType:(int)arg1;
- (void)_configureColorConversion:(struct { int x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; }*)arg1 forTexture:(id)arg2 isOutput:(bool)arg3;
- (int)_generateColorCubes;
- (id)_newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 label:(id)arg3;
- (id)_newTexture2DWithFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 usage:(unsigned long long)arg4 disableCompression:(bool)arg5 label:(id)arg6 retainUntilPurge:(bool)arg7 useFigMetalAllocator:(bool)arg8;
- (id)_newTexture2DWithFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 usage:(unsigned long long)arg4 label:(id)arg5 retainUntilPurge:(bool)arg6 useFigMetalAllocator:(bool)arg7;
- (int)_populateStaticRenderParameters:(struct { unsigned int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; unsigned int x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; float x_10_1_5; float x_10_1_6; float x_10_1_7[3]; float x_10_1_8[3]; float x_10_1_9[3]; float x_10_1_10; float x_10_1_11; float x_10_1_12; float x_10_1_13[3]; float x_10_1_14[3]; float x_10_1_15[3]; float x_10_1_16; float x_10_1_17; float x_10_1_18; float x_10_1_19; float x_10_1_20; float x_10_1_21; float x_10_1_22; } x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; float x_11_1_7; float x_11_1_8; float x_11_1_9; float x_11_1_10; float x_11_1_11; float x_11_1_12; float x_11_1_13; float x_11_1_14; float x_11_1_15; float x_11_1_16; float x_11_1_17; float x_11_1_18; float x_11_1_19; float x_11_1_20; float x_11_1_21; float x_11_1_22; float x_11_1_23; float x_11_1_24; float x_11_1_25; float x_11_1_26; float x_11_1_27; float x_11_1_28; float x_11_1_29; float x_11_1_30; float x_11_1_31; float x_11_1_32; float x_11_1_33; float x_11_1_34; float x_11_1_35; float x_11_1_36; float x_11_1_37; float x_11_1_38; float x_11_1_39; float x_11_1_40; float x_11_1_41; float x_11_1_42; float x_11_1_43; float x_11_1_44; float x_11_1_45; float x_11_1_46; float x_11_1_47; float x_11_1_48; float x_11_1_49; float x_11_1_50; float x_11_1_51; float x_11_1_52; float x_11_1_53; float x_11_1_54; float x_11_1_55; float x_11_1_56; float x_11_1_57; float x_11_1_58; float x_11_1_59; float x_11_1_60; float x_11_1_61; } x11; }*)arg1 forInputStyle:(id)arg2 fromTuning:(id)arg3;
- (int)_populateStaticRenderParametersFromTuning:(id)arg1;
- (void)_releaseInputPixelBuffersAndBoundTextures;
- (int)_renderWithColorCubes;
- (int)_renderWithColorPriors;
- (unsigned long long)_requiredAllocatorCapacity;
- (int)_updateColorCubeCache;
- (int)_updateColorCubesFromTuning:(id)arg1;
- (void)_updateColorManagementForInputs;
- (void)_updateHazeTuningAdjustments:(struct { unsigned int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; unsigned int x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; float x_10_1_5; float x_10_1_6; float x_10_1_7[3]; float x_10_1_8[3]; float x_10_1_9[3]; float x_10_1_10; float x_10_1_11; float x_10_1_12; float x_10_1_13[3]; float x_10_1_14[3]; float x_10_1_15[3]; float x_10_1_16; float x_10_1_17; float x_10_1_18; float x_10_1_19; float x_10_1_20; float x_10_1_21; float x_10_1_22; } x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; float x_11_1_7; float x_11_1_8; float x_11_1_9; float x_11_1_10; float x_11_1_11; float x_11_1_12; float x_11_1_13; float x_11_1_14; float x_11_1_15; float x_11_1_16; float x_11_1_17; float x_11_1_18; float x_11_1_19; float x_11_1_20; float x_11_1_21; float x_11_1_22; float x_11_1_23; float x_11_1_24; float x_11_1_25; float x_11_1_26; float x_11_1_27; float x_11_1_28; float x_11_1_29; float x_11_1_30; float x_11_1_31; float x_11_1_32; float x_11_1_33; float x_11_1_34; float x_11_1_35; float x_11_1_36; float x_11_1_37; float x_11_1_38; float x_11_1_39; float x_11_1_40; float x_11_1_41; float x_11_1_42; float x_11_1_43; float x_11_1_44; float x_11_1_45; float x_11_1_46; float x_11_1_47; float x_11_1_48; float x_11_1_49; float x_11_1_50; float x_11_1_51; float x_11_1_52; float x_11_1_53; float x_11_1_54; float x_11_1_55; float x_11_1_56; float x_11_1_57; float x_11_1_58; float x_11_1_59; float x_11_1_60; float x_11_1_61; } x11; }*)arg1;
- (int)_updateStatsBuffer;
- (id)cameraInfoByPortType;
- (void)dealloc;
- (id)externalMemoryDescriptorForConfiguration:(id)arg1;
- (id)externalMemoryResource;
- (int)finishProcessing;
- (float)foregroundRatio;
- (id)initWithOptionalMetalCommandQueue:(id)arg1;
- (id)inputImageStatistics;
- (struct __CVBuffer { }*)inputMaskPixelBuffer;
- (id)inputMetadata;
- (struct __CVBuffer { }*)inputPixelBuffer;
- (id)inputStyles;
- (unsigned long long)maxInputStylesCount;
- (id)metalCommandQueue;
- (struct __CVBuffer { }*)outputPixelBuffer;
- (float)personMasksValidHint;
- (int)prepareToProcess:(unsigned int)arg1;
- (int)prewarm;
- (int)process;
- (int)purgeResources;
- (int)resetState;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setExternalMemoryResource:(id)arg1;
- (void)setForegroundRatio:(float)arg1;
- (void)setInputImageStatistics:(id)arg1;
- (void)setInputMaskPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputMetadata:(id)arg1;
- (void)setInputPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputStyles:(id)arg1;
- (void)setMaxInputStylesCount:(unsigned long long)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setOutputPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setPersonMasksValidHint:(float)arg1;
- (void)setTuningParameterVariant:(id)arg1;
- (void)setTuningParameters:(id)arg1;
- (int)setup;
- (bool)supportsExternalMemoryResource;
- (id)tuningParameterVariant;
- (id)tuningParameters;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTRaytracingV2002 : NSObject <RenderingIntegration> {
    float  _anamorphicFactor;
    struct PTUnitDisk { 
        <MTLBuffer> *xy; 
        int rayCount; 
        /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*radiusLocal; 
    }  _aperturePoints;
    void _colorSize;
    PTRenderDebugLayer * _debugLayer;
    long long  _debugRendering;
    <MTLTexture> * _disparityDiff;
    <MTLBuffer> * _disparityDiffGlobalMinMax;
    <MTLTexture> * _disparityEdges;
    <MTLTexture> * _disparityEdgesTemp;
    struct CGSize { 
        double width; 
        double height; 
    }  _disparitySize;
    struct CGSize { 
        double width; 
        double height; 
    }  _disparitySizeUpscaled;
    <MTLTexture> * _disparityUpscaled;
    bool  _doVisualization;
    float  _edgeTolerance;
    struct PTFocusEdge { 
        float width; 
        float gradientThreshold; 
        float gradientWeight; 
        float minMaxThreshold; 
    }  _focusEdge;
    <MTLTexture> * _focusEdgeMask;
    float  _foregroundBlurLimitingFactor;
    PTGlobalReduction * _globalReduction;
    <MTLTexture> * _guideRGBACoefficients;
    <MTLTexture> * _guideRGBAUpscale;
    PTGuidedFilter * _guidedFilter;
    bool  _injectedRGBAPyramid;
    float  _kPyramidSamplingFraction;
    int  _kRayCount;
    PTMetalContext * _metalContext;
    NSDictionary * _options;
    PTQualitySettings * _qualitySettings;
    <MTLBuffer> * _randomUChars;
    <MTLTexture> * _raytracedRGBWeight;
    <MTLTexture> * _raytracedRGBWeightUpscaled;
    PTRaytracingInterpolateResultV2 * _raytracingInterpolateResult;
    <MTLComputePipelineState> * _raytracingSDOF;
    PTRaytracingUtilsV2 * _raytracingUtils;
    PTPyramid * _rgbaPyramid;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 renderEffects:(id)arg2 colorSize:(struct CGSize { double x1; double x2; })arg3 disparitySize:(struct CGSize { double x1; double x2; })arg4 debugRendering:(long long)arg5 verbose:(bool)arg6 options:(id)arg7 quality:(int)arg8;
- (unsigned long long)minimumResourceHeapSize;
- (int)prewarm;
- (int)renderContinuousWithSource:(id)arg1 renderRequest:(id)arg2;
- (void)setResourceHeap:(id)arg1;

@end

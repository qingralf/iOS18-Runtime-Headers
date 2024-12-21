/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTColorConversion : NSObject {
    <MTLComputePipelineState> * _convertRGB;
    <MTLComputePipelineState> * _convertRGBToYUV;
    <MTLComputePipelineState> * _convertYUVToRGB;
    PTMetalContext * _metalContext;
}

+ (void)getChromaOffsetFromLuma:(id)arg1 texChroma:(id)arg2;
+ (struct bool2 { bool x1; bool x2; })getChromaSubsampledFromLuma:(id)arg1 texChroma:(id)arg2;
+ (struct half3x4 { struct half4 { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*x_1_1_1[4]; } x1[3]; })getColorMatrix:(id)arg1 toRGB:(bool)arg2;
+ (struct half3x4 { struct half4 { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*x_1_1_1[4]; } x1[3]; })getColorMatrix:(id)arg1 toRGB:(bool)arg2 fullRange:(bool)arg3 colorYCbCrDepth:(long long)arg4;
+ (int)getTransferFunction:(id)arg1 toLinear:(bool)arg2;

- (void).cxx_destruct;
- (int)convertRGB:(id)arg1 inRGBA:(id)arg2 outRGBA:(id)arg3 toLinear:(bool)arg4 transferFunction:(id)arg5;
- (int)convertRGB:(void *)arg1 inRGBA:(void *)arg2 outRGBA:(void *)arg3 toLinear:(void *)arg4 transferFunction:(void *)arg5 outRect:(void *)arg6; // needs 6 arg types, found 5: id, id, id, bool, id
- (int)convertRGBLinearFromPTTexture:(id)arg1 inPTTexture:(id)arg2 outRGBA:(id)arg3;
- (int)convertRGBLinearToPTTexture:(id)arg1 inRGBA:(id)arg2 outPTTexture:(id)arg3;
- (int)convertRGBLinearToPTTexture:(void *)arg1 inRGBA:(void *)arg2 outPTTexture:(void *)arg3 outRect:(void *)arg4; // needs 4 arg types, found 3: id, id, id
- (int)convertRGBtoYUV:(id)arg1 inRGBA:(id)arg2 outLuma:(id)arg3 outChroma:(id)arg4 toLinear:(bool)arg5 transferFunction:(id)arg6 colorYCbCrMatrix:(id)arg7 colorYCbCrFullRange:(bool)arg8 colorYCbCrDepthOut:(long long)arg9;
- (int)convertRGBtoYUV:(void *)arg1 inRGBA:(void *)arg2 outLuma:(void *)arg3 outChroma:(void *)arg4 toLinear:(void *)arg5 transferFunction:(void *)arg6 colorYCbCrMatrix:(void *)arg7 colorYCbCrFullRange:(void *)arg8 colorYCbCrDepthOut:(void *)arg9 outRect:(void *)arg10; // needs 10 arg types, found 9: id, id, id, id, bool, id, id, bool, long long
- (int)convertYUVtoRGB:(id)arg1 inLuma:(id)arg2 inChroma:(id)arg3 outRGBA:(id)arg4 toLinear:(bool)arg5 transferFunction:(id)arg6 colorYCbCrMatrix:(id)arg7 colorYCbCrFullRange:(bool)arg8 colorYCbCrDepthIn:(long long)arg9;
- (id)initWithMetalContext:(id)arg1;

@end
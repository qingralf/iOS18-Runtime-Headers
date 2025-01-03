/* Generated by RuntimeBrowser.
 */

@protocol CMISmartStyleMetalRenderer <MetalImageBufferProcessor>

@required

- (float)baselineExposure;
- (NSNumber *)brightnessValue;
- (float)castIntensity;
- (NSString *)castType;
- (float)colorBias;
- (NSDictionary *)defaultUserBiasByCastType;
- (float)faceBasedGlobalExposureBoostRatio;
- (id)init;
- (id)initWithMetalContext:(FigMetalContext *)arg1;
- (id)initWithOptionalMetalCommandQueue:(id <MTLCommandQueue>)arg1;
- (<MTLTexture> *)inputGainMapTexture;
- (<MTLTexture> *)inputGlobalToneCurveTexture;
- (<MTLTexture> *)inputImageTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputImageTextureMappedRegion;
- (<MTLTexture> *)inputImageThumbnailTexture;
- (<MTLTexture> *)inputLightMapTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputLightMapTextureMappedRegion;
- (float)inputLinearBaseGain;
- (float)inputLinearEncodingGain;
- (<MTLTexture> *)inputLinearImageChromaTexture;
- (float)inputLinearImageGainDownRatio;
- (<MTLTexture> *)inputLinearImageLumaTexture;
- (<MTLTexture> *)inputLinearImageRGBTexture;
- (<MTLTexture> *)inputLinearImageTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputLinearImageTextureMappedRegion;
- (<MTLTexture> *)inputLinearLightMapTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputLinearLightMapTextureMappedRegion;
- (<MTLTexture> *)inputPersonMaskTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputPersonMaskTextureMappedRegion;
- (<MTLBuffer> *)inputSRLCoefficientsBuf;
- (float)inputSRLCurveParameter;
- (<MTLTexture> *)inputSkinMaskTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputSkinMaskTextureMappedRegion;
- (<MTLTexture> *)inputSkyMaskTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputSkyMaskTextureMappedRegion;
- (<MTLTexture> *)inputSmallLightMapTexture;
- (<MTLTexture> *)inputSmallLinearLightMapTexture;
- (NSDictionary *)inputStatisticsByStatsKey;
- (NSDictionary *)inputStatisticsByStatsType;
- (<CMISmartStyle> *)inputStyle;
- (NSString *)instanceLabel;
- (struct CGSize { double x1; double x2; })logicalImageSize;
- (struct CGSize { double x1; double x2; })logicalImageToBgLTMGainMapScale;
- (struct CGSize { double x1; double x2; })logicalImageToFgLTMGainMapScale;
- (struct CGSize { double x1; double x2; })logicalImageToInputImageScale;
- (struct CGSize { double x1; double x2; })logicalImageToInputLightMapScale;
- (struct CGSize { double x1; double x2; })logicalImageToInputLinearImageScale;
- (struct CGSize { double x1; double x2; })logicalImageToInputLinearLightMapScale;
- (struct CGSize { double x1; double x2; })logicalImageToInputPersonMaskScale;
- (struct CGSize { double x1; double x2; })logicalImageToInputSkinMaskScale;
- (struct CGSize { double x1; double x2; })logicalImageToInputSkyMaskScale;
- (NSMutableDictionary *)outputCodedLinearMetadata;
- (<MTLTexture> *)outputCodedLinearTexture;
- (<MTLTexture> *)outputGainMapTexture;
- (NSMutableDictionary *)outputImageStatistics;
- (NSMutableDictionary *)outputImageStatisticsExtended;
- (<MTLTexture> *)outputImageTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputImageTextureMappedRegion;
- (<MTLTexture> *)outputSmallLightMapTexture;
- (<MTLTexture> *)outputSmallLinearLightMapTexture;
- (float)personMasksValidHint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderRegionRect;
- (NSString *)sceneType;
- (int)semanticStyleSceneType;
- (void)setBaselineExposure:(float)arg1;
- (void)setBrightnessValue:(NSNumber *)arg1;
- (void)setCastIntensity:(float)arg1;
- (void)setCastType:(NSString *)arg1;
- (void)setColorBias:(float)arg1;
- (void)setFaceBasedGlobalExposureBoostRatio:(float)arg1;
- (void)setInputGainMapTexture:(id <MTLTexture>)arg1;
- (void)setInputGlobalToneCurveTexture:(id <MTLTexture>)arg1;
- (void)setInputImageTexture:(id <MTLTexture>)arg1;
- (void)setInputImageTextureMappedRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputImageThumbnailTexture:(id <MTLTexture>)arg1;
- (void)setInputLightMapTexture:(id <MTLTexture>)arg1;
- (void)setInputLightMapTextureMappedRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputLinearBaseGain:(float)arg1;
- (void)setInputLinearEncodingGain:(float)arg1;
- (void)setInputLinearImageChromaTexture:(id <MTLTexture>)arg1;
- (void)setInputLinearImageGainDownRatio:(float)arg1;
- (void)setInputLinearImageLumaTexture:(id <MTLTexture>)arg1;
- (void)setInputLinearImageRGBTexture:(id <MTLTexture>)arg1;
- (void)setInputLinearImageTexture:(id <MTLTexture>)arg1;
- (void)setInputLinearImageTextureMappedRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputLinearLightMapTexture:(id <MTLTexture>)arg1;
- (void)setInputLinearLightMapTextureMappedRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputPersonMaskTexture:(id <MTLTexture>)arg1;
- (void)setInputPersonMaskTextureMappedRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputSRLCoefficientsBuf:(id <MTLBuffer>)arg1;
- (void)setInputSRLCurveParameter:(float)arg1;
- (void)setInputSkinMaskTexture:(id <MTLTexture>)arg1;
- (void)setInputSkinMaskTextureMappedRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputSkyMaskTexture:(id <MTLTexture>)arg1;
- (void)setInputSkyMaskTextureMappedRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputSmallLightMapTexture:(id <MTLTexture>)arg1;
- (void)setInputSmallLinearLightMapTexture:(id <MTLTexture>)arg1;
- (void)setInputStatisticsByStatsKey:(NSDictionary *)arg1;
- (void)setInputStatisticsByStatsType:(NSDictionary *)arg1;
- (void)setInputStyle:(id <CMISmartStyle>)arg1;
- (void)setInstanceLabel:(NSString *)arg1;
- (void)setLogicalImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogicalImageToBgLTMGainMapScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogicalImageToFgLTMGainMapScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogicalImageToInputImageScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogicalImageToInputLightMapScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogicalImageToInputLinearImageScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogicalImageToInputLinearLightMapScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogicalImageToInputPersonMaskScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogicalImageToInputSkinMaskScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogicalImageToInputSkyMaskScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setOutputCodedLinearMetadata:(NSMutableDictionary *)arg1;
- (void)setOutputCodedLinearTexture:(id <MTLTexture>)arg1;
- (void)setOutputGainMapTexture:(id <MTLTexture>)arg1;
- (void)setOutputImageStatistics:(NSMutableDictionary *)arg1;
- (void)setOutputImageStatisticsExtended:(NSMutableDictionary *)arg1;
- (void)setOutputImageTexture:(id <MTLTexture>)arg1;
- (void)setOutputImageTextureMappedRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOutputSmallLightMapTexture:(id <MTLTexture>)arg1;
- (void)setOutputSmallLinearLightMapTexture:(id <MTLTexture>)arg1;
- (void)setPersonMasksValidHint:(float)arg1;
- (void)setRenderRegionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSceneType:(NSString *)arg1;
- (void)setSemanticStyleSceneType:(int)arg1;
- (void)setToneBias:(float)arg1;
- (void)setTuningParameterVariant:(NSString *)arg1;
- (void)setUseLiveMetalAllocations:(bool)arg1;
- (float)toneBias;
- (NSString *)tuningParameterVariant;
- (bool)useLiveMetalAllocations;

@end

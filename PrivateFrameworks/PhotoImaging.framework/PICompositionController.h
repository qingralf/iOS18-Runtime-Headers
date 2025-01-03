/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PICompositionController : NSObject <NSCopying> {
    PIBrushStrokeHistory * _brushStrokeHistory;
    <PICompositionControllerDelegate> * _changeDelegate;
    NUComposition * _composition;
    struct { 
        bool hasDidAdd; 
        bool hasDidRemove; 
        bool hasDidUpdate; 
        bool hasDidUpdateMultiple; 
        bool hasClassForController; 
    }  _delegateFlags;
    NSDictionary * _identifierMap;
    long long  _imageOrientation;
    _PICompositionControllerTransaction * _transaction;
}

@property (nonatomic, readonly) PIAdjustmentConstants *adjustmentConstants;
@property (nonatomic, retain) PIBrushStrokeHistory *brushStrokeHistory;
@property (nonatomic) <PICompositionControllerDelegate> *changeDelegate;
@property (nonatomic, readonly, copy) NUComposition *composition;
@property (nonatomic) long long imageOrientation;
@property (nonatomic) long long mediaType;

+ (id)_keyToIdentifierMap;
+ (Class)adjustmentControllerClassForKey:(id)arg1;
+ (id)photosSchema;
+ (id)schemaForKey:(id)arg1;
+ (id)settingForAdjustmentKey:(id)arg1 settingKey:(id)arg2;

- (void).cxx_destruct;
- (Class)_adjustmentControllerClassForKey:(id)arg1;
- (id)_adjustmentControllerForKey:(id)arg1 creatingIfNecessary:(bool)arg2 expectedClass:(Class)arg3;
- (void)_didAddAdjustment:(id)arg1;
- (void)_didRemoveAdjustment:(id)arg1;
- (void)_didUpdateAdjustment:(id)arg1;
- (void)_didUpdateAdjustments:(id)arg1;
- (id)_internalComposition;
- (void)addAdjustmentWithKey:(id)arg1;
- (id)adjustmentConstants;
- (id)adjustmentControllerForKey:(id)arg1;
- (id)adjustmentKeys;
- (void)applyChangesFromCompositionController:(id)arg1;
- (id)autoLoopAdjustmentController;
- (id)autoLoopAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)availableKeys;
- (id)brushStrokeHistory;
- (id)changeDelegate;
- (id)cinematicAudioAdjustmentController;
- (id)cinematicAudioAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)composition;
- (id)compositionKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropAdjustmentController;
- (id)cropAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)debugDescription;
- (id)definitionAdjustmentController;
- (id)definitionAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)depthAdjustmentController;
- (id)depthAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)differingAdjustmentsWithComposition:(id)arg1;
- (bool)dumpComposition;
- (id)effect3DAdjustmentController;
- (id)effect3DAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)effectAdjustmentController;
- (id)effectAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)highResFusionAdjustmentController;
- (id)highResFusionAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (long long)imageOrientation;
- (id)initWithComposition:(id)arg1;
- (id)inpaintAdjustmentController;
- (id)inpaintAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (bool)isEqual:(id)arg1 forKeys:(id)arg2 comparisonBlock:(id /* block */)arg3;
- (bool)isEqual:(id)arg1 forKeys:(id)arg2 visualChangesOnly:(bool)arg3;
- (bool)isEqual:(id)arg1 visualChangesOnly:(bool)arg2;
- (id)livePhotoKeyFrameAdjustmentController;
- (id)livePhotoKeyFrameAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (long long)mediaType;
- (void)modifyAdjustmentWithKey:(id)arg1 modificationBlock:(id /* block */)arg2;
- (id)noiseReductionAdjustmentController;
- (id)noiseReductionAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)orientationAdjustmentController;
- (id)orientationAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (void)performChanges:(id /* block */)arg1;
- (id)portraitAdjustmentController;
- (id)portraitAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)portraitVideoAdjustmentController;
- (id)portraitVideoAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)rawAdjustmentController;
- (id)rawAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)rawNoiseReductionAdjustmentController;
- (id)rawNoiseReductionAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)redEyeAdjustmentController;
- (id)redEyeAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (void)removeAdjustmentWithKey:(id)arg1;
- (void)replaceAdjustment:(id)arg1 withKey:(id)arg2;
- (id)retouchAdjustmentController;
- (id)retouchAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)semanticEnhanceAdjustmentController;
- (id)semanticEnhanceAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)semanticStyleAdjustmentController;
- (id)semanticStyleAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (void)setBrushStrokeHistory:(id)arg1;
- (void)setChangeDelegate:(id)arg1;
- (void)setImageOrientation:(long long)arg1;
- (void)setInpaintMasks:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setSource:(id)arg1 mediaType:(long long)arg2;
- (id)sharpenAdjustmentController;
- (id)sharpenAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)slomoAdjustmentController;
- (id)slomoAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)smartBWAdjustmentController;
- (id)smartBWAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)smartColorAdjustmentController;
- (id)smartColorAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)smartToneAdjustmentController;
- (id)smartToneAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)source;
- (id)trimAdjustmentController;
- (id)trimAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (long long)userOrientation;
- (id)videoCrossfadeLoopAdjustmentController;
- (id)videoCrossfadeLoopAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)videoPosterFrameAdjustmentController;
- (id)videoPosterFrameAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)videoStabilizeAdjustmentController;
- (id)videoStabilizeAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)vignetteAdjustmentController;
- (id)vignetteAdjustmentControllerCreatingIfNecessary:(bool)arg1;
- (id)whiteBalanceAdjustmentController;
- (id)whiteBalanceAdjustmentControllerCreatingIfNecessary:(bool)arg1;

@end

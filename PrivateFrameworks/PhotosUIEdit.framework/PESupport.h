/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit
 */

@interface PESupport : NSObject

+ (void)assetAudioMixMode:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (bool)assetCanRenderStyles:(id)arg1;
+ (void)assetHasDepthEnabled:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (bool)assetHasUnsupportedOriginalAdjustments:(id)arg1;
+ (void)assetPlaybackRate:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (bool)canPerformEditOnAsset:(id)arg1;
+ (id)originalAdjustmentVersionForAsset:(id)arg1;
+ (id)pe_bundle;
+ (bool)photoLibraryIsEligibleForStylesSetupTip:(id)arg1;
+ (bool)photoWasTakenWithoutFlashWithImageProperties:(id)arg1;
+ (id)repairedAsShotCompositionController:(id)arg1 forCurrentCompositionController:(id)arg2 isLivePhoto:(bool)arg3 metadata:(id)arg4;
+ (void)revertEditsForAsset:(id)arg1 mediaDestination:(id)arg2 currentCompositionController:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)sharedPhotoLibraryIsEligibleForStylesSetupTip;
+ (void)syncMainThread:(id /* block */)arg1;

@end
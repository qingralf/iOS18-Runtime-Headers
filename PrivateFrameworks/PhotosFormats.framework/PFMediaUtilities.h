/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFMediaUtilities : NSObject

+ (id)_cIImageFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (id)_cIImageFromPixelBuffer:(struct __CVBuffer { }*)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct __CVBuffer { }*)_createPixelBufferFromAuxiliaryImageInfo:(id)arg1;
+ (id)_debugDescriptionForAssetURL:(id)arg1;
+ (id)_debugDescriptionForAssetVariants:(id)arg1;
+ (void)appendMetadataItemsFromAsset:(id)arg1 toDebugDescription:(id)arg2;
+ (id)associatedTracksOfTypeForTrack:(id)arg1 trackAssociationType:(id)arg2;
+ (bool)audioChannelLayoutIsCinematicVideoRender:(const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)arg1;
+ (id)auxiliaryImageIdentifiersToPreserveForDerivatives;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromImageSource:(struct CGImageSource { }*)arg1 imageIndex:(unsigned long long)arg2;
+ (id)auxiliaryImageRecordsToPreserveForDerivativesFromPrimaryImageInImageSource:(struct CGImageSource { }*)arg1;
+ (id)auxiliaryImagesToPreserveForDerivativesFromImageSource:(struct CGImageSource { }*)arg1 imageIndex:(unsigned long long)arg2;
+ (id)cIImageFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (id)cIImageFromPixelBuffer:(struct __CVBuffer { }*)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (bool)canGenerateImageDerivativesFromType:(id)arg1;
+ (bool)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)arg1;
+ (id)channelLayoutNameForAudioTrackFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
+ (struct CGImage { }*)copyCGImageFromImageGenerator:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 error:(id*)arg4;
+ (struct CGImage { }*)createImageRefFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct CGImage { }*)createImageRefFromAuxiliaryImagePixelBuffer:(struct __CVBuffer { }*)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct __CVBuffer { }*)createPixelBufferFromAuxiliaryImageInfo:(id)arg1;
+ (id)debugDescriptionForAssetOrPlayerItemTracks:(id)arg1 asset:(id)arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
+ (id)debugDescriptionForPlayerItem:(id)arg1;
+ (long long)defaultRasterizationDPI;
+ (long long)devicePerformanceMemoryClass;
+ (id)dictionaryRepresentationForAuxiliaryImagePixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(struct CGImageMetadata { }*)arg2 colorSpace:(struct CGColorSpace { }*)arg3 compatibilityMetadata:(struct CGImageMetadata { }*)arg4;
+ (bool)embeddedJPEGSuitableForDerivativesInImageOfType:(id)arg1 url:(id)arg2 imageProperties:(id)arg3;
+ (bool)embeddedJPEGSuitableForDerivativesInRawImageSource:(struct CGImageSource { }*)arg1 enforcePixelCountLimits:(bool)arg2 timeZoneLookup:(id)arg3;
+ (bool)enumerateImageSourceIndexesOfFileAtURL:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (void)enumerateVideoTrackFormatDescriptionsInAsset:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)errorForExportSession:(id)arg1;
+ (void)exportAsynchronously:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)formatDebugDescriptionForAudioTrack:(id)arg1;
+ (id)formatDebugDescriptionForMetadataTrack:(id)arg1;
+ (id)formatDebugDescriptionForVideoTrack:(id)arg1;
+ (id)formattedCameraModelFromCameraModel:(id)arg1 cameraMake:(id)arg2;
+ (unsigned int)fourCharCodeFromString:(id)arg1;
+ (double)gainMapHeadroomForHDRGain:(double)arg1 gainMapValue:(double)arg2;
+ (id)hasEmbeddedJPEGSuitableForDerivativesInImageAtURL:(id)arg1 metadata:(id)arg2 error:(id*)arg3;
+ (id)hevcProfileInformationForVideoTrackFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { }*)arg1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { }*)arg1 atIndex:(unsigned long long)arg2;
+ (bool)insertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 ofAsset:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 intoMutableComposition:(id)arg4 error:(id*)arg5;
+ (bool)isValidAVFileForURL:(id)arg1;
+ (bool)isValidImageFileForURL:(id)arg1;
+ (id)mainVideoTrackForAsset:(id)arg1;
+ (struct CGSize { double x1; double x2; })maximumImageSizeFromProperties:(id)arg1;
+ (id)metadataForFormat:(id)arg1 forAsset:(id)arg2;
+ (id)metadataForFormat:(id)arg1 forAssetTrack:(id)arg2;
+ (id)outOfBandHintsForURL:(id)arg1;
+ (id)outOfBandHintsForVideoAsset:(id)arg1;
+ (void)preserveTrackAssociations:(id)arg1 ofAsset:(id)arg2 forMutableComposition:(id)arg3 assetToCompositionTrackID:(id)arg4;
+ (id)protectedTemporaryItemsSubdirectoryName;
+ (long long)rawSourceMaximumPixelCountForBackgroundProcessing;
+ (long long)rawSourceMaximumPixelCountForInteractiveEditing;
+ (id)segmentIdentifierDescriptionForMetadataTrack:(id)arg1;
+ (long long)statusForExportSession:(id)arg1;
+ (id)stringFromFourCharCode:(unsigned int)arg1;
+ (id)trackWithTrackID:(int)arg1 forAsset:(id)arg2;
+ (id)tracksWithMediaCharacteristic:(id)arg1 forAsset:(id)arg2;
+ (id)tracksWithMediaType:(id)arg1 forAsset:(id)arg2;
+ (id)transformAuxiliaryImages:(id)arg1 scaleFactor:(double)arg2 applyingOrientation:(unsigned int)arg3;
+ (bool)typeRequiresRasterizationDPI:(id)arg1;
+ (id)urlByAttachingOutOfBandHintsBase64String:(id)arg1 toVideoURL:(id)arg2;
+ (void)videoComposition:(id)arg1 applier:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
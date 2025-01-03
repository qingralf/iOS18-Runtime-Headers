/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoUtilities : NSObject

+ (id)_preferedPixelFormatsForUsage:(long long)arg1;
+ (id)assetContainsDuplicatePTSSamples:(id)arg1 assetTrack:(id)arg2 error:(out id*)arg3;
+ (bool)assetIsCinematicAudio:(id)arg1;
+ (id)assetReaderAudioSettingsForTrackType:(bool)arg1;
+ (id)assetWriterAudioSettingsForAudioTrackFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
+ (id)assetWriterAudioSettingsForTrackWithSampleRate:(double)arg1 isAmbisonic:(bool)arg2;
+ (bool)audioTrackIsCinematicAudio:(id)arg1;
+ (id)auxiliaryTrackInAsset:(id)arg1 ofType:(long long)arg2 error:(out id*)arg3;
+ (id)bestOutputSettingsPresetForTargetVideoSize:(struct { long long x1; long long x2; })arg1 codec:(unsigned int)arg2;
+ (id)cinematicAudioTrackInAsset:(id)arg1;
+ (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })cleanApertureOfTrack:(id)arg1 oriented:(bool)arg2;
+ (id)cleanApertureVideoSettingsFor:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 scale:(struct { long long x1; long long x2; })arg2 videoSize:(struct { long long x1; long long x2; })arg3;
+ (id)compositionFromVideoComposition:(id)arg1;
+ (bool)compositionInstructions:(id)arg1 areEqualToCompositionInstructions:(id)arg2;
+ (id)computeMalformedTimeRangeTrackInAsset:(id)arg1 assetTrack:(id)arg2 error:(out id*)arg3;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })conformRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })convertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 toMaximumTimeScaleOfRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
+ (id)debugDescriptionOfAssetTrack:(id)arg1;
+ (id)deepMutableCopyVideoComposition:(id)arg1;
+ (id)defaultExportCodecForHDRVideo:(bool)arg1;
+ (id)defaultOutputColorSpaceForComposition:(id)arg1;
+ (id)defaultVideoSettingsForAVAssetReader;
+ (bool)deviceSupportsHardware10BitHEVCEncoding;
+ (bool)deviceSupportsHardwareHEVCEncoding;
+ (bool)deviceSupportsHighDynamicRangeVideo;
+ (struct { long long x1; long long x2; })encodedPixelSizeOfTrack:(id)arg1 oriented:(bool)arg2;
+ (id)firstEnabledVideoTrackInAsset:(id)arg1 error:(out id*)arg2;
+ (id)getCinematicAudioParametersFromAudioMix:(id)arg1;
+ (id)indexesOfSemanticStyleVideoSampleSlices:(id)arg1;
+ (bool)isAVAssetDolbyProfile5:(id)arg1 error:(out id*)arg2;
+ (bool)isAVAssetHDR:(id)arg1 error:(out id*)arg2;
+ (bool)isAssetStyled:(id)arg1;
+ (bool)isAssetUnsupportedCorruptPortraitVideo:(id)arg1;
+ (bool)isAssetUnsupportedLegacyPortraitVideo:(id)arg1;
+ (bool)isMetadataTrackStillImageDisplayTimeMarkerInLivePhoto:(id)arg1;
+ (bool)isMetadataTrackWithLivePhotoInfo:(id)arg1;
+ (bool)isMetadataTrackWithStillImageDimensionsInLivePhoto:(id)arg1;
+ (bool)isMetadataTrackWithStillImageTransformInLivePhoto:(id)arg1;
+ (bool)metadataTrack:(id)arg1 containsIdentifier:(id)arg2;
+ (bool)metadataTrack:(id)arg1 containsIdentifiers:(id)arg2;
+ (bool)metadataTrackContainsCinematicAudioData:(id)arg1;
+ (bool)metadataTrackContainsLegacyCinematicAudioData:(id)arg1;
+ (bool)metadataTrackContainsPortraitVideoData:(id)arg1;
+ (bool)metadataTrackContainsSemanticStyleData:(id)arg1;
+ (id)metadataTrackWithCinematicAudioDataInAsset:(id)arg1;
+ (id)metadataTrackWithIdenfifier:(id)arg1 forAsset:(id)arg2;
+ (id)metadataTrackWithPortraitVideoDataInAsset:(id)arg1;
+ (id)metadataTrackWithStillImageDimensionsInLivePhotoAsset:(id)arg1;
+ (id)metadataTrackWithStillImageDisplayTimeMarkerInLivePhotoAsset:(id)arg1;
+ (id)metadataTrackWithStillImageTransformInLivePhotoAsset:(id)arg1;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumFrameDurationForAsset:(id)arg1;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumFrameDurationForAsset:(id)arg1 videoComposition:(id)arg2;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumFrameDurationForAssetTrack:(id)arg1;
+ (struct { long long x1; long long x2; })naturalSizeOfTrack:(id)arg1 oriented:(bool)arg2;
+ (id)newPixelBufferOfSize:(struct { long long x1; long long x2; })arg1 format:(unsigned int)arg2;
+ (float)nominalFrameRateForAsset:(id)arg1 error:(out id*)arg2;
+ (unsigned long long)nominalFrameRateRoundedToNearestTraditionalFrameRate:(float)arg1;
+ (id)originalCodecOfVideoTrack:(id)arg1;
+ (id)pixelFormatStringForCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)preferedDestinationPixelFormats;
+ (id)preferedDestinationPixelFormatsForHDR;
+ (id)preferredSourcePixelFormats;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransformFromOrientation:(long long)arg1 size:(struct { long long x1; long long x2; })arg2;
+ (bool)readFromReader:(id)arg1 andWriteToWriter:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 createCustomMetadata:(bool)arg4 geometryTransform:(id)arg5 inputSize:(struct CGSize { double x1; double x2; })arg6 outputSize:(struct CGSize { double x1; double x2; })arg7 progress:(id)arg8 error:(out id*)arg9;
+ (void)readNextPixelBuffer:(id)arg1 output:(id)arg2 block:(id /* block */)arg3;
+ (void)readNextSampleBuffer:(id)arg1 output:(id)arg2 block:(id /* block */)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })readStillImageTimeFromVideoAsset:(id)arg1;
+ (id)readTimedMetadataGroupAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromTrack:(id)arg2 outputSettings:(id)arg3 videoComposition:(id)arg4 error:(out id*)arg5;
+ (struct __CVBuffer { }*)readVideoFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromAsset:(id)arg2 outputSettings:(id)arg3 videoComposition:(id)arg4 auxiliaryImageType:(long long)arg5 error:(out id*)arg6;
+ (struct __CVBuffer { }*)readVideoFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromAsset:(id)arg2 reader:(id)arg3 readerOutput:(id)arg4 error:(out id*)arg5;
+ (id)readerOutputForAsset:(id)arg1 outputSettings:(id)arg2 videoComposition:(id)arg3 auxiliaryImageType:(long long)arg4 error:(out id*)arg5;
+ (id)readerOutputForAssetTrack:(id)arg1 outputSettings:(id)arg2 error:(out id*)arg3;
+ (id)repeatAudio:(id)arg1 count:(long long)arg2 error:(out id*)arg3;
+ (id)repeatVideo:(id)arg1 count:(long long)arg2 error:(out id*)arg3;
+ (id)repeatVideoComposition:(id)arg1 count:(long long)arg2 error:(out id*)arg3;
+ (id)requiredVideoCompositionOutputTracksForAsset:(id)arg1;
+ (id)rgbVideoSettingsForAVAssetReader;
+ (id)semanticStylePropertiesFromMetadataGroup:(id)arg1 keyTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(out id*)arg3;
+ (bool)track:(id)arg1 hasSamplesForEachSampleInTrack:(id)arg2;
+ (bool)trimCompositionTracks:(id)arg1 toRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 error:(out id*)arg3;
+ (bool)updateVideoMetadataAtURL:(id)arg1 withItems:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;
+ (id)urlOfAVAsset:(id)arg1;
+ (id)validateSemanticStyleAsset:(id)arg1 error:(out id*)arg2;
+ (id)videoCompositionDescription:(id)arg1;
+ (id)videoDescription:(id)arg1;
+ (long long)videoOrientationForAsset:(id)arg1 videoComposition:(id)arg2;
+ (long long)videoOrientationForAssetPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (bool)videoTrackContainsDolbyVisionMetadata:(id)arg1;

@end

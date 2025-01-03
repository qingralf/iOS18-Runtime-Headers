/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    AVDispatchOnce * _copySampleCursorServiceOnce;
    struct OpaqueFigSampleCursorService { } * _figSampleCursorService;
    struct OpaqueFigFormatReader { } * _formatReader;
    unsigned int  _mediaType;
    bool  _prefersNominalDurations;
    bool  _sampleCursorTimeAccuracyIsExact;
    int  _trackID;
    struct OpaqueFigTrackReader { } * _trackReader;
    AVWeakReference * _weakReferenceToAsset;
}

- (struct OpaqueFigFormatReader { }*)_figFormatReader;
- (unsigned int)_figMediaType;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (struct OpaqueFigSampleCursorService { }*)_getFigSampleCursorServiceReportingTimeAccuracy:(bool*)arg1;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)_segmentsPreferringNominalDurations:(bool)arg1;
- (id)_trackReferences;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (long long)alternateGroupID;
- (id)asset;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (int)decodabilityValidationResult;
- (long long)defaultAlternateGroupID;
- (struct CGSize { double x1; double x2; })dimensions;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (id)formatDescriptions;
- (bool)hasAudioSampleDependencies;
- (bool)hasSeamSamples;
- (unsigned long long)hash;
- (bool)isDecodable;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isExcludedFromAutoselectionInTrackGroup;
- (bool)isPlayable;
- (bool)isSelfContained;
- (id)languageCode;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (long long)layer;
- (id)loudnessInfo;
- (id)mediaCharacteristics;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (float)nominalFrameRate;
- (float)peakDataRate;
- (int)playabilityValidationResult;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (long long)provisionalAlternateGroupID;
- (bool)requiresFrameReordering;
- (id)segments;
- (id)segmentsAsPresented;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })uneditedDuration;

@end

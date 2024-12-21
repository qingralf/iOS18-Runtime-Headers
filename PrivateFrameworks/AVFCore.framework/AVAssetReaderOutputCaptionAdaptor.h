/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetReaderOutputCaptionAdaptor : NSObject <AVAssetReaderOutputAdaptor> {
    AVAssetReaderOutputCaptionAdaptorInternal * _internal;
}

@property (nonatomic, readonly) AVAssetReaderTrackOutput *assetReaderTrackOutput;
@property <AVAssetReaderCaptionValidationHandling> *validationDelegate;

+ (id)assetReaderOutputCaptionAdaptorWithAssetReaderTrackOutput:(id)arg1;

- (id)_readSampleBuffersAndReturnAVCaption;
- (int)addExtractionForOutput:(id)arg1 figAssetReader:(struct OpaqueFigAssetReader { }*)arg2 options:(id)arg3 withOutputExtactionID:(int*)arg4;
- (void)appendOutputCaptionGroup:(id)arg1;
- (id)assetReaderTrackOutput;
- (id)captionsNotPresentInPreviousGroupsInCaptionGroup:(id)arg1;
- (void)dealloc;
- (id)initWithAssetReaderTrackOutput:(id)arg1;
- (id)nextCaptionGroup;
- (id)pairedAVCaptionForFigCaption:(struct OpaqueFigCaption { }*)arg1;
- (void)setFigCaptionToAVCaptionMapping:(struct __CFDictionary { }*)arg1;
- (void)setValidationDelegate:(id)arg1;
- (id)validationDelegate;

@end
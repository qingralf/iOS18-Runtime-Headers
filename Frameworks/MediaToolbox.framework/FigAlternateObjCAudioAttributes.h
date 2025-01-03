/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigAlternateObjCAudioAttributes : FigKVCInspectable {
    struct OpaqueFigAlternate { } * _alternate;
    NSArray * _formatIDs;
    struct OpaqueFigSimpleMutex { } * _mutex;
}

@property (nonatomic, readonly) NSArray *formatIDs;

- (id)channelCountForMediaOption:(id)arg1;
- (void)dealloc;
- (id)formatIDs;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { }*)arg1;
- (id)isBinauralMediaOption:(id)arg1;
- (id)isDownmixMediaOption:(id)arg1;
- (id)isImmersiveMediaOption:(id)arg1;
- (id)sampleRateForMediaOption:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkColorAnalysisOperation : NSOperation {
    MSVArtworkColorAnalysis * _colorAnalysis;
    NSError * _error;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly) MSVArtworkColorAnalysis *colorAnalysis;
@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (struct CGImage { }*)_createImageFromSource:(struct CGImageSource { }*)arg1 size:(unsigned long long)arg2;
- (struct CGImageSource { }*)_createImageFromURL:(id)arg1;
- (void)cancel;
- (id)colorAnalysis;
- (id)error;
- (id)initWithURL:(id)arg1;
- (void)main;

@end
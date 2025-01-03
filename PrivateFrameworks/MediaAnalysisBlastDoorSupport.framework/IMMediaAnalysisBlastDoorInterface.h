/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysisBlastDoorSupport.framework/MediaAnalysisBlastDoorSupport
 */

@interface IMMediaAnalysisBlastDoorInterface : NSObject {
    IMMediaAnalysisBlastDoorInterfaceInternal * _interface;
}

@property (nonatomic, retain) IMMediaAnalysisBlastDoorInterfaceInternal *interface;

- (void).cxx_destruct;
- (id)generateImagePreviewForFileURL:(id)arg1 maxPixelDimension:(float)arg2 scale:(float)arg3 error:(id*)arg4;
- (void)generateMetadataforAttachmentWithfileURL:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)generateMovieFramesForAttachmentWithFileURL:(id)arg1 targetPixelWidth:(long long)arg2 targetPixelHeight:(long long)arg3 frameLimit:(long long)arg4 uniformSampling:(bool)arg5 framesPerSync:(long long)arg6 appliesPreferredTrackTransform:(bool)arg7 resultHandler:(id /* block */)arg8;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)arg1 maxPixelDimension:(float)arg2 minThumbnailPxSize:(struct CGSize { double x1; double x2; })arg3 scale:(float)arg4 resultHandler:(id /* block */)arg5;
- (id)init;
- (id)interface;
- (void)setInterface:(id)arg1;

@end

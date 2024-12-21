/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
 */

@interface QLProxyingGenerationHandler : NSObject <QLIncrementalThumbnailGenerationHandler> {
    QLTGeneratorThumbnailRequest * _generatorRequest;
}

- (void).cxx_destruct;
- (void)didGenerateThumbnailForRequestWithUUID:(id)arg1 images:(id)arg2 metadata:(id)arg3 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 iconFlavor:(int)arg5 thumbnailType:(long long)arg6 clientShouldTakeOwnership:(bool)arg7;
- (void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(id)arg2;
- (void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(id)arg2 error:(id)arg3;
- (id)initWithGeneratorRequest:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXEditBatchPlaybackRateAction : PXEditBatchAction {
    float  _playbackRate;
}

@property (nonatomic) float playbackRate;

- (id)_playbackRateTitle;
- (void)_syncSetPlaybackRateDidFinishWithResults:(id)arg1 didCancel:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastRedoTitle;
- (id)localizedProgressToastSuccessTitle;
- (id)localizedProgressToastUndoTitle;
- (void)performAction:(id /* block */)arg1;
- (float)playbackRate;
- (void)setPlaybackRate:(float)arg1;

@end
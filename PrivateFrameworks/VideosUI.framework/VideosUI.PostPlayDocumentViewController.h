/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.PostPlayDocumentViewController : VideosUI.DocumentRequestViewController <VUIPlaybackUpNextController> {
    void playbackUpNextDelegate;
    void postPlayContextData;
}

@property (nonatomic, readonly) bool prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) bool prefersStatusBarHidden;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (double)playbackUpNextViewHeight;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)setPlaybackUpNextContextData:(id)arg1;
- (void)setPlaybackUpNextDelegate:(id)arg1;
- (void)startAutoPlayAnimation;

@end

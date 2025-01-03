/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaCoreUI.framework/MediaCoreUI
 */

@interface _TtC11MediaCoreUIP33_8A49DC2FB69555F909B7715363263FF722VideoPlayerCoordinator : NSObject <AVPlayerViewControllerDelegate, MPCVideoOutputDelegate, UIGestureRecognizerDelegate> {
    void aspectRatioObserver;
    void deviceMetrics;
    void orientationChangeObserver;
    void pinchGestureRecognizer;
    void playerSizeObserver;
    void playerStyle;
    void selectedContent;
    void tapGestureRecognizer;
    void updateContentSelection;
    void videoSource;
}

- (void).cxx_destruct;
- (void)didPinch:(id)arg1;
- (void)didTap;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)videoOutput:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)videoOutput:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;

@end

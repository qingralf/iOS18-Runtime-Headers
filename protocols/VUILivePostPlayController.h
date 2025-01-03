/* Generated by RuntimeBrowser.
 */

@protocol VUILivePostPlayController <NSObject>

@required

- (void)cleanup;
- (void)playerControlsVisibilityChanged:(bool)arg1;
- (void)playerViewControllerWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (TVPPlayer *)prefetchedPlayer;
- (void)setPrefetchedPlayer:(TVPPlayer *)arg1;

@end

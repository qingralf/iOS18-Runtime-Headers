/* Generated by RuntimeBrowser.
 */

@protocol ASORemoteOverlayHost <NSObject>

@required

- (void)didFinishDismissingOverlay:(ASORemoteOverlay *)arg1;
- (ASOHostContext *)hostContextForOverlayViewService;
- (_UIRemoteViewController *)remoteViewControllerForOverlayViewService;
- (void)willStartPresentingOverlay:(ASORemoteOverlay *)arg1 transitionContext:(ASOOverlayTransitionContext *)arg2;

@end
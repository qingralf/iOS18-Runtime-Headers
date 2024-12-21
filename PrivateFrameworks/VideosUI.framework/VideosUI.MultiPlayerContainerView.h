/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.MultiPlayerContainerView : UIView <UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_controlsView;
    void $__lazy_storage_$_dimmingView;
    void $__lazy_storage_$_hoverGestureRecognizer;
    void $__lazy_storage_$_singlePressGesture;
    void $__lazy_storage_$_volumeGradient;
    void $__lazy_storage_$_volumeIndicator;
    void closeHandler;
    void controlFadeTimer;
    void fullscreenHandler;
    void isDimmed;
    void isPlayerInset;
    void isReadyForDisplayObserver;
    void layout;
    void onSelect;
    void playerViewController;
    void snapshotView;
    void statusObserver;
    void volumeObserver;
}

- (void).cxx_destruct;
- (void)accessibilityNotifySnapshotRemoval;
- (void)dealloc;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)onHoverWithGesture:(id)arg1;
- (void)singlePressWithGesture:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPGSVTransitionInterstitialView : UIView {
    id /* block */  _activation;
    bool  _active;
    bool  _animated;
    unsigned long long  _animationCounter;
    bool  _blur;
    PKPGSVTransitionInterstitialSnapshotContainerView * _currentContainer;
    PKPGSVTransitionInterstitialItem * _currentItem;
    UIImageView * _currentSnapshot;
    id /* block */  _currentSnapshotCompletion;
    <PKSpringAnimationFactory> * _dismissalSpringFactory;
    bool  _hasPosition;
    bool  _invalidated;
    NSMutableArray * _obsoleteCompletions;
    NSMutableArray * _obsoleteContainers;
    NSMutableArray * _obsoleteSnapshots;
    PKPGSVTransitionInterstitialSnapshotContainerView * _previousContainer;
    PKPGSVTransitionInterstitialItem * _previousItem;
    UIImageView * _previousSnapshot;
    id /* block */  _previousSnapshotCompletion;
    <PKSpringAnimationFactory> * _springFactory;
    bool  _transferring;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

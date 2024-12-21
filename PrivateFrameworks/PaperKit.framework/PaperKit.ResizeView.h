/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit
 */

@interface PaperKit.ResizeView : UIView <UIGestureRecognizerDelegate> {
    void borderView;
    void canvas;
    void controlHandles;
    void currentActiveHandle;
    void dragConstainedAxis;
    void dragGestureRecognizer;
    void isResizing;
    void nudgeDelta;
    void nudgeTimer;
    void originalControlPointLocation;
    void resizeHandles;
    void resizeOriginalCoordinateSpace;
    void resizeOriginalCoordinateSpaceScaled;
    void rotationGestureRecognizer;
    void transientResizeTransform;
}

- (void).cxx_destruct;
- (void)controlHandleMoved:(id)arg1;
- (void)dragMoved:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resizeHandleMoved:(id)arg1;
- (void)rotate:(id)arg1;
- (void)rotateFromResizeHandle:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKit._UISwipeDownDismissSubInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    void axis;
    void conflictingScrollViews;
    void gesture;
    void parent;
    void view;
}

@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)init;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
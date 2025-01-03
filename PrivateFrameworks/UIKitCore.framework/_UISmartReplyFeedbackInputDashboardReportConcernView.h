/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISmartReplyFeedbackInputDashboardReportConcernView : _UISmartReplyFeedbackInputDashboardView {
    UIView * _feedbackIconAndLabelView;
    UIImageView * _feedbackIconView;
    long long  _touchState;
}

@property (nonatomic, retain) UIView *feedbackIconAndLabelView;
@property (nonatomic, retain) UIImageView *feedbackIconView;
@property (nonatomic) long long touchState;

- (void).cxx_destruct;
- (id)feedbackIconAndLabelView;
- (id)feedbackIconView;
- (id)init;
- (void)setFeedbackIconAndLabelView:(id)arg1;
- (void)setFeedbackIconView:(id)arg1;
- (void)setTouchState:(long long)arg1;
- (bool)touchInView:(id)arg1;
- (long long)touchState;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

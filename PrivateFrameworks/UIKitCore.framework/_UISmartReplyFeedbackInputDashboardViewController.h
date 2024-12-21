/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISmartReplyFeedbackInputDashboardViewController : UIViewController <UIPredictiveViewController> {
    UIView * _backdropView;
    _UISmartReplyFeedbackInputDashboardView * _inputDashboardView;
}

@property (nonatomic, retain) UIView *backdropView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UISmartReplyFeedbackInputDashboardView *inputDashboardView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backdropView;
- (id)init;
- (id)inputDashboardView;
- (bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (void)setAssistantBarStyle:(long long)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setInputDashboardView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
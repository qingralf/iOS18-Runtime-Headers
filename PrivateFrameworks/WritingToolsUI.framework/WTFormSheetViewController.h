/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WritingToolsUI.framework/WritingToolsUI
 */

@interface WTFormSheetViewController : UIViewController <UIAdaptivePresentationControllerDelegate, WTWritingToolsDelegate_Internal, _UISceneHostingControllerDelegate> {
    _UISceneHostingController * _hostingController;
    NSString * _reason;
    WTWritingToolsController * _writingToolsController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UISceneHostingController *hostingController;
@property (readonly) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsWritingToolsInlineEditing; /* unknown property attribute: ? */
@property (nonatomic, retain) WTWritingToolsController *writingToolsController;

- (void).cxx_destruct;
- (void)_setupSceneHostingWithSessionUUID:(id)arg1 formSheetUIType:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)clientIsReady;
- (void)enableSmallDetent:(bool)arg1;
- (void)enrollmentBegan;
- (void)enrollmentDismissed;
- (void)handOffFromUCBWithPrompt:(id)arg1;
- (id)hostingController;
- (id)initWithWritingToolsController:(id)arg1 inSession:(id)arg2 formSheetUIType:(long long)arg3;
- (void)photosPickerSessionBegan;
- (void)photosPickerSessionDismissed;
- (id)reason;
- (void)setFeedbackHiddenDetentEnabled:(bool)arg1;
- (void)setHostingController:(id)arg1;
- (void)setWritingToolsController:(id)arg1;
- (id)writingToolsController;
- (void)writingToolsDidUpdateKeyboardPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 preferredContentSizeChanging:(bool)arg2;

@end
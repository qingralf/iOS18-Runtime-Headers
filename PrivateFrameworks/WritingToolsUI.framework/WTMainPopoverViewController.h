/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WritingToolsUI.framework/WritingToolsUI
 */

@interface WTMainPopoverViewController : UIViewController <UIAdaptivePresentationControllerDelegate, WTTextViewDelegate, WTUIPresentationStyleManaging, WTWritingToolsDelegate, _UIRemoteSheetContaining, _UISceneHostingControllerDelegate> {
    bool  _adjustedPopoverContainerViewFrame;
    bool  _enableSmallDetent;
    _UISceneHostingController * _hostingController;
    bool  _isFeedbackHiddenDetentEnabled;
    bool  _isViewApparent;
    <UIWTInputViewSetPlacementController_Staging> * _ivsPlacementController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _onScreenFrameLastReportedToKeyboardTrackingCoordinator;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pendingWritingToolsKeyboardFrame;
    bool  _presentedAsSheet;
    bool  _presenting;
    NSUUID * _sessionUUID;
    UISheetPresentationController * _sheetController;
    double  _smallDetentKeyboardHeight;
    _TtC14WritingToolsUI16WTStartupOptions * _startupOptions;
    WTWritingToolsController * _writingToolsController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _writingToolsKeyboardFrame;
}

@property (nonatomic, readonly) <_UIRemoteSheet> *_remoteSheet;
@property bool adjustedPopoverContainerViewFrame;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property bool enableSmallDetent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UISceneHostingController *hostingController;
@property bool isFeedbackHiddenDetentEnabled;
@property (nonatomic) bool isViewApparent;
@property (nonatomic, retain) <UIWTInputViewSetPlacementController_Staging> *ivsPlacementController;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } onScreenFrameLastReportedToKeyboardTrackingCoordinator;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pendingWritingToolsKeyboardFrame;
@property (nonatomic) bool presentedAsSheet;
@property (nonatomic) bool presenting;
@property (nonatomic, retain) NSUUID *sessionUUID;
@property UISheetPresentationController *sheetController;
@property (nonatomic) double smallDetentKeyboardHeight;
@property (retain) _TtC14WritingToolsUI16WTStartupOptions *startupOptions;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsWritingToolsInlineEditing; /* unknown property attribute: ? */
@property WTWritingToolsController *writingToolsController;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } writingToolsKeyboardFrame;

- (void).cxx_destruct;
- (double)_currentDetentHeight;
- (double)_desiredSheetHeight;
- (void)_dismissalTransitionDidEnd:(id)arg1;
- (void)_dismissalTransitionWillBegin:(id)arg1;
- (void)_movePopoverBackToDefaultPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_offScreenFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_onScreenFrame;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (id)_remoteSheet;
- (id)_screenForWindow:(id)arg1;
- (void)_sendKeyboardTrackingNotificationsFromStartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 reason:(id)arg2;
- (void)_setupSceneHosting;
- (double)_smallDetentHeight;
- (id)_sourceResponderWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_startFrameForAnimation;
- (bool)adjustedPopoverContainerViewFrame;
- (void)applicationDidResume;
- (void)beginTextPlaceholder;
- (void)clientIsReady;
- (void)compositionSession:(id)arg1 didReceiveText:(id)arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inContext:(id)arg4 finished:(bool)arg5;
- (void)copyText:(id)arg1;
- (void)didBeginWritingToolsSession:(id)arg1 contexts:(id)arg2;
- (void)didEndWritingToolsSession:(id)arg1 accepted:(bool)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)enableIntelligentEntryFieldView:(bool)arg1;
- (bool)enableSmallDetent;
- (void)enableSmallDetent:(bool)arg1;
- (void)endTextPlaceholderAndWillInsertText:(bool)arg1 completion:(id /* block */)arg2;
- (void)endWritingTools;
- (void)endWritingToolsWithError:(id)arg1;
- (void)enrollmentBegan;
- (void)enrollmentDismissed;
- (id)hostingController;
- (id)initWithWritingToolsController:(id)arg1 startupOptions:(id)arg2;
- (bool)isFeedbackHiddenDetentEnabled;
- (bool)isViewApparent;
- (id)ivsPlacementController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrameInWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })onScreenFrameLastReportedToKeyboardTrackingCoordinator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pendingWritingToolsKeyboardFrame;
- (void)photosPickerSessionBegan;
- (void)photosPickerSessionDismissed;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)presentedAsSheet;
- (bool)presenting;
- (void)proofreadingSession:(id)arg1 didReceiveSuggestions:(id)arg2 processedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inContext:(id)arg4 finished:(bool)arg5;
- (void)proofreadingSession:(id)arg1 didUpdateState:(long long)arg2 forSuggestionWithUUID:(id)arg3 inContext:(id)arg4;
- (void)proofreadingSessionWithUUID:(id)arg1 updateState:(long long)arg2 forSuggestionWithUUID:(id)arg3;
- (void)redo;
- (void)replaceSelectionWithText:(id)arg1;
- (void)repositionWithKeyboardChangedInformation:(id)arg1;
- (void)resetPresentationSelectedDetent;
- (id)sessionUUID;
- (void)setAdjustedPopoverContainerViewFrame:(bool)arg1;
- (void)setEnableSmallDetent:(bool)arg1;
- (void)setFeedbackHiddenDetentEnabled:(bool)arg1;
- (void)setHostingController:(id)arg1;
- (void)setIsFeedbackHiddenDetentEnabled:(bool)arg1;
- (void)setIsViewApparent:(bool)arg1;
- (void)setIvsPlacementController:(id)arg1;
- (void)setOnScreenFrameLastReportedToKeyboardTrackingCoordinator:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPendingWritingToolsKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentedAsSheet:(bool)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSheetController:(id)arg1;
- (void)setSmallDetentKeyboardHeight:(double)arg1;
- (void)setStartupOptions:(id)arg1;
- (void)setWritingToolsController:(id)arg1;
- (void)setWritingToolsKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sheetController;
- (void)sheetPresentationControllerDidChangeSelectedDetentIdentifier:(id)arg1;
- (void)showContentWarningWithTitle:(id)arg1 message:(id)arg2;
- (double)smallDetentKeyboardHeight;
- (void)sourceResponderHorizontalSizeClassChanged:(long long)arg1;
- (id)startupOptions;
- (void)undo;
- (void)updatePromptEntryState:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willBeginWritingToolsSession:(id)arg1 requestContexts:(id /* block */)arg2;
- (void)windowingModeEnabledChanged:(bool)arg1;
- (id)writingToolsController;
- (void)writingToolsDidUpdateKeyboardPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 preferredContentSizeChanging:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })writingToolsKeyboardFrame;
- (void)writingToolsSession:(id)arg1 didReceiveAction:(long long)arg2;

@end

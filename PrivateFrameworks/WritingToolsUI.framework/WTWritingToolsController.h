/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WritingToolsUI.framework/WritingToolsUI
 */

@interface WTWritingToolsController : NSObject <UIKeyboardSceneDelegateVisibilityObserver, UISheetPresentationControllerDelegate, WTTextViewDelegate, WTWritingToolsDelegate> {
    WTAnalyticsDelegate * _analyticsDelegate;
    NSUUID * _analyticsUUID;
    WTUIAttributedStringController * _attributedStringController;
    <BETextInput> * _beTextInput;
    NSMutableDictionary * _contextForSuggestions;
    WTPromptEntryViewController * _currentPromptEntryViewController;
    WTSuggestionViewController * _currentSuggestionViewController;
    bool  _endingUCBWritingToolsSession;
    WTFormSheetViewController * _formSheetViewController;
    bool  _isResumingFromModelEnrollment;
    bool  _isWritingToolsActive;
    WTMainPopoverViewController * _mainPopoverViewController;
    bool  _minimizedIntoAssistant;
    bool  _minimizedIntoUCB;
    NSUUID * _popoverSuggestionUUID;
    bool  _presentingFormSheet;
    bool  _presentingPromptEntry;
    NSString * _prompt;
    WTProofreadCandidateBarView * _proofreadCandidateBarView;
    NSMutableArray * _proofreadingSuggestions;
    long long  _requestedTool;
    WTSession * _session;
    WTSmartReplyConfiguration * _smartReplyConfig;
    UIResponder * _sourceResponder;
    long long  _sourceResponderHorizontalSizeClass;
    <UITextInput> * _sourceTextInput;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _suggestionPopoverSourceRect;
    UIView * _suggestionPopoverSourceView;
    bool  _suppressSheetForKeyboardEditing;
    bool  _suppressingSheetForRemoteKeyboardOnScreen;
    bool  _switchedFromUCBToPopover;
    bool  _temporarilySuppressPopoverForAdjustment;
    NSMutableDictionary * _uuidContextMapping;
    NSMutableDictionary * _uuidSuggestionMapping;
    bool  _windowingModeEnabled;
    NSObject<WTWritingToolsDelegate> * _writingToolsDelegate;
}

@property (nonatomic, retain) WTAnalyticsDelegate *analyticsDelegate;
@property (nonatomic, readonly) NSUUID *analyticsUUID;
@property (retain) WTUIAttributedStringController *attributedStringController;
@property (nonatomic, retain) <BETextInput> *beTextInput;
@property (nonatomic, retain) NSMutableDictionary *contextForSuggestions;
@property WTPromptEntryViewController *currentPromptEntryViewController;
@property WTSuggestionViewController *currentSuggestionViewController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool endingUCBWritingToolsSession;
@property WTFormSheetViewController *formSheetViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isResumingFromModelEnrollment;
@property bool isWritingToolsActive;
@property (retain) WTMainPopoverViewController *mainPopoverViewController;
@property (nonatomic) bool minimizedIntoAssistant;
@property (nonatomic) bool minimizedIntoUCB;
@property (retain) NSUUID *popoverSuggestionUUID;
@property (nonatomic) bool presentingFormSheet;
@property (nonatomic) bool presentingPromptEntry;
@property (retain) NSString *prompt;
@property WTProofreadCandidateBarView *proofreadCandidateBarView;
@property (nonatomic, retain) NSMutableArray *proofreadingSuggestions;
@property long long requestedTool;
@property (nonatomic, retain) WTSession *session;
@property (retain) WTSmartReplyConfiguration *smartReplyConfig;
@property (nonatomic) UIResponder *sourceResponder;
@property (nonatomic) long long sourceResponderHorizontalSizeClass;
@property (nonatomic) <UITextInput> *sourceTextInput;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } suggestionPopoverSourceRect;
@property UIView *suggestionPopoverSourceView;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressSheetForKeyboardEditing;
@property (nonatomic) bool suppressingSheetForRemoteKeyboardOnScreen;
@property (nonatomic) bool switchedFromUCBToPopover;
@property (nonatomic) bool temporarilySuppressPopoverForAdjustment;
@property (nonatomic, retain) NSMutableDictionary *uuidContextMapping;
@property (nonatomic, retain) NSMutableDictionary *uuidSuggestionMapping;
@property (nonatomic) bool wantsWritingToolsInlineEditing; /* unknown property attribute: ? */
@property (nonatomic) bool windowingModeEnabled;
@property NSObject<WTWritingToolsDelegate> *writingToolsDelegate;

+ (bool)_isArbiterClientReadyForWritingToolsToHandleKeyboardTracking;
+ (bool)_isWritingToolsHandlingKeyboardTracking;
+ (bool)_isWritingToolsReadyToHandleKeyboardTracking;
+ (bool)iPadOSAlternateQuestionnaireEnabled;
+ (bool)isAvailable;

- (void).cxx_destruct;
- (id)_assistantBarButtonCustomViewWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (id)_assistantProofreadBarButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cgRectForSelectionRects:(id)arg1;
- (bool)_compositionSessionActive;
- (id)_createCompositionInputDashboardViewController;
- (id)_createProofreadingInputDashboardViewControllerForAssistant:(bool)arg1;
- (id)_createSmartReplyInputDashboardViewController;
- (void)_dismissPromptEntryViewController;
- (void)_dismissSuggestionViewController;
- (id)_initWithRequestedTool:(id)arg1 baseResponse:(id)arg2 entryPoint:(id)arg3 inputContextHistory:(id)arg4;
- (id)_inputDashboardViewController;
- (bool)_isEditableResponder;
- (unsigned long long)_permittedPopoverArrowDirection;
- (void)_presentMainPopoverViewController;
- (void)_presentPromptEntryViewController;
- (void)_presentSuggestionViewController;
- (bool)_proofreadingSessionActive;
- (bool)_proofreadingSessionActiveOrRequested;
- (void)_refreshSourceResponderHorizontalSizeClassState;
- (void)_refreshWindowingModeEnabled;
- (void)_revertAllSuggestions;
- (bool)_rewritingSessionActive;
- (bool)_rewritingSessionActiveOrRequested;
- (bool)_smartReplySessionActive;
- (bool)_smartReplySessionActiveOrRequested;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textSelectionRectForSmartReplyPopoverForRange:(id)arg1 selectionRects:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textSelectionRectForTextInput;
- (id)_textViewDelegate;
- (void)_updatePopoverAnchoring;
- (void)_updatePromptEntryPopover;
- (void)_updateSuggestionPopover;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleApproximationOfTextSelectionRect;
- (bool)_wantsInlineEditing;
- (bool)_wantsUCBUI;
- (bool)_wantsUCBUI_ucbSupported;
- (bool)_wantsUCBUI_ucbSupportedStageManagerActive;
- (id)analyticsDelegate;
- (id)analyticsUUID;
- (id)assistantBarButtonItemWithStyle:(long long)arg1;
- (id)attributedStringController;
- (id)beTextInput;
- (void)beginTextPlaceholder;
- (void)compositionSession:(id)arg1 didReceiveText:(id)arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inContext:(id)arg4 finished:(bool)arg5;
- (id)contextForSuggestions;
- (void)copyText:(id)arg1;
- (id)currentPromptEntryViewController;
- (id)currentSuggestionViewController;
- (void)dealloc;
- (void)didBeginWritingToolsSession:(id)arg1 contexts:(id)arg2;
- (void)didEndWritingToolsSession:(id)arg1 accepted:(bool)arg2;
- (void)endTextPlaceholderAndWillInsertText:(bool)arg1 completion:(id /* block */)arg2;
- (void)endWritingTools;
- (void)endWritingToolsWithError:(id)arg1;
- (bool)endingUCBWritingToolsSession;
- (void)enrollmentBegan;
- (void)enrollmentDismissed;
- (id)formSheetViewController;
- (void)handOffFromUCBWithPrompt:(id)arg1;
- (id)initWithRequestedTool:(id)arg1;
- (id)initWithRequestedTool:(id)arg1 inputContextHistory:(id)arg2;
- (id)initWithRequestedTool:(id)arg1 prompt:(id)arg2;
- (id)initWithRequestedTool:(id)arg1 prompt:(id)arg2 smartReplyConfiguration:(id)arg3;
- (id)initWithRequestedTool:(id)arg1 smartReplyConfiguration:(id)arg2;
- (id)initWithTool:(long long)arg1 prompt:(id)arg2;
- (id)initWithTool:(long long)arg1 prompt:(id)arg2 smartReplyConfiguration:(id)arg3;
- (bool)isPopoverTemporarilyDismissed;
- (bool)isResumingFromModelEnrollment;
- (bool)isVisualModeWindowed;
- (bool)isWindowingModeEnabled;
- (bool)isWritingToolsActive;
- (id)itemProviderForAttributedText:(id)arg1;
- (id)itemProviderForPlainText:(id)arg1;
- (id)mainPopoverViewController;
- (bool)minimizedIntoAssistant;
- (bool)minimizedIntoUCB;
- (void)photosPickerSessionBegan;
- (void)photosPickerSessionDismissed;
- (id)popoverSuggestionUUID;
- (bool)popoverWillAdjust;
- (void)presentError:(id)arg1;
- (bool)presentingFormSheet;
- (bool)presentingPromptEntry;
- (id)prompt;
- (id)proofreadCandidateBarView;
- (void)proofreadingSession:(id)arg1 didReceiveSuggestions:(id)arg2 processedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inContext:(id)arg4 finished:(bool)arg5;
- (void)proofreadingSession:(id)arg1 didUpdateState:(long long)arg2 forSuggestionWithUUID:(id)arg3 inContext:(id)arg4;
- (void)proofreadingSessionWithUUID:(id)arg1 showDetailsForSuggestionWithUUID:(id)arg2 relativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (void)proofreadingSessionWithUUID:(id)arg1 updateState:(long long)arg2 forSuggestionWithUUID:(id)arg3;
- (id)proofreadingSuggestions;
- (void)redo;
- (void)remoteKeyboardChanged:(id)arg1;
- (void)replaceSelectionWithText:(id)arg1;
- (long long)requestedTool;
- (void)selectionDidUpdate;
- (id)session;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setAttributedStringController:(id)arg1;
- (void)setBeTextInput:(id)arg1;
- (void)setContextForSuggestions:(id)arg1;
- (void)setCurrentPromptEntryViewController:(id)arg1;
- (void)setCurrentSuggestionViewController:(id)arg1;
- (void)setEndingUCBWritingToolsSession:(bool)arg1;
- (void)setFormSheetViewController:(id)arg1;
- (void)setIsResumingFromModelEnrollment:(bool)arg1;
- (void)setIsWritingToolsActive:(bool)arg1;
- (void)setMainPopoverViewController:(id)arg1;
- (void)setMinimizedIntoAssistant:(bool)arg1;
- (void)setMinimizedIntoUCB:(bool)arg1;
- (void)setPopoverSuggestionUUID:(id)arg1;
- (void)setPresentingFormSheet:(bool)arg1;
- (void)setPresentingPromptEntry:(bool)arg1;
- (void)setPrompt:(id)arg1;
- (void)setProofreadCandidateBarView:(id)arg1;
- (void)setProofreadingSuggestions:(id)arg1;
- (void)setRequestedTool:(long long)arg1;
- (void)setSession:(id)arg1;
- (void)setSmartReplyConfig:(id)arg1;
- (void)setSourceResponder:(id)arg1;
- (void)setSourceResponder:(id)arg1 sourceTextInput:(id)arg2;
- (void)setSourceResponderHorizontalSizeClass:(long long)arg1;
- (void)setSourceTextInput:(id)arg1;
- (void)setSuggestionPopoverSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSuggestionPopoverSourceView:(id)arg1;
- (void)setSuppressSheetForKeyboardEditing:(bool)arg1;
- (void)setSuppressWritingToolsForRemoteKeyboard:(bool)arg1;
- (void)setSuppressingSheetForRemoteKeyboardOnScreen:(bool)arg1;
- (void)setSwitchedFromUCBToPopover:(bool)arg1;
- (void)setTemporarilySuppressPopoverForAdjustment:(bool)arg1;
- (void)setUuidContextMapping:(id)arg1;
- (void)setUuidSuggestionMapping:(id)arg1;
- (void)setWindowingModeEnabled:(bool)arg1;
- (void)setWritingToolsDelegate:(id)arg1;
- (bool)shouldAdjustPopoverPresentationController:(id)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonAction:(id /* block */)arg4;
- (void)showContentWarningWithTitle:(id)arg1 message:(id)arg2;
- (void)showSmartReplyQuestionnaireWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)smartReplyConfig;
- (id)sourceResponder;
- (long long)sourceResponderHorizontalSizeClass;
- (id)sourceResponderViewController;
- (id)sourceTextInput;
- (void)startWritingTools;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestionPopoverSourceRect;
- (id)suggestionPopoverSourceView;
- (bool)suppressSheetForKeyboardEditing;
- (bool)suppressingSheetForRemoteKeyboardOnScreen;
- (bool)switchedFromUCBToPopover;
- (bool)temporarilySuppressPopoverForAdjustment;
- (void)textSystemWillBeginEditingDuringSessionWithUUID:(id)arg1;
- (id)trailingPredictiveCandidate;
- (void)undo;
- (void)updateInputDashboardViewController;
- (void)updateKBSuppression;
- (void)updatePromptEntryState:(long long)arg1;
- (void)updateSourceView;
- (void)updateWritingToolsPopoverSuppression;
- (void)updateWritingToolsPopoverSuppressionWithCompletion:(id /* block */)arg1;
- (id)uuidContextMapping;
- (id)uuidSuggestionMapping;
- (void)willBeginWritingToolsSession:(id)arg1 requestContexts:(id /* block */)arg2;
- (bool)windowingModeEnabled;
- (id)writingToolsDelegate;
- (void)writingToolsDidUpdateKeyboardPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 preferredContentSizeChanging:(bool)arg2;
- (void)writingToolsSession:(id)arg1 didReceiveAction:(long long)arg2;

@end
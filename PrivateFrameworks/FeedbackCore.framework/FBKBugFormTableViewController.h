/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore
 */

@interface FBKBugFormTableViewController : UITableViewController <FBKBugFormEditorDelegate, FBKDeviceDiagnosticsDelegate, FBKDraftingDelegate, FeedbackCore.FBKAddAttachmentsControllerDelegate, FeedbackCore.FBKBugFormPickerDelegate, FeedbackCore.FBKTeamPickerDelegate, UIAdaptivePresentationControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITableViewDelegatePrivate, UITextViewDelegate, UIViewControllerTransitioningDelegate> {
    UIView * __cachedLegalFooterView;
    UIView * __cachedOnboardingKitView;
    UITableViewCell * _addAttachmentCell;
    _TtC12FeedbackCore27FBKAddAttachmentsController * _addAttachmentsController;
    bool  _allowKeyboardDismissalForSnapshot;
    bool  _allowsAttachmentDragAndDrop;
    bool  _alternateImagePreviewEnabled;
    bool  _alwaysDeletesDrafts;
    NSString * _appToken;
    bool  _attemptedSubmission;
    bool  _autoGathersDiagnosticExtensions;
    unsigned long long  _cachedCandidateStubsCount;
    bool  _canOpenFeedbackInFBA;
    bool  _canShowTeamPicker;
    bool  _canShowTopicPicker;
    UIBarButtonItem * _cancelBarButtonItem;
    UIBarButtonItem * _cancelButton;
    NSPredicate * _candidateFormStubsPredicate;
    NSMutableDictionary * _cellHeights;
    <FBKBugFormTableViewControllerProtocol> * _delegate;
    FBKDeviceDiagnosticsController * _devicesController;
    id  _didRefreshFormStubsNotificationObserver;
    FBKBugFormDiffableDataSource * _diffableDataSource;
    bool  _disableAccountSwitching;
    FBKDraftingController * _draftingController;
    NSSet * _extensions;
    NSString * _firstDeviceSectionIdentifier;
    bool  _hasLoadedFirstDraft;
    bool  _isBeingDismissedBySelf;
    bool  _isEstablishingBugSession;
    bool  _isPresentedInSmallDetent;
    bool  _isSubmissionPendingOnEnhancedLogging;
    bool  _isUpdatingTable;
    double  _keyboardHeight;
    NSString * _largeTitleIcon;
    FBKLaunchAction * _launchAction;
    id /* block */  _loadDraftCompletion;
    NSString * _localizedAttachmentLegalText;
    NSAttributedString * _localizedAttributedLegalString;
    unsigned long long  _maxInlineChoices;
    id  _notificationObserver;
    NSString * _onBoardingKitIdentifier;
    NSDictionary * _pendingAttachments;
    FBKManagedFeedbackObject * _pendingFeedbackObject;
    NSDictionary * _pendingQandA;
    FBKBugFormStub * _pendingStub;
    FBKTeam * _pendingTeam;
    NSString * _questionGroupUnderAttachmentsSectionIdentifier;
    NSArray * _requestedPlugIns;
    NSString * _sectionThatWillHostLegalTextFooterSectionIdentifier;
    bool  _shouldHideAllCells;
    bool  _shouldHideQuestions;
    bool  _shouldShowAttachmentButton;
    bool  _shouldShowUserSwitcherInForm;
    bool  _showInlineUserInfo;
    bool  _showUserSwitcherLast;
    unsigned long long  _submissionStyle;
    UIBarButtonItem * _submitBarButtonItem;
    UIBarButtonItem * _submitButton;
    FBKLargeSubmitButton * _submitButtonLarge;
    UITextView * _textViewFirstResponder;
    bool  _useInlineChoices;
    bool  _viewHasBecomeVisible;
    unsigned int  _whooshSoundID;
}

@property (nonatomic, retain) UIView *_cachedLegalFooterView;
@property (nonatomic, retain) UIView *_cachedOnboardingKitView;
@property (nonatomic) UITableViewCell *addAttachmentCell;
@property (nonatomic, retain) _TtC12FeedbackCore27FBKAddAttachmentsController *addAttachmentsController;
@property (nonatomic) bool allowKeyboardDismissalForSnapshot;
@property (nonatomic) bool allowsAttachmentDragAndDrop;
@property (nonatomic) bool alternateImagePreviewEnabled;
@property (nonatomic) bool alwaysDeletesDrafts;
@property (nonatomic, retain) NSString *appToken;
@property (nonatomic) bool attemptedSubmission;
@property (nonatomic) bool autoGathersDiagnosticExtensions;
@property (nonatomic, readonly) FBKBugForm *bugForm;
@property (nonatomic) unsigned long long cachedCandidateStubsCount;
@property (nonatomic) bool canOpenFeedbackInFBA;
@property (nonatomic) bool canShowTeamPicker;
@property (nonatomic) bool canShowTopicPicker;
@property (nonatomic, retain) UIBarButtonItem *cancelBarButtonItem;
@property (nonatomic) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) NSPredicate *candidateFormStubsPredicate;
@property (nonatomic, retain) NSMutableDictionary *cellHeights;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <FBKBugFormTableViewControllerProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBKDeviceDiagnosticsController *devicesController;
@property (nonatomic, retain) id didRefreshFormStubsNotificationObserver;
@property (nonatomic, retain) FBKBugFormDiffableDataSource *diffableDataSource;
@property (nonatomic) bool disableAccountSwitching;
@property (nonatomic, retain) FBKDraftingController *draftingController;
@property (retain) NSSet *extensions;
@property (nonatomic, retain) NSString *firstDeviceSectionIdentifier;
@property (nonatomic, readonly) FBKFormResponse *formResponse;
@property (nonatomic) bool hasLoadedFirstDraft;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBeingDismissedBySelf;
@property (nonatomic) bool isEstablishingBugSession;
@property (nonatomic) bool isPresentedInSmallDetent;
@property (nonatomic) bool isSubmissionPendingOnEnhancedLogging;
@property (nonatomic) bool isUpdatingTable;
@property (nonatomic) double keyboardHeight;
@property (nonatomic, retain) NSString *largeTitleIcon;
@property (nonatomic, retain) FBKLaunchAction *launchAction;
@property (nonatomic, copy) id /* block */ loadDraftCompletion;
@property (nonatomic, retain) NSString *localizedAttachmentLegalText;
@property (nonatomic, retain) NSAttributedString *localizedAttributedLegalString;
@property (nonatomic) unsigned long long maxInlineChoices;
@property (retain) id notificationObserver;
@property (nonatomic, retain) NSString *onBoardingKitIdentifier;
@property (retain) NSDictionary *pendingAttachments;
@property (nonatomic, retain) FBKManagedFeedbackObject *pendingFeedbackObject;
@property (retain) NSDictionary *pendingQandA;
@property (nonatomic, retain) FBKBugFormStub *pendingStub;
@property (nonatomic, retain) FBKTeam *pendingTeam;
@property (nonatomic, retain) NSString *questionGroupUnderAttachmentsSectionIdentifier;
@property (nonatomic, retain) NSArray *requestedPlugIns;
@property (nonatomic, retain) NSString *sectionThatWillHostLegalTextFooterSectionIdentifier;
@property (nonatomic) bool shouldHideAllCells;
@property (nonatomic) bool shouldHideQuestions;
@property (nonatomic) bool shouldShowAttachmentButton;
@property (nonatomic) bool shouldShowUserSwitcherInForm;
@property (nonatomic) bool showInlineUserInfo;
@property (nonatomic) bool showUserSwitcherLast;
@property (nonatomic) unsigned long long submissionStyle;
@property (nonatomic, retain) UIBarButtonItem *submitBarButtonItem;
@property (nonatomic) UIBarButtonItem *submitButton;
@property (nonatomic, retain) FBKLargeSubmitButton *submitButtonLarge;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *teamPickerRowIdentifier;
@property (nonatomic) UITextView *textViewFirstResponder;
@property (nonatomic, readonly) NSString *topicPickerRowIdentifier;
@property (nonatomic) bool useInlineChoices;
@property bool viewHasBecomeVisible;
@property (nonatomic) unsigned int whooshSoundID;

- (void).cxx_destruct;
- (id)_cachedLegalFooterView;
- (id)_cachedOnboardingKitView;
- (void)_changeToBugFormStub:(id)arg1 force:(bool)arg2;
- (void)_changeToBugFormStub:(id)arg1 withTeam:(id)arg2 force:(bool)arg3;
- (void)_deleteCurrentDraftWithCompletion:(id /* block */)arg1;
- (void)_handleLoadingError:(id)arg1;
- (void)_hideDevices;
- (void)_reallyChangeToBugFormStub:(id)arg1 withTeam:(id)arg2 force:(bool)arg3;
- (void)_resizeAndScrollTableAfterTextChangeInTextView:(id)arg1;
- (double)_separatorInset;
- (void)_showFormPickerWithSender:(id)arg1;
- (void)_showInternalToolbarIfNeeded;
- (void)_showSpinnerWithStatus:(id)arg1 userInteractionEnabled:(bool)arg2;
- (void)_stopSpinner;
- (bool)_tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)_updateUI:(bool)arg1 canDismissKeyboard:(bool)arg2 overrideWindowCheck:(bool)arg3 withCompletion:(id /* block */)arg4;
- (bool)_useAttachmentCellRedesign;
- (id)addAttachmentCell;
- (id)addAttachmentsController;
- (void)adjustAttachmentLabelSpacing:(id)arg1;
- (id)alertControllerForDismissWithLaunchAction:(id)arg1;
- (bool)allowKeyboardDismissalForSnapshot;
- (bool)allowsAttachmentDragAndDrop;
- (bool)alternateImagePreviewEnabled;
- (bool)alwaysDeletesDrafts;
- (void)answerDidChangeForQuestion:(id)arg1;
- (id)appToken;
- (void)askDelegateToGoFullScreenIfNeeded;
- (id)attachmentCellViewWithTableView:(id)arg1 indexPath:(id)arg2 reuseIdentifier:(id)arg3 attachment:(id)arg4;
- (void)attachmentsAlert:(id)arg1 needsDeviceDiagnosticsController:(id /* block */)arg2;
- (void)attachmentsAlertDidSelectOption:(id)arg1;
- (bool)attemptedSubmission;
- (bool)autoGathersDiagnosticExtensions;
- (void)awakeFromNib;
- (void)beginPresubmissionCheck:(id)arg1;
- (id)bugForm;
- (void)bugFormPicker:(id)arg1 didSelectBugFormStub:(id)arg2;
- (void)bugFormPickerDidCancel:(id)arg1;
- (unsigned long long)cachedCandidateStubsCount;
- (bool)canOpenFeedbackInFBA;
- (bool)canShowTeamPicker;
- (bool)canShowTopicPicker;
- (id)cancelBarButtonItem;
- (id)cancelButton;
- (id)cancelButtonOnRight;
- (id)candidateFormStubsPredicate;
- (id)cellHeights;
- (void)checkEnhancedLoggingAndSubmit;
- (void)checkExplicitConfirmationAndSubmit;
- (void)checkLegalAndSubmit;
- (void)close;
- (void)closeDraftAndDelete:(bool)arg1 completion:(id /* block */)arg2;
- (void)closeDraftAndDelete:(bool)arg1 withError:(id)arg2 completion:(id /* block */)arg3;
- (void)closeWithCompletion:(id /* block */)arg1;
- (void)closeWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)currentTeam;
- (id)delegate;
- (void)deviceDiagnosticsController:(id)arg1 didAddAttachment:(id)arg2 toDevice:(id)arg3;
- (void)deviceDiagnosticsController:(id)arg1 didAddDevice:(id)arg2;
- (void)deviceDiagnosticsController:(id)arg1 didAddDevices:(id)arg2;
- (void)deviceDiagnosticsController:(id)arg1 didChangeState:(long long)arg2;
- (void)deviceDiagnosticsController:(id)arg1 didFailToAttach:(id)arg2 toDevice:(id)arg3 error:(id)arg4;
- (void)deviceDiagnosticsController:(id)arg1 didFailToConnectToDevice:(id)arg2;
- (void)deviceDiagnosticsController:(id)arg1 didRemoveAttachment:(id)arg2 fromDevice:(id)arg3;
- (void)deviceDiagnosticsController:(id)arg1 didRemoveDevice:(id)arg2;
- (void)deviceDiagnosticsController:(id)arg1 didUpdateAttachment:(id)arg2 onDevice:(id)arg3;
- (void)deviceDiagnosticsController:(id)arg1 didUpdateDevice:(id)arg2;
- (void)deviceDiagnosticsController:(id)arg1 needsSelectionFromDevices:(id)arg2 completion:(id /* block */)arg3;
- (id)devicesController;
- (void)didPressChangeBugForm:(id)arg1;
- (id)didRefreshFormStubsNotificationObserver;
- (void)didTapAttachment:(id)arg1 indexPath:(id)arg2;
- (void)didTapDevice:(id)arg1 indexPath:(id)arg2;
- (void)didTapLargeSubmitButton:(id)arg1;
- (id)diffableDataSource;
- (bool)disableAccountSwitching;
- (void)dismiss:(id)arg1;
- (id)draftingController;
- (void)draftingController:(id)arg1 madeVisibilityUpdatesWithSnapshotDiff:(id)arg2;
- (void)draftingControllerDidBeginLoading:(id)arg1;
- (void)draftingControllerDidFinishLoading:(id)arg1 withError:(id)arg2;
- (id)dynamicAlertBody;
- (id)dynamicAlertTitle;
- (void)editorDidDismissForQuestion:(id)arg1;
- (id)extensions;
- (void)fillInAnswers;
- (id)firstDeviceSectionIdentifier;
- (id)formIdentifier;
- (id)formResponse;
- (id)formStub;
- (bool)hasCandidateStubs;
- (bool)hasFileArea;
- (bool)hasLoadedFirstDraft;
- (void)hideAllCells;
- (void)hideQuestions;
- (id)initWithCoder:(id)arg1;
- (bool)isBeingDismissedBySelf;
- (bool)isCaptiveModeEnabled;
- (bool)isCaptiveModeEnabledForLaunchAction:(id)arg1;
- (bool)isEstablishingBugSession;
- (bool)isPresentedInSmallDetent;
- (bool)isReadyForDropSessionFromController:(id)arg1 tableView:(id)arg2 dropSessionDidUpdate:(id)arg3 withDestinationIndexPath:(id)arg4;
- (bool)isSubmissionPendingOnEnhancedLogging;
- (bool)isUpdatingTable;
- (id)itemFromDraft;
- (void)keyboardDidHide:(id)arg1;
- (double)keyboardHeight;
- (void)keyboardWasShown:(id)arg1;
- (id)largeTitleIcon;
- (id)largeTitleView:(id)arg1 icon:(id)arg2;
- (id)launchAction;
- (void)launchModalViewWithModalQuestion:(id)arg1;
- (id)legalText;
- (id)legalViewBelowAttachments;
- (void)loadDraft:(id)arg1;
- (id /* block */)loadDraftCompletion;
- (void)loadNewResponseForBugFormStub:(id)arg1 forTeam:(id)arg2;
- (void)loadNewResponseForBugFormStub:(id)arg1 forTeam:(id)arg2 completion:(id /* block */)arg3;
- (void)loadNewResponseForSurvey:(id)arg1 forTeam:(id)arg2;
- (id)localizedAttachmentLegalText;
- (id)localizedAttributedLegalString;
- (unsigned long long)maxInlineChoices;
- (id)notificationObserver;
- (id)onBoardingKitIdentifier;
- (id)pendingAttachments;
- (id)pendingFeedbackObject;
- (id)pendingQandA;
- (id)pendingStub;
- (id)pendingTeam;
- (void)postAttachFiles:(id)arg1;
- (void)preAttachFiles:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)questionGroupForSection:(long long)arg1;
- (id)questionGroupUnderAttachmentsSectionIdentifier;
- (void)questionVisibilityDidUpdateForDraftingController:(id)arg1;
- (void)registerApplicationNotifications;
- (void)registerForKeyboardNotifications;
- (id)requestedPlugIns;
- (void)saveDraftWithIsClosing:(bool)arg1 completion:(id /* block */)arg2;
- (void)saveFormForResigningActive:(id)arg1;
- (id)sectionThatWillHostLegalTextFooterSectionIdentifier;
- (void)setAddAttachmentCell:(id)arg1;
- (void)setAddAttachmentsController:(id)arg1;
- (void)setAllowKeyboardDismissalForSnapshot:(bool)arg1;
- (void)setAllowsAttachmentDragAndDrop:(bool)arg1;
- (void)setAlternateImagePreviewEnabled:(bool)arg1;
- (void)setAlwaysDeletesDrafts:(bool)arg1;
- (void)setAppToken:(id)arg1;
- (void)setAttemptedSubmission:(bool)arg1;
- (void)setAutoGathersDiagnosticExtensions:(bool)arg1;
- (void)setCachedCandidateStubsCount:(unsigned long long)arg1;
- (void)setCanOpenFeedbackInFBA:(bool)arg1;
- (void)setCanShowTeamPicker:(bool)arg1;
- (void)setCanShowTopicPicker:(bool)arg1;
- (void)setCancelBarButtonItem:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCandidateFormStubsPredicate:(id)arg1;
- (void)setCellHeights:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevicesController:(id)arg1;
- (void)setDidRefreshFormStubsNotificationObserver:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setDisableAccountSwitching:(bool)arg1;
- (void)setDraftingController:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setFirstDeviceSectionIdentifier:(id)arg1;
- (void)setHasLoadedFirstDraft:(bool)arg1;
- (void)setIsBeingDismissedBySelf:(bool)arg1;
- (void)setIsEstablishingBugSession:(bool)arg1;
- (void)setIsPresentedInSmallDetent:(bool)arg1;
- (void)setIsSubmissionPendingOnEnhancedLogging:(bool)arg1;
- (void)setIsUpdatingTable:(bool)arg1;
- (void)setKeyboardHeight:(double)arg1;
- (void)setLargeTitleIcon:(id)arg1;
- (void)setLaunchAction:(id)arg1;
- (void)setLoadDraftCompletion:(id /* block */)arg1;
- (void)setLocalizedAttachmentLegalText:(id)arg1;
- (void)setLocalizedAttributedLegalString:(id)arg1;
- (void)setMaxInlineChoices:(unsigned long long)arg1;
- (void)setNotificationObserver:(id)arg1;
- (void)setOnBoardingKitIdentifier:(id)arg1;
- (void)setPendingAttachments:(id)arg1;
- (void)setPendingFeedbackObject:(id)arg1;
- (void)setPendingQandA:(id)arg1;
- (void)setPendingStub:(id)arg1;
- (void)setPendingTeam:(id)arg1;
- (void)setQuestionGroupUnderAttachmentsSectionIdentifier:(id)arg1;
- (void)setRequestedPlugIns:(id)arg1;
- (void)setSectionThatWillHostLegalTextFooterSectionIdentifier:(id)arg1;
- (void)setShouldHideAllCells:(bool)arg1;
- (void)setShouldHideQuestions:(bool)arg1;
- (void)setShouldShowAttachmentButton:(bool)arg1;
- (void)setShouldShowUserSwitcherInForm:(bool)arg1;
- (void)setShowInlineUserInfo:(bool)arg1;
- (void)setShowUserSwitcherLast:(bool)arg1;
- (void)setSubmissionStyle:(unsigned long long)arg1;
- (void)setSubmitBarButtonItem:(id)arg1;
- (void)setSubmitButton:(id)arg1;
- (void)setSubmitButtonLarge:(id)arg1;
- (void)setTextViewFirstResponder:(id)arg1;
- (void)setUseInlineChoices:(bool)arg1;
- (void)setViewHasBecomeVisible:(bool)arg1;
- (void)setWhooshSoundID:(unsigned int)arg1;
- (void)set_cachedLegalFooterView:(id)arg1;
- (void)set_cachedOnboardingKitView:(id)arg1;
- (bool)shouldDisplayChangeButton;
- (bool)shouldHideAllCells;
- (bool)shouldHideQuestions;
- (bool)shouldShowAttachmentButton;
- (bool)shouldShowAttachments;
- (bool)shouldShowForm;
- (bool)shouldShowFormPicker;
- (bool)shouldShowTeamPicker;
- (bool)shouldShowUserSwitcherInForm;
- (bool)showInlineUserInfo;
- (void)showQuestions;
- (void)showSpinnerWithStatus:(id)arg1;
- (void)showSubmissionAlertWithCompletion:(id /* block */)arg1;
- (void)showThankYouAlertWithCompletion:(id /* block */)arg1;
- (bool)showUserSwitcherLast;
- (bool)showsDraftDeletionMessage;
- (unsigned long long)submissionStyle;
- (void)submit;
- (id)submitBarButtonItem;
- (id)submitButton;
- (id)submitButtonLarge;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 withItemIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)teamPicker:(id)arg1 didSelectTeam:(id)arg2;
- (id)teamPickerRowIdentifier;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)textViewFirstResponder;
- (id)topicPickerRowIdentifier;
- (void)unregisterApplicationNotifications;
- (void)unregisterForKeyboardNotifications;
- (void)unwindToBugForm:(id)arg1;
- (void)updateCachedCandidateStubsCount;
- (void)updateSubmitButtonState;
- (void)updateTitle;
- (void)updateUI:(bool)arg1;
- (void)updateUI:(bool)arg1 canDismissKeyboard:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)updateUIOverrideWindowCheck;
- (bool)useInlineChoices;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewHasBecomeVisible;
- (void)viewWillAppear:(bool)arg1;
- (unsigned int)whooshSoundID;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

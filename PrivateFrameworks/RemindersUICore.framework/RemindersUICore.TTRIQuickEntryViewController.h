/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
 */

@interface RemindersUICore.TTRIQuickEntryViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void $__lazy_storage_$_detailsCell;
    void $__lazy_storage_$_listCell;
    void $__lazy_storage_$_notesCell;
    void $__lazy_storage_$_suggestionGroup;
    void $__lazy_storage_$_titleCell;
    void cancelButton;
    void commitButton;
    void configuration;
    void currentTextInputModeCancellable;
    void currentTextInputModeObserver;
    void dueDateCapability;
    void firstViewDidAppearCalled;
    void localUndoManager;
    void needsTableCellResize;
    void preferredContentSizeUpdater;
    void presenter;
    void startsEditingTitleOnAppearance;
    void tableDataController;
    void tableView;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic) UIBarButtonItem *cancelButton;
@property (nonatomic) UIBarButtonItem *commitButton;
@property (nonatomic) UITableView *tableView;
@property (nonatomic, readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)cancelButton;
- (id)commitButton;
- (void)didTapCancel:(id)arg1;
- (void)didTapCommit:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCommitButton:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)undoManager;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

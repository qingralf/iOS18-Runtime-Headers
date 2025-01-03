/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STLockoutViewController : UIViewController <CNContactViewControllerDelegate, LOViewController, STLockoutPolicyControllerDelegate> {
    id /* block */  _addBlockedContactHandler;
    id /* block */  _addContactHandler;
    NSString * _applicationName;
    NSObject<OS_dispatch_group> * _approvalAnimationGroup;
    NSString * _blockedContactsHandle;
    UIImageView * _communicationLimitView;
    NSDictionary * _contactNameByHandle;
    UIResponder * _customNextResponder;
    bool  _didFinishDismissing;
    NSObject<OS_dispatch_group> * _dismissingAnimationGroup;
    bool  _forSnapshot;
    STHourglassView * _hourglassView;
    NSObject<OS_dispatch_group> * _initialAnimationGroup;
    bool  _isApprovedAnimationWithApprovalPending;
    bool  _isHourglassStateInitialized;
    UIButton * _mainButton;
    bool  _mainButtonAlwaysHidden;
    UILabel * _messageLabel;
    UIButton * _okButton;
    long long  _okButtonAction;
    bool  _okButtonAlwaysHidden;
    STLockoutPolicyController * _policyController;
    UIAlertController * _presentedAlertController;
    id /* block */  _restrictionsPINControllerCompletion;
    unsigned long long  _reuseIdentifier;
    SBSLockScreenService * _sbsLockScreenService;
    unsigned long long  _state;
    unsigned long long  _stateBeforePending;
    long long  _style;
    UILabel * _titleLabel;
    <STLockoutViewControllerDelegate> * _viewControllerDelegate;
}

@property (copy) id /* block */ addBlockedContactHandler;
@property (copy) id /* block */ addContactHandler;
@property (readonly) NSString *applicationName;
@property (copy) NSString *blockedContactsHandle;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property UIImageView *communicationLimitView;
@property (readonly, copy) NSDictionary *contactNameByHandle;
@property (nonatomic) UIResponder *customNextResponder;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didFinishDismissing;
@property (getter=isForSnapshot, nonatomic) bool forSnapshot;
@property (readonly) unsigned long long hash;
@property STHourglassView *hourglassView;
@property UIButton *mainButton;
@property (nonatomic) bool mainButtonAlwaysHidden;
@property UILabel *messageLabel;
@property (nonatomic) UIResponder *nextResponder;
@property UIButton *okButton;
@property long long okButtonAction;
@property (nonatomic) bool okButtonAlwaysHidden;
@property (nonatomic, retain) STLockoutPolicyController *policyController;
@property (readonly) Class superclass;
@property UILabel *titleLabel;
@property (nonatomic, retain) UIVisualEffectView *view;
@property (nonatomic) <LOViewControllerDelegate> *viewControllerDelegate;
@property (nonatomic) <STLockoutViewControllerDelegate> *viewControllerDelegate;
@property (nonatomic, readonly) UIVisualEffectView *viewIfLoaded;

+ (id)_applicationNameForBundleIdentifier:(id)arg1;
+ (id)_applicationNameForWebsiteURL:(id)arg1;
+ (id)_bundleIdentifierForWebsiteURL:(id)arg1;
+ (id)_messageForCategoryIdentifier:(id)arg1;
+ (id)lockoutViewControllerWithBundleIdentifier:(id)arg1;
+ (id)lockoutViewControllerWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2;
+ (id)lockoutViewControllerWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2 contactNameByHandle:(id)arg3;
+ (id)lockoutViewControllerWithBundleIdentifier:(id)arg1 conversationContext:(id)arg2 contactStore:(id)arg3;
+ (id)lockoutViewControllerWithCategoryIdentifier:(id)arg1;
+ (id)lockoutViewControllerWithConversationContext:(id)arg1 bundleIdentifier:(id)arg2 contactStore:(id)arg3 applicationName:(id)arg4;
+ (id)lockoutViewControllerWithConversationContext:(id)arg1 bundleIdentifier:(id)arg2 contactStore:(id)arg3 applicationName:(id)arg4 contactNameByHandle:(id)arg5;
+ (id)lockoutViewControllerWithWebsiteURL:(id)arg1;
+ (id)messageForApplicationName:(id)arg1 style:(long long)arg2;
+ (id)messageForBundleIdentifier:(id)arg1 style:(long long)arg2;
+ (id)messageForWebsiteURL:(id)arg1;

- (void).cxx_destruct;
- (void)_actionAddContact:(id)arg1;
- (void)_actionAskOrApproveActionSheet:(id)arg1;
- (bool)_actionDismiss;
- (void)_actionEnterScreenTimePasscodeActionSheet:(id)arg1;
- (void)_actionIgnoreLimitActionSheet:(id)arg1;
- (void)_actionOK:(id)arg1;
- (void)_actionUnlockedAddContact;
- (bool)_actionUnlockedAskOrApproveActionSheet;
- (bool)_actionUnlockedEnterScreenTimePasscodeActionSheet;
- (bool)_authenticatedApproveActionSheet;
- (void)_authenticatedApproveForAdditionalTime:(double)arg1;
- (bool)_canShowWhileLocked;
- (void)_changeMainButtonToAddContact:(id)arg1;
- (void)_changeMainButtonToAskForMore;
- (void)_changeMainButtonToEnterScreenTimePasscode;
- (void)_changeMainButtonToIgnoreLimit;
- (void)_changeMessageToInitial;
- (void)_changeStateToApproved;
- (void)_changeStateToAsk;
- (void)_changeStateToContactBlocked;
- (void)_changeStateToContactBlockedDuringDowntime;
- (void)_changeStateToDisapproved;
- (void)_changeStateToDismissing;
- (void)_changeStateToPending;
- (void)_changeStateToWarn;
- (void)_doInitialAnimationExitingGroup:(id)arg1;
- (void)_doInitialAnimationOfHourglassExitingGroup:(id)arg1;
- (void)_fadeInBackdropWithCompletion:(id /* block */)arg1;
- (void)_fadeInHourglass;
- (void)_fadeInTextAndButtons;
- (void)_fadeOutBackdropWithCompletion:(id /* block */)arg1;
- (void)_fadeOutHourglass;
- (void)_fadeOutTextAndButtons;
- (void)_handleRestrictionsPINNotification:(id)arg1;
- (void)_hideBackdrop;
- (void)_hideHourglass;
- (void)_hideTextAndButtons;
- (bool)_isShowingInitialAnimation;
- (void)_presentAlertController:(id)arg1;
- (void)_restoreBackdrop;
- (void)_restoreHourglass;
- (void)_restoreTextAndButtons;
- (void)_restrictionsPINControllerDidFinish:(bool)arg1;
- (void)_setTextAndButtonsAlpha:(double)arg1;
- (void)_setupCommon;
- (void)_showApprovalAnimationIfNeeded;
- (void)_showDismissingAnimationIfNeeded;
- (void)_showInitialAnimationIfNeeded;
- (void)_showRestrictionsPINControllerWithMainCompletion:(id /* block */)arg1;
- (void)_startListeningForRestrictionsPINEntryNotification;
- (void)_stopListeningForRestrictionsPINEntryNotification;
- (void)_undoApprovalAnimationIfNeeded;
- (void)_unlockWithSuccessMainCompletion:(id /* block */)arg1;
- (void)_updateMainButtonVisibility;
- (void)_updateMainButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (id)_updateMessageLabelAndReturnHandleWithPhoneNumberFormat:(id)arg1 emailAddressFormat:(id)arg2 contactNameFormat:(id)arg3;
- (void)_updateOKButtonVisibility;
- (id /* block */)addBlockedContactHandler;
- (id /* block */)addContactHandler;
- (id)applicationName;
- (id)blockedContactsHandle;
- (id)bundleIdentifier;
- (id)communicationLimitView;
- (id)contactNameByHandle;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)customNextResponder;
- (void)dealloc;
- (bool)didFinishDismissing;
- (id)hourglassView;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 conversationContext:(id)arg2 contactStore:(id)arg3;
- (id)initWithWebsiteURL:(id)arg1;
- (bool)isForSnapshot;
- (id)mainButton;
- (bool)mainButtonAlwaysHidden;
- (id)messageLabel;
- (id)nextResponder;
- (id)okButton;
- (long long)okButtonAction;
- (bool)okButtonAlwaysHidden;
- (id)policyController;
- (void)setAddBlockedContactHandler:(id /* block */)arg1;
- (void)setAddContactHandler:(id /* block */)arg1;
- (void)setBlockedContactsHandle:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCommunicationLimitView:(id)arg1;
- (void)setCustomNextResponder:(id)arg1;
- (void)setDidFinishDismissing:(bool)arg1;
- (void)setForSnapshot:(bool)arg1;
- (void)setHourglassView:(id)arg1;
- (void)setMainButton:(id)arg1;
- (void)setMainButtonAlwaysHidden:(bool)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setNextResponder:(id)arg1;
- (void)setOkButton:(id)arg1;
- (void)setOkButtonAction:(long long)arg1;
- (void)setOkButtonAlwaysHidden:(bool)arg1;
- (void)setPolicyController:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setView:(id)arg1;
- (void)setViewControllerDelegate:(id)arg1;
- (void)stateDidChange:(unsigned long long)arg1;
- (id)titleLabel;
- (id)view;
- (id)viewControllerDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewIfLoaded;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactNavigationController : UINavigationController <CNAccountsAndGroupsViewControllerDelegate, CNContactContentViewControllerDelegate, CNContactListViewControllerDelegate, CNContactListViewControllerDelegateInternal, CNContactPickerPrivateDelegate, CNContactViewControllerAddContactPresenter, CNContactViewControllerDelegate, NSUserActivityDelegate, UIPopoverPresentationControllerDelegate> {
    CNAccountsAndGroupsDataSource * _accountsAndGroupsDataSource;
    CNAccountsAndGroupsViewController * _accountsAndGroupsViewController;
    CNUIUserActivityManager * _activityManager;
    UIBarButtonItem * _addContactBarButtonItem;
    UIKeyCommand * _addKeyCommand;
    bool  _allowsCanceling;
    bool  _allowsCardDeletion;
    bool  _allowsCardEditing;
    bool  _allowsContactBlocking;
    bool  _allowsContactBlockingAndReporting;
    bool  _allowsDone;
    bool  _allowsLargeTitles;
    <CNScheduler> * _backgroundScheduler;
    CNContactListStyleApplier * _contactListStyleApplier;
    CNContactListViewController * _contactListViewController;
    NSString * _contactPickerTargetGroupIdentifier;
    CNContactStore * _contactStore;
    CNContactStyle * _contactStyle;
    UIAlertController * _facebookContactsAlertController;
    CNUIGroupsAndContainersSaveManager * _groupsAndContainersSaveManager;
    bool  _hasPendingShowCard;
    bool  _hideGroupsButton;
    bool  _hideMailToGroupButton;
    long long  _hostIdiom;
    bool  _ignoresMapsData;
    long long  _leftButtonBehavior;
    unsigned long long  _limitedAccessContactCaption;
    int  _limitedAccessPickerType;
    UIBarButtonItem * _mailButtonItem;
    <CNScheduler> * _mainThreadScheduler;
    CNManagedConfiguration * _managedConfiguration;
    CNContactStoreDataSource * _nonServerDataSource;
    CNContactViewController * _presentedContactViewController;
    NSArray * _prohibitedPropertyKeys;
    CNContactViewController * _reusableContactViewController;
    long long  _rightButtonBehavior;
    NSNumber * _shouldShowAccountsAndGroupsCachedValue;
}

@property (nonatomic, retain) CNAccountsAndGroupsDataSource *accountsAndGroupsDataSource;
@property (nonatomic, retain) CNAccountsAndGroupsViewController *accountsAndGroupsViewController;
@property (nonatomic, retain) CNUIUserActivityManager *activityManager;
@property (nonatomic, retain) UIBarButtonItem *addContactBarButtonItem;
@property (nonatomic, retain) UIKeyCommand *addKeyCommand;
@property (nonatomic) bool allowsCanceling;
@property (nonatomic) bool allowsCardDeletion;
@property (nonatomic) bool allowsCardEditing;
@property (nonatomic) bool allowsContactBlocking;
@property (nonatomic) bool allowsContactBlockingAndReporting;
@property (nonatomic) bool allowsDone;
@property (nonatomic) bool allowsLargeTitles;
@property (nonatomic, readonly) <CNScheduler> *backgroundScheduler;
@property (nonatomic, retain) CNContactListStyleApplier *contactListStyleApplier;
@property (nonatomic, retain) NSString *contactPickerTargetGroupIdentifier;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (nonatomic, readonly) <CNContactDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CNContactNavigationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIAlertController *facebookContactsAlertController;
@property (nonatomic, retain) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (nonatomic) bool hasPendingShowCard;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideGroupsButton;
@property (nonatomic) bool hideMailToGroupButton;
@property (nonatomic) bool hidesSearchableSources;
@property (nonatomic) long long hostIdiom;
@property (nonatomic) bool ignoresMapsData;
@property (nonatomic) long long leftButtonBehavior;
@property (nonatomic) unsigned long long limitedAccessContactCaption;
@property (nonatomic) int limitedAccessPickerType;
@property (nonatomic, retain) UIBarButtonItem *mailButtonItem;
@property (nonatomic, readonly) <CNScheduler> *mainThreadScheduler;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, retain) CNContactStoreDataSource *nonServerDataSource;
@property (nonatomic) CNContactViewController *presentedContactViewController;
@property (nonatomic, retain) NSArray *prohibitedPropertyKeys;
@property (nonatomic, retain) CNContactViewController *reusableContactViewController;
@property (nonatomic) long long rightButtonBehavior;
@property (nonatomic, retain) NSNumber *shouldShowAccountsAndGroupsCachedValue;
@property (readonly) Class superclass;

+ (id)keyCommandForNewContact;
+ (void)moveViewController:(id)arg1 toParent:(id)arg2;
+ (id)newContactFormatter;

- (void).cxx_destruct;
- (void)_cnui_presentViewController:(id)arg1 animated:(bool)arg2 dismissingPresentedController:(bool)arg3 shouldHideContactListIfNeeded:(bool)arg4;
- (void)_updateUserActivity;
- (id)accountsAndGroupsDataSource;
- (id)accountsAndGroupsViewController;
- (bool)accountsAndGroupsViewController:(id)arg1 shouldEnableItemWithIdentifier:(id)arg2;
- (void)accountsAndGroupsViewControllerDidCancel:(id)arg1;
- (void)accountsAndGroupsViewControllerDidChangeList:(id)arg1;
- (void)accountsAndGroupsViewControllerDidFinish:(id)arg1;
- (void)accountsAndGroupsViewControllerDidGoBack:(id)arg1;
- (void)accountsAndGroupsViewControllerDidUpdateSelection:(id)arg1;
- (id)activityManager;
- (void)addContact:(id)arg1;
- (void)addContact:(id)arg1 animated:(bool)arg2;
- (id)addContactBarButtonItem;
- (id)addContactPresenter;
- (id)addKeyCommand;
- (id)allContactIdentifiers;
- (bool)allowsCanceling;
- (bool)allowsCardDeletion;
- (bool)allowsCardEditing;
- (bool)allowsContactBlocking;
- (bool)allowsContactBlockingAndReporting;
- (bool)allowsDone;
- (bool)allowsLargeTitles;
- (void)applicationDidResume;
- (id)backgroundScheduler;
- (void)beginSearch:(id)arg1;
- (bool)canAddContacts;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancel:(id)arg1;
- (void)cancelSearch:(id)arg1;
- (void)checkForFacebookContactsWithDelay:(double)arg1 allowAlert:(bool)arg2;
- (void)clearServerSearchIfNeeded:(id)arg1;
- (id)contactListStyleApplier;
- (id)contactListViewController;
- (bool)contactListViewController:(id)arg1 canSelectContact:(id)arg2;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 shouldScrollToContact:(bool)arg3;
- (void)contactListViewController:(id)arg1 shouldPresentContact:(id)arg2 shouldScrollToContact:(bool)arg3;
- (bool)contactListViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (void)contactListViewController:(id)arg1 updatedSelectedContact:(id)arg2;
- (void)contactListViewControllerSelectedAddContactToList:(id)arg1 withSourceView:(id)arg2;
- (void)contactListViewControllerSelectedCreateNewContact:(id)arg1;
- (void)contactPicker:(id)arg1 didCompleteWithNewContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (id)contactPickerTargetGroupIdentifier;
- (id)contactStore;
- (id)contactStyle;
- (void)contactStyleCurrentStyleDidChange:(id)arg1;
- (bool)contactSuggestionViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithNewContactFromPickerNewContactRow:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)createUserActivity;
- (id)currentlyDisplayedContact;
- (id)dataSource;
- (void)dataSourceChangedForContactListViewController:(id)arg1;
- (void)dealloc;
- (void)deleteContact:(id)arg1;
- (void)didFinishLimitedAccessSelection;
- (void)didResetLimitedAccessSelectionTo:(id)arg1;
- (void)didUpdateLimitedAccessSelection:(id)arg1;
- (void)dismissSearchAndSelectContact:(id)arg1 allowsMultiSelection:(bool)arg2;
- (void)done:(id)arg1;
- (void)editLimitedAccess;
- (void)executeAddContact;
- (id)facebookContactsAlertController;
- (id)firstVisibleContact;
- (id)groupsAndContainersSaveManager;
- (bool)hasPendingShowCard;
- (bool)hideGroupsButton;
- (bool)hideMailToGroupButton;
- (bool)hidesSearchableSources;
- (long long)hostIdiom;
- (bool)ignoresMapsData;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 allowsLargeTitles:(bool)arg2;
- (id)initWithDataSource:(id)arg1 contactFormatter:(id)arg2 applyGroupFilterFromPreferences:(bool)arg3 environment:(id)arg4 allowsLargeTitles:(bool)arg5;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 allowsLargeTitles:(bool)arg3;
- (bool)isAddContactButtonShowing;
- (bool)isContactProviderDataSource;
- (bool)isDisplayingAddNewContactViewController;
- (bool)isPresentedContactViewControllerVisible;
- (bool)isSinglePickerOnVisionOS;
- (long long)leftButtonBehavior;
- (unsigned long long)limitedAccessContactCaption;
- (int)limitedAccessPickerType;
- (id)mailButtonItem;
- (void)mailContacts:(id)arg1;
- (id)mainThreadScheduler;
- (id)managedConfiguration;
- (id)nextResponderForContactListViewController:(id)arg1;
- (id)nonServerDataSource;
- (void)notifyOtherFacebookContactsAlertDidSelectAction;
- (void)observeOtherFacebookContactsAlert;
- (void)otherFacebookContactsAlertDidSelectActionWithNotification:(id)arg1;
- (id)parentGroupForCurrentFilter;
- (void)popToContactListAndSaveChanges:(bool)arg1;
- (void)popToContactListAndSaveChanges:(bool)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)presentAddContactViewController:(id)arg1 animated:(bool)arg2;
- (void)presentAddToGroupPickerWithSourceView:(id)arg1;
- (void)presentErrorAlertWithTitle:(id)arg1 message:(id)arg2 animated:(bool)arg3;
- (void)presentGroupsViewController:(id)arg1;
- (void)presentGroupsViewControllerAnimated:(bool)arg1;
- (id)presentedContactViewController;
- (id)prohibitedPropertyKeys;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)refreshMailButtonEnabled;
- (void)resetContactViewController;
- (id)reusableContactViewController;
- (id)reuseableContactViewControllerConfiguredForContact:(id)arg1 mode:(long long)arg2;
- (long long)rightButtonBehavior;
- (void)scrollToContact:(id)arg1 animated:(bool)arg2;
- (void)searchForString:(id)arg1;
- (void)searchForString:(id)arg1 makeSearchBarFirstResponder:(bool)arg2;
- (void)selectNextContact:(id)arg1;
- (void)selectPreviousContact:(id)arg1;
- (void)setAccountsAndGroupsDataSource:(id)arg1;
- (void)setAccountsAndGroupsViewController:(id)arg1;
- (void)setActivityManager:(id)arg1;
- (void)setAddContactBarButtonItem:(id)arg1;
- (void)setAddKeyCommand:(id)arg1;
- (void)setAllowsCanceling:(bool)arg1;
- (void)setAllowsCardDeletion:(bool)arg1;
- (void)setAllowsCardEditing:(bool)arg1;
- (void)setAllowsContactBlocking:(bool)arg1;
- (void)setAllowsContactBlockingAndReporting:(bool)arg1;
- (void)setAllowsDone:(bool)arg1;
- (void)setAllowsLargeTitles:(bool)arg1;
- (void)setContactListStyleApplier:(id)arg1;
- (void)setContactPickerTargetGroupIdentifier:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setFacebookContactsAlertController:(id)arg1;
- (void)setGroupsAndContainersSaveManager:(id)arg1;
- (void)setHasPendingShowCard:(bool)arg1;
- (void)setHideGroupsButton:(bool)arg1;
- (void)setHideMailToGroupButton:(bool)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (void)setHostIdiom:(long long)arg1;
- (void)setIgnoresMapsData:(bool)arg1;
- (void)setLeftButtonBehavior:(long long)arg1;
- (void)setLimitedAccessContactCaption:(unsigned long long)arg1;
- (void)setLimitedAccessPickerType:(int)arg1;
- (void)setMailButtonItem:(id)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setNonServerDataSource:(id)arg1;
- (void)setPresentedContactViewController:(id)arg1;
- (void)setProhibitedPropertyKeys:(id)arg1;
- (void)setReusableContactViewController:(id)arg1;
- (void)setRightButtonBehavior:(long long)arg1;
- (void)setShouldDisplayMeContactBanner:(bool)arg1;
- (void)setShouldShowAccountsAndGroupsCachedValue:(id)arg1;
- (void)setUpAccountAndGroupsViewIfNeeded;
- (void)setUpLargeTitles;
- (bool)shouldDisplayMeContactBanner;
- (bool)shouldFlipDirectionWhenChangingSelectionWithKey:(id)arg1;
- (bool)shouldShowAccountsAndGroups;
- (id)shouldShowAccountsAndGroupsCachedValue;
- (bool)shouldShowAddToGroupPicker;
- (bool)shouldShowGroupsBackButton;
- (bool)shouldShowLeftCancelAndRightAddButton;
- (bool)shouldShowLeftCancelAndRightDoneButton;
- (bool)shouldShowLeftCloseAndRightGroupsButton;
- (bool)shouldShowLeftDoneAndRightAddButton;
- (bool)shouldShowLeftDoneAndRightEditButton;
- (bool)shouldShowMailButton;
- (bool)shouldShowRightAddAndCancelButton;
- (bool)shouldShowRightAddButton;
- (bool)shouldShowRightCancelButton;
- (void)showAllContactsList;
- (void)showAllContactsListAnimated:(bool)arg1;
- (void)showCardForContact:(id)arg1 animated:(bool)arg2;
- (void)showCardForContact:(id)arg1 animated:(bool)arg2 scrollToContact:(bool)arg3;
- (void)showCardForContact:(id)arg1 resetFilter:(bool)arg2 resetSearch:(bool)arg3 fallbackToFirstContact:(bool)arg4 scrollToContact:(bool)arg5 animated:(bool)arg6;
- (void)showCardForContact:(id)arg1 resetFilter:(bool)arg2 resetSearch:(bool)arg3 fallbackToFirstContact:(bool)arg4 scrollToContact:(bool)arg5 animated:(bool)arg6 dismissingPresentedController:(bool)arg7;
- (void)showCardForContact:(id)arg1 resetFilter:(bool)arg2 resetSearch:(bool)arg3 fallbackToFirstContact:(bool)arg4 scrollToContact:(bool)arg5 animated:(bool)arg6 dismissingPresentedController:(bool)arg7 shouldHideContactListIfNeeded:(bool)arg8;
- (void)showCardForContactAfterIndexPath:(id)arg1;
- (void)showCardForContactBeforeIndexPath:(id)arg1;
- (void)showCardForContactIfPossible:(id)arg1;
- (void)showNewDraftContact:(id)arg1 animated:(bool)arg2;
- (void)startEditingPresentedContact;
- (id)targetContainerForNewContactWithTargetGroup:(id)arg1;
- (id)targetGroupForNewContact;
- (id)tipKitContext;
- (void)toggleEditContact:(id)arg1;
- (void)toggleGroupsPanel:(id)arg1;
- (void)updateLeftNavigationButtonAnimated:(bool)arg1;
- (void)updateNavigationButtonsAnimated:(bool)arg1;
- (void)updateNavigationButtonsAnimated:(bool)arg1 viewWillAppear:(bool)arg2;
- (void)updateNavigationButtonsInSearchMode:(bool)arg1;
- (void)updateNavigationButtonsInSearchMode:(bool)arg1 animated:(bool)arg2;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivityRepresentingCurrentlyDisplayedContact;
- (id)userActivityRepresentingGroupsView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

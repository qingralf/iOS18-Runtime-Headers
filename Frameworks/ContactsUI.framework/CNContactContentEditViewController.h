/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactContentEditViewController : UIViewController <CNContactActionDelegate, CNContactContainerPickerViewControllerDelegate, CNContactContentNavigationItemProviding, CNContactContentNavigationItemTarget, CNContactContentViewControllerDelegate, CNContactGroupPickerDelegate, CNContactHeaderViewDelegate, CNContactInlineActionsViewControllerDelegate_Internal, CNPresenterDelegate, CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNShareLocationProtocol, CNUIContactSaveDelegate, CNUIGeminiDataSourceDelegate, CNUIObjectViewControllerDelegate, NSUserActivityDelegate, UIAdaptivePresentationControllerDelegate, UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIViewControllerRestoration> {
    CNContactActionProvider * _actionProvider;
    NSArray * _activatedConstraints;
    CNUIUserActivityManager * _activityManager;
    CNContactAddLinkedCardAction * _addLinkedCardAction;
    CNContactAddNewFieldAction * _addNewFieldAction;
    CNContactAddStaticIdentityAction * _addStaticIdentityAction;
    int  _animating;
    NSMapTable * _cachedLabelWidths;
    UIKeyCommand * _cancelCommand;
    NSArray * _cardActions;
    CNCardGroup * _cardEditingActionsGroup;
    CNCardContactContainerGroup * _cardEditingContactContainerGroup;
    CNCardGroup * _cardEditingDeleteContactGroup;
    CNCardPropertyGeminiGroup * _cardEditingGeminiGroup;
    CNCardLinkedCardsGroup * _cardLinkedCardsGroup;
    CNCardGroup * _cardMedicalIDGroup;
    CNCardStaticIdentityGroup * _cardStaticIdentityGroup;
    CNContact * _contact;
    CNContactFormatter * _contactFormatter;
    CNContactHeaderEditView * _contactHeaderView;
    CNContactStore * _contactStore;
    CNContactView * _contactView;
    CNContactViewCache * _contactViewCache;
    CNContactContentViewControllerConfiguration * _contactViewConfiguration;
    CNUIContainerContext * _containerContext;
    CNContactContainerPickerViewController * _containerPicker;
    NSArray * _customActions;
    <CNContactContentEditViewControllerDelegate> * _delegate;
    CNContactAction * _deleteContactAction;
    bool  _didSetFirstResponder;
    bool  _didSetNewContact;
    bool  _disablingRotation;
    NSMutableArray * _editingGroups;
    NSMutableArray * _editingLinkedContacts;
    CNEmergencyContactAction * _emergencyContactAction;
    NSString * _emergencyNumberIdentifier;
    CNUIContactsEnvironment * _environment;
    NSArray * _extraLeftBarButtonItems;
    NSArray * _extraRightBarButtonItems;
    bool  _forcesTransparentBackground;
    CNUIGeminiDataSource * _geminiDataSource;
    NSMutableDictionary * _groupsAfterGroup;
    UIView * _headerDropShadowView;
    NSLayoutConstraint * _headerHeightConstraint;
    HKHealthStore * _healthStore;
    NSArray * _highlightedProperties;
    bool  _highlightedPropertyImportant;
    CNContactAction * _ignoreContactAction;
    NSString * _initialPrompt;
    bool  _isPresentingFullscreenForOutOfProcess;
    NSMutableArray * _issuedSaveRequestIdentifiers;
    double  _keyboardVerticalOverlap;
    CNPropertyLinkedCardsAction * _linkedCardsAction;
    NSDictionary * _linkedPoliciesByContactIdentifier;
    CNManagedConfiguration * _managedConfiguration;
    CNMedicalIDAction * _medicalIDAction;
    <CNCancelable> * _medicalIDLookupToken;
    <CNHealthStoreManagerToken> * _medicalIDRegistrationToken;
    NSArray * _missingRequiredKeys;
    long long  _mode;
    CNMutableContact * _mutableContact;
    NSArray * _nameEditingGroups;
    bool  _navBarWasVisibleWhenPresented;
    CNContactContentNavigationItemUpdater * _navItemUpdater;
    <CNContactContentNavigationItemDelegate> * _navigationItemDelegate;
    bool  _needsRefetch;
    bool  _needsReload;
    CNPropertyNoteCell * _noteCell;
    NSArray * _originalContacts;
    CNContainer * _parentContainer;
    CNGroup * _parentGroup;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _peripheryInsets;
    CNPolicy * _policy;
    NSArray * _preEditLeftBarButtonItems;
    <CNPresenterDelegate> * _presentingDelegate;
    NSArray * _prohibitedPropertyKeys;
    NSDictionary * _propertyGroups;
    CNPropertyGroupsDataSource * _propertyGroupsDataSource;
    CNContactRecentsReference * _recentsData;
    bool  _runningPPT;
    UIKeyCommand * _saveCommand;
    <CNUIContactSaveExecutor> * _saveContactExecutor;
    <CNUIContactSaveExecutor> * _saveLinkedContactsExecutor;
    bool  _saving;
    CNContactSelectContainersAction * _selectContainersAction;
    CNMutableContact * _shadowCopyOfReadonlyContact;
    bool  _shouldDrawNavigationBar;
    bool  _shouldIgnoreContactStoreDidChangeNotification;
    bool  _showingMeContact;
    CNSiriContactContextProvider * _siriContextProvider;
    CNPropertyStaticIdentityAction * _staticIdentityAction;
    CNContactSuggestionAction * _suggestedContactAction;
    bool  _supportsDrafts;
    NSDictionary * _userActivityUserInfo;
    bool  isPresentingModalViewController;
}

@property (nonatomic, retain) CNContactActionProvider *actionProvider;
@property (nonatomic, retain) NSArray *activatedConstraints;
@property (nonatomic, readonly) CNUIUserActivityManager *activityManager;
@property (nonatomic, retain) CNContactAddLinkedCardAction *addLinkedCardAction;
@property (nonatomic, retain) CNContactAddNewFieldAction *addNewFieldAction;
@property (nonatomic, retain) CNContactAddStaticIdentityAction *addStaticIdentityAction;
@property (nonatomic, retain) NSMapTable *cachedLabelWidths;
@property (nonatomic, retain) UIKeyCommand *cancelCommand;
@property (nonatomic, readonly) NSArray *cardActions;
@property (nonatomic, retain) CNCardGroup *cardEditingActionsGroup;
@property (nonatomic, retain) CNCardContactContainerGroup *cardEditingContactContainerGroup;
@property (nonatomic, retain) CNCardGroup *cardEditingDeleteContactGroup;
@property (nonatomic, retain) CNCardPropertyGeminiGroup *cardEditingGeminiGroup;
@property (nonatomic, retain) CNCardLinkedCardsGroup *cardLinkedCardsGroup;
@property (nonatomic, retain) CNCardGroup *cardMedicalIDGroup;
@property (nonatomic, retain) CNCardStaticIdentityGroup *cardStaticIdentityGroup;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) CNContactHeaderEditView *contactHeaderView;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNContactView *contactView;
@property (nonatomic, readonly) CNContactViewCache *contactViewCache;
@property (nonatomic, retain) CNContactContentViewControllerConfiguration *contactViewConfiguration;
@property (nonatomic, retain) CNUIContainerContext *containerContext;
@property (nonatomic, retain) CNContactContainerPickerViewController *containerPicker;
@property (nonatomic, retain) NSArray *customActions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CNContactContentEditViewControllerDelegate> *delegate;
@property (nonatomic, retain) CNContactAction *deleteContactAction;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSetFirstResponder;
@property (nonatomic) bool didSetNewContact;
@property (nonatomic, readonly) UIBarButtonItem *doneButtonItem;
@property (nonatomic, retain) NSMutableArray *editingGroups;
@property (nonatomic, retain) NSMutableArray *editingLinkedContacts;
@property (nonatomic, readonly) UINavigationItem *effectiveNavigationItem;
@property (nonatomic, retain) CNEmergencyContactAction *emergencyContactAction;
@property (nonatomic, retain) NSString *emergencyNumberIdentifier;
@property (nonatomic, readonly) CNUIContactsEnvironment *environment;
@property (nonatomic, retain) NSArray *extraLeftBarButtonItems;
@property (nonatomic, retain) NSArray *extraRightBarButtonItems;
@property (nonatomic) bool forcesTransparentBackground;
@property (nonatomic, readonly) CNUIGeminiDataSource *geminiDataSource;
@property (nonatomic, retain) NSMutableDictionary *groupsAfterGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerDropShadowView;
@property (nonatomic, retain) NSLayoutConstraint *headerHeightConstraint;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) NSArray *highlightedProperties;
@property (nonatomic) bool highlightedPropertyImportant;
@property (nonatomic, retain) CNContactAction *ignoreContactAction;
@property (nonatomic, retain) NSString *initialPrompt;
@property (nonatomic) bool isPresentingFullscreenForOutOfProcess;
@property (readonly) bool isPresentingModalViewController;
@property (nonatomic, retain) NSMutableArray *issuedSaveRequestIdentifiers;
@property (nonatomic) double keyboardVerticalOverlap;
@property (nonatomic, retain) CNPropertyLinkedCardsAction *linkedCardsAction;
@property (nonatomic, retain) NSDictionary *linkedPoliciesByContactIdentifier;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, retain) CNMedicalIDAction *medicalIDAction;
@property (nonatomic, retain) <CNCancelable> *medicalIDLookupToken;
@property (nonatomic, retain) <CNHealthStoreManagerToken> *medicalIDRegistrationToken;
@property (nonatomic, retain) NSArray *missingRequiredKeys;
@property (nonatomic) long long mode;
@property (nonatomic, retain) CNMutableContact *mutableContact;
@property (nonatomic, retain) NSArray *nameEditingGroups;
@property (nonatomic, retain) CNContactContentNavigationItemUpdater *navItemUpdater;
@property (nonatomic) <CNContactContentNavigationItemDelegate> *navigationItemDelegate;
@property (nonatomic, retain) CNPropertyNoteCell *noteCell;
@property (nonatomic, retain) NSArray *originalContacts;
@property (nonatomic, retain) CNContainer *parentContainer;
@property (nonatomic, retain) CNGroup *parentGroup;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic, retain) CNPolicy *policy;
@property (nonatomic, retain) NSArray *preEditLeftBarButtonItems;
@property (nonatomic) <CNPresenterDelegate> *presentingDelegate;
@property (nonatomic, retain) NSArray *prohibitedPropertyKeys;
@property (nonatomic, readonly) NSDictionary *propertyGroups;
@property (nonatomic, retain) CNPropertyGroupsDataSource *propertyGroupsDataSource;
@property (nonatomic, retain) CNContactRecentsReference *recentsData;
@property (nonatomic) bool runningPPT;
@property (nonatomic, retain) UIKeyCommand *saveCommand;
@property (nonatomic, retain) <CNUIContactSaveExecutor> *saveContactExecutor;
@property (nonatomic, retain) <CNUIContactSaveExecutor> *saveLinkedContactsExecutor;
@property (nonatomic, retain) CNContactSelectContainersAction *selectContainersAction;
@property (nonatomic, retain) CNMutableContact *shadowCopyOfReadonlyContact;
@property (nonatomic) bool shouldDrawNavigationBar;
@property (nonatomic) bool shouldIgnoreContactStoreDidChangeNotification;
@property (nonatomic) bool showingMeContact;
@property (nonatomic, retain) CNSiriContactContextProvider *siriContextProvider;
@property (nonatomic, retain) CNPropertyStaticIdentityAction *staticIdentityAction;
@property (nonatomic, retain) CNContactSuggestionAction *suggestedContactAction;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsDrafts;
@property (nonatomic, retain) NSDictionary *userActivityUserInfo;

+ (void)_telemetryForContact:(id)arg1;
+ (id)boolStateRestorationProperties;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysForContact:(id)arg1;
+ (id)descriptorForRequiredKeysWithDescription:(id)arg1;
+ (bool)enablesTransportButtons;
+ (bool)shouldShowGeminiForResult:(id)arg1 contact:(id)arg2;
+ (long long)tableViewStyle;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)_addGroup:(id)arg1 afterGroup:(id)arg2 forTableView:(id)arg3 animated:(bool)arg4;
- (id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2;
- (id)_addLinkedCardAction;
- (void)_addMedicalIDGroupAnimated:(bool)arg1 forTableView:(id)arg2;
- (id)_addNewFieldAction;
- (void)_addedGroupWithName:(id)arg1;
- (id)_cardGroupAtTableViewSectionIndex:(long long)arg1 forTableView:(id)arg2;
- (id)_cellForIndexPath:(id)arg1 forTableView:(id)arg2;
- (id)_cellIdentifierForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_currentGroupsForTableView:(id)arg1;
- (id)_currentTopVisibleGroupInContactView:(id)arg1;
- (void)_didCompleteWithContact:(id)arg1;
- (bool)_indexPathIsActionItem:(id)arg1 forTableView:(id)arg2;
- (id)_itemAtIndexPath:(id)arg1 forTableView:(id)arg2;
- (id)_labelWidthKeyForGroup:(id)arg1;
- (id)_labelWidthKeyForItem:(id)arg1;
- (id)_linkedCardsAction;
- (id)_loadEditingGroupsPreservingChanges:(bool)arg1;
- (id)_loadNameEditingGroups;
- (id)_loadPropertyGroups;
- (long long)_modalPresentationStyleForViewController:(id)arg1;
- (bool)_modelHasChanges;
- (bool)_modelIsEmpty;
- (id)_phoneticNameForValue:(id)arg1 currentPhoneticName:(id)arg2 property:(id)arg3;
- (id)_policyForContact:(id)arg1 mode:(long long)arg2;
- (id)_propertyGroupsForKeys:(id)arg1;
- (void)_refetchContact;
- (void)_reloadContainerContextPreservingChanges:(bool)arg1;
- (void)_reloadGeminiGroupPreservingChanges:(bool)arg1;
- (void)_reloadLinkedCardsGroup;
- (void)_reloadMedicalIDGroup;
- (void)_reloadPropertyGroupsPreservingChanges:(bool)arg1;
- (void)_reloadStaticIdentityGroup;
- (id)_removeUnauthorizedKeysFromContact:(id)arg1;
- (void)_saveChangesForGroups:(id)arg1;
- (void)_scrollContactView:(id)arg1 toVisibleGroup:(id)arg2;
- (id)_selectContainersAction;
- (void)_setNeedsUpdateCachedLabelWidths;
- (void)_setupEditingCardActions;
- (void)_setupEditingLinkedContactsForKeys:(id)arg1;
- (void)_setupSuggestionActions;
- (void)_updateCachedLabelWidths;
- (void)_updateCachedLabelWidthsForGroup:(id)arg1;
- (void)_updateCachedLabelWidthsForItem:(id)arg1;
- (void)_updateCachedLabelWidthsIfNeeded;
- (id)_updateContact:(id)arg1 withMissingKeysFromRequiredKeys:(id)arg2;
- (void)_updateLabelWidthForCell:(id)arg1;
- (void)_updateLabelWidthForCellsInGroup:(id)arg1 forTableView:(id)arg2 reset:(bool)arg3;
- (void)_updateLabelWidthsForAllVisibleCells;
- (void)_updateUserActivity;
- (void)_validateGroup:(id)arg1;
- (id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)actionDidFinish:(id)arg1;
- (id)actionProvider;
- (void)actionWasCanceled:(id)arg1;
- (id)activatedConstraints;
- (id)activityManager;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)addCardGroup:(id)arg1 afterGroup:(id)arg2;
- (void)addEditingItemAtIndexPath:(id)arg1 forTableView:(id)arg2;
- (id)addLinkedCardAction;
- (void)addLinkedContact:(id)arg1;
- (id)addNewFieldAction;
- (void)addStaticIdentity:(id)arg1;
- (id)addStaticIdentityAction;
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;
- (id)alreadyPickedGroups;
- (id)applyContactStyle;
- (id)cachedLabelWidths;
- (bool)canBecomeFirstResponder;
- (void)cancelAsyncLookups;
- (id)cancelCommand;
- (id)cardActions;
- (id)cardEditingActionsGroup;
- (id)cardEditingContactContainerGroup;
- (id)cardEditingDeleteContactGroup;
- (id)cardEditingGeminiGroup;
- (id)cardGroupForProperty:(id)arg1;
- (id)cardLinkedCardsGroup;
- (id)cardMedicalIDGroup;
- (id)cardStaticIdentityGroup;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centeredSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContactView:(id)arg2;
- (void)cleanupRecentImageMetadata;
- (void)cleanupRecentMetadata;
- (void)cleanupRecentPosterMetadata;
- (void)clearMapsDataIfEdited;
- (id)contact;
- (id)contactFormatter;
- (void)contactGroupPickerDidCancel:(id)arg1;
- (void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2;
- (id)contactHeaderView;
- (id)contactStore;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (id)contactView;
- (id)contactViewCache;
- (id)contactViewConfiguration;
- (void)contactViewConfigurationDidUpdate;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (id)containerContext;
- (id)containerPicker;
- (double)contentOffsetYForGlobalHeaderHeight:(double)arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)createCardEditingContactContainerGroupIfNeeded;
- (void)createCardEditingGeminiGroupIfNeeded;
- (void)createdNewContact:(id)arg1;
- (id)customActions;
- (void)dealloc;
- (id)delegate;
- (id)deleteContactAction;
- (double)desiredHeightForWidth:(double)arg1;
- (void)didChangeToEditMode:(bool)arg1;
- (void)didChangeToShowTitle:(bool)arg1;
- (bool)didSetFirstResponder;
- (bool)didSetNewContact;
- (id)doneButtonItem;
- (void)editCancel;
- (void)editCancel:(id)arg1;
- (id)editingGroups;
- (id)editingLinkedContacts;
- (id)effectiveNavigationItem;
- (id)emergencyContactAction;
- (id)emergencyNumberIdentifier;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)environment;
- (id)extraLeftBarButtonItems;
- (id)extraRightBarButtonItems;
- (void)favoritesDidChangeWithNotification:(id)arg1;
- (void)finishEditing;
- (void)finishEditing:(id)arg1;
- (void)focusOnFirstEditingItemIfNeeded;
- (void)focusOnLastEditingItemInGroup:(id)arg1;
- (bool)forcesTransparentBackground;
- (id)geminiDataSource;
- (void)geminiDataSourceDidUpdate:(id)arg1;
- (double)globalHeaderHeightForContentOffset:(double)arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (Class)groupClassForProperty:(id)arg1;
- (unsigned long long)groupIndexFromTableViewSectionIndex:(unsigned long long)arg1 forTableView:(id)arg2;
- (id)groupsAfterGroup;
- (bool)hasPendingChanges;
- (id)headerDropShadowView;
- (id)headerHeightConstraint;
- (void)headerPhotoDidUpdate;
- (void)headerView:(id)arg1 didAcceptDropOfImageData:(id)arg2;
- (void)headerViewDidChangeHeight:(id)arg1;
- (void)headerViewDidPickPreferredChannel:(id)arg1;
- (void)headerViewDidUpdateLabelSizes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerViewSafeAreaInsets;
- (bool)headerViewShouldCacheContactBackgroundColor:(id)arg1;
- (id)healthStore;
- (id)highlightedProperties;
- (bool)highlightedPropertyImportant;
- (id)hostingViewControllerForController:(id)arg1;
- (id)ignoreContactAction;
- (id)indexPathOfDisplayedPropertyItem:(id)arg1;
- (id)indexPathOfEditingPropertyItem:(id)arg1;
- (id)indexPathOfPropertyItem:(id)arg1 editing:(bool)arg2;
- (id)initWithContact:(id)arg1 contactViewConfiguration:(id)arg2;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initialPrompt;
- (void)initializeTableViewsForHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForContactTableView:(id)arg1;
- (bool)isHeaderViewPhotoProhibited;
- (bool)isModalInPresentation;
- (bool)isNicknameProhibited;
- (bool)isOutOfProcess;
- (bool)isPresentingFullscreenForOutOfProcess;
- (bool)isPresentingModalViewController;
- (bool)isScrollViewControllingHeaderResizeAnimation:(id)arg1;
- (bool)isStandardGroup:(id)arg1;
- (bool)isSuggestedContact;
- (id)issuedSaveRequestIdentifiers;
- (void)keyboardDidShowNotification:(id)arg1;
- (double)keyboardVerticalOverlap;
- (void)keyboardWillHideNotification:(id)arg1;
- (id)linkedCardsAction;
- (id)linkedPoliciesByContactIdentifier;
- (void)loadContactViewControllerViews;
- (void)loadView;
- (void)localeDidChange:(id)arg1;
- (id)managedConfiguration;
- (id)medicalIDAction;
- (id)medicalIDLookupToken;
- (id)medicalIDRegistrationToken;
- (id)missingRequiredKeys;
- (long long)mode;
- (id)mutableContact;
- (id)nameEditingGroups;
- (id)navItemUpdater;
- (double)navigationBarHeight;
- (id)navigationItemController;
- (id)navigationItemDelegate;
- (bool)needsReload;
- (id)noteCell;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)originalContacts;
- (id)parentContainer;
- (id)parentGroup;
- (void)performConfirmedCancel;
- (bool)performSave;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (id)policy;
- (id)preEditLeftBarButtonItems;
- (void)prepareCell:(id)arg1;
- (void)prepareContactDidAppearForPPT;
- (void)presentConfirmCancelAlertController;
- (void)presentViewController:(id)arg1 sourceView:(id)arg2;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)presentingDelegate;
- (id)prohibitedPropertyKeys;
- (void)propertyCell:(id)arg1 didDeleteLabel:(id)arg2 forGroup:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (id)propertyGroups;
- (id)propertyGroupsDataSource;
- (void)propertyItem:(id)arg1 willChangeValue:(id)arg2;
- (id)recentsData;
- (void)reloadCardGroup:(id)arg1 forTableView:(id)arg2;
- (bool)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)reloadUnifiedContact;
- (void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2 forTableView:(id)arg3;
- (void)removeLinkedContact:(id)arg1;
- (struct CGSize { double x1; double x2; })requiredSizeForVisibleTableView;
- (bool)runningPPT;
- (bool)saveChanges;
- (id)saveCommand;
- (id)saveContactExecutor;
- (id)saveDescriptionForCurrentState;
- (id)saveLinkedContactsExecutor;
- (void)saveModelChangesToContact;
- (void)saveNewContactDraft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollIndicatorInsetsForContactTableView:(id)arg1 withContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)scrollScrollViewAllTheWayUp:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (long long)sectionOfGroup:(id)arg1 inTableView:(id)arg2;
- (id)selectContainersAction;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)setActionProvider:(id)arg1;
- (void)setActivatedConstraints:(id)arg1;
- (void)setAddLinkedCardAction:(id)arg1;
- (void)setAddNewFieldAction:(id)arg1;
- (void)setAddStaticIdentityAction:(id)arg1;
- (void)setBackgroundColorIfNeededForPresentedViewController:(id)arg1;
- (void)setCachedLabelWidths:(id)arg1;
- (void)setCancelCommand:(id)arg1;
- (void)setCancelKeyboardShortcutEnabled:(bool)arg1;
- (void)setCardEditingActionsGroup:(id)arg1;
- (void)setCardEditingContactContainerGroup:(id)arg1;
- (void)setCardEditingDeleteContactGroup:(id)arg1;
- (void)setCardEditingGeminiGroup:(id)arg1;
- (void)setCardLinkedCardsGroup:(id)arg1;
- (void)setCardMedicalIDGroup:(id)arg1;
- (void)setCardStaticIdentityGroup:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setContactHeaderView:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactView:(id)arg1;
- (void)setContactViewConfiguration:(id)arg1;
- (void)setContainerContext:(id)arg1;
- (void)setContainerPicker:(id)arg1;
- (void)setCustomActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteContactAction:(id)arg1;
- (void)setDidSetFirstResponder:(bool)arg1;
- (void)setDidSetNewContact:(bool)arg1;
- (void)setEditingGroups:(id)arg1;
- (void)setEditingLinkedContacts:(id)arg1;
- (void)setEmergencyContactAction:(id)arg1;
- (void)setEmergencyNumberIdentifier:(id)arg1;
- (void)setExtraLeftBarButtonItems:(id)arg1;
- (void)setExtraRightBarButtonItems:(id)arg1;
- (void)setForcesTransparentBackground:(bool)arg1;
- (void)setGroupsAfterGroup:(id)arg1;
- (void)setHeaderDropShadowView:(id)arg1;
- (void)setHeaderHeightConstraint:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setHighlightedProperties:(id)arg1;
- (void)setHighlightedPropertyImportant:(bool)arg1;
- (void)setIgnoreContactAction:(id)arg1;
- (void)setInitialPrompt:(id)arg1;
- (void)setIsPresentingFullscreenForOutOfProcess:(bool)arg1;
- (void)setIssuedSaveRequestIdentifiers:(id)arg1;
- (void)setKeyboardVerticalOverlap:(double)arg1;
- (void)setLinkedCardsAction:(id)arg1;
- (void)setLinkedPoliciesByContactIdentifier:(id)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setMedicalIDAction:(id)arg1;
- (void)setMedicalIDLookupToken:(id)arg1;
- (void)setMedicalIDRegistrationToken:(id)arg1;
- (void)setMenuProviderForCell:(id)arg1 forActionGroupItem:(id)arg2;
- (void)setMissingRequiredKeys:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setMutableContact:(id)arg1;
- (void)setNameEditingGroups:(id)arg1;
- (void)setNavItemUpdater:(id)arg1;
- (void)setNavigationItemDelegate:(id)arg1;
- (void)setNeedsReload;
- (void)setNeedsReloadLazy;
- (void)setNoteCell:(id)arg1;
- (void)setOriginalContacts:(id)arg1;
- (void)setParentContainer:(id)arg1;
- (void)setParentGroup:(id)arg1;
- (void)setPolicy:(id)arg1;
- (void)setPreEditLeftBarButtonItems:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setProhibitedPropertyKeys:(id)arg1;
- (void)setPropertyGroupsDataSource:(id)arg1;
- (void)setRecentsData:(id)arg1;
- (void)setRunningPPT:(bool)arg1;
- (void)setSaveCommand:(id)arg1;
- (void)setSaveContactExecutor:(id)arg1;
- (void)setSaveKeyboardShortcutEnabled:(bool)arg1;
- (void)setSaveLinkedContactsExecutor:(id)arg1;
- (void)setSelectContainersAction:(id)arg1;
- (void)setShadowCopyOfReadonlyContact:(id)arg1;
- (void)setShouldDrawNavigationBar:(bool)arg1;
- (void)setShouldIgnoreContactStoreDidChangeNotification:(bool)arg1;
- (void)setShowingMeContact:(bool)arg1;
- (void)setSiriContextProvider:(id)arg1;
- (void)setStaticIdentityAction:(id)arg1;
- (void)setSuggestedContactAction:(id)arg1;
- (void)setSupportsDrafts:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserActivityUserInfo:(id)arg1;
- (void)setupActionsPreservingChanges:(bool)arg1;
- (void)setupConstraints;
- (void)setupContainerContextIfNeededForContact:(id)arg1;
- (struct CGSize { double x1; double x2; })setupTableHeaderView;
- (void)setupViewHierarchyIncludingAvatarHeader:(bool)arg1;
- (id)shadowCopyOfReadonlyContact;
- (bool)shouldAllowContainerPicking;
- (bool)shouldDisplayAvatarHeaderView;
- (bool)shouldDrawNavigationBar;
- (bool)shouldIgnoreContactStoreDidChangeNotification;
- (bool)shouldPresentConfirmCancelAlert;
- (bool)shouldReallyShowLinkedContacts;
- (bool)shouldShowActionsForAvatarView:(id)arg1;
- (bool)shouldShowGemini;
- (bool)showingMeContact;
- (id)siriContextProvider;
- (id)staticIdentityAction;
- (id)suggestedContactAction;
- (bool)supportsDrafts;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (unsigned long long)tableViewSectionIndexFromGroupIndex:(unsigned long long)arg1 forTableView:(id)arg2;
- (void)toggleEditing;
- (void)toggleEditing:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)updateContactsViewWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateDoneButton;
- (void)updateEditNavigationItemsAnimated:(bool)arg1;
- (void)updateEditPhotoButtonIfNeeded;
- (double)updateHeaderConstraintForGlobalHeaderHeight:(double)arg1 direction:(long long)arg2 animated:(bool)arg3;
- (void)updateHeaderHeightToMatchScrollViewState:(id)arg1 scrollDirection:(long long)arg2 animated:(bool)arg3;
- (void)updateInsetsIfNeededForTableView:(id)arg1;
- (void)updateOutOfProcessFullscreenPresentationIfNeeded;
- (void)updateTableView:(id)arg1 contentInsetsTo:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 withScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)updateUserActivityState:(id)arg1;
- (void)updateViewConstraints;
- (void)updateWindowTitleForAppearing:(bool)arg1;
- (void)updateWithNewContact:(id)arg1;
- (void)updatedExistingContact:(id)arg1;
- (id)userActivityUserInfo;
- (void)viewController:(id)arg1 presentationControllerWillDismiss:(id)arg2;
- (id)viewControllerForHeaderView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
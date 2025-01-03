/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNavbarCanvasViewController : UIViewController <CKDetailsContactsManagerDelegate, CKNavBarConversationIdentityViewDelegate, CKNavBarPersistentMenuManagerDelegate, CKNavBarUnifiedCallButtonDelegate, CKNavigationBarCanvasViewDelegate, UIGestureRecognizerDelegate> {
    CKCanvasBackButtonView * _backButtonView;
    UIButton * _callButton;
    bool  _canShowBackButtonView;
    CKNavigationBarCanvasView * _canvasView;
    UIButton * _closeButton;
    CKDetailsContactsManager * _contactsManager;
    CKConversation * _conversation;
    CKNavBarConversationIdentityView * _conversationIdentityView;
    CKLabel * _defaultLabel;
    UIViewController<CKNavbarCanvasViewControllerDelegate> * _delegate;
    UIBarButtonItem * _detailsBarButton;
    UIButton * _detailsButton;
    UIButton * _doneButton;
    UIButton * _editCancelButtonView;
    bool  _editing;
    bool  _hasConfiguredCallButtonAudioRouteActions;
    long long  _indicatorType;
    bool  _isInEditingMode;
    UILabel * _locationLabel;
    bool  _locationLabelHidden;
    IMFindMyLocation * _locationToDisplay;
    NSDictionary * _modernScreenSharingCapabilities;
    long long  _navBarContext;
    NSString * _navbarTitle;
    _TtC7ChatKit29CKNavBarPersistentMenuManager * _persistentMenuManager;
    UINavigationController * _proxyNavigationController;
    bool  _shouldDisplayParticipantLocationWhenAvailable;
    bool  _shouldShowDoneButton;
    CNContactStore * _suggestionsEnabledContactStore;
    CKNavBarUnifiedCallButton * _unifiedCallButton;
}

@property (nonatomic, readonly) UIView *avatarView;
@property (nonatomic, retain) CKCanvasBackButtonView *backButtonView;
@property (nonatomic, retain) UIButton *callButton;
@property (nonatomic) bool canShowBackButtonView;
@property (nonatomic, retain) CKNavigationBarCanvasView *canvasView;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, retain) CKDetailsContactsManager *contactsManager;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic, retain) CKNavBarConversationIdentityView *conversationIdentityView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) CKLabel *defaultLabel;
@property (nonatomic) UIViewController<CKNavbarCanvasViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *detailsBarButton;
@property (nonatomic, retain) UIButton *detailsButton;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, retain) UIButton *editCancelButtonView;
@property (nonatomic) bool editing;
@property (nonatomic, readonly) bool findMyNavBarEnabled;
@property (nonatomic) bool hasConfiguredCallButtonAudioRouteActions;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indicatorType;
@property (nonatomic) bool isInEditingMode;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic) bool locationLabelHidden;
@property (nonatomic, retain) IMFindMyLocation *locationToDisplay;
@property (nonatomic, retain) NSDictionary *modernScreenSharingCapabilities;
@property (nonatomic) long long navBarContext;
@property (nonatomic, retain) NSString *navbarTitle;
@property (nonatomic, retain) _TtC7ChatKit29CKNavBarPersistentMenuManager *persistentMenuManager;
@property (nonatomic) UINavigationController *proxyNavigationController;
@property (nonatomic) bool shouldDisplayParticipantLocationWhenAvailable;
@property (nonatomic) bool shouldShowDoneButton;
@property (nonatomic, retain) CNContactStore *suggestionsEnabledContactStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKNavBarUnifiedCallButton *unifiedCallButton;

+ (void)updateFTControlsWithConversation:(id)arg1 canvasViewController:(id)arg2 screenSharingCapabilities:(id)arg3 unifiedCallButton:(id)arg4;

- (void).cxx_destruct;
- (id)_KTTitleIconAttributedString;
- (void)_addUserDidTapNavigationBarRecognizer:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (bool)_canShowAvatarView;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_configureForDefaultMode;
- (void)_configureForEditMode;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (void)_facetimeAudioButtonTapped:(id)arg1;
- (void)_facetimeVideoButtonTapped:(id)arg1;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_handleAllowedByScreenTimeChatChanged:(id)arg1;
- (void)_handleConversationRecipientsDidChange:(id)arg1;
- (void)_handleKeyTransparencyStatusChangedNotification:(id)arg1;
- (void)_handleServiceChangedNotification:(id)arg1;
- (void)_infoButtonTapped:(id)arg1;
- (void)_initializeForTraitCollection:(id)arg1;
- (bool)_isConfiguredForInlineReply;
- (id)_leftItemViewForTraitCollection:(id)arg1;
- (void)_notifyDelegateForNavBarResize;
- (void)_refreshIDSStatusWithCompletion:(id /* block */)arg1;
- (id)_rightItemViewForTraitCollection:(id)arg1;
- (id)_secondaryRightItemViewForTraitCollection:(id)arg1;
- (bool)_shouldShowFacetimeButton;
- (bool)_shouldShowPersistentMenu;
- (id)_titleItemViewForTraitCollection:(id)arg1;
- (long long)_unreadCount;
- (void)_updateFTControls;
- (void)_updateUnreadCountForBackbuttonView:(long long)arg1;
- (void)_userDidTapNavigationBar;
- (id)_windowTraitCollection;
- (id)avatarView;
- (id)backButtonView;
- (void)button:(id)arg1 requestsJoinActiveCallWithVideoEnabled:(bool)arg2;
- (void)button:(id)arg1 requestsStartFaceTimeWithScreenShareType:(unsigned long long)arg2;
- (void)buttonRequestsOpenJoinedCall:(id)arg1;
- (void)buttonRequestsStartFaceTimeAudio:(id)arg1;
- (void)buttonRequestsStartFaceTimeVideo:(id)arg1;
- (void)buttonRequestsStartTelephonyCall:(id)arg1;
- (void)buttonWidthDidChange:(id)arg1;
- (id)callButton;
- (bool)canShowBackButtonView;
- (id)canvasView;
- (void)canvasViewPreferredHeightChanged;
- (id)closeButton;
- (void)configureForEditing:(bool)arg1;
- (id)contactsManager;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (id)contextMenuForUnknownRecipient:(id)arg1;
- (id)conversation;
- (id)conversationIdentityView;
- (void)conversationIdentityViewTapped:(id)arg1;
- (void)dealloc;
- (id)defaultLabel;
- (id)delegate;
- (id)detailsBarButton;
- (id)detailsButton;
- (void)dismissModal;
- (id)doneButton;
- (id)editCancelButtonView;
- (bool)editing;
- (bool)findMyNavBarEnabled;
- (void)fmfSessionChatLocationReceived:(id)arg1;
- (void)fmfSessionChatLocationRefreshed:(id)arg1;
- (void)fmfSessionRelationshipDidChange:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCloseNavBarAnimationCompleteNotification:(id)arg1;
- (bool)hasConfiguredCallButtonAudioRouteActions;
- (bool)hideChevron;
- (long long)indicatorType;
- (id)initWithConversation:(id)arg1 navigationController:(id)arg2;
- (id)initWithConversation:(id)arg1 navigationController:(id)arg2 hideLocationIfUnavailable:(bool)arg3;
- (bool)isInEditingMode;
- (void)loadView;
- (id)locationLabel;
- (bool)locationLabelHidden;
- (id)locationToDisplay;
- (id)modernScreenSharingCapabilities;
- (void)multiwayStateChanged:(id)arg1;
- (long long)navBarContext;
- (id)navBarTitleFromConversation:(id)arg1;
- (id)navbarTitle;
- (id)navigationItem;
- (id)persistentMenuButton;
- (id)persistentMenuManager;
- (void)persistentMenuManager:(id)arg1 selectedChipAction:(id)arg2;
- (void)persistentMenuManager:(id)arg1 selectedSuggestedReply:(id)arg2;
- (id)proxyNavigationController;
- (id)recipientContextMenu;
- (void)refreshAudioButtonTargetAction;
- (void)refreshFMFLocationIfNecessary;
- (void)registerNotifications;
- (void)setBackButtonView:(id)arg1;
- (void)setCallButton:(id)arg1;
- (void)setCanShowBackButtonView:(bool)arg1;
- (void)setCanvasView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setContactsManager:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setConversationIdentityView:(id)arg1;
- (void)setDefaultLabel:(id)arg1;
- (void)setDefaultLabelText;
- (void)setDelegate:(id)arg1;
- (void)setDetailsBarButton:(id)arg1;
- (void)setDetailsButton:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEditCancelButtonView:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHasConfiguredCallButtonAudioRouteActions:(bool)arg1;
- (void)setIndicatorType:(long long)arg1;
- (void)setIsInEditingMode:(bool)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationLabelHidden:(bool)arg1;
- (void)setLocationToDisplay:(id)arg1;
- (void)setModernScreenSharingCapabilities:(id)arg1;
- (void)setNavBarContext:(long long)arg1;
- (void)setNavbarTitle:(id)arg1;
- (void)setPersistentMenuManager:(id)arg1;
- (void)setProxyNavigationController:(id)arg1;
- (void)setShouldDisplayParticipantLocationWhenAvailable:(bool)arg1;
- (void)setShouldShowDoneButton:(bool)arg1;
- (void)setSuggestionsEnabledContactStore:(id)arg1;
- (void)setUnifiedCallButton:(id)arg1;
- (void)setUnreadCountTitleColor;
- (bool)shouldConfigureForJunkModal;
- (bool)shouldDisplayParticipantLocationWhenAvailable;
- (bool)shouldShowAvatarView;
- (bool)shouldShowDoneButton;
- (bool)shouldUseMinimumSafeAreas;
- (void)showContactCardForEntity:(id)arg1 address:(id)arg2;
- (bool)splitViewControllerIsCollapsed;
- (void)startAudioCommunicationUsingPreferredRouteIfAvailable:(bool)arg1;
- (id)suggestionsEnabledContactStore;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })systemMinimumLayoutMarginsForView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unifiedCallButton;
- (void)updateAvatarPickerDelegate;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateDefaultLabelIfNecessary;
- (void)updateForRecoveredJunkConversation;
- (void)updateLeftItemView;
- (void)updateLocationLabel;
- (void)updateLocationLabelParentViewAssignment;
- (void)updateLocationToDisplayWithHandle:(id)arg1;
- (void)updateRightItemView;
- (void)updateTitle:(id)arg1 animated:(bool)arg2;
- (void)updateTitleViewAnimated:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsVerifiedIconForTitle:(id)arg1;

@end

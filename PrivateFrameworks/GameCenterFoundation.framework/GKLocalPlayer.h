/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalPlayer : GKPlayer <GKLocalPlayerAuthenticationUIPersonality, GKSavedGameListener, NSCoding, NSSecureCoding> {
    GKInvite * _acceptedInvite;
    double  _authStartTimeStamp;
    bool  _authenticated;
    NSError * _authenticationError;
    unsigned long long  _authenticationState;
    unsigned long long  _authenticationType;
    UIAlertView * _currentAlert;
    bool  _didAuthenticate;
    bool  _enteringForeground;
    long long  _environment;
    GKEventEmitter<GKLocalPlayerListenerPrivate> * _eventEmitter;
    bool  _isShowingFriendRequestUI;
    bool  _newToGameCenter;
    bool  _shouldPreserveOnboardingUI;
    bool  _showingInGameUI;
    id /* block */  _validateAccountCompletionHandler;
    bool  _validatingAccount;
}

@property (nonatomic, retain) GKInvite *acceptedInvite;
@property (nonatomic, retain) NSString *accountName;
@property (nonatomic, retain) UIViewController *activeViewController;
@property (nonatomic, readonly) bool allowNearbyMultiplayer;
@property (nonatomic) bool appIsInBackground;
@property (nonatomic) double authStartTimeStamp;
@property (nonatomic, copy) id /* block */ authenticateHandler;
@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (getter=isAuthenticating, nonatomic, readonly) bool authenticating;
@property (nonatomic) NSError *authenticationError;
@property (nonatomic) unsigned long long authenticationState;
@property (nonatomic) unsigned long long authenticationType;
@property (getter=isAvatarEditingRestricted, nonatomic, readonly) bool avatarEditingRestricted;
@property (nonatomic) UIAlertView *currentAlert;
@property (readonly) GKDaemonProxy *daemonProxy;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didAuthenticate;
@property (nonatomic) bool enteringForeground;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, retain) GKEventEmitter<GKLocalPlayerListenerPrivate> *eventEmitter;
@property (getter=isFindable, nonatomic, readonly) bool findable;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool insideAuthenticatorInvocation;
@property (nonatomic) bool isShowingFriendRequestUI;
@property (nonatomic, retain) NSString *lastName;
@property (getter=isMultiplayerGamingRestricted, nonatomic, readonly) bool multiplayerGamingRestricted;
@property (getter=isNewToGameCenter, nonatomic) bool newToGameCenter;
@property (getter=isPersonalizedCommunicationRestricted, nonatomic, readonly) bool personalizedCommunicationRestricted;
@property (getter=isPurpleBuddyAccount, nonatomic) bool purpleBuddyAccount;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic) bool shouldPreserveOnboardingUI;
@property (getter=isShowingInGameUI, nonatomic) bool showingInGameUI;
@property (nonatomic, retain) UIViewController<GKAuthenticateViewController> *signInViewController;
@property (readonly) Class superclass;
@property (getter=isUnderage, nonatomic, readonly) bool underage;
@property (nonatomic, copy) id /* block */ validateAccountCompletionHandler;
@property (nonatomic) bool validatingAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_localPlayersFromInternals:(id)arg1 authenticated:(bool)arg2;
+ (id)_userInfoForAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4;
+ (id)accountServicePrivate;
+ (void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)authenticatedLocalPlayers;
+ (void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(id /* block */)arg2;
+ (id)authenticatedLocalPlayersFiltered:(long long)arg1;
+ (id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1;
+ (void)loadHighlightsDataWithCompletionHandler:(id /* block */)arg1;
+ (id)local;
+ (id)localPlayer;
+ (id)localPlayerAccessQueue;
+ (id)localPlayerForCredential:(id)arg1;
+ (id)localPlayers;
+ (void)performAsync:(id /* block */)arg1;
+ (void)performSync:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_friendsAPICommunicationsError;
- (id)_friendsAPIDeniedError;
- (id)_friendsAPIDescriptionMissingError;
- (id)_friendsAPIRestrictedError;
- (id)_gkFriendListUsageDescription;
- (void)_loadFriendPlayersWithCompletionHandler:(id /* block */)arg1;
- (void)_loadFriendsListGlobalAccessOptInFlow:(id /* block */)arg1;
- (void)_loadFriendsListPerGameAuthorizedFlow:(id /* block */)arg1;
- (void)_loadFriendsListPerGameNotDeterminedFlow:(id /* block */)arg1;
- (void)_startAuthenticationForExistingPrimaryPlayer;
- (void)_updatePerGameSettings:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)acceptFriendRequestWithIdentifier:(id)arg1 sendPush:(bool)arg2 handler:(id /* block */)arg3;
- (id)acceptedInvite;
- (bool)appIsInBackground;
- (double)authStartTimeStamp;
- (id /* block */)authenticateHandler;
- (void)authenticateWithCompletionHandler:(id /* block */)arg1;
- (id)authenticationError;
- (unsigned long long)authenticationState;
- (unsigned long long)authenticationType;
- (void)callAuthHandlerWithError:(id)arg1;
- (void)cancelFriendRequestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)cancelGameInvite:(id)arg1;
- (void)cancelInviteWithNotification:(id)arg1;
- (void)createFriendRequestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (id)currentAlert;
- (id)daemonProxy;
- (void)dealloc;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)didAuthenticate;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)enteringForeground;
- (long long)environment;
- (id)eventEmitter;
- (void)fetchItemsForIdentityVerificationSignature:(id /* block */)arg1;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchTurnBasedEvent;
- (id)friendService;
- (id)friendServicePrivate;
- (id)friends;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(id /* block */)arg1;
- (void)getPlayerIDFromFriendCode:(id)arg1 handler:(id /* block */)arg2;
- (void)handleChallengableFriendsResults:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)insideAuthenticatorInvocation;
- (void)inviteeAcceptedGameInviteWithNotification:(id)arg1;
- (void)inviteeDeclinedGameInviteWithNotification:(id)arg1;
- (void)inviteeUpdateGameInviteWithNotification:(id)arg1;
- (bool)isAuthenticated;
- (bool)isAvatarEditingRestricted;
- (bool)isMultiplayerGamingRestricted;
- (bool)isNewToGameCenter;
- (bool)isPersonalizedCommunicationRestricted;
- (bool)isShowingFriendRequestUI;
- (bool)isShowingInGameUI;
- (bool)isWelcomeBannerTooLate;
- (void)loadChallengableFriendsWithCompletionHandler:(id /* block */)arg1;
- (void)loadChallengableFriendsWithFetchOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id /* block */)arg1;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendPlayersWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriends:(id /* block */)arg1;
- (void)loadFriendsAuthorizationStatus:(id /* block */)arg1;
- (void)loadFriendsWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendsWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadRecentPlayersWithCompletionHandler:(id /* block */)arg1;
- (id)matchmaker;
- (void)promotePlayerInternalToLocalPlayerInternal:(id)arg1;
- (void)refreshInternalWithCompletion:(id /* block */)arg1;
- (void)registerListener:(id)arg1;
- (oneway void)rejectFriendRequestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)removeAllFriendsWithBlock:(id /* block */)arg1;
- (void)removeFriend:(id)arg1 block:(id /* block */)arg2;
- (void)reportAuthenticatingWithAuthKitInvocation;
- (void)reportAuthenticatingWithGreenBuddyInvocation;
- (void)reportAuthenticationErrorNoInternetConnection;
- (void)reportAuthenticationLoginCanceled;
- (void)reportAuthenticationPlayerAuthenticated;
- (void)reportAuthenticationStartForPlayer;
- (void)resetTCCAuthorization;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAcceptedInvite:(id)arg1;
- (void)setAppIsInBackground:(bool)arg1;
- (void)setAuthStartTimeStamp:(double)arg1;
- (void)setAuthenticateHandler:(id /* block */)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticationError:(id)arg1;
- (void)setAuthenticationState:(unsigned long long)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setCurrentAlert:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDidAuthenticate:(bool)arg1;
- (void)setEnteringForeground:(bool)arg1;
- (void)setEventEmitter:(id)arg1;
- (void)setFriendListAuthorizationStatus:(long long)arg1 forBundleID:(id)arg2 handler:(id /* block */)arg3;
- (void)setInsideAuthenticatorInvocation:(bool)arg1;
- (void)setIsShowingFriendRequestUI:(bool)arg1;
- (void)setLastContactsIntegrationConsentVersion:(id)arg1;
- (void)setLastFriendSuggestionsVersion:(id)arg1;
- (void)setLastPersonalizationVersion:(id)arg1;
- (void)setLastPrivacyNoticeVersion:(unsigned long long)arg1;
- (void)setLastProfilePrivacyVersion:(id)arg1;
- (void)setLastWelcomeWhatsNewCopyVersion:(unsigned long long)arg1;
- (void)setNewToGameCenter:(bool)arg1;
- (void)setShouldPreserveOnboardingUI:(bool)arg1;
- (void)setShowingInGameUI:(bool)arg1;
- (void)setStatus:(id)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setValidateAccountCompletionHandler:(id /* block */)arg1;
- (void)setValidatingAccount:(bool)arg1;
- (void)setupForCloudSavedGames;
- (bool)shouldDisplayWelcomeBannerForPlayer:(id)arg1 lastAuthDate:(id)arg2 remoteUI:(bool)arg3 timeBetweenBanners:(double)arg4;
- (bool)shouldPreserveOnboardingUI;
- (void)signOutAndOptOut:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)signOutWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)updateFromLocalPlayer:(id)arg1;
- (void)updateLoginStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)validateAccountCompletionHandler;
- (bool)validatingAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)accountName;
+ (void)dismissAccessPointInOverlay;
+ (bool)hasAuthenticatedAccount;
+ (void)hideAccessPointInOverlay;
+ (void)presentAccessPointInOverlayUponReturnToForeground:(bool)arg1;
+ (void)presentAchievementBannerInOverlayWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 image:(id)arg4;
+ (void)presentActivitySharingRepromptInOverlayWithRecipientName:(id)arg1;
+ (void)presentInGameBannerInOverlayWithData:(id)arg1;
+ (void)presentOnboardingFlowInOverlayWithOrigin:(unsigned long long)arg1 sceneIdentifier:(id)arg2;
+ (void)presentWelcomeBannerInOverlayWithReturnToForeground:(bool)arg1 newToGameCenter:(bool)arg2;
+ (void)showAccessPointInOverlay;
+ (void)updateAccessPointLocationInOverlay:(long long)arg1;
+ (void)updateAccessPointParentWindowInOverlay;
+ (bool)usesGameOverlayUI;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1 origin:(unsigned long long)arg2 dismiss:(id /* block */)arg3;
- (bool)canSendFriendRequest;
- (void)deleteMonogramsWithHandler:(id /* block */)arg1;
- (void)deletePhoto;
- (void)deletePhotoWithCompletionHandler:(id /* block */)arg1;
- (bool)didShowOnboardingInOverlayWithSignInOrigin:(unsigned long long)arg1;
- (bool)didShowWelcomeBannerInOverlayWithNewUserState:(bool)arg1 uponReturnToForeground:(bool)arg2;
- (void)hideAccessPoint;
- (bool)isBannerVisible;
- (bool)isPresentingFriendRequestViewController;
- (bool)isWelcomeOrSignInBannerEnqueued;
- (void)openMessagesWith:(id)arg1 recipient:(id)arg2 groupId:(id)arg3;
- (bool)presentFriendRequestCreatorFromViewController:(id)arg1 error:(id*)arg2;
- (void)presentInGameBannerWithNotification:(id)arg1;
- (void)reloadAccessPoint;
- (void)sendFriendInviteTo:(id)arg1 groupId:(id)arg2;
- (void)setIsWelcomeOrSignInBannerEnqueued:(bool)arg1;
- (void)setPhoto:(id)arg1 avatarType:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setPhotoFromCNContactImage:(id)arg1 pendingContact:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)shouldShowOnBoardingUI;
- (void)showAccessPoint;
- (void)showBannerWithTitle:(id)arg1 message:(id)arg2 touchHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)showDashboardFromWelcomeBanner;
- (void)showOnboardingUIFromViewController:(id)arg1 signInOrigin:(unsigned long long)arg2;
- (void)showSignInBannerForLocalPlayer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 touchHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)updateAccessPointUponReturnToForeground;

// Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore

+ (id)authenticationPersonality;
+ (id)currentLocalPlayer;
+ (void)setAuthenticationPersonality:(id)arg1;
+ (id)sharedLocalPlayerAuthenticator;

- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)_showWelcomeBannerWithSignInOrigin:(unsigned long long)arg1 uponReturnToForeground:(bool)arg2;
- (id)activeViewController;
- (bool)alertUserInStoreDemoModeEnabled;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)authenticationDidCompleteWithError:(id)arg1;
- (void)authenticationDidCompleteWithError:(id)arg1 signInOrigin:(unsigned long long)arg2;
- (void)authenticationDidCompleteWithError:(id)arg1 signInOrigin:(unsigned long long)arg2 uponReturnToForeground:(bool)arg3;
- (void)authenticationDidCompleteWithError:(id)arg1 uponReturnToForeground:(bool)arg2;
- (void)cancelAuthentication;
- (void)dismissOnboardingUIIfPresent;
- (bool)hasAcknowledgedLatestGDPR;
- (bool)isAuthenticating;
- (void)presentAuthenticationUIForLocalPlayer:(id)arg1;
- (void)presentBannerWithNotification:(id)arg1;
- (void)removeActiveViewControllerAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)rootViewController;
- (void)setActiveViewController:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setSignInViewController:(id)arg1;
- (void)sharePlayEligibilityChanged:(id)arg1;
- (bool)shouldShowAnyOnboardingScreen;
- (bool)shouldShowAnyOnboardingScreenForBundleIdentifier:(id)arg1;
- (bool)shouldShowContactsIntegrationConsentScreen;
- (bool)shouldShowFriendSuggestionsScreen;
- (bool)shouldShowPersonalizationScreen;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)showOnboardingUIWithSignInOrigin:(unsigned long long)arg1;
- (void)showViewController:(id)arg1 usingPresentingViewController:(id)arg2 wrapInNavController:(bool)arg3;
- (id)signInViewController;
- (void)startAuthenticationForExistingPrimaryPlayer;
- (void)startAuthenticationForExistingPrimaryPlayerUponReturnToForeground:(bool)arg1;
- (void)startLegacyAuthenticationWithCompletionHandler:(id /* block */)arg1;

@end
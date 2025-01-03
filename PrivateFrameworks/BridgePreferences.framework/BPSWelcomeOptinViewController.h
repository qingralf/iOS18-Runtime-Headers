/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSWelcomeOptinViewController : OBWelcomeController <BPSBuddyController> {
    OBTrayButton * _alternateChoiceButton;
    <BPSBuddyControllerDelegate> * _delegate;
    bool  _hasDetailText;
    bool  _hasFinishedLoadingView;
    BPSIllustratedWatchView * _illustratedWatchView;
    bool  _isDisplayingInSkippedMiniFlow;
    OBHeaderAccessoryButton * _learnMoreButton;
    OBTrayButton * _okayButton;
    bool  _showAlternateButton;
    bool  _showOkayButton;
    bool  _showSuggestedButton;
    unsigned long long  _style;
    OBTrayButton * _suggestedChoiceButton;
    NSUserActivity * _tapToRadarActivity;
    BPSWatchView * _watchView;
    NSLayoutConstraint * _watchViewBottomConstraint;
}

@property (nonatomic, retain) OBTrayButton *alternateChoiceButton;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <BPSBuddyControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDetailText;
@property (nonatomic) bool hasFinishedLoadingView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BPSIllustratedWatchView *illustratedWatchView;
@property (nonatomic) bool isDisplayingInSkippedMiniFlow;
@property (nonatomic, retain) OBHeaderAccessoryButton *learnMoreButton;
@property (nonatomic, retain) OBTrayButton *okayButton;
@property (nonatomic) bool showAlternateButton;
@property (nonatomic) bool showOkayButton;
@property (nonatomic) bool showSuggestedButton;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) OBTrayButton *suggestedChoiceButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserActivity *tapToRadarActivity;
@property (nonatomic, retain) BPSWatchView *watchView;
@property (nonatomic, retain) NSLayoutConstraint *watchViewBottomConstraint;

+ (id)expressModeSettingsItem:(id)arg1;

- (void).cxx_destruct;
- (void)_addButtonObservers;
- (id)_baseIdentifier;
- (void)_didTapPrivacyAccept:(id)arg1;
- (void)_endTapToRadarActivity;
- (void)_refreshButtonTray;
- (void)_removeButtonObservers;
- (void)_startTapToRadarActivity;
- (void)addFollowUpForPageAndDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addFollowUpForPageWithCompletion:(id /* block */)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (id)alternateButtonTitle;
- (id)alternateChoiceButton;
- (void)applyConfirmedOptin:(bool)arg1;
- (id)captionText;
- (void)dealloc;
- (id)delegate;
- (id)detailAtrributedString;
- (id)detailString;
- (id)detailTitleString;
- (id)followUpActions;
- (id)followUpIdentifier;
- (bool)hasDetailText;
- (bool)hasFinishedLoadingView;
- (id)illustratedWatchView;
- (id)imageResource;
- (id)imageResourceBundleIdentifier;
- (id)imageTintColor;
- (id)init;
- (bool)isDisplayingInSkippedMiniFlow;
- (id)learnMoreButton;
- (void)learnMoreButtonPressed:(id)arg1;
- (id)learnMoreButtonTitle;
- (id)localizedInformativeNotificationText;
- (id)localizedInformativeText;
- (id)localizedNotificationTitle;
- (id)localizedTitle;
- (void)markPaneAsSkipped;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)okayButton;
- (void)okayButtonPressed:(id)arg1;
- (id)okayButtonTitle;
- (void)openTapToRadar;
- (id)optinLocalizationBundle;
- (id)optinLocalizationStringsFile;
- (id)privacyBundles;
- (void)refreshViews;
- (void)removeFollowupForPageWithCompletion:(id /* block */)arg1;
- (void)setAlternateChoiceButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasDetailText:(bool)arg1;
- (void)setHasFinishedLoadingView:(bool)arg1;
- (void)setIllustratedWatchView:(id)arg1;
- (void)setIsDisplayingInSkippedMiniFlow:(bool)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setOkayButton:(id)arg1;
- (void)setShowAlternateButton:(bool)arg1;
- (void)setShowOkayButton:(bool)arg1;
- (void)setShowSuggestedButton:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSuggestedChoiceButton:(id)arg1;
- (void)setTapToRadarActivity:(id)arg1;
- (void)setWatchView:(id)arg1;
- (void)setWatchViewBottomConstraint:(id)arg1;
- (bool)showAlternateButton;
- (bool)showOkayButton;
- (void)showOptinConfirmationAlert:(id)arg1 optinChoice:(bool)arg2;
- (bool)showSuggestedButton;
- (unsigned long long)style;
- (void)suggestedButtonPressed:(id)arg1;
- (id)suggestedButtonTitle;
- (id)suggestedChoiceButton;
- (id)tapToRadarActivity;
- (id)tapToRadarMetadata;
- (id)titleAttributedString;
- (id)titleString;
- (bool)useBridgeStyling;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsAlternateChoicePillButton;
- (bool)wantsAlternateChoiceSystemButton;
- (bool)wantsFollowUpNotification;
- (bool)wantsInternalFPOLabel;
- (bool)wantsLearnMoreButton;
- (bool)wantsLightenBlendedScreen;
- (bool)wantsOkayPillButton;
- (bool)wantsSuggestedChoiceLinkButton;
- (bool)wantsSuggestedChoicePillButton;
- (bool)wantsToShowWatchHW;
- (id)watchView;
- (id)watchViewBottomConstraint;

@end

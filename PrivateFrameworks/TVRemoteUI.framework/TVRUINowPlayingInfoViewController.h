/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRUINowPlayingInfoViewController : UIViewController {
    <TVRUIActionProviding> * _actionProvider;
    id /* block */  _commandHandler;
    UIButton * _detailsButton;
    NSLayoutConstraint * _detailsTextHeightConstraint;
    UITextView * _detailsTextView;
    NSArray * _doubleLineInfoLayoutConstraints;
    TVREventHaptic * _eventHaptic;
    UILabel * _infoLabel;
    TVRCNowPlayingInfo * _nowPlayingInfo;
    UIButton * _playFromStartButton;
    UIView * _ratingsContainer;
    UILabel * _ratingsLabel;
    UIScrollView * _scrollView;
    NSArray * _singleLineInfoLayoutConstraints;
    NSArray * _stackedLayoutConstraints;
    NSArray * _standardLayoutConstraints;
    <TVRUIStyleProvider> * _styleProvider;
    UILabel * _titleLabel;
    bool  _userInteractionInProgress;
}

@property (nonatomic) <TVRUIActionProviding> *actionProvider;
@property (nonatomic, copy) id /* block */ commandHandler;
@property (nonatomic, retain) UIButton *detailsButton;
@property (nonatomic, retain) NSLayoutConstraint *detailsTextHeightConstraint;
@property (nonatomic, retain) UITextView *detailsTextView;
@property (nonatomic, retain) NSArray *doubleLineInfoLayoutConstraints;
@property (nonatomic, readonly) TVREventHaptic *eventHaptic;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, retain) TVRCNowPlayingInfo *nowPlayingInfo;
@property (nonatomic, retain) UIButton *playFromStartButton;
@property (nonatomic, retain) UIView *ratingsContainer;
@property (nonatomic, retain) UILabel *ratingsLabel;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) NSArray *singleLineInfoLayoutConstraints;
@property (nonatomic, retain) NSArray *stackedLayoutConstraints;
@property (nonatomic, retain) NSArray *standardLayoutConstraints;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool userInteractionInProgress;

- (void).cxx_destruct;
- (void)_animateButtonFromHighlightState:(id)arg1;
- (void)_animateButtonToHighlightState:(id)arg1;
- (bool)_canShowWhileLocked;
- (bool)_currentTraitsSizeCategoryRequiresStackedLayout;
- (bool)_infoLineRequiresDoubleLayout;
- (bool)_isCurrentlyDoubleInfoLineLayout;
- (bool)_isCurrentlyStackedLayout;
- (void)_playHaptic;
- (void)_updateConstraintsForInfoLineUsingDoubleLineLayout:(bool)arg1;
- (void)_updateContraintsForStackedLayout:(bool)arg1;
- (id)actionProvider;
- (id /* block */)commandHandler;
- (void)configureHierarchy;
- (id)detailsButton;
- (id)detailsTextHeightConstraint;
- (id)detailsTextView;
- (id)doubleLineInfoLayoutConstraints;
- (id)eventHaptic;
- (id)infoLabel;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)nowPlayingInfo;
- (void)openProductPage;
- (id)playFromStartButton;
- (id)ratingsContainer;
- (id)ratingsLabel;
- (id)scrollView;
- (void)setActionProvider:(id)arg1;
- (void)setCommandHandler:(id /* block */)arg1;
- (void)setDetailsButton:(id)arg1;
- (void)setDetailsTextHeightConstraint:(id)arg1;
- (void)setDetailsTextView:(id)arg1;
- (void)setDoubleLineInfoLayoutConstraints:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlayFromStartButton:(id)arg1;
- (void)setRatingsContainer:(id)arg1;
- (void)setRatingsLabel:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSingleLineInfoLayoutConstraints:(id)arg1;
- (void)setStackedLayoutConstraints:(id)arg1;
- (void)setStandardLayoutConstraints:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUserInteractionInProgress:(bool)arg1;
- (id)singleLineInfoLayoutConstraints;
- (id)stackedLayoutConstraints;
- (id)standardLayoutConstraints;
- (id)styleProvider;
- (id)titleLabel;
- (void)updateFromNowPlayingInfo:(id)arg1;
- (void)updateViewConstraints;
- (bool)userInteractionInProgress;
- (void)viewDidLoad;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience> {
    IMAccount * _account;
    bool  _cancelled;
    Class  _completionControllerClass;
    UIBarButtonItem * _customLeftButton;
    UIBarButtonItem * _customRightButton;
    <CNFRegFirstRunDelegate> * _delegate;
    bool  _previousHidesBackButton;
    UIBarButtonItem * _previousLeftButton;
    UIBarButtonItem * _previousRightButton;
    bool  _showingActivityIndicator;
    bool  _timedOut;
    NSTimer * _timeoutTimer;
}

@property (nonatomic, retain) IMAccount *account;
@property (nonatomic) Class completionControllerClass;
@property (nonatomic, readonly) long long currentAppearanceStyle;
@property (nonatomic, retain) UIBarButtonItem *customLeftButton;
@property (nonatomic, retain) UIBarButtonItem *customRightButton;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CNFRegFirstRunDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool previousHidesBackButton;
@property (nonatomic, retain) UIBarButtonItem *previousLeftButton;
@property (nonatomic, retain) UIBarButtonItem *previousRightButton;
@property (readonly) Class superclass;
@property (nonatomic) bool timedOut;

- (void).cxx_destruct;
- (void)_cancelValidationMode;
- (void)_executeDismissBlock:(id /* block */)arg1;
- (void)_handleReturnKeyTapped:(id)arg1;
- (void)_handleTimeout;
- (void)_handleValidationModeCancelled;
- (bool)_hidesBackButton;
- (id)_leftButtonItem;
- (void)_leftButtonTapped;
- (void)_refreshCurrentState;
- (void)_refreshNavBarAnimated:(bool)arg1;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_setupEventHandlers;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(bool)arg2;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(bool)arg2 allowCancel:(bool)arg3;
- (void)_startListeningForReturnKey;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)_startValidationModeAnimated:(bool)arg1;
- (void)_startValidationModeAnimated:(bool)arg1 allowCancel:(bool)arg2;
- (void)_stopActivityIndicatorAnimated:(bool)arg1;
- (void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(bool)arg2;
- (void)_stopListeningForReturnKey;
- (void)_stopTimeout;
- (void)_stopValidationModeAnimated:(bool)arg1;
- (void)_timeoutFired:(id)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)_validationModeCancelButton;
- (id)account;
- (Class)completionControllerClass;
- (long long)currentAppearanceStyle;
- (id)customLeftButton;
- (id)customRightButton;
- (id)customTitle;
- (void)dealloc;
- (id)delegate;
- (bool)dismissWithState:(unsigned long long)arg1;
- (id)initWithParentController:(id)arg1 account:(id)arg2;
- (id)initWithRegController:(id)arg1;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (bool)previousHidesBackButton;
- (id)previousLeftButton;
- (id)previousRightButton;
- (bool)pushCompletionControllerIfPossible;
- (void)setAccount:(id)arg1;
- (void)setCellsChecked:(bool)arg1;
- (void)setCompletionControllerClass:(Class)arg1;
- (void)setCustomLeftButton:(id)arg1;
- (void)setCustomRightButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviousHidesBackButton:(bool)arg1;
- (void)setPreviousLeftButton:(id)arg1;
- (void)setPreviousRightButton:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTimedOut:(bool)arg1;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (bool)timedOut;
- (id)titleString;
- (id)validationString;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

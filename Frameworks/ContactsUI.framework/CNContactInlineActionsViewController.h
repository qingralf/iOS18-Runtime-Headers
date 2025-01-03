/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNContactActionsControllerDelegate, CNUIObjectViewController, CNUIUserActionListConsumer> {
    NSArray * _actionItems;
    CNUIUserActionListDataSource * _actionListDataSource;
    double  _actionTypesInterspace;
    CNContactActionsController * _actionsController;
    <CNCustomPresentation> * _actionsControllerPresentation;
    CNActionsView * _actionsView;
    NSArray * _contacts;
    NSDictionary * _defaultActionPerType;
    <CNContactInlineActionsViewControllerDelegate> * _delegate;
    bool  _displaysTitles;
    bool  _displaysUnavailableActionTypes;
    CNUIContactsEnvironment * _environment;
    NSString * _geminiChannelIdentifier;
    UIColor * _posterTintColor;
    <CNSchedulerProvider> * _schedulerProvider;
    NSArray * _supportedActionTypes;
    NSArray * _tokens;
    long long  _viewStyle;
    <CNUIObjectViewControllerDelegate> * objectViewControllerDelegate;
}

@property (nonatomic, copy) NSArray *actionItems;
@property (nonatomic, retain) CNUIUserActionListDataSource *actionListDataSource;
@property (nonatomic) double actionTypesInterspace;
@property (nonatomic, retain) CNContactActionsController *actionsController;
@property (nonatomic, retain) <CNCustomPresentation> *actionsControllerPresentation;
@property (nonatomic) CNActionsView *actionsView;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, copy) NSDictionary *defaultActionPerType;
@property (nonatomic) <CNContactInlineActionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysTitles;
@property (nonatomic) bool displaysUnavailableActionTypes;
@property (nonatomic, retain) CNUIContactsEnvironment *environment;
@property (nonatomic, retain) NSString *geminiChannelIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CNUIObjectViewControllerDelegate> *objectViewControllerDelegate;
@property (nonatomic, retain) UIColor *posterTintColor;
@property (nonatomic, retain) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedActionTypes;
@property (nonatomic, readonly) double throttleDelay;
@property (nonatomic, copy) NSArray *tokens;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic) long long viewStyle;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)actionImageTextStyleForViewStyle:(long long)arg1;
- (id)actionItems;
- (id)actionListDataSource;
- (double)actionTypesInterspace;
- (id)actionsController;
- (id)actionsControllerPresentation;
- (id)actionsView;
- (bool)actionsView:(id)arg1 shouldPresentDisambiguationUIForAction:(id)arg2;
- (id)allModelsObservable;
- (void)checkinLaunchTasksForUndiscoverableActionsForContact:(id)arg1;
- (id)contact;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;
- (id)contacts;
- (void)dealloc;
- (id)defaultActionPerType;
- (id)delegate;
- (void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(bool)arg3;
- (void)discoverAvailableActionTypes;
- (void)displayActionForType:(id)arg1 withDefaultAction:(id)arg2 enabled:(bool)arg3;
- (void)displayAdditionalActionItems:(id)arg1;
- (void)displayAllSupportedTypesDisabled;
- (bool)displaysTitles;
- (bool)displaysUnavailableActionTypes;
- (id)environment;
- (id)existingActionItemForType:(id)arg1;
- (id)geminiChannelIdentifier;
- (void)generateActionsControllerForActionType:(id)arg1;
- (id)initWithActionListDataSource:(id)arg1 environment:(id)arg2;
- (id)initWithContactActionsContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isGroupActionsView;
- (void)loadCachedActions;
- (void)loadView;
- (id)makeActionItemForType:(id)arg1;
- (void)notifyDelegateOfDisambiguationForActionType:(id)arg1;
- (void)notifyDelegateOfPerformedActionType:(id)arg1 fromDisambiguation:(bool)arg2;
- (id)objectViewControllerDelegate;
- (void)performAction:(id)arg1;
- (void)performGroupActionForType:(id)arg1;
- (id)posterTintColor;
- (void)processModels:(id)arg1;
- (void)removeActionForType:(id)arg1;
- (void)removeVisibleActionItems:(id)arg1;
- (void)reset;
- (id)schedulerProvider;
- (void)setActionItems:(id)arg1;
- (void)setActionListDataSource:(id)arg1;
- (void)setActionTypesInterspace:(double)arg1;
- (void)setActionsController:(id)arg1;
- (void)setActionsControllerPresentation:(id)arg1;
- (void)setActionsView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDefaultActionPerType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysTitles:(bool)arg1;
- (void)setDisplaysUnavailableActionTypes:(bool)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setGeminiChannelIdentifier:(id)arg1;
- (void)setObjectViewControllerDelegate:(id)arg1;
- (void)setPosterTintColor:(id)arg1;
- (void)setSchedulerProvider:(id)arg1;
- (void)setSupportedActionTypes:(id)arg1;
- (void)setTokens:(id)arg1;
- (void)setViewStyle:(long long)arg1;
- (void)setupGroupActions;
- (void)setupSingleContactActions;
- (bool)shouldShowDisambiguationForAction:(id)arg1;
- (id)supportedActionTypes;
- (double)throttleDelay;
- (id)tokens;
- (void)updateActionItem:(id)arg1 withDefaultAction:(id)arg2;
- (void)updateDesiredTitleFontSizeIfNeeded;
- (void)updateVisibleActionItems:(id)arg1;
- (void)viewDidLoad;
- (long long)viewStyle;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIObjectModel : NSObject <RUIAlertViewDelegate, RUIPageDelegate, RUIPasscodeViewDelegate, RUITableViewDelegate, RUIWebViewDelegate, RemoteUIWebViewControllerDelegate> {
    RUIElement * _activeElement;
    NSDictionary * _alert;
    NSString * _authPasswordEquivalent;
    NSString * _authPasswordFieldID;
    NSDictionary * _clientInfo;
    struct OpaqueJSContext { } * _ctx;
    int  _currentPage;
    NSMutableArray * _defaultPages;
    <RUIObjectModelDelegate> * _delegate;
    bool  _didInitializeScript;
    NSMutableArray * _displayedPages;
    RUIElement * _elementForActivityIndicator;
    NSMutableDictionary * _httpHeaders;
    NSString * _idOfObjectModelToReplace;
    NSString * _identifier;
    NSString * _identifierMarkingStackRemovalAfterPush;
    NSString * _inlineScript;
    NSString * _name;
    NSMutableDictionary * _namedAlerts;
    NSMutableDictionary * _namedPages;
    long long  _nextButtonStyle;
    bool  _parseFinished;
    RUIAlertView * _primaryAlert;
    int  _refreshDelay;
    NSTimer * _refreshTimer;
    NSString * _refreshURL;
    NSURL * _scriptURL;
    NSDictionary * _serverInfo;
    NSURL * _sourceURL;
    RUIStyle * _style;
    NSDictionary * _updateInfo;
    NSString * _validationFunction;
    id /* block */  _webViewDismissHandler;
}

@property (nonatomic, readonly) RUIElement *activeElement;
@property (nonatomic, retain) NSDictionary *alert;
@property (nonatomic, readonly) NSArray *allPages;
@property (nonatomic, retain) NSString *authPasswordEquivalent;
@property (nonatomic, retain) NSString *authPasswordFieldID;
@property (nonatomic, copy) NSDictionary *clientInfo;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSArray *defaultPages;
@property (nonatomic) <RUIObjectModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedPages;
@property (nonatomic, readonly) RUIElement *elementForActivityIndicator;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idOfObjectModelToReplace;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *identifierMarkingStackRemovalAfterPush;
@property (nonatomic, copy) NSString *inlineScript;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSDictionary *namedPages;
@property (nonatomic) long long nextButtonStyle;
@property (nonatomic, readonly) NSArray *pages;
@property (nonatomic, readonly) RUIAlertView *primaryAlert;
@property (nonatomic) int refreshDelay;
@property (nonatomic, copy) NSString *refreshURL;
@property (nonatomic, copy) NSURL *scriptURL;
@property (nonatomic, copy) NSDictionary *serverInfo;
@property (nonatomic, copy) NSURL *sourceURL;
@property (nonatomic, retain) RUIStyle *style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *updateInfo;
@property (nonatomic, copy) NSString *validationFunction;
@property (nonatomic, readonly) RUIPage *visiblePage;

// Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI

+ (void)_enableTestMode;
+ (id)objectModelForXMLNamed:(id)arg1;

- (void).cxx_destruct;
- (void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2;
- (void)RUIPage:(id)arg1 toggledEditing:(bool)arg2;
- (void)_displayNamedPage:(id)arg1 animated:(bool)arg2;
- (void)_displaySupplementalPage:(id)arg1;
- (id)_firstPageForPresentation;
- (void)_handleElementChange:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2 completion:(id /* block */)arg3;
- (void)_logException:(struct OpaqueJSValue { }*)arg1;
- (void)_navigateBackWithPop:(bool)arg1 fromViewController:(id)arg2;
- (void)_navigateToNextPageAnimated;
- (id)_pageContainingTableView:(id)arg1;
- (id)_parentNavigationController;
- (id)_parentViewController;
- (void)_populatePageNavItem:(id)arg1 withNextButton:(bool)arg2;
- (void)_populateRequest:(id)arg1;
- (void)_presentConfirmationWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentSecondConfirmationWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (bool)_shouldDisplayNamedElement:(id)arg1 page:(id)arg2;
- (void)_startNavigationBarSpinnerIfNeededForAttributes:(id)arg1;
- (void)_stopNavigationBarSpinnerIfNeededForAttributes:(id)arg1;
- (void)_unsafe_setPages:(id)arg1;
- (id)_viewControllerFromNavigatingBackWithinDisplayedPagesAnimated:(bool)arg1;
- (id)absoluteURLWithString:(id)arg1;
- (void)activateElement:(id)arg1 completion:(id /* block */)arg2;
- (id)activeElement;
- (void)addAlertElement:(id)arg1;
- (id)alert;
- (id)alertController;
- (void)alertView:(id)arg1 pressedButton:(id)arg2 completion:(id /* block */)arg3;
- (id)alertWithName:(id)arg1;
- (id)allPages;
- (id)authPasswordEquivalent;
- (id)authPasswordFieldID;
- (void)back:(id)arg1;
- (void)cleanupRefreshTimer;
- (id)clientInfo;
- (void)configureRow:(id)arg1;
- (void)configureSection:(id)arg1;
- (void)configureTableView:(id)arg1;
- (Class)customFooterClassForSection:(id)arg1;
- (Class)customHeaderClassForSection:(id)arg1;
- (Class)customTableCellClassForTableViewRow:(id)arg1;
- (void)dealloc;
- (id)defaultPages;
- (id)delegate;
- (id)description;
- (void)didNavigateBackFromViewController:(id)arg1;
- (id)displayedPages;
- (id)elementForActivityIndicator;
- (id)elementForActivityIndicatorAnchorId:(id)arg1;
- (id)elementForActivityIndicatorWithActivatedElement:(id)arg1;
- (id)elementForActivityIndicatorWithAttributes:(id)arg1;
- (id)elementsWithName:(id)arg1;
- (bool)goBack;
- (bool)goBack:(bool)arg1;
- (void)handleAppleIDAuthenticationIfNeededForAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)handleElementChange:(id)arg1 action:(int)arg2 completion:(id /* block */)arg3;
- (bool)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2;
- (bool)hasConfirmationAttributes:(id)arg1;
- (bool)hasSecondConfirmationAttributes:(id)arg1;
- (id)idOfObjectModelToReplace;
- (id)identifier;
- (id)identifierMarkingStackRemovalAfterPush;
- (id)init;
- (void)initializeSwift;
- (id)inlineScript;
- (id)invokeScriptFunction:(id)arg1 withArguments:(id)arg2;
- (struct OpaqueJSContext { }*)jsContextRef;
- (void*)jsInterfaceForElementId:(id)arg1;
- (id)name;
- (id)namedPages;
- (void)navigateToNextPageAnimated:(bool)arg1;
- (id)newNavigationControllerForPresentation;
- (long long)nextButtonStyle;
- (void)notifyXMLUIDataChange;
- (id)objectForJSValue:(struct OpaqueJSValue { }*)arg1;
- (void)openLink:(id)arg1 HTTPMethod:(id)arg2 attributes:(id)arg3 completion:(id /* block */)arg4;
- (void)openLink:(id)arg1 HTTPMethod:(id)arg2 completion:(id /* block */)arg3;
- (void)pageDidDisappear:(id)arg1;
- (id)pages;
- (void)parseDidFinish;
- (void)passcodeViewOM:(id)arg1 activatedElement:(id)arg2 completion:(id /* block */)arg3;
- (void)populatePostbackDictionary:(id)arg1;
- (id)postbackData;
- (id)postbackDictionary;
- (bool)prepareScriptContext;
- (void)presentConfirmationIfNeededForElement:(id)arg1 completion:(id /* block */)arg2;
- (void)presentInParentViewController:(id)arg1 animated:(bool)arg2;
- (void)presentInParentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentPage:(id)arg1 inViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)presentWithBlock:(id /* block */)arg1;
- (id)primaryAlert;
- (int)refreshDelay;
- (void)refreshTimeout;
- (id)refreshURL;
- (void)refreshWithObjectModel:(id)arg1;
- (id)relativeURLWithString:(id)arg1;
- (void)remoteUIWebViewController:(id)arg1 dismissWithPayload:(id)arg2;
- (void)remoteUIWebViewControllerDidDismiss:(id)arg1;
- (id)rowForFormField:(id)arg1;
- (void)runScript;
- (id)scriptURL;
- (id)serverInfo;
- (void)setActivityIndicatorStatus:(bool)arg1 forElement:(id)arg2;
- (void)setAlert:(id)arg1;
- (void)setAuthPasswordEquivalent:(id)arg1;
- (void)setAuthPasswordFieldID:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDecodingUserInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdOfObjectModelToReplace:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifierMarkingStackRemovalAfterPush:(id)arg1;
- (void)setInlineScript:(id)arg1;
- (void)setJSGlobalContext:(struct OpaqueJSContext { }*)arg1;
- (void)setName:(id)arg1;
- (void)setNextButtonStyle:(long long)arg1;
- (void)setPages:(id)arg1;
- (void)setRefreshDelay:(int)arg1;
- (void)setRefreshURL:(id)arg1;
- (void)setScriptURL:(id)arg1;
- (void)setServerInfo:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setUpdateInfo:(id)arg1;
- (void)setValidationFunction:(id)arg1;
- (void)showModalWebViewWithLinkURL:(id)arg1 dismissButtonLabel:(id)arg2 dismissButtonAlignment:(id)arg3 scaleToFit:(bool)arg4 loadCompletion:(id /* block */)arg5 dismissHandler:(id /* block */)arg6;
- (id)sourceURL;
- (void)startActivityIndicator;
- (void)startActivityIndicatorForElement:(id)arg1;
- (void)startActivityIndicatorWithAttributes:(id)arg1;
- (void)startNavigationBarSpinnerWithTitle:(id)arg1;
- (void)stopActivityIndicator;
- (void)stopNavigationBarSpinner;
- (id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2;
- (id)style;
- (id)subElementWithID:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForRUIPage:(id)arg1;
- (id)tableFooterViewForAttributes:(id)arg1;
- (id)tableHeaderViewForAttributes:(id)arg1;
- (bool)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2;
- (void)tableViewOM:(id)arg1 elementDidChange:(id)arg2 action:(int)arg3 completion:(id /* block */)arg4;
- (void)tableViewOMDidChange:(id)arg1;
- (void)tableViewOMSubmitForm:(id)arg1;
- (id)textInRowWithIdentifier:(id)arg1;
- (id)updateInfo;
- (bool)validateWithFunction:(id)arg1;
- (id)validationFunction;
- (id)visiblePage;
- (bool)webViewOM:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end

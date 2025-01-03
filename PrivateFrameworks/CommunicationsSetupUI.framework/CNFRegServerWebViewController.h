/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegServerWebViewController : UIViewController <RUIObjectModelDelegate, UIWebViewDelegate> {
    RUILoader * _loader;
    CNFRegLoadingView * _loadingView;
    NSMutableArray * _objectModels;
    CNFRegController * _regController;
    NSTimer * _timeoutTimer;
    struct { 
        unsigned int isLoading : 1; 
        unsigned int isLoaded : 1; 
        unsigned int wantsWifi : 1; 
        unsigned int modifiedWiFi : 1; 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int checkedLogState : 1; 
        unsigned int shouldLog : 1; 
        unsigned int timedOut; 
    }  _webControllerFlags;
    UIWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLoaded;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic, retain) CNFRegController *regController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool timedOut;
@property (nonatomic, retain) UIWebView *webView;

- (void).cxx_destruct;
- (void)_cleanupLoader;
- (void)_handleTimeout;
- (void)_popObjectModelAnimated:(bool)arg1;
- (bool)_shouldLog;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)_stopTimeout;
- (void)_timeoutFired:(id)arg1;
- (void)applicationWillSuspend;
- (bool)canSendURLRequest:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)dealloc;
- (void)hideSpinner;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (bool)isLoaded;
- (bool)isLoading;
- (void)loadURL:(id)arg1;
- (void)loadView;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (id)logName;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)overrideURLForURL:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)regController;
- (void)setHeadersForRequest:(id)arg1;
- (void)setRegController:(id)arg1;
- (void)setWantsWifi:(bool)arg1;
- (void)setWebView:(id)arg1;
- (bool)shouldSetHeadersForRequest:(id)arg1;
- (void)showSpinner;
- (void)startRequiringWifi;
- (void)stopRequiringWifi;
- (bool)timedOut;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webView;

@end

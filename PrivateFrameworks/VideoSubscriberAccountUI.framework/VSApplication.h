/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSApplication : NSObject <IKAppContextDelegate, IKApplication, VSStateMachineDelegate> {
    IKAppContext * _appContext;
    VSAppDeviceConfig * _appDeviceConfig;
    VSAuditToken * _auditToken;
    NSURL * _bootURL;
    bool  _canRequireSystemTrust;
    NSHTTPCookieStorage * _cookieStorage;
    <VSApplicationDelegate> * _delegate;
    NSError * _failureToStart;
    bool  _shouldAllowRemoteInspection;
    VSStateMachine * _stateMachine;
    NSString * _vendorIdentifier;
}

@property (nonatomic, retain) IKAppContext *appContext;
@property (nonatomic, retain) VSAppDeviceConfig *appDeviceConfig;
@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, readonly, copy) NSURL *bootURL;
@property (nonatomic) bool canRequireSystemTrust;
@property (nonatomic, retain) NSHTTPCookieStorage *cookieStorage;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <VSApplicationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *failureToStart;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAllowRemoteInspection;
@property (nonatomic, retain) VSStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *vendorIdentifier;

- (void).cxx_destruct;
- (id)activeDocument;
- (id)appContext;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (id)appDeviceConfig;
- (void)appDocumentForDocument:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)appIdentifier;
- (bool)appIsTrusted;
- (id)appJSURL;
- (id)appLaunchParams;
- (id)auditToken;
- (id)bootURL;
- (bool)canRequireSystemTrust;
- (id)cookieStorage;
- (void)dealloc;
- (id)delegate;
- (id)deviceConfigForContext:(id)arg1;
- (void)evaluate:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)failureToStart;
- (id)init;
- (id)initWithBootURL:(id)arg1;
- (id)localStorage;
- (id)objectForMediaItem:(id)arg1;
- (id)objectForPlayer:(id)arg1;
- (id)objectForPlaylist:(id)arg1;
- (oneway void)release;
- (void)sendErrorWithMessage:(id)arg1;
- (void)setAppContext:(id)arg1;
- (void)setAppDeviceConfig:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setCanRequireSystemTrust:(bool)arg1;
- (void)setCookieStorage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFailureToStart:(id)arg1;
- (void)setShouldAllowRemoteInspection:(bool)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setVendorIdentifier:(id)arg1;
- (bool)shouldAllowRemoteInspection;
- (bool)shouldIgnoreJSValidation;
- (id)sourceApplicationAuditTokenDataForContext:(id)arg1;
- (id)sourceApplicationBundleIdentifierForContext:(id)arg1;
- (void)start;
- (id)stateMachine;
- (void)stop;
- (void)transitionToInvalidState;
- (void)transitionToNotifyingOfFailureToStartState;
- (void)transitionToReadyState;
- (void)transitionToStartingState;
- (void)transitionToStoppingState;
- (id)userDefaultsStorage;
- (id)vendorIdentifier;
- (id)vendorStorage;
- (id)viewElementRegistry;
- (void)willPerformXhrRequest:(id)arg1;
- (id)xhrSessionConfigurationForContext:(id)arg1;

@end
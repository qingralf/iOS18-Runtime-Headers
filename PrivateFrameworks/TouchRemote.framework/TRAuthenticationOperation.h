/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAuthenticationOperation : TROperation {
    int  _authType;
    bool  _canDoTermsAndConditions;
    unsigned long long  _companionAuthStartTicks;
    bool  _forceFail;
    bool  _isCLIMode;
    UIViewController * _presentingChildViewController;
    UIViewController * _presentingViewController;
    unsigned long long  _proxyAuthStartTicks;
    NSString * _rawPassword;
    NSString * _sessionID;
    bool  _shouldForceInteractiveAuth;
    bool  _shouldIgnoreAuthFailures;
    bool  _shouldSetupHomePod;
    bool  _shouldUseAIDA;
    NSSet * _targetedServices;
}

@property (nonatomic) int authType;
@property (nonatomic) bool canDoTermsAndConditions;
@property (nonatomic) bool forceFail;
@property (nonatomic) bool isCLIMode;
@property (nonatomic, retain) UIViewController *presentingChildViewController;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) NSString *rawPassword;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) bool shouldForceInteractiveAuth;
@property (nonatomic) bool shouldIgnoreAuthFailures;
@property (nonatomic) bool shouldSetupHomePod;
@property (nonatomic) bool shouldUseAIDA;
@property (nonatomic, retain) NSSet *targetedServices;

- (void).cxx_destruct;
- (bool)_canDoMagicAuthForAccount:(id)arg1;
- (void)_reportAuthMetrics:(id)arg1 durationSeconds:(double)arg2 authType:(int)arg3 deviceType:(int)arg4 sessionID:(id)arg5 authServiceType:(int)arg6;
- (int)authType;
- (bool)canDoTermsAndConditions;
- (void)execute;
- (bool)forceFail;
- (bool)isCLIMode;
- (id)presentingChildViewController;
- (id)presentingViewController;
- (id)rawPassword;
- (id)sessionID;
- (void)setAuthType:(int)arg1;
- (void)setCanDoTermsAndConditions:(bool)arg1;
- (void)setForceFail:(bool)arg1;
- (void)setIsCLIMode:(bool)arg1;
- (void)setPresentingChildViewController:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setShouldForceInteractiveAuth:(bool)arg1;
- (void)setShouldIgnoreAuthFailures:(bool)arg1;
- (void)setShouldSetupHomePod:(bool)arg1;
- (void)setShouldUseAIDA:(bool)arg1;
- (void)setTargetedServices:(id)arg1;
- (bool)shouldForceInteractiveAuth;
- (bool)shouldIgnoreAuthFailures;
- (bool)shouldSetupHomePod;
- (bool)shouldUseAIDA;
- (id)targetedServices;

@end
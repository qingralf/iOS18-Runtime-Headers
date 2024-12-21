/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIActionLocationPrompt : VUIAction {
    id /* block */  _completionHandler;
    NSDictionary * _dialogMetrics;
    VUIAction * _failureAction;
    bool  _forcesSystemPrompt;
    bool  _geoLocationEnforced;
    NSString * _settingsPromptButtonTitle;
    NSString * _settingsPromptCancelTitle;
    NSString * _settingsPromptMessage;
    NSString * _settingsPromptTitle;
    NSURL * _settingsURL;
    VUIAction * _successAction;
    UIResponder * _targetResponder;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSDictionary *dialogMetrics;
@property (nonatomic, retain) VUIAction *failureAction;
@property (nonatomic) bool forcesSystemPrompt;
@property (nonatomic) bool geoLocationEnforced;
@property (nonatomic, retain) NSString *settingsPromptButtonTitle;
@property (nonatomic, retain) NSString *settingsPromptCancelTitle;
@property (nonatomic, retain) NSString *settingsPromptMessage;
@property (nonatomic, retain) NSString *settingsPromptTitle;
@property (nonatomic, retain) NSURL *settingsURL;
@property (nonatomic, retain) VUIAction *successAction;
@property (nonatomic) UIResponder *targetResponder;

+ (id)_actionWithDictionary:(id)arg1 appContext:(id)arg2;

- (void).cxx_destruct;
- (void)_continueWithSuccess:(bool)arg1 targetResponder:(id)arg2 completion:(id /* block */)arg3;
- (void)_locationAuthorizationStatusDidChange:(id)arg1;
- (id /* block */)completionHandler;
- (id)dialogMetrics;
- (id)failureAction;
- (bool)forcesSystemPrompt;
- (bool)geoLocationEnforced;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDialogMetrics:(id)arg1;
- (void)setFailureAction:(id)arg1;
- (void)setForcesSystemPrompt:(bool)arg1;
- (void)setGeoLocationEnforced:(bool)arg1;
- (void)setSettingsPromptButtonTitle:(id)arg1;
- (void)setSettingsPromptCancelTitle:(id)arg1;
- (void)setSettingsPromptMessage:(id)arg1;
- (void)setSettingsPromptTitle:(id)arg1;
- (void)setSettingsURL:(id)arg1;
- (void)setSuccessAction:(id)arg1;
- (void)setTargetResponder:(id)arg1;
- (id)settingsPromptButtonTitle;
- (id)settingsPromptCancelTitle;
- (id)settingsPromptMessage;
- (id)settingsPromptTitle;
- (id)settingsURL;
- (id)successAction;
- (id)targetResponder;

@end
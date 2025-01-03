/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactlessReaderUI.framework/ContactlessReaderUI
 */

@interface ContactlessReaderUI.PrivacyAuthenticatorWrapper : NSObject <PKAuthenticatorDelegate> {
    void authenticator;
    void currentState;
    void delegate;
    void hasAttemptedBiometicAuth;
    void hasPresentedPasscodePrompt;
    void idleStateIsPasscode;
    void invalidated;
    void model;
    void shouldShowGlyph;
}

- (void).cxx_destruct;
- (void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(struct { long long x1; long long x2; })arg2;
- (void)dealloc;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (id)init;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;

@end

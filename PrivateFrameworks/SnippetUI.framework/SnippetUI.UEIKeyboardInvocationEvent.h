/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SnippetUI.framework/SnippetUI
 */

@interface SnippetUI.UEIKeyboardInvocationEvent : VRXTurnBasedInstrumentationEvent {
    void instrumentationClient;
    void keyboardPrimaryLanguage;
}

@property (nonatomic, readonly) bool requiresNewTurn;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (void)emitWithTurnIdentifier:(id)arg1 aceViewId:(id)arg2;
- (id)init;
- (bool)requiresNewTurn;

@end
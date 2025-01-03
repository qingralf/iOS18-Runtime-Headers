/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFExternalUIPresenter : NSObject {
    bool  _connected;
    <WFExternalUIPresenterConnection> * _connection;
}

@property (nonatomic) bool connected;
@property (nonatomic, readonly) <WFExternalUIPresenterConnection> *connection;

- (void).cxx_destruct;
- (bool)connected;
- (id)connection;
- (void)didFinishActionWithIdentifier:(id)arg1;
- (void)didStartActionWithIdentifier:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)performDialogRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performSiriRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnected:(bool)arg1;
- (void)willBeginExecutingShortcutStep:(id)arg1;
- (void)willBeginExecutingShortcutWithActionCount:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMStewieChat : NSObject {
    IMDaemonController<IMDaemonProtocol> * _daemon;
}

@property (nonatomic, retain) IMDaemonController<IMDaemonProtocol> *daemon;

- (void).cxx_destruct;
- (id)daemon;
- (void)daemonConnectionLost;
- (void)daemonControllerDidDisconnect;
- (void)dealloc;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)locationUpdateDelivered:(id)arg1;
- (void)openStewieChatWithContext:(id)arg1;
- (void)sendQuestionnaire:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setUpConnectionToDaemaon;

@end

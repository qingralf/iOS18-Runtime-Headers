/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMultiplayerDaemonProxyHelper : NSObject <GKMultiplayerDaemonProxy>

- (oneway void)completeGameRecording;
- (oneway void)completeMatchRecording:(id)arg1 matchType:(id)arg2;
- (oneway void)emitMultiplayerMessage:(id)arg1;
- (oneway void)fileMultiplayerTTRWithCallBackIdentifier:(id)arg1 descriptionAddition:(id)arg2 handler:(id /* block */)arg3;
- (oneway void)getMultiPlayerGroups:(id /* block */)arg1;
- (oneway void)initiateRelayRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)multiplayerService;
- (oneway void)putMultiPlayerGroup:(id)arg1 participants:(id)arg2 playedAt:(long long)arg3 bundleID:(id)arg4 numberOfAutomatched:(long long)arg5 handler:(id /* block */)arg6;
- (oneway void)removeInviteSession;
- (oneway void)revokePseudonym:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)sendInvitationUpdate:(id)arg1 handler:(id /* block */)arg2;
- (oneway void)sendReconnectInvitation:(id)arg1 toPlayer:(id)arg2 connectionData:(id)arg3 sessionToken:(id)arg4 pushToken:(id)arg5 handler:(id /* block */)arg6;
- (oneway void)updateRelayRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)utilityService;

@end

/* Generated by RuntimeBrowser.
 */

@protocol GKClientProtocol <NSObject>

@required

- (oneway void)acceptInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)acceptMultiplayerGameInvite;
- (oneway void)achievementSelected:(GKAchievementInternal *)arg1;
- (oneway void)authenticatedPlayersDidChange:(void *)arg1 authenticatingBundleID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)beginNetworkActivity;
- (oneway void)cancelGameInvite:(NSString *)arg1;
- (oneway void)cancelInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)challengeCompleted:(GKChallengeInternal *)arg1;
- (oneway void)challengeReceived:(GKChallengeInternal *)arg1;
- (oneway void)completedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)completedOptimisticAuthenticationWithResponse:(GKAuthenticateResponse *)arg1 error:(NSError *)arg2;
- (oneway void)declineInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)didConnectToParticipantWithID:(NSString *)arg1;
- (oneway void)didDisconnectFromParticipantWithID:(NSString *)arg1;
- (oneway void)didReceiveData:(NSData *)arg1 reliably:(bool)arg2 forRecipients:(NSArray *)arg3 fromSender:(NSString *)arg4;
- (oneway void)endNetworkActivity;
- (oneway void)fetchTurnBasedData;
- (oneway void)friendRequestSelected:(GKFriendRequestInternal *)arg1;
- (oneway void)metricsValuesChanged;
- (oneway void)nearbyDataReceivedForPlayerID:(NSString *)arg1 deviceID:(NSString *)arg2 data:(NSData *)arg3;
- (oneway void)nearbyPlayerFoundForPlayerID:(NSString *)arg1 deviceID:(NSString *)arg2 discoveryInfo:(NSDictionary *)arg3;
- (oneway void)nearbyPlayerLostForPlayerID:(NSString *)arg1 deviceID:(NSString *)arg2;
- (oneway void)presentBannerWithNotification:(NSData *)arg1;
- (oneway void)receivedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)relayPushNotification:(NSDictionary *)arg1;
- (oneway void)requestSandboxExtension:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (oneway void)resetNetworkActivity;
- (oneway void)respondedToNearbyInvite:(NSDictionary *)arg1;
- (oneway void)scoreSelected:(GKScoreInternal *)arg1;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (oneway void)setCurrentGame:(void *)arg1 serverEnvironment:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: GKGameInternal *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)setPreferencesValues:(NSDictionary *)arg1;
- (oneway void)updateInviteWithNotification:(NSDictionary *)arg1;

@end
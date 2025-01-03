/* Generated by RuntimeBrowser.
 */

@protocol IMDaemonListenerAccountsProtocol <NSObject>

@required

- (void)didAttemptToDisableAllDevicesResult:(bool)arg1;
- (void)didAttemptToSetEnabledTo:(bool)arg1 result:(bool)arg2;
- (void)didPerformAdditionalStorageRequiredCheckWithSuccess:(bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(NSString *)arg3 error:(NSError *)arg4;
- (void)nicknameRequestResponse:(NSString *)arg1 encodedNicknameData:(NSData *)arg2;
- (void)simSubscriptionsDidChange;
- (void)updateActiveNicknameRecords:(NSDictionary *)arg1;
- (void)updateCloudKitState;
- (void)updateIgnoredNicknameRecords:(NSDictionary *)arg1;
- (void)updateNicknameHandlesForSharing:(NSSet *)arg1 blocked:(NSSet *)arg2;
- (void)updatePendingNicknameUpdates:(NSDictionary *)arg1 handledNicknames:(NSDictionary *)arg2 archivedNicknames:(NSDictionary *)arg3;
- (void)updatePersonalNickname:(IMNickname *)arg1;
- (void)updateTransitionedNicknameHandles:(NSSet *)arg1;
- (void)updateUnknownSenderRecords:(NSDictionary *)arg1;

@end

/* Generated by RuntimeBrowser.
 */

@protocol TUConversationManagerDataSource <NSObject>

@required

- (void)activateConversationNoticeWithActionURL:(NSURL *)arg1 bundleIdentifier:(NSString *)arg2;
- (void)activateLink:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: TUConversationLink *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSSet *)activatedConversationLinks;
- (NSDictionary *)activityAuthorizedBundleIdentifiers;
- (void)addCollaborationDictionary:(NSDictionary *)arg1 forConversationWithUUID:(NSUUID *)arg2 fromMe:(bool)arg3;
- (void)addCollaborationIdentifier:(NSString *)arg1 collaborationURL:(NSString *)arg2 cloudKitAppBundleIDs:(NSArray *)arg3 forConversationUUID:(NSUUID *)arg4;
- (void)addDisclosedCollaborationInitiator:(TUCollaborationInitiator *)arg1 toConversationUUID:(NSUUID *)arg2;
- (void)addInvitedMemberHandles:(void *)arg1 toConversationLink:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSSet *, TUConversationLink *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUConversationLink *, NSError *, void*
- (void)addRemoteMembers:(NSSet *)arg1 otherInvitedHandles:(NSSet *)arg2 toConversation:(TUConversation *)arg3;
- (void)addRemoteMembers:(NSSet *)arg1 toConversation:(TUConversation *)arg2;
- (void)addScreenSharingType:(unsigned long long)arg1 forConversation:(TUConversation *)arg2;
- (void)approvePendingMember:(TUConversationMember *)arg1 forConversation:(TUConversation *)arg2;
- (bool)autoSharePlayEnabled;
- (void)buzzMember:(TUConversationMember *)arg1 conversation:(TUConversation *)arg2;
- (void)cancelOrDenyScreenShareRequest:(TUScreenSharingRequest *)arg1 forConversation:(TUConversation *)arg2;
- (void)checkLinkValidity:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: TUConversationLink *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDate *, NSError *, void*
- (void)conversationUpdateMessagesGroupPhoto:(TUConversation *)arg1;
- (NSDictionary *)conversationsByGroupUUID;
- (void)createActivitySession:(TUConversationActivity *)arg1 onConversation:(TUConversation *)arg2;
- (<TUConversationManagerDataSourceDelegate> *)delegate;
- (void)endActivitySession:(TUConversationActivitySession *)arg1 onConversation:(TUConversation *)arg2;
- (void)fetchUpcomingNoticeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUConversationNotice *, NSError *, void*
- (void)generateLinkForConversation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: TUConversation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUConversationLink *, NSError *, void*
- (void)generateLinkWithInvitedMemberHandles:(void *)arg1 linkLifetimeScope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSSet *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUConversationLink *, NSError *, void*
- (void)getActiveLinksWithCreatedOnly:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)getInactiveLinkWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUConversationLink *, NSError *, void*
- (void)getLatestRemoteScreenShareAttributesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TUScreenShareAttributes> *, void*
- (void)getMessagesGroupDetailsForConversationUUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)getNeedsDisclosureOfCollaborationInitiator:(void *)arg1 forConversationUUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: TUCollaborationInitiator *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSDictionary *)incomingPendingConversationsByGroupUUID;
- (void)invalidate;
- (void)invalidateLink:(void *)arg1 deleteReason:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: TUConversationLink *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)isScreenSharingAvailable;
- (bool)isSharePlayAvailable;
- (void)joinConversationWithRequest:(TUJoinConversationRequest *)arg1;
- (void)kickMember:(TUConversationMember *)arg1 conversation:(TUConversation *)arg2;
- (void)launchApplicationForActivitySessionUUID:(void *)arg1 authorizedExternally:(void *)arg2 forceBackground:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)leaveActivitySession:(TUConversationActivitySession *)arg1 onConversation:(TUConversation *)arg2;
- (void)leaveConversationWithUUID:(NSUUID *)arg1;
- (void)linkSyncStateIncludeLinks:(void *)arg1 WithCompletion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)markCollaborationWithIdentifierOpened:(NSString *)arg1 forConversationUUID:(NSUUID *)arg2;
- (<TUConversationMediaControllerDataSourceDelegate> *)mediaDelegate;
- (void)prepareConversationWithUUID:(NSUUID *)arg1 withHandoffContext:(TUConversationHandoffContext *)arg2;
- (void)presentDismissalAlertForActivitySession:(TUConversationActivitySession *)arg1 onConversation:(TUConversation *)arg2;
- (NSDictionary *)pseudonymsByCallUUID;
- (<TUConversationReactionsControllerDataSourceDelegate> *)reactionsDelegate;
- (void)refreshActiveConversations;
- (void)registerMessagesGroupUUIDForConversationUUID:(NSUUID *)arg1;
- (void)registerWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)rejectPendingMember:(TUConversationMember *)arg1 forConversation:(TUConversation *)arg2;
- (void)removeCollaborationIdentifier:(NSString *)arg1 forConversationUUID:(NSUUID *)arg2;
- (void)removeConversationNoticeWithUUID:(NSUUID *)arg1;
- (void)renewLink:(void *)arg1 expirationDate:(void *)arg2 reason:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: TUConversationLink *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestParticipantToShareScreen:(TUConversationParticipant *)arg1 forConversation:(TUConversation *)arg2;
- (void)requestScreenSharingPickerForConversationUUID:(NSUUID *)arg1 withContentStyle:(long long)arg2;
- (void)scheduleConversationLinkCheckInInitial:(bool)arg1;
- (void)setActivityAuthorization:(bool)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)setAutoSharePlayEnabled:(bool)arg1;
- (void)setDelegate:(id <TUConversationManagerDataSourceDelegate>)arg1;
- (void)setDownlinkMuted:(bool)arg1 forRemoteParticipantsInConversation:(TUConversation *)arg2;
- (void)setGridDisplayMode:(unsigned long long)arg1 conversation:(TUConversation *)arg2;
- (void)setIgnoreLetMeInRequests:(bool)arg1 forConversation:(TUConversation *)arg2;
- (void)setLinkName:(void *)arg1 forConversationLink:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, TUConversationLink *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUConversationLink *, NSError *, void*
- (void)setLocalParticipantAudioVideoMode:(unsigned long long)arg1 forConversationUUID:(NSUUID *)arg2;
- (void)setMediaDelegate:(id <TUConversationMediaControllerDataSourceDelegate>)arg1;
- (void)setReactionsDelegate:(id <TUConversationReactionsControllerDataSourceDelegate>)arg1;
- (void)setScreenEnabled:(bool)arg1 withScreenShareAttributes:(TUScreenShareAttributes *)arg2 forConversationWithUUID:(NSUUID *)arg3;
- (void)setSharePlayHandedOff:(bool)arg1 onConversationWithUUID:(NSUUID *)arg2;
- (void)setSupportsMessagesGroupProviding:(bool)arg1;
- (void)setUsingAirplay:(bool)arg1 onActivitySession:(TUConversationActivitySession *)arg2 onConversationWithUUID:(NSUUID *)arg3;
- (void)startTrackingCollaborationWithIdentifier:(void *)arg1 collaborationURL:(void *)arg2 cloudKitAppBundleIDs:(void *)arg3 forConversationUUID:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, NSArray *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)updateConversationWithUUID:(NSUUID *)arg1 participantPresentationContexts:(NSArray *)arg2;
- (void)updateLocalParticipantToAVLessWithPresentationMode:(unsigned long long)arg1 forConversationUUID:(NSUUID *)arg2;
- (void)updateMessagesGroupName:(NSString *)arg1 onConversation:(TUConversation *)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAPIReporter : NSObject

+ (id)reporter;

- (void)recordClickWithAction:(id)arg1 targetId:(id)arg2 targetType:(id)arg3 pageId:(id)arg4 pageType:(id)arg5;
- (void)recordClickWithAction:(id)arg1 targetId:(id)arg2 targetType:(id)arg3 pageId:(id)arg4 pageType:(id)arg5 additionalFields:(id)arg6;
- (void)recordClickWithAction:(id)arg1 targetId:(id)arg2 targetType:(id)arg3 pageId:(id)arg4 pageType:(id)arg5 hostApp:(id)arg6 app:(id)arg7 additionalFields:(id)arg8;
- (void)recordFriendInviteActivityEventAtStage:(unsigned long long)arg1 hostApp:(id)arg2;
- (void)recordInviteFriendClickEventWithPageType:(id)arg1 pageId:(id)arg2 pushBased:(bool)arg3 knownRecipient:(bool)arg4 location:(id)arg5;
- (void)recordLoadUrlMetrics:(id)arg1;
- (void)recordMultiplayerActivityMetrics:(id)arg1;
- (void)recordMultiplayerErrorID:(id)arg1;
- (void)recordPageWithID:(id)arg1 pageContext:(id)arg2 pageType:(id)arg3;
- (void)recordPageWithID:(id)arg1 pageContext:(id)arg2 pageType:(id)arg3 refApp:(id)arg4;
- (void)recordPageWithID:(id)arg1 pageContext:(id)arg2 pageType:(id)arg3 refApp:(id)arg4 hostApp:(id)arg5 app:(id)arg6 additionalFields:(id)arg7;
- (void)recordPerformanceMetrics:(id)arg1;
- (void)recordVoiceChat;
- (void)sendMetrics:(id)arg1;
- (void)sendPerformanceMetrics:(id)arg1;
- (id)utilityService;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputAnalyticsServer.framework/InputAnalyticsServer
 */

@interface IASTextInputActionsSessionManager : IASMultiClassSessionManager

- (void)broadcastActionToSubscribingAnalyzers:(id)arg1;
- (void)didAction:(id)arg1;
- (void)didSessionBeginWithSessionMetadata:(id)arg1;
- (void)didSessionEndWithSessionMetadata:(id)arg1;
- (id)init;
- (id)initWithEventHandler:(id /* block */)arg1 serverDelegate:(id)arg2;

@end
/* Generated by RuntimeBrowser.
 */

@protocol ATXNotificationCategorizationXPCInterface

@required

- (void)collectCoreAnalyticsJsonForNotification:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXUserNotification *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)collectDynamicBreakthroughFeaturesForNotification:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXUserNotification *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXNotificationCategorizationFeatureCollectionSet *, NSError *, void*
- (void)fetchContextForMailWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXMailContextRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXMailContextResponse *, NSError *, void*
- (void)fetchContextForMessageWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXMessageContextRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXMessageContextResponse *, NSError *, void*
- (void)fetchContextForNotificationWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXNotificationContextRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXNotificationContextResponse *, NSError *, void*
- (void)rankUserNotificationWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXNotificationRankingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXNotificationRankingResult *, NSError *, void*

@end

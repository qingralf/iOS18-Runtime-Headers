/* Generated by RuntimeBrowser.
 */

@protocol VoiceActions.VAKeywordSpotterDelegate

@required

- (void)keywordSpotterDidDetectKeywordWithEvent:(_TtC12VoiceActions21VAKeywordSpottedEvent *)arg1;

@optional

- (void)keywordSpotterDidStopWithSummaryWithJson:(NSString *)arg1 uuid:(NSUUID *)arg2 perfLogs:(NSArray *)arg3;
- (void)keywordSpotterDidUpdateScoresWithVerboseLog:(NSString *)arg1;

@end

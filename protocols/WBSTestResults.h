/* Generated by RuntimeBrowser.
 */

@protocol WBSTestResults

@required

- (void)beginTest:(id <WBSTest>)arg1 inBundle:(id <WBSTestBundle>)arg2;
- (void)endTest:(id <WBSTest>)arg1 inBundle:(id <WBSTestBundle>)arg2;
- (void)flushWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)reportActualResults:(NSData *)arg1 expectedResults:(NSData *)arg2 expectedResultsName:(NSString *)arg3 uniformTypeIdentifier:(NSString *)arg4 forStage:(NSString *)arg5 forTest:(id <WBSTest>)arg6 inBundle:(id <WBSTestBundle>)arg7;
- (void)reportError:(NSError *)arg1 forStage:(NSString *)arg2 forTest:(id <WBSTest>)arg3 inBundle:(id <WBSTestBundle>)arg4;
- (void)reportPerformance:(NSDictionary *)arg1 forStage:(NSString *)arg2 forTest:(id <WBSTest>)arg3 inBundle:(id <WBSTestBundle>)arg4;

@end
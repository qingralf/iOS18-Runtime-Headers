/* Generated by RuntimeBrowser.
 */

@protocol LAUIMechanism <LAContextExternalizationProt>

@required

- (void)internalInfoWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)uiEvent:(long long)arg1 options:(NSDictionary *)arg2;
- (void)uiFailureWithError:(NSError *)arg1;
- (void)uiSuccessWithResult:(NSDictionary *)arg1;

@end

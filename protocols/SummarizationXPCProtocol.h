/* Generated by RuntimeBrowser.
 */

@protocol SummarizationXPCProtocol

@required

- (void)cancelRequestWithIdentifier:(NSString *)arg1;
- (void)performStreamingSummarizationRequest:(_TtC4Sage23SummarizationXPCRequest *)arg1 delegate:(id <SummarizationStreamingDelegate>)arg2;
- (void)performSummarizationRequest:(void *)arg1 with:(void *)arg2; // needs 2 arg types, found 8: _TtC4Sage23SummarizationXPCRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC4Sage22SummarizationXPCResult *, NSError *, void*

@end
/* Generated by RuntimeBrowser.
 */

@protocol SMEligibilityProtocol

@required

- (void)checkConversationEligibility:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: SMConversation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)checkInitiatorEligibilityWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*

@optional

- (void)checkHasSimWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
/* Generated by RuntimeBrowser.
 */

@protocol SUControllerMessageEndpoint <NSObject>

@optional

+ (id)sharedEndpoint;

- (void)resume;
- (void)sendErrorReply:(NSError *)arg1 toMessage:(NSString *)arg2;
- (void)sendMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendMessage:(void *)arg1 isCritical:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendMessage:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)sendReply:(NSDictionary *)arg1 toMessage:(NSString *)arg2;
- (void)setHandler:(void *)arg1 forMessagesOfType:(void *)arg2; // needs 2 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSString *, void*, NSString *
- (void)setHandler:(void *)arg1 forMessagesOfTypes:(void *)arg2; // needs 2 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSString *, void*, NSArray *
- (void)suspend;

@end

/* Generated by RuntimeBrowser.
 */

@protocol SNConnectionProtocol

@required

- (void)barrier:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)cancelSynchronously:(void *)arg1 isOnConnectionQueue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)getSNConnectionAnalysisInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SNConnectionAnalysisInfo *, void*
- (void)getSNConnectionMetrics:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SNConnectionMetrics *, void*
- (void)probeConnection;
- (void)sendCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <SNSessionObject><SNThunking> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendCommands:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SNSessionObject> *, NSError *, void*
- (void)sendData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_data> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSendPings:(bool)arg1;
- (NSError *)start;

@end

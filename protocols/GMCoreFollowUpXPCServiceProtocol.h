/* Generated by RuntimeBrowser.
 */

@protocol GMCoreFollowUpXPCServiceProtocol

@required

- (void)clearAllCFUsWith:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)pendingCFUsWith:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)postOutOfStorageCFUWithForce:(void *)arg1 remainingSpaceRequired:(void *)arg2 with:(void *)arg3; // needs 3 arg types, found 9: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)runOutOfStorageCheckWithForce:(void *)arg1 with:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end

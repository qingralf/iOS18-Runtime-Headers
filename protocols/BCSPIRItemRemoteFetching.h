/* Generated by RuntimeBrowser.
 */

@protocol BCSPIRItemRemoteFetching <NSObject>

@required

- (void)fetchDataMatching:(void *)arg1 timeout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <BCSBusinessQuery> *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchDataMatchingBatch:(void *)arg1 timeout:(void *)arg2 perItemBlock:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 16: <BCSBusinessBatchQuery> *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, <BCSItemIdentifying> *, NSData *, NSError *, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end

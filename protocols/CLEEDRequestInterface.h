/* Generated by RuntimeBrowser.
 */

@protocol CLEEDRequestInterface

@required

- (void)fetchAllPendingRequestsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)fetchCurrentMediaUploadRequestWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLEEDUploadRequest *, NSError *, void*
- (void)fetchCurrentStreamingRequestWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLEEDStreamingRequest *, NSError *, void*
- (void)fetchMitigationsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLEEDMitigation *, NSError *, void*
- (void)handleResponse:(void *)arg1 forRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: bool, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLEEDRequest *, NSError *, void*
- (void)mediaUploadList:(void *)arg1 forRequestID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)streamingSessionEndedForRequestID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
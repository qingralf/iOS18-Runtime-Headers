/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface PBFPosterSnapshotFetchCompletionHandler : NSObject {
    id /* block */  _completionHandler;
    BSAtomicFlag * _didFireCompletionHandler;
    PBFPosterSnapshotRequest * _request;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) PBFPosterSnapshotRequest *request;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)finishWithSuccess:(id)arg1;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)request;

@end

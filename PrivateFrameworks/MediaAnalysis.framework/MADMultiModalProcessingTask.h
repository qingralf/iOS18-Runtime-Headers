/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface MADMultiModalProcessingTask : VCPMABaseTask {
    NSObject<OS_dispatch_queue> * _cancelQueue;
    NSArray * _inputs;
    NSArray * _requests;
    NSString * _signpostPayload;
    NSMutableArray * _subtasks;
}

@property (nonatomic, retain) NSString *signpostPayload;

- (void).cxx_destruct;
- (bool)cachesResources;
- (void)cancel;
- (id)initWithRequests:(id)arg1 inputs:(id)arg2 cancelBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)run:(id*)arg1;
- (void)setSignpostPayload:(id)arg1;
- (id)signpostPayload;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface MADMultiModalProcessingSubtask : NSObject <VCPMADTaskProtocol> {
    NSArray * _inputs;
    MADMultiModalRequest * _request;
    NSString * _signpostPayload;
}

@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) MADMultiModalRequest *request;
@property (nonatomic, copy) NSString *signpostPayload;

+ (bool)prewarmRequest:(id)arg1 error:(id*)arg2;
+ (id)subtaskForRequest:(id)arg1 inputs:(id)arg2;

- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (id)initWithRequest:(id)arg1 inputs:(id)arg2;
- (id)inputs;
- (id)request;
- (float)resourceRequirement;
- (int)run;
- (void)setSignpostPayload:(id)arg1;
- (id)signpostPayload;

@end
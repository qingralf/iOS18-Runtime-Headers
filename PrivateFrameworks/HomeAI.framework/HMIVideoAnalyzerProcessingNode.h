/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIVideoAnalyzerProcessingNode : HMIVideoProcessingNode {
    HMIVideoAnalyzerConfiguration * _configuration;
    HMIVideoAnalyzerDynamicConfiguration * _dynamicConfiguration;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (retain) HMIVideoAnalyzerDynamicConfiguration *dynamicConfiguration;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)configuration;
- (id)dynamicConfiguration;
- (id)initWithConfiguration:(id)arg1 workQueue:(id)arg2;
- (void)setDynamicConfiguration:(id)arg1;
- (id)workQueue;

@end
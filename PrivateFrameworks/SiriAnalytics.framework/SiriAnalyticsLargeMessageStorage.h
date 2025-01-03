/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface SiriAnalyticsLargeMessageStorage : NSObject {
    NSString * _applicationIdentifier;
    SiriAnalyticsLargeMessageUploadProcessor * _processor;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _runtimeQueue;
}

- (void).cxx_destruct;
- (void)enqueueLargeMessageObjectFromPath:(id)arg1 messageWrapper:(id)arg2 requestIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithApplicationIdentifier:(id)arg1 processor:(id)arg2 runtimeQueue:(id)arg3;

@end

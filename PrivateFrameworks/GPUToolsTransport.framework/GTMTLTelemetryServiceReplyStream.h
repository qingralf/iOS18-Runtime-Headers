/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTMTLTelemetryServiceReplyStream : GTXPCDispatcher <GTMTLTelemetryServiceObserverXPCDispatcher> {
    <GTMTLTelemetryServiceObserver> * _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;
- (void)notifyStatistics_:(id)arg1 replyConnection:(id)arg2;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AIMLInstrumentationStreams.framework/AIMLInstrumentationStreams
 */

@interface _TtCC26AIMLInstrumentationStreams25BiomeEventGraphsPublisher19SessionIDSubscriber : NSObject <BPSSubscriber> {
    void downstream;
    void eventsHandledInGraphBuilder;
    void graphSessionWindowLength;
    void latestRecievedTimestamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void logicalClockBuilder;
    void maxEventsInGraph;
    void maxEventsInGraphBuilder;
    void sessionBuilder;
    void sessionCount;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  tracker;
    void upstreamFinished;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;

@end
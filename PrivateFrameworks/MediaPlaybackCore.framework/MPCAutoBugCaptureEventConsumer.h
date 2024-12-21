/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAutoBugCaptureEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    NSMutableSet * _reportedBugSignatures;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *reportedBugSignatures;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (void)autoBugCaptureWithSubType:(id)arg1 context:(id)arg2 triggerThresholdValues:(id)arg3 events:(id)arg4;
- (id)reportedBugSignatures;
- (bool)shouldReportError:(id)arg1;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
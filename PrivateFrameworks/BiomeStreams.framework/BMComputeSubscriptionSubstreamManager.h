/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMComputeSubscriptionSubstreamManager : NSObject {
    NSMutableDictionary * _checkins;
    NSDate * _dateOverride;
    bool  _initialCheckinsComplete;
    <BMLibraryNode> * _library;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _subscriptions;
}

- (void).cxx_destruct;
- (void)_checkinTimeout;
- (id)_initWithDomain:(unsigned long long)arg1 queue:(id)arg2 library:(id)arg3;
- (id)_loadSubscriptionsFromSubscriptionsSubstreams;
- (void)_removeSubscriptionsPassingTest:(id /* block */)arg1;
- (id)_subscriptionSourceForStream:(id)arg1;
- (void)addSubscription:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)initialCheckinsComplete;
- (void)removeSubscription:(id)arg1;
- (bool)supportsStream:(id)arg1;
- (double)timestamp;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {
    id /* block */  _availabilityChangedNotificationBlock;
    bool  _available;
    FCNetworkReachability * _networkReachability;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ availabilityChangedNotificationBlock;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCNetworkReachability *networkReachability;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class todayResultsFetchDescriptorClass;

- (void).cxx_destruct;
- (id /* block */)availabilityChangedNotificationBlock;
- (id)init;
- (id)initWithNetworkReachability:(id)arg1 queue:(id)arg2;
- (bool)isAvailable;
- (id)networkReachability;
- (id)queue;
- (void)setAvailabilityChangedNotificationBlock:(id /* block */)arg1;
- (void)setNetworkReachability:(id)arg1;
- (void)setQueue:(id)arg1;
- (Class)todayResultsFetchDescriptorClass;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContextSync.framework/ContextSync
 */

@interface BMDistributedContextSubscriptionManager : NSObject {
    <BMDistributedContextSubscriptionStorage> * _storage;
    NSMutableArray * _subscriptions;
}

@property (nonatomic, retain) <BMDistributedContextSubscriptionStorage> *storage;
@property (nonatomic, retain) NSMutableArray *subscriptions;

+ (id)loadAndMigrateStorageFromLegacyToV1:(id)arg1 withLocalDeviceID:(id)arg2;
+ (id)loadFromStorage:(id)arg1 withLocalDeviceID:(id)arg2;
+ (unsigned long long)storageVersion:(id)arg1;

- (void).cxx_destruct;
- (bool)addSubscriptions:(id)arg1;
- (id)allSubscriptionIdentifiers;
- (id)allSubscriptions;
- (id)deviceIdentifiersWithActiveSubscriptions;
- (id)initWithStorage:(id)arg1;
- (bool)removeAllSubscriptionsMadeBySubscribingDevice:(id)arg1;
- (bool)removeSubscription:(id)arg1;
- (bool)removeSubscriptionWithIdentifier:(id)arg1 fromSubscribingDevice:(id)arg2 onSubscribedDevice:(id)arg3;
- (void)saveToStorage;
- (void)setStorage:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)storage;
- (id)subscribingDevicesForIdentifier:(id)arg1 subscribedToDevice:(id)arg2;
- (id)subscriptionForIdentifier:(id)arg1 fromSubscribingDevice:(id)arg2 onSubscribedDevice:(id)arg3;
- (id)subscriptions;
- (id)subscriptionsWithIdentifier:(id)arg1 subscribedToDevice:(id)arg2;
- (id)subscriptionsWithSubscribedDevice:(id)arg1;
- (id)subscriptionsWithSubscribingDevice:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSPublicEventCache : CLSDBCache

+ (id)defaultCacheName;

- (void)_updateManagedEvent:(id)arg1 withEvent:(id)arg2 inContext:(id)arg3;
- (id)dataModelName;
- (bool)hasTimeLocationTuple:(id)arg1;
- (bool)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)arg1 forTimeLocationTuples:(id)arg2;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)arg1;
- (id)predicateForTimeLocationTuple:(id)arg1;
- (id)publicEventFromManagedObject:(id)arg1;
- (id)publicEventsForMuid:(unsigned long long)arg1;
- (id)publicEventsForTimeLocationTuple:(id)arg1;

@end

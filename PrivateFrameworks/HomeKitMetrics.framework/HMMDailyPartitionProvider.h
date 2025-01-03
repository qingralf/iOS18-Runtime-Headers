/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics
 */

@interface HMMDailyPartitionProvider : NSObject <HMMCounterDatePartitionProvider> {
    HMMDateProvider * _dateProvider;
}

@property (nonatomic, readonly, copy) NSDate *currentDatePartition;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)currentDatePartition;
- (id)datePartitionContainingDate:(id)arg1;
- (id)datePartitionWithOffset:(long long)arg1 fromDatePartition:(id)arg2;
- (id)datePartitionWithOffsetFromNow:(long long)arg1;
- (id)dateProvider;
- (id)initWithDateProvider:(id)arg1;

@end

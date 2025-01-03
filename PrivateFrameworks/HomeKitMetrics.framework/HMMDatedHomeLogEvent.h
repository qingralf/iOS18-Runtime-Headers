/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics
 */

@interface HMMDatedHomeLogEvent : HMMHomeLogEvent {
    NSDate * _endDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _startDate;
}

@property (readonly) NSDate *endDate;
@property (readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (id)initWithHomeUUID:(id)arg1;
- (id)initWithStartTime:(double)arg1 homeUUID:(id)arg2;
- (void)markEndTime;
- (id)startDate;

@end

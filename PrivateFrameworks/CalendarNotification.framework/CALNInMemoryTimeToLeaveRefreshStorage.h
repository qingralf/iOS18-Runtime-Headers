/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNInMemoryTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage> {
    NSMutableDictionary * _refreshDateMap;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *refreshDateMap;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (id)init;
- (id)refreshDateMap;
- (id)refreshDateWithIdentifier:(id)arg1;
- (id)refreshDates;
- (void)removeRefreshDateWithIdentifier:(id)arg1;
- (void)removeRefreshDates;
- (id)workQueue;

@end

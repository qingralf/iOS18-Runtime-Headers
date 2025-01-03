/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HURestrictedGuestScheduleItem : HFItem {
    HMHome * _home;
    HFSchedule * _schedule;
    HMUser * _user;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFSchedule *schedule;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 user:(id)arg2;
- (id)initWithSchedule:(id)arg1;
- (id)schedule;
- (void)setSchedule:(id)arg1;
- (id)user;

@end

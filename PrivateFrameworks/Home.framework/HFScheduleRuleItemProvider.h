/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFScheduleRuleItemProvider : HFItemProvider {
    HMHome * _home;
    NSMutableSet * _items;
    HFScheduleBuilder * _scheduleBuilder;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSMutableSet *items;
@property (nonatomic, retain) HFScheduleBuilder *scheduleBuilder;

- (void).cxx_destruct;
- (id)_scheduleRulesFromHome:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)initWithScheduleBuilder:(id)arg1;
- (id)initWithScheduleBuilder:(id)arg1 home:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)scheduleBuilder;
- (void)setScheduleBuilder:(id)arg1;

@end
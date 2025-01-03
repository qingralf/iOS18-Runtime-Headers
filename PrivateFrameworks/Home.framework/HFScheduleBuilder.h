/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFScheduleBuilder : NSObject <NSCopying> {
    unsigned long long  _maxNumberOfRules;
    unsigned long long  _minNumberOfRules;
    NSSet * _rules;
    bool  _supportsWeekDayRules;
    bool  _supportsYearDayRules;
}

@property (nonatomic) unsigned long long maxNumberOfRules;
@property (nonatomic) unsigned long long minNumberOfRules;
@property (nonatomic, retain) NSSet *rules;
@property (nonatomic) bool supportsWeekDayRules;
@property (nonatomic) bool supportsYearDayRules;

+ (id)scheduleBuilderFromHomeAccessSchedule:(id)arg1;
+ (id)scheduleBuilderFromSchedule:(id)arg1;
+ (id)scheduleBuilderFromType:(unsigned long long)arg1 withDefaultRules:(bool)arg2;
+ (id)scheduleBuilderFromYearDayRules:(id)arg1 weekDayRules:(id)arg2;

- (void).cxx_destruct;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)estimatedScheduleType;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxNumberOfRules;
- (unsigned long long)minNumberOfRules;
- (id)rules;
- (void)setMaxNumberOfRules:(unsigned long long)arg1;
- (void)setMinNumberOfRules:(unsigned long long)arg1;
- (void)setRules:(id)arg1;
- (void)setSupportsWeekDayRules:(bool)arg1;
- (void)setSupportsYearDayRules:(bool)arg1;
- (bool)supportsWeekDayRules;
- (bool)supportsYearDayRules;

@end

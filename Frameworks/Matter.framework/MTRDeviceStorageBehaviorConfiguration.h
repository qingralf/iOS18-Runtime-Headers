/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRDeviceStorageBehaviorConfiguration : NSObject <NSCopying> {
    double  _deviceReportingExcessivelyIntervalThreshold;
    bool  _disableStorageBehaviorOptimization;
    unsigned long long  _recentReportTimesMaxCount;
    double  _reportToPersistenceDelayMaxMultiplier;
    double  _reportToPersistenceDelayTime;
    double  _reportToPersistenceDelayTimeMax;
    double  _timeBetweenReportsTooShortMinThreshold;
    double  _timeBetweenReportsTooShortThreshold;
}

@property (nonatomic) double deviceReportingExcessivelyIntervalThreshold;
@property (nonatomic) bool disableStorageBehaviorOptimization;
@property (nonatomic) unsigned long long recentReportTimesMaxCount;
@property (nonatomic) double reportToPersistenceDelayMaxMultiplier;
@property (nonatomic) double reportToPersistenceDelayTime;
@property (nonatomic) double reportToPersistenceDelayTimeMax;
@property (nonatomic) double timeBetweenReportsTooShortMinThreshold;
@property (nonatomic) double timeBetweenReportsTooShortThreshold;

+ (id)configurationWithDefaultStorageBehavior;
+ (id)configurationWithReportToPersistenceDelayTime:(double)arg1 reportToPersistenceDelayTimeMax:(double)arg2 recentReportTimesMaxCount:(unsigned long long)arg3 timeBetweenReportsTooShortThreshold:(double)arg4 timeBetweenReportsTooShortMinThreshold:(double)arg5 reportToPersistenceDelayMaxMultiplier:(double)arg6 deviceReportingExcessivelyIntervalThreshold:(double)arg7;
+ (id)configurationWithStorageBehaviorOptimizationDisabled;

- (void)checkValuesAndResetToDefaultIfNecessary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)deviceReportingExcessivelyIntervalThreshold;
- (bool)disableStorageBehaviorOptimization;
- (unsigned long long)recentReportTimesMaxCount;
- (double)reportToPersistenceDelayMaxMultiplier;
- (double)reportToPersistenceDelayTime;
- (double)reportToPersistenceDelayTimeMax;
- (void)setDeviceReportingExcessivelyIntervalThreshold:(double)arg1;
- (void)setDisableStorageBehaviorOptimization:(bool)arg1;
- (void)setRecentReportTimesMaxCount:(unsigned long long)arg1;
- (void)setReportToPersistenceDelayMaxMultiplier:(double)arg1;
- (void)setReportToPersistenceDelayTime:(double)arg1;
- (void)setReportToPersistenceDelayTimeMax:(double)arg1;
- (void)setTimeBetweenReportsTooShortMinThreshold:(double)arg1;
- (void)setTimeBetweenReportsTooShortThreshold:(double)arg1;
- (double)timeBetweenReportsTooShortMinThreshold;
- (double)timeBetweenReportsTooShortThreshold;

@end

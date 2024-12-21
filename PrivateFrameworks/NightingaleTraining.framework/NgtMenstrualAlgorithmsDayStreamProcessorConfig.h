/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NightingaleTraining.framework/NightingaleTraining
 */

@interface NgtMenstrualAlgorithmsDayStreamProcessorConfig : NSObject <NSSecureCoding> {
    NSNumber * _awakeSHRCountThreshold;
    NSDateComponents * _birthDateComponents;
    NgtMenstrualAlgorithmsDeviationInput * _deviationInput;
    NSNumber * _julianDayOfUserReportedCycleLength;
    NSNumber * _julianDayOfUserReportedMenstruationLength;
    NSNumber * _sleepSHRCountThreshold;
    unsigned int  _todayAsJulianDay;
    NSNumber * _userReportedCycleLength;
    NSNumber * _userReportedMenstruationLength;
}

@property (nonatomic, retain) NSNumber *awakeSHRCountThreshold;
@property (nonatomic, retain) NSDateComponents *birthDateComponents;
@property (nonatomic, retain) NgtMenstrualAlgorithmsDeviationInput *deviationInput;
@property (nonatomic, retain) NSNumber *julianDayOfUserReportedCycleLength;
@property (nonatomic, retain) NSNumber *julianDayOfUserReportedMenstruationLength;
@property (nonatomic, retain) NSNumber *sleepSHRCountThreshold;
@property (nonatomic) unsigned int todayAsJulianDay;
@property (nonatomic, retain) NSNumber *userReportedCycleLength;
@property (nonatomic, retain) NSNumber *userReportedMenstruationLength;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)awakeSHRCountThreshold;
- (id)birthDateComponents;
- (id)deviationInput;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)julianDayOfUserReportedCycleLength;
- (id)julianDayOfUserReportedMenstruationLength;
- (void)setAwakeSHRCountThreshold:(id)arg1;
- (void)setBirthDateComponents:(id)arg1;
- (void)setDeviationInput:(id)arg1;
- (void)setJulianDayOfUserReportedCycleLength:(id)arg1;
- (void)setJulianDayOfUserReportedMenstruationLength:(id)arg1;
- (void)setSleepSHRCountThreshold:(id)arg1;
- (void)setTodayAsJulianDay:(unsigned int)arg1;
- (void)setUserReportedCycleLength:(id)arg1;
- (void)setUserReportedMenstruationLength:(id)arg1;
- (id)sleepSHRCountThreshold;
- (unsigned int)todayAsJulianDay;
- (id)userReportedCycleLength;
- (id)userReportedMenstruationLength;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

@interface HKMCDayViewModel : NSObject <HKRedactedDescription> {
    unsigned long long  _bleedingAfterPregnancyLevel;
    unsigned long long  _bleedingInPregnancyLevel;
    NSArray * _cycleFactors;
    HKMCDaySummary * _daySummary;
    unsigned long long  _fertileWindowLevel;
    bool  _fetched;
    unsigned long long  _menstruationLevel;
    bool  _partiallyLoggedPeriod;
    unsigned long long  _pregnancyState;
}

@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) unsigned long long bleedingAfterPregnancyLevel;
@property (nonatomic, readonly) unsigned long long bleedingInPregnancyLevel;
@property (nonatomic, readonly) unsigned long long bleedingTypesWithFlowLogged;
@property (nonatomic, readonly) NSArray *cycleFactors;
@property (nonatomic, readonly) HKMCDaySummary *daySummary;
@property (nonatomic, readonly) unsigned long long defaultLoggingBleedingType;
@property (nonatomic, readonly) unsigned long long fertileWindowLevel;
@property (getter=isFetched, nonatomic, readonly) bool fetched;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) unsigned long long menstruationLevel;
@property (getter=isPartiallyLoggedPeriod, nonatomic, readonly) bool partiallyLoggedPeriod;
@property (nonatomic, readonly) unsigned long long pregnancyState;
@property (getter=isSupplementaryDataLogged, nonatomic, readonly) bool supplementaryDataLogged;

+ (id)dayViewModelWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 pregnancyState:(unsigned long long)arg3 bleedingInPregnancyLevel:(unsigned long long)arg4 bleedingAfterPregnancyLevel:(unsigned long long)arg5 daySummary:(id)arg6 cycleFactors:(id)arg7 partiallyLoggedPeriod:(bool)arg8 fetched:(bool)arg9;
+ (id)emptyDayViewModel;
+ (id)unfetchedDayViewModel;

- (void).cxx_destruct;
- (id)_initWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 pregnancyState:(unsigned long long)arg3 bleedingInPregnancyLevel:(unsigned long long)arg4 bleedingAfterPregnancyLevel:(unsigned long long)arg5 daySummary:(id)arg6 cycleFactors:(id)arg7 partiallyLoggedPeriod:(bool)arg8 fetched:(bool)arg9;
- (id)accessibilityIdentifier;
- (unsigned long long)bleedingAfterPregnancyLevel;
- (unsigned long long)bleedingInPregnancyLevel;
- (unsigned long long)bleedingTypesWithFlowLogged;
- (id)cycleFactors;
- (id)daySummary;
- (unsigned long long)defaultLoggingBleedingType;
- (id)description;
- (unsigned long long)fertileWindowLevel;
- (id)hk_redactedDescription;
- (bool)isEqual:(id)arg1;
- (bool)isFetched;
- (bool)isPartiallyLoggedPeriod;
- (bool)isSupplementaryDataLogged;
- (unsigned long long)menstruationLevel;
- (unsigned long long)pregnancyState;

@end
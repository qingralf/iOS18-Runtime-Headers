/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKAppleSleepingBreathingDisturbancesCurrentValueDataProvider : NSObject <HKDataProviderValue> {
    long long  _classification;
    NSDate * _date;
}

@property (nonatomic, readonly) long long classification;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (long long)classification;
- (id)date;
- (id)initWithBreathingDisturbancesClassification:(long long)arg1 date:(id)arg2;

@end

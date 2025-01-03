/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKValueRange : NSObject <NSCopying, _HKPropertyAnimationProviding> {
    id  _maxValue;
    id  _minValue;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, copy) id maxValue;
@property (nonatomic, copy) id minValue;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2;

- (void).cxx_destruct;
- (bool)containsValue:(id)arg1 exclusiveStart:(bool)arg2 exclusiveEnd:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (bool)hk_animatable;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)maxValue;
- (id)minValue;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (id)startDate;
- (void)unionMaxValueWithRange:(id)arg1;
- (void)unionMinValueWithRange:(id)arg1;
- (void)unionRange:(id)arg1;

@end

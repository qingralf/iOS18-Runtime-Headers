/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFRelativePercentValue : NSObject <NAIdentifiable, NSCopying> {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
    NSNumber * _value;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *maximumValue;
@property (nonatomic, copy) NSNumber *minimumValue;
@property (nonatomic, copy) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *value;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCharacteristicReadResponse:(id)arg1;
- (id)initWithValue:(id)arg1 forCharacteristic:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)maximumValue;
- (id)minimumValue;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setStepValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stepValue;
- (id)value;

@end

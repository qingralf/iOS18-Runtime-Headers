/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRDemandResponseLoadControlClusterLoadControlEventTransitionStruct : NSObject <NSCopying> {
    MTRDemandResponseLoadControlClusterAverageLoadControlStruct * _averageLoadControl;
    NSNumber * _control;
    NSNumber * _duration;
    MTRDemandResponseLoadControlClusterDutyCycleControlStruct * _dutyCycleControl;
    MTRDemandResponseLoadControlClusterHeatingSourceControlStruct * _heatingSourceControl;
    MTRDemandResponseLoadControlClusterPowerSavingsControlStruct * _powerSavingsControl;
    MTRDemandResponseLoadControlClusterTemperatureControlStruct * _temperatureControl;
}

@property (nonatomic, copy) MTRDemandResponseLoadControlClusterAverageLoadControlStruct *averageLoadControl;
@property (nonatomic, copy) NSNumber *control;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, copy) MTRDemandResponseLoadControlClusterDutyCycleControlStruct *dutyCycleControl;
@property (nonatomic, copy) MTRDemandResponseLoadControlClusterHeatingSourceControlStruct *heatingSourceControl;
@property (nonatomic, copy) MTRDemandResponseLoadControlClusterPowerSavingsControlStruct *powerSavingsControl;
@property (nonatomic, copy) MTRDemandResponseLoadControlClusterTemperatureControlStruct *temperatureControl;

- (void).cxx_destruct;
- (id)averageLoadControl;
- (id)control;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)duration;
- (id)dutyCycleControl;
- (id)heatingSourceControl;
- (id)init;
- (id)powerSavingsControl;
- (void)setAverageLoadControl:(id)arg1;
- (void)setControl:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setDutyCycleControl:(id)arg1;
- (void)setHeatingSourceControl:(id)arg1;
- (void)setPowerSavingsControl:(id)arg1;
- (void)setTemperatureControl:(id)arg1;
- (id)temperatureControl;

@end
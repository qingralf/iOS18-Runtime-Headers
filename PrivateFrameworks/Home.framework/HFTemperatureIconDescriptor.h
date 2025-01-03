/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor> {
    NSString * _formattedTemperature;
    long long  _heatingCoolingMode;
    bool  _shouldForceLTR;
    long long  _targetHeatingCoolingMode;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedTemperature;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long heatingCoolingMode;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool shouldForceLTR;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long targetHeatingCoolingMode;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)formattedTemperature;
- (unsigned long long)hash;
- (long long)heatingCoolingMode;
- (id)identifier;
- (id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(long long)arg2 targetHeatingCoolingMode:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)shouldForceLTR;
- (long long)targetHeatingCoolingMode;

@end

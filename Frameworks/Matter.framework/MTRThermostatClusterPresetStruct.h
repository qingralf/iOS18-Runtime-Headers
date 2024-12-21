/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRThermostatClusterPresetStruct : NSObject <NSCopying> {
    NSNumber * _builtIn;
    NSNumber * _coolingSetpoint;
    NSNumber * _heatingSetpoint;
    NSString * _name;
    NSData * _presetHandle;
    NSNumber * _presetScenario;
}

@property (nonatomic, copy) NSNumber *builtIn;
@property (nonatomic, copy) NSNumber *coolingSetpoint;
@property (nonatomic, copy) NSNumber *heatingSetpoint;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSData *presetHandle;
@property (nonatomic, copy) NSNumber *presetScenario;

- (void).cxx_destruct;
- (id)builtIn;
- (id)coolingSetpoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)heatingSetpoint;
- (id)init;
- (id)name;
- (id)presetHandle;
- (id)presetScenario;
- (void)setBuiltIn:(id)arg1;
- (void)setCoolingSetpoint:(id)arg1;
- (void)setHeatingSetpoint:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPresetHandle:(id)arg1;
- (void)setPresetScenario:(id)arg1;

@end
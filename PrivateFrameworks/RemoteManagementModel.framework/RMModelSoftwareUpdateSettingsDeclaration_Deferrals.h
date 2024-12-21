/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelSoftwareUpdateSettingsDeclaration_Deferrals : RMModelPayloadBase {
    NSNumber * _payloadCombinedPeriodInDays;
    NSNumber * _payloadMajorPeriodInDays;
    NSNumber * _payloadMinorPeriodInDays;
    NSNumber * _payloadSystemPeriodInDays;
}

@property (nonatomic, copy) NSNumber *payloadCombinedPeriodInDays;
@property (nonatomic, copy) NSNumber *payloadMajorPeriodInDays;
@property (nonatomic, copy) NSNumber *payloadMinorPeriodInDays;
@property (nonatomic, copy) NSNumber *payloadSystemPeriodInDays;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithCombinedPeriodInDays:(id)arg1 majorPeriodInDays:(id)arg2 minorPeriodInDays:(id)arg3 systemPeriodInDays:(id)arg4;

- (void).cxx_destruct;
- (void)combineWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadCombinedPeriodInDays;
- (id)payloadMajorPeriodInDays;
- (id)payloadMinorPeriodInDays;
- (id)payloadSystemPeriodInDays;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadCombinedPeriodInDays:(id)arg1;
- (void)setPayloadMajorPeriodInDays:(id)arg1;
- (void)setPayloadMinorPeriodInDays:(id)arg1;
- (void)setPayloadSystemPeriodInDays:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelSoftwareUpdateSettingsDeclaration_Beta : RMModelPayloadBase {
    NSArray * _payloadOfferPrograms;
    NSString * _payloadProgramEnrollment;
    RMModelSoftwareUpdateSettingsDeclaration_BetaRequireProgram * _payloadRequireProgram;
}

@property (nonatomic, copy) NSArray *payloadOfferPrograms;
@property (nonatomic, copy) NSString *payloadProgramEnrollment;
@property (nonatomic, copy) RMModelSoftwareUpdateSettingsDeclaration_BetaRequireProgram *payloadRequireProgram;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithProgramEnrollment:(id)arg1 offerPrograms:(id)arg2 requireProgram:(id)arg3;

- (void).cxx_destruct;
- (void)combineWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadOfferPrograms;
- (id)payloadProgramEnrollment;
- (id)payloadRequireProgram;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadOfferPrograms:(id)arg1;
- (void)setPayloadProgramEnrollment:(id)arg1;
- (void)setPayloadRequireProgram:(id)arg1;

@end

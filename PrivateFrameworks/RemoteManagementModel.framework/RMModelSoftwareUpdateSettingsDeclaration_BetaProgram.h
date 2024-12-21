/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelSoftwareUpdateSettingsDeclaration_BetaProgram : RMModelPayloadBase {
    NSString * _payloadDescription;
    NSString * _payloadToken;
}

@property (nonatomic, copy) NSString *payloadDescription;
@property (nonatomic, copy) NSString *payloadToken;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithDescription:(id)arg1 token:(id)arg2;
+ (id)buildWithDescription:(id)arg1 token:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadDescription;
- (id)payloadToken;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadDescription:(id)arg1;
- (void)setPayloadToken:(id)arg1;

@end
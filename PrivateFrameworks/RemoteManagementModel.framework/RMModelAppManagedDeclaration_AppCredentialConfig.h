/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelAppManagedDeclaration_AppCredentialConfig : RMModelPayloadBase {
    NSString * _payloadAppIdentifier;
    NSString * _payloadAssetReference;
}

@property (nonatomic, copy) NSString *payloadAppIdentifier;
@property (nonatomic, copy) NSString *payloadAssetReference;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithAppIdentifier:(id)arg1 assetReference:(id)arg2;
+ (id)buildWithAppIdentifier:(id)arg1 assetReference:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAppIdentifier;
- (id)payloadAssetReference;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadAppIdentifier:(id)arg1;
- (void)setPayloadAssetReference:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelStatusAppManagedList : RMModelStatusBase {
    NSString * _statusDeclarationIdentifier;
    NSNumber * _statusExternalVersionId;
    NSString * _statusIdentifier;
    NSString * _statusName;
    NSArray * _statusReasons;
    NSNumber * _statusRemoved;
    NSString * _statusShortVersion;
    NSString * _statusState;
    NSString * _statusUpdateState;
    NSString * _statusVersion;
}

@property (nonatomic, copy) NSString *statusDeclarationIdentifier;
@property (nonatomic, copy) NSNumber *statusExternalVersionId;
@property (nonatomic, copy) NSString *statusIdentifier;
@property (nonatomic, copy) NSString *statusName;
@property (nonatomic, copy) NSArray *statusReasons;
@property (nonatomic, copy) NSNumber *statusRemoved;
@property (nonatomic, copy) NSString *statusShortVersion;
@property (nonatomic, copy) NSString *statusState;
@property (nonatomic, copy) NSString *statusUpdateState;
@property (nonatomic, copy) NSString *statusVersion;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 removed:(id)arg2 declarationIdentifier:(id)arg3 name:(id)arg4 externalVersionId:(id)arg5 version:(id)arg6 shortVersion:(id)arg7 state:(id)arg8 updateState:(id)arg9 reasons:(id)arg10;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isArrayValue;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusDeclarationIdentifier:(id)arg1;
- (void)setStatusExternalVersionId:(id)arg1;
- (void)setStatusIdentifier:(id)arg1;
- (void)setStatusName:(id)arg1;
- (void)setStatusReasons:(id)arg1;
- (void)setStatusRemoved:(id)arg1;
- (void)setStatusShortVersion:(id)arg1;
- (void)setStatusState:(id)arg1;
- (void)setStatusUpdateState:(id)arg1;
- (void)setStatusVersion:(id)arg1;
- (id)statusDeclarationIdentifier;
- (id)statusExternalVersionId;
- (id)statusIdentifier;
- (id)statusName;
- (id)statusReasons;
- (id)statusRemoved;
- (id)statusShortVersion;
- (id)statusState;
- (id)statusUpdateState;
- (id)statusVersion;

@end

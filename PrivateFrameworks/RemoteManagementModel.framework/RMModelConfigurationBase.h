/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelConfigurationBase : RMModelDeclarationBase <AuthenticationServicesCore.RMModelSecurityPasskeyAttestationDeclarationForwardDeclaration>

+ (id)assetTypes;
+ (id)combineArrayAppend:(id)arg1 other:(id)arg2;
+ (id)combineBooleanAnd:(id)arg1 other:(id)arg2;
+ (id)combineBooleanOr:(id)arg1 other:(id)arg2;
+ (id)combineDictionary:(id)arg1 other:(id)arg2;
+ (id)combineEnumFirst:(id)arg1 other:(id)arg2 enums:(id)arg3;
+ (id)combineEnumLast:(id)arg1 other:(id)arg2 enums:(id)arg3;
+ (id)combineFirst:(id)arg1 other:(id)arg2;
+ (id)combineMergeDictionary:(id)arg1 other:(id)arg2;
+ (id)combineNumberMax:(id)arg1 other:(id)arg2;
+ (id)combineNumberMin:(id)arg1 other:(id)arg2;
+ (id)combineSetIntersection:(id)arg1 other:(id)arg2;
+ (id)combineSetUnion:(id)arg1 other:(id)arg2;
+ (bool)usesKeychainAssets;

- (void)_addAssetReference:(id)arg1 identifier:(id)arg2 keyPath:(id)arg3 result:(id)arg4 processedIdentifiers:(id)arg5;
- (void)_walkObject:(id)arg1 keyPath:(id)arg2 assetReference:(id)arg3 result:(id)arg4 processedIdentifiers:(id)arg5;
- (id)assetReferences;
- (id)assetReferencesFromKeyPaths:(id)arg1 payloadObject:(id)arg2;
- (id)declarationClassType;

@end
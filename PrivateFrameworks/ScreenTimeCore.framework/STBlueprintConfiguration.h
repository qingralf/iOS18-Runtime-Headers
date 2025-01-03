/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STBlueprintConfiguration : NSManagedObject <STSyncableSubObject, STUniquelySerializableManagedObject>

@property (nonatomic, retain) STBlueprint *blueprint;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSData *payloadPlist;
@property (readonly) Class superclass;
@property (readonly) <STSerializableManagedObject> *syncableRootObject;
@property (nonatomic, copy) NSString *type;

+ (id)blueprintConfigurationTypeForDeclaration:(id)arg1;
+ (id)blueprintConfigurationTypeForDeclarationType:(id)arg1;
+ (id)cemConfigurationIdentifierWithType:(id)arg1 forUser:(id)arg2;
+ (Class)cemDeclarationClassForConfigurationType:(id)arg1;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchRequestMatchingBlueprintsConfigurationForBlueprint:(id)arg1 ofType:(id)arg2 includeTombstones:(bool)arg3;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;

- (id)_createIdentifierSubstringForBlueprintType:(id)arg1 organization:(id)arg2 configType:(id)arg3 identifier:(id)arg4 error:(id)arg5;
- (id)_organizationStr:(id)arg1;
- (bool)_validateBlueprint:(id)arg1;
- (bool)_validateIdentifier:(id)arg1;
- (id)cemConfiguration;
- (id)dictionaryRepresentation;
- (void)setCemConfiguration:(id)arg1;
- (id)syncableRootObject;
- (bool)updateWithDictionaryRepresentation:(id)arg1;
- (bool)validateForDelete:(id*)arg1;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;

@end

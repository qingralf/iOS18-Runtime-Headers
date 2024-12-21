/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *isAppAndWebsiteActivityEnabled;
@property (nonatomic) bool isDirty;
@property (nonatomic) bool isManaged;
@property (nonatomic, retain) STFamilyOrganization *organization;
@property (nonatomic) bool shareWebUsage;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *versionVector;

+ (id)serializableClassName;

- (bool)_validateOrganization:(id)arg1;
- (bool)_validateUser:(id)arg1;
- (id)computeUniqueIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (id)redactedDescription;
- (bool)updateWithDictionaryRepresentation:(id)arg1;
- (bool)validateForDelete:(id*)arg1;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;

@end
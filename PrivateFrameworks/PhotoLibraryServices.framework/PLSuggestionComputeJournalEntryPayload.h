/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSuggestionComputeJournalEntryPayload : PLManagedObjectJournalEntryPayload <PLCloudAssetPayloadRestorePayload>

@property (nonatomic, readonly) unsigned long long assetIdentifierCount;
@property (nonatomic, readonly) long long assetIdentifierType;
@property (nonatomic, readonly) NSSet *assetIdentifiers;
@property (nonatomic, retain) NSString *keyAssetUUID;
@property (nonatomic, readonly) <PLJournalEntryPayloadID> *payloadID;

+ (id)entityName;
+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2 suggestionTypes:(id)arg3;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadAdapterForManagedObject:(id)arg1;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)supportedSuggestionTypes;

- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;
- (unsigned long long)assetIdentifierCount;
- (long long)assetIdentifierType;
- (id)assetIdentifiers;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (bool)insertWithAssets:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)keyAssetUUID;
- (id)payloadValueFromAttributes:(id)arg1 forPayloadProperty:(id)arg2;
- (void)setKeyAssetUUID:(id)arg1;
- (void)setLocalAssetIdentifierForCloudIdentifiers:(id)arg1;
- (bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;

@end
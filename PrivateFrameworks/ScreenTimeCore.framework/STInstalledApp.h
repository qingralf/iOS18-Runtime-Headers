/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STInstalledApp : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (nonatomic, copy) NSNumber *adamID;
@property (nonatomic, copy) NSNumber *betaVersionIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *distributorID;
@property (nonatomic) bool distributorIsThirdParty;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *iconData;
@property (nonatomic) bool installedLocally;
@property (readonly) Class superclass;
@property (nonatomic, retain) STUserDeviceState *userDeviceState;
@property (nonatomic, copy) NSNumber *versionIdentifier;

+ (id)bundleIdentifiersInstalledForAltDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)bundleIdentifiersInstalledForPredicate:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchRequest;
+ (id)serializableClassName;

- (id)computeUniqueIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (void)setUserDeviceState:(id)arg1;
- (void)updateIconDataWithURL:(id)arg1;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end

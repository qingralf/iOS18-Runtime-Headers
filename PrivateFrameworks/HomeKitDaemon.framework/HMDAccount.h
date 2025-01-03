/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAccount : HMFObject <HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging, HMFMerging, NSFastEnumeration, NSSecureCoding> {
    NSString * _appleAccountSenderCorrelationIdentifier;
    NSMutableSet * _devices;
    NSSet * _handles;
    HMDAccountIdentifier * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMDAccountManager> * _manager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isAuthenticated, readonly) bool authenticated;
@property (readonly, copy) CNContact *contact;
@property (getter=isCurrentAccount, readonly) bool currentAccount;
@property (readonly) HMDDevice *currentDevice;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *devices;
@property (readonly, copy) NSArray *handles;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMDAccountIdentifier *identifier;
@property (readonly, copy) NSArray *identities;
@property <HMDAccountManager> *manager;
@property (readonly) Class modelClass;
@property (nonatomic, readonly, copy) NSUUID *modelIdentifier;
@property (nonatomic, readonly, copy) NSUUID *modelParentIdentifier;
@property (readonly, copy) NSString *name;
@property (getter=isPresentInContacts, nonatomic, readonly) bool presentInContacts;
@property (readonly, copy) HMDAccountHandle *primaryHandle;
@property (copy) NSString *senderCorrelationIdentifier;
@property (readonly) bool shouldCache;
@property (readonly) Class superclass;

+ (id)accountWithHandle:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_repairDevicesWithStaleHandle:(id)arg1;
- (id)accountHandleWithModelIdentifier:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)addHandle:(id)arg1;
- (id)appleAccountSenderCorrelationIdentifier;
- (id)attributeDescriptions;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)contact;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)currentDevice;
- (id)currentDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)deviceForHandle:(id)arg1;
- (id)deviceForIdentifier:(id)arg1;
- (id)deviceWithModelIdentifier:(id)arg1;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)handles;
- (bool)hasFamilyMember:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)identities;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3;
- (id)initWithObjectModel:(id)arg1;
- (bool)isAuthenticated;
- (bool)isCurrentAccount;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccount:(id)arg1;
- (void)isOfKnownPersonWithCompletion:(id /* block */)arg1;
- (bool)isPresentInContacts;
- (void)isPresentInFamilyCircleWithCompletion:(id /* block */)arg1;
- (bool)isRelatedToAccount:(id)arg1;
- (id)logIdentifier;
- (id)manager;
- (bool)mergeObject:(id)arg1;
- (id)modelBackedObjects;
- (Class)modelClass;
- (id)modelIdentifier;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelParentIdentifier;
- (id)name;
- (id)primaryHandle;
- (void)removeDevice:(id)arg1;
- (void)removeHandle:(id)arg1;
- (id)senderCorrelationIdentifier;
- (void)setAppleAccountSenderCorrelationIdentifier:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setSenderCorrelationIdentifier:(id)arg1;
- (id)shortDescription;
- (bool)shouldCache;
- (bool)shouldMergeObject:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface _MKFMediaPlaybackAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaPlaybackAction, MKFMediaPlaybackActionPrivateExtensions>

@property (nonatomic, readonly, retain) NSArray *accessories;
@property (nonatomic, retain) NSSet *accessories_;
@property (nonatomic, readonly, retain) <MKFActionSet> *actionSet;
@property (nonatomic, readonly, copy) MKFMediaPlaybackActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPPlaybackArchive *encodedPlaybackArchive;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID; /* unknown property attribute: ? */
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSNumber *state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *volume;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)accessories;
- (void)addAccessoriesObject:(id)arg1;
- (id)castIfMediaPlaybackAction;
- (id)databaseID;
- (id)home;
- (void)removeAccessoriesObject:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface _MKFHomeSoftwareUpdateSetting : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeSoftwareUpdateSetting, MKFHomeSoftwareUpdateSettingPrivateExtensions>

@property (nonatomic, copy) NSNumber *automaticSoftwareUpdateEnabled;
@property (nonatomic, copy) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (nonatomic, readonly, copy) MKFHomeSoftwareUpdateSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID; /* unknown property attribute: ? */
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfHomeSoftwareUpdateSetting;
- (id)databaseID;

@end

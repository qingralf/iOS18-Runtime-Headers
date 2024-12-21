/* Generated by RuntimeBrowser.
 */

@protocol MKFMatterPath <MKFModel, MKFMatterPathPublicExtensions>

@required

- (<MKFHAPAccessory> *)accessory;
- (NSArray *)actionCommands;
- (void)addMatterBulletinRegistrationsObject:(id <MKFMatterBulletinRegistration>)arg1;
- (NSNumber *)attributeID;
- (NSNumber *)clusterID;
- (NSNumber *)commandID;
- (MKFMatterPathDatabaseID *)databaseID;
- (NSNumber *)endpointID;
- (NSArray *)eventAttributes;
- (NSNumber *)eventID;
- (<MKFHAPAccessory> *)findAccessoryRelationWithModelID:(NSUUID *)arg1;
- (<MKFMatterBulletinRegistration> *)findMatterBulletinRegistrationsRelationWithModelID:(NSUUID *)arg1;
- (<MKFHome> *)home;
- (<MKFHAPAccessory> *)materializeOrCreateAccessoryRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFMatterBulletinRegistration> *)materializeOrCreateMatterBulletinRegistrationsRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (NSArray *)matterBulletinRegistrations;
- (void)removeMatterBulletinRegistrationsObject:(id <MKFMatterBulletinRegistration>)arg1;
- (void)setAttributeID:(NSNumber *)arg1;
- (void)setClusterID:(NSNumber *)arg1;
- (void)setCommandID:(NSNumber *)arg1;
- (void)setEndpointID:(NSNumber *)arg1;
- (void)setEventID:(NSNumber *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
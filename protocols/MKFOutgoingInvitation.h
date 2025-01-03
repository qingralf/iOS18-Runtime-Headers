/* Generated by RuntimeBrowser.
 */

@protocol MKFOutgoingInvitation <MKFInvitation, MKFOutgoingInvitationPublicExtensions>

@required

- (NSString *)accessCode;
- (void)addAllowedAccessoriesObject:(id <MKFAccessory>)arg1;
- (NSArray *)allowedAccessories;
- (NSNumber *)announceAccessLevel;
- (NSNumber *)cameraAccessLevel;
- (<MKFAccessory> *)createAllowedAccessoriesRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (<MKFAirPlayAccessory> *)createAllowedAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(NSUUID *)arg1;
- (<MKFAppleMediaAccessory> *)createAllowedAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(NSUUID *)arg1;
- (<MKFHAPAccessory> *)createAllowedAccessoriesRelationOfTypeHAPAccessoryWithModelID:(NSUUID *)arg1;
- (MKFOutgoingInvitationDatabaseID *)databaseID;
- (NSDate *)dateSent;
- (<MKFAirPlayAccessory> *)findAllowedAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(NSUUID *)arg1;
- (<MKFAppleMediaAccessory> *)findAllowedAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(NSUUID *)arg1;
- (<MKFHAPAccessory> *)findAllowedAccessoriesRelationOfTypeHAPAccessoryWithModelID:(NSUUID *)arg1;
- (<MKFHome> *)home;
- (NSString *)inviteeUserID;
- (<MKFAccessory> *)materializeOrCreateAllowedAccessoriesRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(bool*)arg3;
- (<MKFAirPlayAccessory> *)materializeOrCreateAllowedAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFAppleMediaAccessory> *)materializeOrCreateAllowedAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFHAPAccessory> *)materializeOrCreateAllowedAccessoriesRelationOfTypeHAPAccessoryWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFUser> *)pendingUser;
- (NSNumber *)privilege;
- (NSNumber *)remoteAccessAllowed;
- (void)removeAllowedAccessoriesObject:(id <MKFAccessory>)arg1;
- (void)setAccessCode:(NSString *)arg1;
- (void)setAnnounceAccessLevel:(NSNumber *)arg1;
- (void)setCameraAccessLevel:(NSNumber *)arg1;
- (void)setDateSent:(NSDate *)arg1;
- (void)setInviteeUserID:(NSString *)arg1;
- (void)setPendingUser:(id <MKFUser>)arg1;
- (void)setPrivilege:(NSNumber *)arg1;
- (void)setRemoteAccessAllowed:(NSNumber *)arg1;
- (void)setShareToken:(CKDeviceToDeviceShareInvitationToken *)arg1;
- (CKDeviceToDeviceShareInvitationToken *)shareToken;

@end

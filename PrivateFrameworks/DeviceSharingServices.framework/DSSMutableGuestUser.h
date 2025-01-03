/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceSharingServices.framework/DeviceSharingServices
 */

@interface DSSMutableGuestUser : DSSGuestUser

@property (nonatomic) bool hasSeenGuestSafetyNotice;
@property (nonatomic, retain) NSDate *lastSwitchTime;
@property (nonatomic, retain) NSUUID *managedAssetsProfileUUID;
@property (getter=isTemporaryUser, nonatomic) bool temporaryUser;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)newGuestUser;
+ (bool)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setHasSeenGuestSafetyNotice:(bool)arg1;
- (void)setLastSwitchTime:(id)arg1;
- (void)setManagedAssetsProfileUUID:(id)arg1;
- (void)setSynced:(bool)arg1;
- (void)setTemporaryUser:(bool)arg1;
- (void)setUuid:(id)arg1;

@end

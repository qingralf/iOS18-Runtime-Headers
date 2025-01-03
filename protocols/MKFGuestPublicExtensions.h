/* Generated by RuntimeBrowser.
 */

@protocol MKFGuestPublicExtensions <HMDHomeMember>

@required

+ (<HMDHomeMember> *)findGuestUsingReverseShareID:(CKRecordID *)arg1 homeModelID:(NSUUID *)arg2 context:(NSManagedObjectContext *)arg3;
+ (NSUUID *)modelIDForParentRelationshipTo:(id <MKFHome>)arg1;

- (NSArray *)allowedAccessoryUUIDs;
- (void)dematerializeAllowedAccessoriesRelationship;
- (bool)populateWorkingStoreFromRestrictedGuestSchedule:(HMRestrictedGuestHomeAccessSchedule *)arg1;
- (HMRestrictedGuestHomeAccessSchedule *)restrictedGuestSchedule;

@end

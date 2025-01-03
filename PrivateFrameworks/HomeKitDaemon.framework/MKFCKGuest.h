/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface MKFCKGuest : MKFCKHomeObject

@property (nonatomic, copy) NSString *accountHandle;
@property (nonatomic, retain) NSSet *allowedAccessories;
@property (nonatomic) long long announceAccessLevel;
@property (nonatomic, retain) NSSet *automations;
@property (nonatomic) long long camerasAccessLevel;
@property (nonatomic, copy) NSUUID *flags;
@property (nonatomic, retain) MKFCKHome *home;
@property (nonatomic, copy) NSString *homeAccessCode;
@property (nonatomic, copy) NSUUID *homeModelID;
@property (nonatomic, copy) NSString *idsMergeIdentifier;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, retain) HAPPairingIdentity *pairingIdentity;
@property (nonatomic) long long privilege;
@property (nonatomic) bool remoteAccessAllowed;
@property (nonatomic, retain) CKRecordID *reverseShareID;
@property (nonatomic, retain) CKDeviceToDeviceShareInvitationToken *reverseShareToken;
@property (nonatomic) long long uniqueIDForAccessories;
@property (nonatomic, retain) NSArray *weekDayScheduleRules;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;
@property (nonatomic, retain) NSArray *yearDayScheduleRules;

+ (id)_dictionaryRepresentationFromWeekDayScheduleRules:(id)arg1 cloudWeekDayScheduleRulesDictionary:(id)arg2;
+ (id)_dictionaryRepresentationFromYearDayScheduleRules:(id)arg1 cloudYearDayScheduleRulesDictionary:(id)arg2;
+ (bool)_importWeekDayScheduleRulesIntoLocalModel:(id)arg1 fromCloudModel:(id)arg2 localRelationship:(id)arg3 cloudAttributeName:(id)arg4 parentRelationshipName:(id)arg5 context:(id)arg6;
+ (bool)_importYearDayScheduleRulesIntoLocalModel:(id)arg1 fromCloudModel:(id)arg2 localRelationship:(id)arg3 cloudAttributeName:(id)arg4 parentRelationshipName:(id)arg5 context:(id)arg6;
+ (id)fetchRequest;

- (bool)_exportAllowedAccessoriesRelationshipFromGuestLocalModel:(id)arg1 context:(id)arg2;
- (bool)_exportGuestAccessCodeFromLocalModel:(id)arg1 context:(id)arg2;
- (bool)_exportWeekDaySchedulesFromLocalModel:(id)arg1 context:(id)arg2;
- (bool)_exportYearDaySchedulesFromLocalModel:(id)arg1 context:(id)arg2;
- (bool)_importAllowedAccessoriesRelationshipIntoLocalModel:(id)arg1 context:(id)arg2;
- (bool)_importGuestAccessCodeIntoLocalModel:(id)arg1 context:(id)arg2;
- (bool)_importWeekDayScheduleRulesIntoLocalModel:(id)arg1 context:(id)arg2;
- (bool)_importYearDayScheduleRulesIntoLocalModel:(id)arg1 context:(id)arg2;
- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyCircle : NSObject <NSSecureCoding> {
    NSDictionary * __serverResponse;
    NSString * _addMemberButtonLabel;
    long long  _ageCategory;
    int  _ageCategoryEnum;
    NSArray * _allowedSubscriptions;
    bool  _canAddMembers;
    NSString * _checklistRankingBucketType;
    NSString * _checklistRankingVersion;
    NSArray * _childBotAllowlistedParents;
    NSString * _childCutOffAge;
    FAFamilyCloudKitProperties * _cloudKitProperties;
    FAEligibilityRequirements * _eligibilityRequirements;
    NSString * _familyID;
    NSString * _familyMembersFooterLabel;
    NSArray * _invites;
    FAFamilyMember * _me;
    NSArray * _members;
    NSArray * _pendingMembers;
    NSArray * _pendingMembersWithAllStatues;
    NSObject<OS_dispatch_queue> * _processingQueue;
    FAFamilyMember * _remoteGuardianPerson;
    bool  _sharedPayementEnabled;
    bool  _shouldBadgeInvitee;
    bool  _shouldBadgeOrganizer;
    bool  _shouldShowInvites;
    bool  _showAddMemberButton;
    bool  _showLocationSplashScreen;
    bool  _showRUIPages;
}

@property (readonly) NSDictionary *_serverResponse;
@property (nonatomic, readonly, copy) NSString *addMemberButtonLabel;
@property (nonatomic, readonly) long long ageCategory;
@property (nonatomic, readonly) int ageCategoryEnum;
@property (nonatomic, readonly) NSArray *allowedSubscriptions;
@property (nonatomic, readonly) bool canAddMembers;
@property (nonatomic, readonly, copy) NSString *checklistRankingBucketType;
@property (nonatomic, readonly, copy) NSString *checklistRankingVersion;
@property (nonatomic, readonly) NSArray *childBotAllowlistedParents;
@property (nonatomic, readonly) NSString *childCutOffAge;
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties;
@property (readonly) bool currentUserIsU13;
@property (readonly) FAEligibilityRequirements *eligibilityRequirements;
@property (readonly) bool familyHasU13Member;
@property (nonatomic, readonly, copy) NSString *familyID;
@property (nonatomic, readonly, copy) NSString *familyMembersFooterLabel;
@property (nonatomic, readonly, copy) NSArray *firstNames;
@property (nonatomic, readonly, copy) NSArray *invites;
@property (nonatomic, readonly) FAFamilyMember *me;
@property (readonly) NSArray *members;
@property (nonatomic, readonly, copy) NSArray *pendingMembers;
@property (nonatomic, readonly, copy) NSArray *pendingMembersWithAllStatues;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) FAFamilyMember *remoteGuardian;
@property (retain) FAFamilyMember *remoteGuardianPerson;
@property (nonatomic, readonly) bool sharedPaymentEnabled;
@property (nonatomic, readonly) bool shouldBadgeInvitee;
@property (nonatomic, readonly) bool shouldBadgeOrganizer;
@property (nonatomic, readonly) bool shouldShowInvites;
@property (nonatomic, readonly) bool showAddMemberButton;
@property (nonatomic, readonly) bool showLocationSplashScreen;
@property (nonatomic, readonly) bool showRUIPages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_serverResponse;
- (id)addMemberButtonLabel;
- (long long)ageCategory;
- (int)ageCategoryEnum;
- (id)allowedSubscriptions;
- (bool)anyChildHasRemoteGuardians;
- (bool)canAddMembers;
- (id)checklistRankingBucketType;
- (id)checklistRankingVersion;
- (id)childBotAllowlistedParents;
- (id)childCutOffAge;
- (id)cloudKitProperties;
- (bool)currentUserIsU13;
- (id)eligibilityRequirements;
- (void)encodeWithCoder:(id)arg1;
- (bool)familyHasU13Member;
- (id)familyID;
- (id)familyMembersFooterLabel;
- (id)firstNames;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;
- (id)invites;
- (id)me;
- (id)memberForAltDSID:(id)arg1;
- (id)memberForDSID:(id)arg1;
- (id)memberForPhoneNumber:(id)arg1;
- (id)members;
- (id)pendingInvitesOnly;
- (id)pendingMembers;
- (id)pendingMembersWithAllStatues;
- (id)processingQueue;
- (id)remoteGuardian;
- (id)remoteGuardianPerson;
- (void)setRemoteGuardianPerson:(id)arg1;
- (bool)sharedPaymentEnabled;
- (bool)shouldBadgeInvitee;
- (bool)shouldBadgeOrganizer;
- (bool)shouldShowInvites;
- (bool)showAddMemberButton;
- (bool)showLocationSplashScreen;
- (bool)showRUIPages;

@end

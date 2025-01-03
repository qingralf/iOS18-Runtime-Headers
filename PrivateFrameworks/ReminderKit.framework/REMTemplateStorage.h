/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMTemplateStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding> {
    REMAccountCapabilities * _accountCapabilities;
    REMObjectID * _accountID;
    NSString * _badgeEmblem;
    REMColor * _color;
    REMTemplateConfiguration * _configuration;
    unsigned long long  _copyGeneration;
    bool  _isPersisted;
    NSDate * _mostRecentPublicLinkUpdateRequestDate;
    NSString * _name;
    REMObjectID * _objectID;
    REMObjectID * _parentAccountID;
    REMTemplatePublicLink * _publicLink;
    REMResolutionTokenMap * _resolutionTokenMap;
    NSData * _resolutionTokenMapData;
    NSSet * _sectionIDsToUndelete;
    bool  _shouldUpdateSectionsOrdering;
    bool  _showingLargeAttachments;
    NSString * _sortingStyle;
    unsigned long long  _storeGeneration;
    REMManualOrdering * _unsavedManualOrdering;
    REMMemberships * _unsavedMembershipsOfRemindersInSections;
    NSArray * _unsavedSectionIDsOrdering;
    long long  effectiveMinimumSupportedVersion;
    long long  minimumSupportedVersion;
}

@property (nonatomic, retain) REMAccountCapabilities *accountCapabilities;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, copy) NSString *badgeEmblem;
@property (nonatomic, retain) REMColor *color;
@property (nonatomic, retain) REMTemplateConfiguration *configuration;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (nonatomic) bool isPersisted;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, retain) NSDate *mostRecentPublicLinkUpdateRequestDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, retain) REMObjectID *parentAccountID;
@property (nonatomic, retain) REMTemplatePublicLink *publicLink;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, retain) NSData *resolutionTokenMapData;
@property (nonatomic, retain) NSSet *sectionIDsToUndelete;
@property (nonatomic) bool shouldUpdateSectionsOrdering;
@property (nonatomic) bool showingLargeAttachments;
@property (nonatomic, copy) NSString *sortingStyle;
@property (nonatomic, retain) REMManualOrdering *unsavedManualOrdering;
@property (nonatomic, retain) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (nonatomic, retain) NSArray *unsavedSectionIDsOrdering;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountCapabilities;
- (id)accountID;
- (id)badgeEmblem;
- (id)cdKeyToStorageKeyMap;
- (id)color;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)effectiveMinimumSupportedVersion;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isPersisted;
- (bool)isUnsupported;
- (long long)minimumSupportedVersion;
- (id)mostRecentPublicLinkUpdateRequestDate;
- (id)name;
- (id)objectID;
- (id)optionalObjectID;
- (id)parentAccountID;
- (id)publicLink;
- (id)remObjectID;
- (id)resolutionTokenMap;
- (id)resolutionTokenMapData;
- (id)sectionIDsToUndelete;
- (void)setAccountCapabilities:(id)arg1;
- (void)setBadgeEmblem:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEffectiveMinimumSupportedVersion:(long long)arg1;
- (void)setIsPersisted:(bool)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setMostRecentPublicLinkUpdateRequestDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setParentAccountID:(id)arg1;
- (void)setPublicLink:(id)arg1;
- (void)setResolutionTokenMap:(id)arg1;
- (void)setResolutionTokenMapData:(id)arg1;
- (void)setSectionIDsToUndelete:(id)arg1;
- (void)setShouldUpdateSectionsOrdering:(bool)arg1;
- (void)setShowingLargeAttachments:(bool)arg1;
- (void)setSortingStyle:(id)arg1;
- (void)setStoreGenerationIfNeeded:(unsigned long long)arg1;
- (void)setUnsavedManualOrdering:(id)arg1;
- (void)setUnsavedMembershipsOfRemindersInSections:(id)arg1;
- (void)setUnsavedSectionIDsOrdering:(id)arg1;
- (bool)shouldUpdateSectionsOrdering;
- (bool)showingLargeAttachments;
- (id)sortingStyle;
- (unsigned long long)storeGeneration;
- (id)unsavedManualOrdering;
- (id)unsavedMembershipsOfRemindersInSections;
- (id)unsavedSectionIDsOrdering;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMExternalSyncMetadataWritableProviding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding> {
    REMObjectID * _accountID;
    NSString * _badgeEmblem;
    NSArray * _calDAVNotifications;
    NSSet * _childListIDsToUndelete;
    NSSet * _childSmartListIDsToUndelete;
    REMColor * _color;
    unsigned long long  _copyGeneration;
    NSString * _currentUserShareParticipantID;
    NSDictionary * _daBulkRequests;
    long long  _daDisplayOrder;
    NSString * _daExternalIdentificationTag;
    bool  _daIsEventOnlyContainer;
    bool  _daIsImmutable;
    bool  _daIsNotificationsCollection;
    bool  _daIsReadOnly;
    NSString * _groceryLocaleID;
    bool  _isGroup;
    bool  _isPlaceholder;
    NSDate * _lastUserAccessDate;
    NSUUID * _mostRecentTargetTemplateIdentifier;
    NSString * _name;
    REMObjectID * _objectID;
    REMObjectID * _parentAccountID;
    REMObjectID * _parentListID;
    NSDate * _pinnedDate;
    NSOrderedSet * _reminderIDsMergeableOrdering;
    NSData * _reminderIDsMergeableOrderingData;
    NSDictionary * _reminderIDsOrderingHints;
    NSSet * _reminderIDsToUndelete;
    bool  _remindersICSDisplayOrderChanged;
    REMResolutionTokenMap * _resolutionTokenMap;
    NSData * _resolutionTokenMapData;
    NSSet * _sectionIDsToUndelete;
    NSString * _sharedOwnerAddress;
    REMObjectID * _sharedOwnerID;
    NSString * _sharedOwnerName;
    NSArray * _sharees;
    long long  _sharingStatus;
    bool  _shouldCategorizeGroceryItems;
    bool  _shouldSuggestConversionToGroceryList;
    bool  _shouldUpdateSectionsOrdering;
    bool  _showingLargeAttachments;
    unsigned long long  _storeGeneration;
    REMObjectID * _templateID;
    REMMemberships * _unsavedMembershipsOfRemindersInSections;
    NSArray * _unsavedReminderIDsToCategorizeAsGroceryItems;
    NSArray * _unsavedSectionIDsOrdering;
    NSString * daPushKey;
    NSString * daSyncToken;
    long long  effectiveMinimumSupportedVersion;
    NSString * externalIdentifier;
    NSString * externalModificationTag;
    long long  minimumSupportedVersion;
    NSString * sortingStyle;
}

@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, retain) NSString *badgeEmblem;
@property (nonatomic, retain) NSArray *calDAVNotifications;
@property (nonatomic, retain) NSSet *childListIDsToUndelete;
@property (nonatomic, retain) NSSet *childSmartListIDsToUndelete;
@property (nonatomic, retain) REMColor *color;
@property (nonatomic, copy) NSString *currentUserShareParticipantID;
@property (nonatomic, retain) NSDictionary *daBulkRequests;
@property (nonatomic) long long daDisplayOrder;
@property (nonatomic, retain) NSString *daExternalIdentificationTag;
@property (nonatomic) bool daIsEventOnlyContainer;
@property (nonatomic) bool daIsImmutable;
@property (nonatomic) bool daIsNotificationsCollection;
@property (nonatomic) bool daIsReadOnly;
@property (nonatomic, copy) NSString *daPushKey;
@property (nonatomic, copy) NSString *daSyncToken;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic, retain) NSString *groceryLocaleID;
@property (nonatomic) bool isGroup;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic, copy) NSDate *lastUserAccessDate;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, retain) NSUUID *mostRecentTargetTemplateIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, retain) REMObjectID *parentAccountID;
@property (nonatomic, retain) REMObjectID *parentListID;
@property (nonatomic, copy) NSDate *pinnedDate;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) NSOrderedSet *reminderIDsMergeableOrdering;
@property (nonatomic, retain) NSData *reminderIDsMergeableOrderingData;
@property (nonatomic, retain) NSDictionary *reminderIDsOrderingHints;
@property (nonatomic, retain) NSSet *reminderIDsToUndelete;
@property (nonatomic) bool remindersICSDisplayOrderChanged;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, retain) NSData *resolutionTokenMapData;
@property (nonatomic, retain) NSSet *sectionIDsToUndelete;
@property (nonatomic, copy) NSString *sharedOwnerAddress;
@property (nonatomic, retain) REMObjectID *sharedOwnerID;
@property (nonatomic, copy) NSString *sharedOwnerName;
@property (nonatomic, retain) NSArray *sharees;
@property (nonatomic) long long sharingStatus;
@property (nonatomic) bool shouldCategorizeGroceryItems;
@property (nonatomic) bool shouldSuggestConversionToGroceryList;
@property (nonatomic) bool shouldUpdateSectionsOrdering;
@property (nonatomic) bool showingLargeAttachments;
@property (nonatomic, copy) NSString *sortingStyle;
@property (nonatomic, retain) REMObjectID *templateID;
@property (nonatomic, retain) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (nonatomic, retain) NSArray *unsavedReminderIDsToCategorizeAsGroceryItems;
@property (nonatomic, retain) NSArray *unsavedSectionIDsOrdering;

+ (bool)_forceDisableFullRemindersSorting;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)arg1 error:(id*)arg2;
+ (id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)arg1 error:(id*)arg2;
+ (void)set_forceDisableFullRemindersSorting:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)badgeEmblem;
- (id)calDAVNotifications;
- (id)cdKeyToStorageKeyMap;
- (id)childListIDsToUndelete;
- (id)childSmartListIDsToUndelete;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserShareParticipantID;
- (id)daBulkRequests;
- (long long)daDisplayOrder;
- (id)daExternalIdentificationTag;
- (bool)daIsEventOnlyContainer;
- (bool)daIsImmutable;
- (bool)daIsNotificationsCollection;
- (bool)daIsReadOnly;
- (id)daPushKey;
- (id)daSyncToken;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (long long)effectiveMinimumSupportedVersion;
- (id)ekColor;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)externalModificationTag;
- (id)groceryLocaleID;
- (bool)hasDeserializedReminderIDsMergeableOrdering;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(bool)arg4 reminderIDsMergeableOrdering:(id)arg5;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(bool)arg4 reminderIDsMergeableOrderingData:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isPlaceholder;
- (bool)isUnsupported;
- (id)lastUserAccessDate;
- (long long)minimumSupportedVersion;
- (id)mostRecentTargetTemplateIdentifier;
- (id)name;
- (id)objectID;
- (id)optionalObjectID;
- (id)parentAccountID;
- (id)parentListID;
- (id)pinnedDate;
- (id)remObjectID;
- (id)reminderIDsMergeableOrdering;
- (id)reminderIDsMergeableOrderingData;
- (id)reminderIDsOrderingHints;
- (id)reminderIDsToUndelete;
- (bool)remindersICSDisplayOrderChanged;
- (id)resolutionTokenMap;
- (id)resolutionTokenMapData;
- (id)sectionIDsToUndelete;
- (void)setAccountID:(id)arg1;
- (void)setBadgeEmblem:(id)arg1;
- (void)setCalDAVNotifications:(id)arg1;
- (void)setChildListIDsToUndelete:(id)arg1;
- (void)setChildSmartListIDsToUndelete:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCurrentUserShareParticipantID:(id)arg1;
- (void)setDaBulkRequests:(id)arg1;
- (void)setDaDisplayOrder:(long long)arg1;
- (void)setDaExternalIdentificationTag:(id)arg1;
- (void)setDaIsEventOnlyContainer:(bool)arg1;
- (void)setDaIsImmutable:(bool)arg1;
- (void)setDaIsNotificationsCollection:(bool)arg1;
- (void)setDaIsReadOnly:(bool)arg1;
- (void)setDaPushKey:(id)arg1;
- (void)setDaSyncToken:(id)arg1;
- (void)setEffectiveMinimumSupportedVersion:(long long)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setGroceryLocaleID:(id)arg1;
- (void)setIsGroup:(bool)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setLastUserAccessDate:(id)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setMostRecentTargetTemplateIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setParentAccountID:(id)arg1;
- (void)setParentListID:(id)arg1;
- (void)setPinnedDate:(id)arg1;
- (void)setReminderIDsMergeableOrdering:(id)arg1;
- (void)setReminderIDsMergeableOrderingData:(id)arg1;
- (void)setReminderIDsOrderingHints:(id)arg1;
- (void)setReminderIDsToUndelete:(id)arg1;
- (void)setRemindersICSDisplayOrderChanged:(bool)arg1;
- (void)setResolutionTokenMap:(id)arg1;
- (void)setResolutionTokenMapData:(id)arg1;
- (void)setSectionIDsToUndelete:(id)arg1;
- (void)setSharedOwnerAddress:(id)arg1;
- (void)setSharedOwnerID:(id)arg1;
- (void)setSharedOwnerName:(id)arg1;
- (void)setSharees:(id)arg1;
- (void)setSharingStatus:(long long)arg1;
- (void)setShouldCategorizeGroceryItems:(bool)arg1;
- (void)setShouldSuggestConversionToGroceryList:(bool)arg1;
- (void)setShouldUpdateSectionsOrdering:(bool)arg1;
- (void)setShowingLargeAttachments:(bool)arg1;
- (void)setSortingStyle:(id)arg1;
- (void)setStoreGenerationIfNeeded:(unsigned long long)arg1;
- (void)setTemplateID:(id)arg1;
- (void)setUnsavedMembershipsOfRemindersInSections:(id)arg1;
- (void)setUnsavedReminderIDsToCategorizeAsGroceryItems:(id)arg1;
- (void)setUnsavedSectionIDsOrdering:(id)arg1;
- (id)sharedOwnerAddress;
- (id)sharedOwnerID;
- (id)sharedOwnerName;
- (id)sharees;
- (long long)sharingStatus;
- (bool)shouldCategorizeGroceryItems;
- (bool)shouldSuggestConversionToGroceryList;
- (bool)shouldUpdateSectionsOrdering;
- (bool)showingLargeAttachments;
- (id)sortingStyle;
- (unsigned long long)storeGeneration;
- (id)templateID;
- (id)unsavedMembershipsOfRemindersInSections;
- (id)unsavedReminderIDsToCategorizeAsGroceryItems;
- (id)unsavedSectionIDsOrdering;

@end

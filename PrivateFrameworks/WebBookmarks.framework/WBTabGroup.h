/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBTabGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable> {
    WBSCopyOnWriteValue * _bookmarkStorage;
    NSArray * _cachedUnpinnedTabs;
    NSMutableArray * _deletedTabs;
    id /* block */  _displayTitleProvider;
    bool  _isMutable;
    long long  _kind;
    NSString * _lastSelectedTabUUID;
    NSArray * _overflowRemoteTabs;
    NSString * _profileIdentifier;
    Class  _tabClass;
    NSArray * _tabs;
    NSMutableDictionary * _tabsByUUID;
}

@property (nonatomic, readonly) NSArray *allTabs;
@property (nonatomic, retain) WebBookmark *bookmark;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *debugRecursiveSyncDescription;
@property (nonatomic, readonly, copy) NSString *debugSyncDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *displayTitle;
@property (nonatomic, readonly, copy) id /* block */ displayTitleProvider;
@property (nonatomic, readonly, copy) NSSet *emptyTabsUUIDSet;
@property (nonatomic, readonly) WBTab *firstUnpinnedTab;
@property (nonatomic, readonly) bool hasDynamicTitle;
@property (nonatomic, readonly) bool hasTextForPasteboard;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly, copy) NSString *htmlString;
@property (nonatomic, readonly) int identifier;
@property (getter=isInDefaultProfile, nonatomic, readonly) bool inDefaultProfile;
@property (getter=isInserted, nonatomic, readonly) bool inserted;
@property (nonatomic, readonly) bool isEmpty;
@property (getter=_isMutable, nonatomic, readonly) bool isMutable;
@property (nonatomic) long long kind;
@property (nonatomic, readonly) WBTab *lastPinnedTab;
@property (nonatomic, readonly, copy) NSString *lastSelectedTabUUID;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly, copy) NSDictionary *modifiedSettingsFieldsByName; /* unknown property attribute: ? */
@property (getter=isNamed, nonatomic, readonly) bool named;
@property (nonatomic, readonly) bool needsSecureDelete;
@property (nonatomic, readonly, copy) NSArray *overflowRemoteTabs;
@property (nonatomic, readonly) WBTab *pinnedStartPage;
@property (nonatomic, readonly) NSString *plainTextForPasteboard;
@property (nonatomic, readonly, copy) NSString *privacyPreservingDescription;
@property (getter=isPrivateBrowsing, nonatomic, readonly) bool privateBrowsing;
@property (nonatomic, readonly, copy) NSString *profileIdentifier;
@property (nonatomic, readonly, copy) NSURL *representativeURL;
@property (nonatomic, readonly) NSAttributedString *richTextForPasteboard;
@property (nonatomic, readonly, copy) NSString *serverID;
@property (getter=isShared, nonatomic, readonly) bool shared;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDeviceTabs;
@property (nonatomic, readonly) bool supportsTabGroupFavorites;
@property (nonatomic, readonly, copy) WBSCRDTPosition *syncPosition;
@property (getter=isSyncable, nonatomic, readonly) bool syncable;
@property (getter=_tabClass, nonatomic, readonly) Class tabClass;
@property (nonatomic, readonly) unsigned long long tabCountForPasteboard;
@property (nonatomic, readonly, copy) NSArray *tabs;
@property (nonatomic, readonly, copy) NSSet *tabsUUIDSet;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isUnnamed, nonatomic, readonly) bool unnamed;
@property (nonatomic, readonly, copy) NSArray *unpinnedTabs;
@property (nonatomic, readonly) bool usesGlobalPinnedTabs;
@property (nonatomic, readonly, copy) NSString *uuid;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 isMutable:(bool)arg2;
- (bool)_isMutable;
- (Class)_tabClass;
- (void)_tabsDidChange;
- (void)_updateTabLookupTable;
- (id)allTabs;
- (id)bookmark;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugRecursiveSyncDescription;
- (id)debugSyncDescription;
- (id)description;
- (void)detectDuplicatedTabs;
- (id)deviceIdentifier;
- (id)dictionaryRepresentation;
- (id)displayTitle;
- (id /* block */)displayTitleProvider;
- (id)emptyTabsUUIDSet;
- (void)encodeWithCoder:(id)arg1;
- (id)firstUnpinnedTab;
- (bool)hasDynamicTitle;
- (bool)hasSameKindAsTabGroup:(id)arg1;
- (unsigned long long)hash;
- (id)htmlString;
- (int)identifier;
- (id)init;
- (id)initWithBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 lastSelectedTabUUID:(id)arg2;
- (id)initWithBookmark:(id)arg1 lastSelectedTabUUID:(id)arg2 kind:(long long)arg3;
- (id)initWithBookmarkStorage:(id)arg1 lastSelectedTabUUID:(id)arg2 kind:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTitle:(id)arg1 deviceIdentifier:(id)arg2;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 deviceIdentifier:(id)arg3;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isIdentical:(id)arg1;
- (bool)isInDefaultProfile;
- (bool)isInserted;
- (bool)isLocal;
- (bool)isNamed;
- (bool)isPrivateBrowsing;
- (bool)isShared;
- (bool)isSyncable;
- (bool)isTabPinnable:(id)arg1;
- (bool)isUnnamed;
- (long long)kind;
- (id)lastPinnedTab;
- (id)lastPinnedTabExcluding:(id)arg1;
- (id)lastSelectedTabUUID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)needsSecureDelete;
- (id)overflowRemoteTabs;
- (id)pinnedStartPage;
- (id)privacyPreservingDescription;
- (id)profileIdentifier;
- (id)representativeURL;
- (id)serverID;
- (void)setBookmark:(id)arg1;
- (void)setKind:(long long)arg1;
- (bool)supportsDeviceTabs;
- (bool)supportsTabGroupFavorites;
- (id)syncPosition;
- (id)tabWithUUID:(id)arg1;
- (id)tabs;
- (bool)tabsAreIdentical:(id)arg1;
- (id)tabsUUIDSet;
- (id)title;
- (id)unpinnedTabs;
- (bool)usesGlobalPinnedTabs;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (bool)_sf_isOppositeBrowsingModeOfTabGroup:(id)arg1;
- (bool)hasTextForPasteboard;
- (id)plainTextForPasteboard;
- (id)richTextForPasteboard;
- (unsigned long long)tabCountForPasteboard;

@end

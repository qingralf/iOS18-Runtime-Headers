/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABBufferQuery : NSObject {
    void * _addressBook;
    long long  _contactidentifierAuditMode;
    bool  _fetchLinkedContacts;
    CNManagedConfiguration * _managedConfiguration;
    bool  _needsMultivalueEntryTable;
    bool  _needsMultivalueTable;
    bool  _needsPersonLinkTable;
    bool  _needsPersonTable;
    ABSQLPredicate * _predicate;
    struct __CFDictionary { } * _propertyIndices;
    bool  _requestedHasImageData;
    bool  _requestedImageCropRect;
    bool  _requestedImageData;
    bool  _requestedImageFullscreenData;
    bool  _requestedImageThumbnail;
    NSIndexSet * _requestedMultivalueIdentifiers;
    NSIndexSet * _requestedPropertyIdentifiers;
    bool  _requestedSyncImageData;
    bool  _requestedWallpaperData;
    bool  _requestedWallpaperMetadata;
    bool  _requestedWatchWallpaperImageData;
    NSIndexSet * _scopedStoreIdentifiers;
    unsigned int  _sortOrder;
    struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; } * _statement;
}

@property (nonatomic) void*addressBook;
@property (nonatomic) long long contactidentifierAuditMode;
@property (nonatomic) bool fetchLinkedContacts;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, readonly) bool needsMultivalueEntryTable;
@property (nonatomic, readonly) bool needsMultivalueTable;
@property (nonatomic, readonly) bool needsPersonLinkTable;
@property (nonatomic, readonly) bool needsPersonTable;
@property (nonatomic, retain) ABSQLPredicate *predicate;
@property (nonatomic) struct __CFDictionary { }*propertyIndices;
@property (nonatomic, readonly) bool requestedHasImageData;
@property (nonatomic, readonly) bool requestedImageCropRect;
@property (nonatomic, readonly) bool requestedImageData;
@property (nonatomic, readonly) bool requestedImageFullscreenData;
@property (nonatomic, readonly) bool requestedImageThumbnail;
@property (nonatomic, readonly) NSIndexSet *requestedMultivalueIdentifiers;
@property (nonatomic, readonly) NSIndexSet *requestedPropertyIdentifiers;
@property (nonatomic, readonly) bool requestedSyncImageData;
@property (nonatomic, readonly) bool requestedWallpaperData;
@property (nonatomic, readonly) bool requestedWallpaperMetadata;
@property (nonatomic, readonly) bool requestedWatchWallpaperImageData;
@property (nonatomic, readonly) NSIndexSet *scopedStoreIdentifiers;
@property (nonatomic) unsigned int sortOrder;
@property (nonatomic) struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*statement;

- (void)_initSetupPropertySet:(struct __CFSet { }*)arg1 includeLinkedContacts:(bool)arg2 hasLimitedAccess:(bool)arg3;
- (void*)addressBook;
- (void)appendBindParameterMarkersToQueryString:(id)arg1 count:(unsigned long long)arg2;
- (void)appendCustomPropertySelectsToQueryString:(id)arg1;
- (void)appendFromClauseToQueryString:(id)arg1;
- (void)appendOrderByClauseToQueryString:(id)arg1;
- (void)appendWhereClauseToQueryString:(id)arg1 hasLimitedAccess:(bool)arg2;
- (void)bindWhereClause:(id)arg1 limitedAccessBundleIdentifier:(id)arg2;
- (void)bindWithClause:(id)arg1;
- (long long)contactidentifierAuditMode;
- (void)dealloc;
- (bool)fetchLinkedContacts;
- (id)initWithAddressBook:(void*)arg1 predicate:(id)arg2 requestedProperties:(struct __CFSet { }*)arg3 includeLinkedContacts:(bool)arg4 sortOrder:(unsigned int)arg5 managedConfiguration:(id)arg6 identifierAuditStyle:(long long)arg7 authorizationContext:(id)arg8;
- (id)limitedAccessBundleIdentifierForAuthorizationContext:(id)arg1;
- (id)managedConfiguration;
- (bool)needsMultivalueEntryTable;
- (bool)needsMultivalueTable;
- (bool)needsPersonLinkTable;
- (bool)needsPersonTable;
- (id)predicate;
- (void)prependWithClauseToQueryString:(id)arg1 whereClause:(id)arg2;
- (struct __CFDictionary { }*)propertyIndices;
- (bool)requestedHasImageData;
- (bool)requestedImageCropRect;
- (bool)requestedImageData;
- (bool)requestedImageFullscreenData;
- (bool)requestedImageThumbnail;
- (id)requestedMultivalueIdentifiers;
- (id)requestedPropertyIdentifiers;
- (bool)requestedSyncImageData;
- (bool)requestedWallpaperData;
- (bool)requestedWallpaperMetadata;
- (bool)requestedWatchWallpaperImageData;
- (id)scopedStoreIdentifiers;
- (id)scopedStoresForManagedConfiguration:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setContactidentifierAuditMode:(long long)arg1;
- (void)setFetchLinkedContacts:(bool)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPropertyIndices:(struct __CFDictionary { }*)arg1;
- (void)setSortOrder:(unsigned int)arg1;
- (void)setStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1;
- (unsigned int)sortOrder;
- (struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)statement;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileVersion : NSObject {
    GSAddition * _addition;
    NSURL * _contentsURL;
    bool  _contentsURLIsAccessed;
    id  _deadVersionIdentifier;
    bool  _discardable;
    NSURL * _fileURL;
    bool  _isBackup;
    bool  _isResolved;
    NSString * _localizedComputerName;
    NSString * _localizedName;
    NSDate * _modificationDate;
    NSString * _name;
    id  _nonLocalVersion;
}

@property (readonly, copy) NSURL *URL;
@property (getter=_isBackup, readonly) bool _isBackup;
@property (getter=isConflict, readonly) bool conflict;
@property (getter=isDiscardable) bool discardable;
@property (readonly, copy) NSString *etag;
@property (readonly) bool hasLocalContents;
@property (readonly) bool hasThumbnail;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *localizedNameOfSavingComputer;
@property (readonly, copy) NSDate *modificationDate;
@property (readonly, copy) NSString *originalPOSIXName;
@property (readonly, copy) NSString *originatorName;
@property (readonly, copy) NSPersonNameComponents *originatorNameComponents;
@property (readonly, retain) <NSCoding> *persistentIdentifier;
@property (getter=isResolved) bool resolved;
@property (readonly) unsigned long long size;
@property (getter=isUbiquitous, readonly) bool ubiquitous;
@property (nonatomic, readonly) NSURL *url2;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void*)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(id /* block */)arg2;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 temporaryStorageIdentifier:(id*)arg4 error:(id*)arg5;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 temporaryStorageIdentifier:(id*)arg5 error:(id*)arg6;
+ (id)_autosaveDirectoryURLCreateIfNecessary:(bool)arg1;
+ (bool)_conflictsExistForItemAtURL:(id)arg1;
+ (id)_existingLibraryForURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (bool)_isTemporaryStorageRequiredForGSError:(id)arg1 andURL:(id)arg2;
+ (id)_libraryForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2;
+ (id)_makePermanentStorageLibraryForURL:(id)arg1 temporaryStorageRequired:(bool*)arg2 error:(id*)arg3;
+ (id)_makeTemporaryStorageIdentifier;
+ (void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2;
+ (id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 withoutOptions:(unsigned long long)arg3;
+ (bool)_permanentVersionStorageSupportedForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2 error:(id*)arg3;
+ (void)_removeConflictObserver:(void*)arg1;
+ (bool)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id*)arg3;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)_supportedGenerationalStorageClientIDs;
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_temporaryStorageLocationForIdentifier:(id)arg1;
+ (id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(bool)arg5;
+ (id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3;
+ (id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (id)currentVersionOfItemAtURL:(id)arg1;
+ (void)discoverUbiquitousVersionsOfItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)getNonlocalVersionsOfItemFromBRAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)getNonlocalVersionsOfItemFromFPAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)otherVersionsOfItemAtURL:(id)arg1;
+ (bool)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id*)arg2;
+ (id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1;
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)arg1;
+ (bool)unresolvedConflictsExistForItemAtURL:(id)arg1;
+ (id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2;
+ (id)versionsOfItemAtURL:(id)arg1;

- (id)URL;
- (id)_documentInfo;
- (id)_initWithAddition:(id)arg1;
- (id)_initWithFileURL:(id)arg1 fileVersion:(id)arg2;
- (id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(bool)arg6 revision:(id)arg7;
- (id)_initWithFileURL:(id)arg1 nonLocalVersion:(id)arg2;
- (bool)_isBackup;
- (void)_overrideModificationDateWithDate:(id)arg1;
- (bool)_preserveConflictVersionLocally;
- (bool)_setDocumentInfo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)etag;
- (bool)hasLocalContents;
- (bool)hasThumbnail;
- (unsigned long long)hash;
- (id)init;
- (bool)isConflict;
- (bool)isDiscardable;
- (bool)isEqual:(id)arg1;
- (bool)isResolved;
- (bool)isUbiquitous;
- (id)localizedName;
- (id)localizedNameOfSavingComputer;
- (id)modificationDate;
- (id)originalPOSIXName;
- (id)originatorName;
- (id)originatorNameComponents;
- (id)persistentIdentifier;
- (bool)removeAndReturnError:(id*)arg1;
- (id)replaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)restoreOverItemAtURL:(id)arg1 error:(id*)arg2;
- (void)setDiscardable:(bool)arg1;
- (void)setResolved:(bool)arg1;
- (unsigned long long)size;

// Image: /System/Library/PrivateFrameworks/Coherence.framework/Coherence

- (id)url2;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end

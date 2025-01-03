/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

@interface LiveFSFPItemHelper : NSObject <NSFileProviderItem_Private> {
    long long  _attr_load;
    LiveFSFPEnumeratorDataContainer * _container;
    LiveFSFPExtensionHelper * _extension;
    NSNumber * _favoriteRank;
    NSString * _fh;
    NSString * _filename;
    NSString * _fullPath;
    unsigned long long  _inodeNum;
    bool  _isFetchingXattrValues;
    NSString * _itemIdentifier;
    NSMapTable * _itemNameCache;
    NSDate * _lastUsedDate;
    NSDate * _lastXattrValuesFetchDate;
    int  _liType;
    LiveFSFPItemHelper * _parent;
    NSString * _path;
    NSMutableDictionary * _pendingRenameCompletionBlocks;
    NSData * _tagData;
    NSObject<OS_dispatch_group> * _xattrFetchGroup;
    struct _LIFileAttributes { 
        unsigned long long __fa_rsvd0; 
        unsigned long long fa_validmask; 
        unsigned long long fa_seqno; 
        unsigned int fa_type; 
        unsigned int fa_mode; 
        unsigned int fa_nlink; 
        unsigned int fa_uid; 
        unsigned int fa_gid; 
        unsigned int fa_bsd_flags; 
        unsigned long long fa_size; 
        unsigned long long fa_allocsize; 
        unsigned long long fa_fileid; 
        unsigned long long fa_parentid; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_atime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_mtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_ctime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_birthtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_backuptime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_addedtime; 
        unsigned int fa_int_flags; 
        unsigned int _pad0; 
    }  attributes;
    int  numChildren;
}

@property long long attr_load;
@property (nonatomic, readonly) unsigned long long capabilities; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSNumber *childItemCount; /* unknown property attribute: ? */
@property (readonly, copy) NSArray *conflictingVersions; /* unknown property attribute: ? */
@property LiveFSFPEnumeratorDataContainer *container;
@property (readonly, copy) NSString *containerDisplayName; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSDate *contentModificationDate; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long contentPolicy; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) UTType *contentType; /* unknown property attribute: ? */
@property (getter=isContentZoneRoot, nonatomic, readonly) bool contentZoneRoot; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSDate *creationDate; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSNumber *documentSize; /* unknown property attribute: ? */
@property (getter=isDownloadRequested, readonly, copy) NSNumber *downloadRequested; /* unknown property attribute: ? */
@property (getter=isDownloaded, nonatomic, readonly) bool downloaded; /* unknown property attribute: ? */
@property (getter=isDownloading, nonatomic, readonly) bool downloading; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSError *downloadingError; /* unknown property attribute: ? */
@property (getter=isExcludedFromSync, nonatomic, readonly) bool excludedFromSync; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDictionary *extendedAttributes; /* unknown property attribute: ? */
@property (retain) LiveFSFPExtensionHelper *extension;
@property (nonatomic, copy) NSNumber *favoriteRank;
@property (nonatomic, readonly, copy) NSString *fh;
@property (readonly, copy) NSString *fileSystemFilename; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long fileSystemFlags; /* unknown property attribute: ? */
@property (readonly, copy) NSURL *fileURL; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *filename;
@property (getter=fp_isAddedByCurrentUser, nonatomic, readonly) bool fp_addedByCurrentUser; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSPersonNameComponents *fp_addedByNameComponents; /* unknown property attribute: ? */
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers; /* unknown property attribute: ? */
@property (readonly, copy) NSString *fp_cloudContainerIdentifier; /* unknown property attribute: ? */
@property (readonly, copy) NSString *fp_domainIdentifier; /* unknown property attribute: ? */
@property (readonly) bool fp_isCloudDocsContainer; /* unknown property attribute: ? */
@property (readonly) bool fp_isContainer; /* unknown property attribute: ? */
@property (readonly) bool fp_isContainerPristine; /* unknown property attribute: ? */
@property (getter=fp_isLastModifiedByCurrentUser, nonatomic, readonly) bool fp_lastModifiedByCurrentUser; /* unknown property attribute: ? */
@property (readonly, copy) NSString *fp_parentDomainIdentifier; /* unknown property attribute: ? */
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier; /* unknown property attribute: ? */
@property (readonly, copy) NSString *fp_spotlightSubDomainIdentifier; /* unknown property attribute: ? */
@property (getter=fp_isUbiquitous, readonly) bool fp_ubiquitous; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *fullPath;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (getter=isHidden, readonly) bool hidden; /* unknown property attribute: ? */
@property unsigned long long inodeNum;
@property (readonly) bool isCollaborationInvitation; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (retain) NSMapTable *itemNameCache;
@property (nonatomic, readonly) NSFileProviderItemVersion *itemVersion; /* unknown property attribute: ? */
@property (nonatomic, copy) NSDate *lastUsedDate;
@property int liType;
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents; /* unknown property attribute: ? */
@property (getter=isMostRecentVersionDownloaded, nonatomic, readonly) bool mostRecentVersionDownloaded; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSData *originatorInfo; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents; /* unknown property attribute: ? */
@property (retain) LiveFSFPItemHelper *parent;
@property (nonatomic, readonly, copy) NSString *parentItemIdentifier;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) NSString *preformattedMostRecentEditorName; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *preformattedOwnerName; /* unknown property attribute: ? */
@property (readonly, copy) NSString *providerIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSData *quarantineBlob; /* unknown property attribute: ? */
@property (getter=isShared, nonatomic, readonly) bool shared; /* unknown property attribute: ? */
@property (getter=isSharedByCurrentUser, nonatomic, readonly) bool sharedByCurrentUser; /* unknown property attribute: ? */
@property (readonly, copy) NSString *sharingPermissions; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *symlinkTargetPath; /* unknown property attribute: ? */
@property (nonatomic, copy) NSData *tagData;
@property (getter=isTopLevelSharedItem, nonatomic, readonly) bool topLevelSharedItem; /* unknown property attribute: ? */
@property (getter=isTrashed, nonatomic, readonly) bool trashed; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct NSFileProviderTypeAndCreator { unsigned int x1; unsigned int x2; } typeAndCreator; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *typeIdentifier; /* unknown property attribute: ? */
@property (getter=isUploaded, nonatomic, readonly) bool uploaded; /* unknown property attribute: ? */
@property (getter=isUploading, nonatomic, readonly) bool uploading; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSError *uploadingError; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDictionary *userInfo; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSData *versionIdentifier; /* unknown property attribute: ? */

+ (id)UTIForExtension:(id)arg1 liType:(int)arg2;
+ (int)dt_dir;
+ (int)dt_examine;
+ (int)dt_lnk;
+ (int)dt_reg;
+ (id)newItemForFH:(id)arg1 withReference:(int)arg2 name:(id)arg3 parent:(id)arg4 type:(int)arg5 attrs:(id)arg6 extension:(id)arg7;

- (void).cxx_destruct;
- (void)_fetchFavoriteRank:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchLastUsedDateWithProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchTagDataWithProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchXattrNamed:(id)arg1 proxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_fetchXattrValues;
- (void)afterRename:(id)arg1 performBlock:(id /* block */)arg2;
- (long long)attr_load;
- (bool)calcNumberOfChildren:(id*)arg1;
- (unsigned long long)capabilities;
- (id)childItemCount;
- (id)container;
- (id)contentModificationDate;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (void)doDealloc;
- (id)documentSize;
- (void)dropAfterRenameBlockForName:(id)arg1;
- (bool)ensureFileHandleOrError:(id*)arg1;
- (id)extension;
- (id)favoriteRank;
- (id)fh;
- (id)filename;
- (id)fp_domainIdentifier;
- (id)fp_parentDomainIdentifier;
- (id)fullPath;
- (id)initItemForFH:(id)arg1 withReference:(int)arg2 name:(id)arg3 parent:(id)arg4 type:(int)arg5 attrs:(id)arg6 extension:(id)arg7;
- (unsigned long long)inodeNum;
- (bool)isDirectory;
- (bool)isDocument;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isSymlink;
- (bool)isTrashed;
- (id)itemIdentifier;
- (id)itemNameCache;
- (id)lastUsedDate;
- (id)lastUsedTime;
- (int)liType;
- (id)parent;
- (id)parentItemIdentifier;
- (id)path;
- (id)pathExtension;
- (void)performBlocksForRename:(id)arg1 onEHQueue:(bool)arg2;
- (void)prefetchXattrBasedValues;
- (void)recursivelyReparentChildren;
- (void)recursivelySetChildrenDeleted;
- (int)refreshAttrsHasAProblem:(id*)arg1;
- (void)resetFileHandle;
- (void)setAttr_load:(long long)arg1;
- (void)setAttributes:(id)arg1 time:(long long)arg2;
- (void)setAttributesLocked:(id)arg1 time:(long long)arg2;
- (void)setAttributesStale;
- (void)setContainer:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setFavoriteRank:(id)arg1;
- (void)setInodeNum:(unsigned long long)arg1;
- (void)setItemDeleted;
- (void)setItemNameCache:(id)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setLiType:(int)arg1;
- (void)setNewParent:(id)arg1 andName:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setTagData:(id)arg1;
- (id)tagData;
- (id)typeIdentifier;
- (id)versionIdentifier;

@end

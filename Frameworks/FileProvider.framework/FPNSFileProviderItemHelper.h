/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPNSFileProviderItemHelper : NSObject <NSFileProviderItem> {
    unsigned long long  capabilities;
    UTType * contentType;
    NSString * filename;
    NSString * itemIdentifier;
    NSString * parentItemIdentifier;
    NSString * typeIdentifier;
}

@property (nonatomic, readonly) unsigned long long capabilities; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSNumber *childItemCount; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSDate *contentModificationDate; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long contentPolicy; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) UTType *contentType; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSDate *creationDate; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *documentSize; /* unknown property attribute: ? */
@property (getter=isDownloaded, nonatomic, readonly) bool downloaded; /* unknown property attribute: ? */
@property (getter=isDownloading, nonatomic, readonly) bool downloading; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSError *downloadingError; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDictionary *extendedAttributes; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSNumber *favoriteRank; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long fileSystemFlags; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (nonatomic, readonly) NSFileProviderItemVersion *itemVersion; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSDate *lastUsedDate; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents; /* unknown property attribute: ? */
@property (getter=isMostRecentVersionDownloaded, nonatomic, readonly) bool mostRecentVersionDownloaded; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *parentItemIdentifier;
@property (getter=isShared, nonatomic, readonly) bool shared; /* unknown property attribute: ? */
@property (getter=isSharedByCurrentUser, nonatomic, readonly) bool sharedByCurrentUser; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *symlinkTargetPath; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSData *tagData; /* unknown property attribute: ? */
@property (getter=isTrashed, nonatomic, readonly) bool trashed; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct NSFileProviderTypeAndCreator { unsigned int x1; unsigned int x2; } typeAndCreator; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *typeIdentifier; /* unknown property attribute: ? */
@property (getter=isUploaded, nonatomic, readonly) bool uploaded; /* unknown property attribute: ? */
@property (getter=isUploading, nonatomic, readonly) bool uploading; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSError *uploadingError; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDictionary *userInfo; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSData *versionIdentifier; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)contentType;
- (id)filename;
- (id)fp_downloadingStatus;
- (bool)fp_isReadable;
- (bool)fp_isWritable;
- (id)fp_sharingCurrentUserPermissions;
- (id)fp_sharingCurrentUserRole;
- (id)itemIdentifier;
- (id)parentItemIdentifier;
- (id)typeIdentifier;

@end
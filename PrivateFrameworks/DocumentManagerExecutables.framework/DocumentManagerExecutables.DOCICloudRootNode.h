/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
 */

@interface DocumentManagerExecutables.DOCICloudRootNode : FICustomNode {
    void appLibrariesContainer;
    void deferredCreationNode;
    void iCloudContainer;
    void observerBlock;
    void providerDomain;
}

@property (nonatomic, readonly) NSNumber *childItemCount;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) NSProgress *copyingProgress;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *dateForSortingByRecents;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDate *doc_creationDate;
@property (nonatomic, readonly) NSDate *doc_lastUsedDate;
@property (nonatomic, readonly) bool downloaded;
@property (nonatomic, readonly) bool downloading;
@property (nonatomic, readonly) NSError *downloadingError;
@property (nonatomic, readonly) NSProgress *downloadingProgress;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) FPItem *fpfs_fpItem;
@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) bool isActionable;
@property (nonatomic, readonly) bool isCloudItem;
@property (nonatomic, readonly) bool isContainer;
@property (nonatomic, readonly) bool isExternalDownloadPlaceholder;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) bool isPending;
@property (nonatomic, readonly) bool isReadable;
@property (nonatomic, readonly) bool isRootItem;
@property (nonatomic, readonly) bool isShared;
@property (nonatomic, readonly) bool isSharedByCurrentUser;
@property (nonatomic, readonly) bool isTopLevelSharedItem;
@property (nonatomic, readonly) bool isTrashed;
@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, readonly) NSArray *itemDecorations;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) bool uploaded;
@property (nonatomic, readonly) bool uploading;
@property (nonatomic, readonly) NSError *uploadingError;
@property (nonatomic, readonly) NSProgress *uploadingProgress;

- (void).cxx_destruct;
- (long long)_doc_fileTypeCompare:(id)arg1;
- (id)childItemCount;
- (id)contentType;
- (id)copyingProgress;
- (id)creationDate;
- (id)dateForSortingByRecents;
- (id)displayName;
- (id)doc_creationDate;
- (id)doc_lastUsedDate;
- (id)downloadingError;
- (id)downloadingProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)fileSize;
- (id)fileURL;
- (id)filename;
- (id)fpfs_fpItem;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isActionable;
- (bool)isCloudItem;
- (bool)isContainer;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isExternalDownloadPlaceholder;
- (bool)isFolder;
- (bool)isPending;
- (bool)isReadable;
- (bool)isRootItem;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTopLevelSharedItem;
- (bool)isTrashed;
- (bool)isUploaded;
- (bool)isUploading;
- (bool)isWritable;
- (id)itemDecorations;
- (long long)localizedStandardTagsCompareNode:(id)arg1;
- (id)modificationDate;
- (id)ownerNameComponents;
- (id)providerDomainID;
- (id)providerID;
- (id)tags;
- (id)typeIdentifier;
- (id)uploadingError;
- (id)uploadingProgress;

@end

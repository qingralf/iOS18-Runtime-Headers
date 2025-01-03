/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore
 */

@interface BRCImportObject : NSObject {
    BRCAppLibrary * _appLibrary;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _birthtime;
    unsigned long long  _fileID;
    NSURL * _fileURL;
    unsigned char  _finderInfo;
    unsigned int  _flags;
    unsigned int  _fsGenerationID;
    BRCGenerationID * _generationID;
    unsigned int  _hasFinderInfoAliasBit;
    unsigned int  _hasFinderTags;
    unsigned int  _isBRAlias;
    unsigned int  _isDocumentsFolder;
    unsigned int  _isExcluded;
    unsigned int  _isInPackage;
    unsigned int  _isPackageRoot;
    bool  _isUserVisible;
    unsigned char  _itemScope;
    NSString * _logicalName;
    unsigned short  _mode;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _mtime;
    BRCItemGlobalID * _parentItemGlobalID;
    unsigned int  _qtnResolved;
    NSData * _quarantineInfo;
    unsigned int  _readFault;
    BRCAccountSessionFPFS * _session;
    unsigned long long  _sharingOptions;
    long long  _size;
    NSString * _symlinkContent;
    NSData * _xattrs;
    unsigned int  _xattrsResolved;
}

@property (nonatomic, readonly) BRCAppLibrary *appLibrary;
@property (nonatomic, readonly) long long birthTime;
@property (nonatomic, readonly) unsigned long long fileID;
@property (nonatomic, readonly) unsigned int fileType;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) BRCGenerationID *generationID;
@property (nonatomic, readonly) bool hasFinderTags;
@property (nonatomic, readonly) bool isBRAlias;
@property (nonatomic, readonly) bool isDocument;
@property (nonatomic, readonly) bool isDocumentsFolder;
@property (nonatomic, readonly) bool isExcluded;
@property (nonatomic, readonly) bool isExecutable;
@property (nonatomic, readonly) bool isFault;
@property (nonatomic, readonly) bool isFile;
@property (nonatomic, readonly) bool isFinderAlias;
@property (nonatomic, readonly) bool isHiddenExtension;
@property (nonatomic, readonly) bool isPackageRoot;
@property (nonatomic, readonly) bool isSymLink;
@property (nonatomic, readonly) bool isUnixDir;
@property (nonatomic, readonly) bool isUserVisible;
@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, readonly) unsigned char itemScope;
@property (nonatomic, readonly) NSString *logicalName;
@property (nonatomic, readonly) long long modificationTime;
@property (nonatomic, readonly) BRCItemGlobalID *parentItemGlobalID;
@property (nonatomic, readonly) NSData *quarantineInfo;
@property (nonatomic, readonly) BRCAccountSessionFPFS *session;
@property (nonatomic, readonly) unsigned long long sharingOptions;
@property (nonatomic, readonly) long long size;
@property (nonatomic, readonly) NSString *symlinkContent;
@property (nonatomic, readonly) NSData *xattrs;

- (void).cxx_destruct;
- (int)_resolveAgainstFileDescriptor:(int)arg1;
- (void)_resolveParentBasedPropertiesWithParent:(id)arg1 logicalName:(id)arg2;
- (id)appLibrary;
- (long long)birthTime;
- (unsigned long long)fileID;
- (unsigned int)fileType;
- (id)fileURL;
- (id)generationID;
- (bool)hasFinderTags;
- (id)initAsNewDirectoryWithLogicalName:(id)arg1 parentItem:(id)arg2;
- (id)initAsSymlinkWithTarget:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 error:(id*)arg4;
- (id)initWithPackageURL:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 existingItem:(id)arg2 quarantineInfo:(id)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 logicalName:(id)arg2 quarantineInfo:(id)arg3 parentItem:(id)arg4 error:(id*)arg5;
- (id)initWithURL:(id)arg1 packageRoot:(id)arg2 error:(id*)arg3;
- (bool)isBRAlias;
- (bool)isDocument;
- (bool)isDocumentsFolder;
- (bool)isExcluded;
- (bool)isExecutable;
- (bool)isFault;
- (bool)isFile;
- (bool)isFileWithFinderInfoAliasBit;
- (bool)isFinderAlias;
- (bool)isHiddenExtension;
- (bool)isPackageRoot;
- (bool)isSymLink;
- (bool)isUnixDir;
- (bool)isUserVisible;
- (bool)isWritable;
- (unsigned char)itemScope;
- (id)logicalName;
- (long long)modificationTime;
- (id)parentItemGlobalID;
- (id)quarantineInfo;
- (id)session;
- (unsigned long long)sharingOptions;
- (long long)size;
- (id)symlinkContent;
- (id)xattrs;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLRecordComputeState : NSObject <NSSecureCoding> {
    NSString * _adjustmentFingerprint;
    NSString * _fileStorageIdentifier;
    NSURL * _fileURL;
    CPLScopedIdentifier * _itemScopedIdentifier;
    NSDate * _lastUpdatedDate;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *adjustmentFingerprint;
@property (nonatomic, copy) NSString *fileStorageIdentifier;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, readonly) CPLScopedIdentifier *itemScopedIdentifier;
@property (nonatomic, readonly) NSDate *lastUpdatedDate;
@property (nonatomic, readonly) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustmentFingerprint;
- (id)copyAddingFileURL:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileStorageIdentifier;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemScopedIdentifier:(id)arg1 fileStorageIdentifier:(id)arg2 version:(id)arg3 fileURL:(id)arg4 adjustmentFingerprint:(id)arg5 lastUpdatedDate:(id)arg6;
- (id)initWithItemScopedIdentifier:(id)arg1 version:(id)arg2 fileURL:(id)arg3 adjustmentFingerprint:(id)arg4 lastUpdatedDate:(id)arg5;
- (id)itemScopedIdentifier;
- (id)lastUpdatedDate;
- (id)redactedDescription;
- (void)setFileStorageIdentifier:(id)arg1;
- (void)setFileURL:(id)arg1;
- (id)version;

@end
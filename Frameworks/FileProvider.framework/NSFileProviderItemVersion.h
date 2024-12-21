/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding> {
    bool  _conflictResolved;
    NSData * _contentVersion;
    NSArray * _equivalentContentVersions;
    NSArray * _equivalentMetadataVersions;
    NSString * _lastEditorDeviceName;
    NSData * _metadataVersion;
}

@property bool conflictResolved;
@property (nonatomic, readonly) NSData *contentVersion;
@property (nonatomic, readonly, copy) NSArray *equivalentContentVersions;
@property (nonatomic, readonly, copy) NSArray *equivalentMetadataVersions;
@property (readonly, copy) NSString *lastEditorDeviceName;
@property (nonatomic, readonly) NSData *metadataVersion;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)beforeFirstSyncComponent;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)conflictResolved;
- (id)contentVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalentContentVersions;
- (id)equivalentMetadataVersions;
- (id)etagHash;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2;
- (id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2 lastEditorDeviceName:(id)arg3;
- (id)initWithMainContentVersion:(id)arg1 equivalentContentVersions:(id)arg2 mainMetadataVersion:(id)arg3 equivalentMetadataVersions:(id)arg4 lastEditorDeviceName:(id)arg5;
- (id)initWithMainContentVersion:(id)arg1 equivalentContentVersions:(id)arg2 mainMetadataVersion:(id)arg3 equivalentMetadataVersions:(id)arg4 lastEditorDeviceName:(id)arg5 conflictResolved:(bool)arg6;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)lastEditorDeviceName;
- (id)metadataVersion;
- (void)setConflictResolved:(bool)arg1;
- (id)versionRewritingBeforeFirstSync;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

- (id)br_prettyDescription;

@end
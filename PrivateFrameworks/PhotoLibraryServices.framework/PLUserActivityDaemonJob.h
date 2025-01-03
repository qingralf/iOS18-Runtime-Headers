/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLUserActivityDaemonJob : PLDaemonJob {
    long long  _actionType;
    NSString * _albumUUID;
    NSArray * _assetUUIDs;
    unsigned long long  _cloudFeedContent;
    NSString * _momentShareUUID;
}

@property long long actionType;
@property (nonatomic, copy) NSString *albumUUID;
@property (nonatomic, retain) NSArray *assetUUIDs;
@property (nonatomic) unsigned long long cloudFeedContent;
@property (nonatomic, copy) NSString *momentShareUUID;

+ (void)checkedSharedAlbumServerModelRelationships;
+ (id)newUserActivityDaemonJob;
+ (void)userDidChangeStatusForMomentShare:(id)arg1;
+ (void)userDidDeleteSharedAlbum:(id)arg1;
+ (void)userDidDeleteSharedAssets:(id)arg1;
+ (void)userDidLeavePhotosApplication;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)arg1;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1;
+ (void)userDidNavigateIntoSharedAlbum:(id)arg1;
+ (void)userDidReadCommentOnSharedAsset:(id)arg1;
+ (void)userDidViewCloudFeedContent:(unsigned long long)arg1;
+ (void)userDidViewSharedLibraryParticipantAssetTrashNotification;

- (void).cxx_destruct;
- (long long)actionType;
- (id)albumUUID;
- (id)assetUUIDs;
- (unsigned long long)cloudFeedContent;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (id)initWithAssetsdClient:(id)arg1;
- (id)momentShareUUID;
- (void)run;
- (void)runDaemonSide;
- (void)setActionType:(long long)arg1;
- (void)setAlbumUUID:(id)arg1;
- (void)setAssetUUIDs:(id)arg1;
- (void)setCloudFeedContent:(unsigned long long)arg1;
- (void)setMomentShareUUID:(id)arg1;

@end

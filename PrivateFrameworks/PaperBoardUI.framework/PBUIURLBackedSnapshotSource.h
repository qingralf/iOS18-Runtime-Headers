/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI
 */

@interface PBUIURLBackedSnapshotSource : NSObject <PBUIPosterReplicaSnapshotProviding, PBUIReplicaSnapshotSource, PUIColorStatisticsDelegate> {
    NSString * _cacheIdentifier;
    PUIColorStatistics * _contentColorStatistics;
    <PBUIURLSourceDelegate> * _delegate;
    PUIImageOnDiskFormat * _format;
    BSAtomicFlag * _isDirty;
    BSAtomicFlag * _isFrozen;
    _UILegibilitySettings * _legibilitySettings;
    BSAtomicFlag * _needsColorSettingsUpdate;
    PBUIReplicaSourceObserverBox * _observers;
    UIImage * _snapshot;
    NSURL * _snapshotColorStatisticsURL;
    NSObject<OS_dispatch_queue> * _snapshotImageWriteQueue;
    NSDictionary * _snapshotMetadata;
    NSURL * _snapshotMetadataURL;
    NSURL * _snapshotURL;
}

@property (nonatomic, copy) NSString *cacheIdentifier;
@property (nonatomic, readonly, copy) PUIColorStatistics *contentColorStatistics;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PBUIURLSourceDelegate> *delegate;
@property (nonatomic, readonly, copy) UIColor *derivedProminentPosterColor;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool effectsAreBakedIn;
@property (nonatomic, readonly) PUIImageOnDiskFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly, copy) UIColor *posterPreferredProminentColor;
@property (nonatomic, retain) UIImage *snapshot;
@property (nonatomic, readonly) NSURL *snapshotColorStatisticsURL;
@property (nonatomic, readonly, copy) NSDictionary *snapshotMetadata;
@property (nonatomic, readonly) NSURL *snapshotMetadataURL;
@property (nonatomic, readonly) NSURL *snapshotURL;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)buildCacheIdentifier;
- (id)cacheIdentifier;
- (void)clearDerivedProminentColor;
- (void)colorStatisticsDidChange:(id)arg1;
- (id)contentColorStatistics;
- (void)currentSnapshotInterfaceOrientation:(long long*)arg1 outDeviceOrientation:(long long*)arg2;
- (id)delegate;
- (id)derivedProminentPosterColor;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)effectsAreBakedIn;
- (id)encoderForSnapshot;
- (id)format;
- (id)initWithPathProvider:(id)arg1 format:(id)arg2;
- (id)initWithPathProvider:(id)arg1 format:(id)arg2 delegate:(id)arg3;
- (id)initWithSnapshotURL:(id)arg1 colorStatisticsURL:(id)arg2 metadataURL:(id)arg3 format:(id)arg4 delegate:(id)arg5;
- (void)invalidateCurrentSnapshot;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)legibilitySettings;
- (void)notifyObservers;
- (void)notifyObserversIfNeeded;
- (void)performBatchUpdates:(id /* block */)arg1;
- (id)posterPreferredProminentColor;
- (void)readColorStatisticsFromDisk;
- (id)readFromDiskWithError:(out id*)arg1;
- (void)readMetadataFromDisk;
- (id)registerSnapshotSourceObserver:(id)arg1;
- (bool)removeOnDiskSnapshotWithError:(out id*)arg1;
- (bool)saveColorStatistics;
- (void)setCacheIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSnapshotColorStatisticsURL:(id)arg1;
- (void)setSnapshotMetadataURL:(id)arg1;
- (void)setSnapshotURL:(id)arg1;
- (void)setupSnapshotSourceForSnapshotURL:(id)arg1 snapshotColorStatisticsURL:(id)arg2 snapshotMetadataURL:(id)arg3;
- (id)snapshot;
- (id)snapshotColorStatisticsURL;
- (id)snapshotMetadata;
- (id)snapshotMetadataURL;
- (id)snapshotSourceForObserver:(id)arg1;
- (id)snapshotURL;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateColorStatisticsWith:(id)arg1;
- (void)updateFromDisk;
- (void)updateFromPathProvider:(id)arg1;
- (bool)updateMetadataWith:(id)arg1 error:(out id*)arg2;
- (bool)updatePosterPreferredProminentColor:(id)arg1 error:(out id*)arg2;
- (void)updateWithImage:(id)arg1 contentColorStatistics:(id)arg2 metadata:(id)arg3 completion:(id /* block */)arg4;

@end

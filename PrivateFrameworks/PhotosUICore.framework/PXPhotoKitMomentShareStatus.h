/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitMomentShareStatus : PXMomentShareStatus {
    PXCMMMomentShareInvitation * _invitation;
}

@property (nonatomic, readonly) PHMomentShare *momentShare;

- (void).cxx_destruct;
- (id)_createStatusProvider;
- (void)_prepareFetchResultsForPhotoLibrary:(id)arg1;
- (id)initWithPhotoKitMomentShare:(id)arg1;
- (id)invitation;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSBackgroundImageAssetController : NSObject <WBSBackgroundImageAssetControllerProtocol, WBSMobileAssetControllerDelegate> {
    <WBSMobileAssetControllerProtocol> * _assetController;
    NSMutableDictionary * _assetURLToAttributes;
    <WBSBackgroundImageAssetControllerDelegate> * _delegate;
    NSMutableArray * _fileNames;
    NSMutableDictionary * _imageNamesToDownloadStates;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <WBSBackgroundImageAssetControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *fileNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)mobileAssetBackgroundImageNamesOnDisk;
+ (id)mobileAssetType;

- (void).cxx_destruct;
- (bool)_saveAssetAtURL:(id)arg1 toURL:(id)arg2;
- (void)_sendBackgroundImageThumbnailAssetsToDelegateIfPossible;
- (void)_sendBackgroundImageThumbnailAssetsToDelegateIfPossible:(id)arg1;
- (id)delegate;
- (void)downloadMobileAssetBackgroundImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)downloadStateForFileName:(id)arg1;
- (id)fileNames;
- (id)init;
- (id)initWithMobileAssetController:(id)arg1;
- (void)mobileAssetController:(id)arg1 didBecomeAvailable:(id)arg2 withAttributes:(id)arg3;
- (void)mobileAssetController:(id)arg1 didDownload:(id)arg2 withAttributes:(id)arg3;
- (void)mobileAssetController:(id)arg1 didFailCatalogDownload:(id)arg2;
- (void)mobileAssetController:(id)arg1 didFailDownload:(id)arg2;
- (void)mobileAssetController:(id)arg1 didFailRetrieve:(id)arg2;
- (void)mobileAssetController:(id)arg1 willPerformQuery:(id)arg2;
- (void)savePendingChangesBeforeTermination;
- (void)setDelegate:(id)arg1;

@end

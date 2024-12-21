/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeAssetExplorerManager : NSObject {
    bool  _allItemsShouldNotAppearInShelf;
    CKChatInputController * _inputController;
    NSMutableArray * _packagesToStage;
    NSMutableArray * _savedData;
}

@property (nonatomic) bool allItemsShouldNotAppearInShelf;
@property (nonatomic, retain) CKChatInputController *inputController;
@property (nonatomic, retain) NSMutableArray *packagesToStage;
@property (nonatomic, retain) NSMutableArray *savedData;

- (void).cxx_destruct;
- (void)_balloonPluginExtensionsLoaded:(id)arg1;
- (void)_stageAssetPackage:(id)arg1 toBrowser:(id)arg2;
- (bool)allItemsShouldNotAppearInShelf;
- (id)browser;
- (id)clearAndDisableShelfAndReturnPreviouslyShelvedData;
- (id)generatePackageFromAssetURL:(id)arg1 appendedVideoURL:(id)arg2 previewImage:(id)arg3;
- (id)initWithInputController:(id)arg1;
- (id)inputController;
- (id)packagesToStage;
- (void)saveFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 fullyRealizedPreview:(id)arg4 rawPreview:(id)arg5 appendedVideoURL:(id)arg6;
- (id)savedData;
- (void)setAllItemsShouldNotAppearInShelf:(bool)arg1;
- (void)setInputController:(id)arg1;
- (void)setPackagesToStage:(id)arg1;
- (void)setSavedData:(id)arg1;
- (void)stageAssetPackage:(id)arg1;
- (void)tryToStagePendingPackages;

@end
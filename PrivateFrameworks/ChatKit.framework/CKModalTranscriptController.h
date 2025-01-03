/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKModalTranscriptController : CKShareSheetChatController {
    bool  _alreadySetUp;
    bool  _appearCompleted;
    CKComposeAssetExplorerManager * _assetExplorerManager;
    bool  _cameraSelectionDisabled;
    NSMutableArray * _deferredInsertMediaObjectBlocks;
    CKChatEagerUploadController * _eagerUploadController;
    int  _entryViewInvisible;
    bool  _forceMMS;
    bool  _mimeType;
    NSMutableArray * _partsToInsert;
    NSMutableArray * _typesToInsert;
}

@property (nonatomic) bool alreadySetUp;
@property (nonatomic) bool appearCompleted;
@property (nonatomic, retain) CKComposeAssetExplorerManager *assetExplorerManager;
@property (nonatomic) bool cameraSelectionDisabled;
@property (nonatomic, retain) NSMutableArray *deferredInsertMediaObjectBlocks;
@property (nonatomic, retain) CKChatEagerUploadController *eagerUploadController;
@property (nonatomic) int entryViewInvisible;
@property (nonatomic) bool forceMMS;
@property (nonatomic) bool mimeType;
@property (nonatomic, retain) NSMutableArray *partsToInsert;
@property (nonatomic, retain) NSMutableArray *typesToInsert;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_conversationListDidFinishLoading:(id)arg1;
- (bool)_deviceIsLocked;
- (bool)_insertMediaObject:(id)arg1;
- (void)_insertMediaObjectAndReturnFrame:(id)arg1;
- (double)_offsetForScreenWidth:(double)arg1 containerWidth:(double)arg2 windowOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)_setConversationDeferredSetup;
- (void)_setEntryViewVisible:(bool)arg1;
- (bool)_shouldAllowCameraAttachments;
- (bool)_shouldUseDefaultFirstResponder;
- (bool)_shouldUseExistingConversations;
- (bool)alreadySetUp;
- (bool)appearCompleted;
- (id)assetExplorerManager;
- (bool)cameraSelectionDisabled;
- (void)createCompositionForPluginPayload:(id)arg1 shelfMediaObject:(id)arg2 collaborationShareOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)deferredInsertMediaObjectBlocks;
- (void)disableCameraAttachments;
- (id)eagerUploadController;
- (int)entryViewInvisible;
- (bool)forceMMS;
- (void)hideEntryViewContent:(bool)arg1;
- (id)initWithNavigationController:(id)arg1;
- (void)insertCKShareForCollaboration:(id)arg1 containerSetupInfo:(id)arg2 collaborationShareOptions:(id)arg3 isCollaboration:(bool)arg4;
- (void)insertCKShareForCollaboration:(id)arg1 containerSetupInfo:(id)arg2 collaborationShareOptions:(id)arg3 isCollaboration:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 fileIsResolved:(bool)arg3 transcoderUserInfo:(id)arg4 fullyRealizedPreview:(id)arg5 rawPreview:(id)arg6 appendedVideoURL:(id)arg7 completion:(id /* block */)arg8;
- (void)insertFileURLAsMediaObject:(id)arg1 filename:(id)arg2 fileIsResolved:(bool)arg3 transcoderUserInfo:(id)arg4 fullyRealizedPreview:(id)arg5 rawPreview:(id)arg6 appendedVideoURL:(id)arg7;
- (void)insertFileURLForCollaboration:(id)arg1 collaborationShareOptions:(id)arg2 metadata:(id)arg3 sendAsCopyURL:(id)arg4 isCollaboration:(bool)arg5;
- (void)insertFileURLForCollaboration:(id)arg1 collaborationShareOptions:(id)arg2 metadata:(id)arg3 sendAsCopyURL:(id)arg4 isCollaboration:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)insertGroupActivity:(id)arg1;
- (void)insertMessage:(id)arg1 bundleProxy:(id)arg2;
- (void)insertMessage:(id)arg1 bundleProxy:(id)arg2 extensionBundleIdentifier:(id)arg3;
- (void)insertRichLinkWithCloudKitShare:(id)arg1 containerSetupInfo:(id)arg2 collaborationShareOptions:(id)arg3 isCollaboration:(bool)arg4;
- (void)insertRichLinkWithCloudKitShare:(id)arg1 containerSetupInfo:(id)arg2 collaborationShareOptions:(id)arg3 isCollaboration:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)insertRichLinkWithURL:(id)arg1 data:(id)arg2;
- (void)insertRichLinkWithURL:(id)arg1 sendAsCopyURL:(id)arg2 data:(id)arg3 collaborationType:(long long)arg4 collaborationShareOptions:(id)arg5 metadata:(id)arg6 isCollaboration:(bool)arg7 completionHandler:(id /* block */)arg8;
- (void)insertSWYPendingCollaboration:(id)arg1 collaborationShareOptions:(id)arg2 collaborationMetadata:(id)arg3 sendAsCopyURL:(id)arg4 isCollaboration:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)loadChatInputController;
- (bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (bool)messageEntryViewWidth:(double*)arg1 andOffset:(double*)arg2;
- (bool)mimeType;
- (id)partsToInsert;
- (id)proposedParticipantHandles;
- (void)registerForNotifications;
- (void)sendComposition:(id)arg1;
- (void)setAlreadySetUp:(bool)arg1;
- (void)setAppearCompleted:(bool)arg1;
- (void)setAssetExplorerManager:(id)arg1;
- (void)setCameraSelectionDisabled:(bool)arg1;
- (void)setCanEditRecipients:(bool)arg1;
- (void)setComposition:(id)arg1;
- (void)setCompositionForPluginPayload:(id)arg1;
- (void)setCompositionForPluginPayload:(id)arg1 shelfMediaObject:(id)arg2 collaborationShareOptions:(id)arg3;
- (void)setCompositionForPluginPayload:(id)arg1 shelfMediaObject:(id)arg2 collaborationShareOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDeferredInsertMediaObjectBlocks:(id)arg1;
- (void)setEagerUploadController:(id)arg1;
- (void)setEntryView:(id)arg1;
- (void)setEntryViewInvisible:(int)arg1;
- (void)setForceMMS:(bool)arg1;
- (void)setMimeType:(bool)arg1;
- (void)setPartsToInsert:(id)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)setShouldDisableEntryField:(bool)arg1;
- (void)setTextEntryContentsVisible:(bool)arg1;
- (void)setTypesToInsert:(id)arg1;
- (bool)shouldDismissAfterSend;
- (id)typesToInsert;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSMessageAppExtensionContext : NSExtensionContext <_MSMessageComposeExtensionImplProtocol> {
    MSConversation * _activeConversation;
    <_MSMessageComposeExtensionImplProtocol> * _containingContext;
    <_MSMessageComposeHostImplProtocol> * _hostContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrameOfHostView;
    unsigned long long  _presentationContext;
    unsigned long long  _presentationStyle;
    struct __CFRunLoopObserver { } * _principalObjectCreationObserver;
}

@property (nonatomic, retain) MSConversation *activeConversation;
@property (nonatomic, retain) <_MSMessageComposeExtensionImplProtocol> *containingContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_MSMessageComposeHostImplProtocol> *hostContext;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrameOfHostView;
@property (nonatomic) unsigned long long presentationContext;
@property (nonatomic) unsigned long long presentationStyle;
@property (nonatomic, readonly) struct __CFRunLoopObserver { }*principalObjectCreationObserver;
@property (nonatomic, readonly) UIViewController *stickerViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;

- (void).cxx_destruct;
- (void)_addStickerAnimationDidFinishWithCompletion:(id /* block */)arg1;
- (void)_addStickerToStoreWithRepresentations:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addStickerToStoreWithRepresentations:(id)arg1 completionWithStickerIDs:(id /* block */)arg2;
- (void)_addStickerToStoreWithRepresentations:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (void)_addStickerToStoreWithRepresentations:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 effect:(long long)arg3 completion:(id /* block */)arg4;
- (void)_addStickerToStoreWithUISticker:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (void)_animatedStickerCreationProgressChanged:(id)arg1 progress:(double)arg2;
- (void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2;
- (void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(id /* block */)arg4;
- (void)_conversationDidChangeWithConversationState:(id)arg1;
- (void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didRemoveAssetArchiveWithIdentifier:(id)arg1;
- (void)_didRemoveStickerPreview;
- (void)_didSelectGPAsset:(id)arg1 sandboxExtension:(id)arg2 recipeData:(id)arg3 completion:(id /* block */)arg4;
- (void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didUpdateMessage:(id)arg1 conversationState:(id)arg2;
- (void)_handlePrincipalObjectCreated;
- (void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(id /* block */)arg3;
- (void)_hostDidBeginDeferredTeardown;
- (void)_installPrincipalObjectObserver;
- (void)_prepareForAddStickerFromSubjectLift;
- (void)_prepareForPresentationWithCompletionHandler:(id /* block */)arg1;
- (void)_presentationDidChangeToPresentationState:(id)arg1;
- (void)_presentationWillChangeToPresentationState:(id)arg1;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_remoteViewNeedsSizeMatchBeforeSnapshotSwap;
- (void)_remoteViewProvidesExplicitSizeSnapshot;
- (void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_requestPresentationWithStickerType:(id)arg1 identifier:(id)arg2;
- (void)_requestSnapshotThatFits:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestSnapshotWithCompletion:(id /* block */)arg1;
- (void)_requestStickerExtensionMetadataDictionary:(id /* block */)arg1;
- (void)_resignActive;
- (void)_setHostBundleID:(id)arg1;
- (void)_setPluginIdentifierToShow:(id)arg1 completion:(id /* block */)arg2;
- (void)_uninstallPrincipalObjectObserverIfNeeded;
- (void)_volumeButtonPressed:(bool)arg1;
- (id)activeConversation;
- (struct { unsigned int x1[8]; })balloonHostAuditToken;
- (void)beginDisablingUserInteraction;
- (void)canShowBrowserForPluginIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)containingContext;
- (void)contentDidLoad;
- (void)dealloc;
- (void)dismiss;
- (void)dismissAndPresentPhotosApp;
- (void)dismissToKeyboard:(bool)arg1;
- (void)dragMediaItemCanceled;
- (void)dragMediaItemMoved:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)endDisablingUserInteraction;
- (id)hostContext;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameOfHostView;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentAlertSheetWith:(id)arg1 styles:(id)arg2 completion:(id /* block */)arg3;
- (void)presentAlertSheetWithTitle:(id)arg1 message:(id)arg2 buttonTitles:(id)arg3 styles:(id)arg4 completion:(id /* block */)arg5;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(id /* block */)arg4;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 completion:(id /* block */)arg5;
- (void)presentContextMenuWithButtonTitles:(id)arg1 imageNames:(id)arg2 buttonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 completion:(id /* block */)arg4;
- (unsigned long long)presentationContext;
- (unsigned long long)presentationStyle;
- (struct __CFRunLoopObserver { }*)principalObjectCreationObserver;
- (id)remoteProxy;
- (void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestFullScreenModalPresentationWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)requestHostSceneIdentifierWithCompletion:(id /* block */)arg1;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)requestResize;
- (void)setActiveConversation:(id)arg1;
- (void)setContainingContext:(id)arg1;
- (void)setHostContext:(id)arg1;
- (void)setPresentationContext:(unsigned long long)arg1;
- (void)setPresentationStyle:(unsigned long long)arg1;
- (void)showBrowserForPluginIdentifier:(id)arg1 style:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)stageAppItem:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)stageAssetArchive:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)stageMediaItem:(id)arg1 skipShelf:(bool)arg2 forceStage:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)stageRichLink:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)stickerDruidDragEndedWithPayload:(id)arg1;
- (void)stickerDruidDragEndedWithPayload:(id)arg1 pluginIdentifier:(id)arg2;
- (void)stickerDruidDragStarted;
- (id)stickerViewController;
- (id)viewController;

@end
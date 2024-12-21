/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNMeCardSharingEditAvatarFlowManager : NSObject <AVTAvatarEditorViewControllerDelegate, AVTAvatarPickerDelegate, CNAvatarEditingManagerDelegate, CNVisualIdentityImagePickerControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate> {
    CNAvatarEditingManager * _avatarEditingManager;
    UINavigationController * _baseNavigationController;
    <CNMeCardSharingEditAvatarFlowManagerDelegate> * _delegate;
    CNVisualIdentityImagePickerController * _imagePickerController;
    CNPhotoPickerVariantsManager * _variantsManager;
}

@property (nonatomic, retain) CNAvatarEditingManager *avatarEditingManager;
@property (nonatomic, retain) UINavigationController *baseNavigationController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CNMeCardSharingEditAvatarFlowManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNVisualIdentityImagePickerController *imagePickerController;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNPhotoPickerVariantsManager *variantsManager;

+ (id)log;

- (void).cxx_destruct;
- (id)avatarEditingManager;
- (void)avatarEditingManager:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (id)baseNavigationController;
- (long long)defaultModalPresentationStyle;
- (id)delegate;
- (id)editorViewControllerForProviderItem:(id)arg1;
- (id)imagePickerController;
- (void)imagePickerController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;
- (void)presentAvatarEditorViewControllerForProviderItem:(id)arg1;
- (void)presentEditorForAvatarSourceType:(long long)arg1 visualIdentity:(id)arg2 fromGalleryViewController:(id)arg3;
- (void)presentMemojiPicker;
- (void)pushAvatarEditorViewControllerForProviderItem:(id)arg1 fromViewController:(id)arg2;
- (void)setAvatarEditingManager:(id)arg1;
- (void)setBaseNavigationController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (void)setVariantsManager:(id)arg1;
- (id)variantsManager;
- (void)visualIdentityEditorController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)visualIdentityEditorControllerDidCancel:(id)arg1;

@end
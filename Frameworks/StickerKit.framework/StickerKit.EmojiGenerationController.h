/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StickerKit.framework/StickerKit
 */

@interface StickerKit.EmojiGenerationController : StickerKit.EmojiGenerationBaseController <AXSSImageDescriptionViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    void addButton;
    void cancelButton;
    void hostAppID;
    void imageDescriptionVC;
    void imageLayoutGuide;
    void imageLayoutGuideDebugView;
    void onboardingViewController;
    void promptEntryViewTopLockingConstraint;
    void ttrButton;
}

- (void).cxx_destruct;
- (void)addCaptionFromCarousel;
- (void)appearanceDidChange;
- (void)closeButtonPressed:(id)arg1;
- (void)dealloc;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapInsertButton:(id)arg1;
- (void)imageDescriptionViewControllerDidCancel:(id)arg1;
- (void)imageDescriptionViewControllerDidSave:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)textInputResponderDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willBeginRotation:(id)arg1;

@end
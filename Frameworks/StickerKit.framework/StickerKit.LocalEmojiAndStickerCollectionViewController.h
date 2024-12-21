/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StickerKit.framework/StickerKit
 */

@interface StickerKit.LocalEmojiAndStickerCollectionViewController : UIViewController <_UIEmojiAndStickerCollectionViewControllerDelegate> {
    void $__lazy_storage_$_dataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pinchGestureRecognizer;
    void configuration;
    void disableInsets;
    void searchTask;
    void uiEmojiAndStickerCollectionViewController;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)dealloc;
- (void)didBeginDragWithShouldDismiss:(bool)arg1;
- (void)didChangePlaceholder:(id)arg1;
- (void)didSelectEmoji:(id)arg1;
- (void)didSelectEmoji:(id)arg1 dismiss:(bool)arg2;
- (void)didTapToCreateNew:(id)arg1;
- (void)didTapToEdit:(id)arg1;
- (void)didTapToInsertSticker:(id)arg1;
- (void)didTapToPresentPicker:(id)arg1;
- (void)handleKeyEvent:(id)arg1;
- (void)handleWithPinch:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)stickerViewDidBeginDrag:(id)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
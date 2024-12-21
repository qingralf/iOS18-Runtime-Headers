/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKCStickerFromPKDrawing : UIView <_UIStickerPickerViewControllerDelegate> {
    UIView * _currentView;
    <VKCStickerFromPKDrawingDelegate> * _delegate;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    struct CGImage { } * _inputImage;
    _UIStickerPickerViewController * _stickerPickerViewController;
}

@property (nonatomic, retain) UIView *currentView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <VKCStickerFromPKDrawingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UISelectionFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGImage { }*inputImage;
@property (nonatomic, retain) _UIStickerPickerViewController *stickerPickerViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_generateStickerRepresentations:(struct CGImage { }*)arg1 type:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)currentView;
- (void)dealloc;
- (id)delegate;
- (id)feedbackGenerator;
- (id)initWithFrameVar:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 currentView:(id)arg2 inputtedImage:(struct CGImage { }*)arg3;
- (struct CGImage { }*)inputImage;
- (void)presentStickerPickerViewController:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setInputImage:(struct CGImage { }*)arg1;
- (void)setStickerPickerViewController:(id)arg1;
- (id)stickerPickerViewController;
- (void)stickerPickerViewControllerDidDismiss;
- (void)stickerPickerViewControllerDidLoad;

@end
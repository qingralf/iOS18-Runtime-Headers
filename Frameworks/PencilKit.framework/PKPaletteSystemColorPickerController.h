/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPaletteSystemColorPickerController : PKPaletteBaseColorPickerController <UIColorPickerViewControllerDelegate> {
    UIColorPickerViewController * _colorPickerViewController;
}

@property (nonatomic, retain) UIColorPickerViewController *colorPickerViewController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldConvertColorPickerColorFromDarkToLight;
- (id)colorPickerViewController;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(bool)arg3;
- (long long)colorUserInterfaceStyle;
- (void)dismissEyeDropper;
- (id)init;
- (id)selectedColor;
- (void)setColorPickerViewController:(id)arg1;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSupportsAlpha:(bool)arg1;
- (bool)supportsAlpha;
- (id)viewController;

@end

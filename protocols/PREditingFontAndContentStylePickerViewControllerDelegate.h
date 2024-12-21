/* Generated by RuntimeBrowser.
 */

@protocol PREditingFontAndContentStylePickerViewControllerDelegate <NSObject>

@optional

- (NSArray *)additionalFontConfigurationsForFontAndContentStylePickerViewController:(PREditingFontAndContentStylePickerViewController *)arg1;
- (PREditingPosterContentStyleCoordinator *)fontAndContentStylePickerViewController:(PREditingFontAndContentStylePickerViewController *)arg1 coordinatorForStyle:(id <PRPosterContentStyle>)arg2 isSuggested:(bool)arg3;
- (void)fontAndContentStylePickerViewController:(PREditingFontAndContentStylePickerViewController *)arg1 didUpdateDesiredDetent:(double)arg2;
- (bool)fontAndContentStylePickerViewController:(PREditingFontAndContentStylePickerViewController *)arg1 shouldShowFontConfiguration:(PRTimeFontConfiguration *)arg2;
- (void)fontAndContentStylePickerViewControllerDidFinish:(PREditingFontAndContentStylePickerViewController *)arg1;

@end
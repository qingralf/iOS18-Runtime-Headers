/* Generated by RuntimeBrowser.
 */

@protocol PUIStylePickerViewControllerDelegate <PUIStylePickerViewControllerObserver>

@optional

- (NSArray *)additionalFontsForStylePickerViewController:(PUIStylePickerViewController *)arg1;
- (PUIStyleUICoordinator *)stylePickerViewController:(PUIStylePickerViewController *)arg1 coordinatorForStyle:(id <PUIStyle>)arg2 isSuggested:(bool)arg3;
- (bool)stylePickerViewController:(PUIStylePickerViewController *)arg1 shouldShowFont:(PUIFont *)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardSettings.framework/KeyboardSettings
 */

@interface KSInputModeTableCell : PSTableCell {
    UIKeyboardInputMode * _inputMode;
}

@property (nonatomic, readonly) bool hasDownloadableAssets;
@property (nonatomic, copy) UIKeyboardInputMode *inputMode;

+ (long long)cellStyle;

- (void)addDownloadIcon;
- (void)dealloc;
- (void)downloadButtonPressed:(id)arg1 withEvent:(id)arg2;
- (bool)hasDownloadableAssets;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)inputMode;
- (void)setInputMode:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)updateLabels;

@end
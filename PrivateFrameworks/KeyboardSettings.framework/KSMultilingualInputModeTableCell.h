/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardSettings.framework/KeyboardSettings
 */

@interface KSMultilingualInputModeTableCell : PSTableCell {
    NSArray * _inputModes;
}

@property (nonatomic, readonly) bool hasDownloadableAssets;
@property (nonatomic, copy) NSArray *inputModes;

+ (long long)cellStyle;

- (void)addDownloadIcon;
- (void)dealloc;
- (void)downloadButtonPressed:(id)arg1 withEvent:(id)arg2;
- (bool)hasDownloadableAssets;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)inputModes;
- (void)setInputModes:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)updateLabels;

@end

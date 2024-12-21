/* Generated by RuntimeBrowser.
 */

@protocol UIKeyboardEmojiCategoryUpdate <NSObject>

@required

- (UIKeyboardEmojiKeyDisplayController *)emojiKeyManager;
- (void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController *)arg1;
- (void)updateToCategory:(long long)arg1;

@optional

- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;
- (void)updateToIndexPath:(NSIndexPath *)arg1;

@end
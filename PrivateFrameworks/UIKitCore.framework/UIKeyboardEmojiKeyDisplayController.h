/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmojiKeyDisplayController : NSObject <UIKeyboardEmojiCategoryUpdateDelegate> {
    UIKeyboardEmojiKeyView * _categoryView;
    UIKeyboardEmojiKeyView * _inputView;
    UIKeyboardEmojiCategory * _lastViewedCategory;
}

@property (nonatomic) UIKeyboardEmojiKeyView *categoryView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIKeyboardEmojiKeyView *inputView;
@property UIKeyboardEmojiCategory *lastViewedCategory;
@property (readonly) Class superclass;

+ (Class)classForCategoryControl:(long long)arg1;
+ (Class)classForInputView:(long long)arg1;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;

- (void).cxx_destruct;
- (id)categoryView;
- (void)dealloc;
- (void)emojiUsed:(id)arg1;
- (void)emojiUsed:(id)arg1 language:(id)arg2;
- (id)emojiWithoutDuplicateRecents:(id)arg1;
- (bool)hasLastUsedVariantForEmojiString:(id)arg1;
- (id)init;
- (id)inputView;
- (id)lastUsedVariantEmojiForEmojiString:(id)arg1;
- (id)lastViewedCategory;
- (long long)lastVisibleFirstEmojiIndexforCategory:(id)arg1;
- (id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long*)arg2;
- (id)recents;
- (void)reloadCategoryForIndexPath:(id)arg1 withSender:(id)arg2;
- (long long)reloadCategoryForOffsetPercentage:(double)arg1 withSender:(id)arg2;
- (void)reloadForCategory:(long long)arg1 withSender:(id)arg2;
- (void)setCategoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setLastViewedCategory:(id)arg1;
- (id)skinToneBaseKeyPreferences;
- (void)updateEmojiKeyManagerWithKey:(id)arg1 withKeyView:(id)arg2;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (bool)userHasSelectedSkinToneEmoji;

@end

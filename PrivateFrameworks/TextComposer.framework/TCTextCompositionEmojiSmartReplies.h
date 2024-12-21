/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextComposer.framework/TextComposer
 */

@interface TCTextCompositionEmojiSmartReplies : NSObject {
    NSArray * _allowList;
    NSMutableDictionary * _emojiToIndex;
    NSArray * _equivalentEmojiSets;
    EMFEmojiLocaleData * _localeData;
    EMFEmojiPreferencesClient * _preferencesClient;
}

+ (bool)containsEmoji:(id)arg1;
+ (id)emojiContentsArray:(id)arg1;
+ (bool)isEmoji:(id)arg1;

- (void).cxx_destruct;
- (id)filterEmojis:(id)arg1;
- (id)init;
- (id)postProcessEmoji:(id)arg1 excludeSet:(id)arg2;

@end
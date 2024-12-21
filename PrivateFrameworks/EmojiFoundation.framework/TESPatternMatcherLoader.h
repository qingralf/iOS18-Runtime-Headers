/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface TESPatternMatcherLoader : NSObject {
    NSLocale * _locale;
    NSMutableArray * _matchers;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, retain) NSMutableArray *matchers;

+ (id)_loadPatternMatcherForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_loadPatternMatchers;
- (id)initWithLocale:(id)arg1;
- (id)locale;
- (id)matchers;
- (void)setMatchers:(id)arg1;

@end
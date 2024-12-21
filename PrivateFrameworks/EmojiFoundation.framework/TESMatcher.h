/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface TESMatcher : NSObject {
    NSLocale * _locale;
    NSMutableArray * _matchers;
    TESTriggerPhraseMatcher * _phraseMatcher;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, retain) NSMutableArray *matchers;
@property (nonatomic, retain) TESTriggerPhraseMatcher *phraseMatcher;

- (void).cxx_destruct;
- (void)_loadPatternMatchers;
- (void)asynchronouslyEnumerateTextEffectCandidatesInString:(id)arg1 searchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateTextEffectCandidatesInString:(id)arg1 searchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithLocale:(id)arg1;
- (id)locale;
- (id)matchers;
- (id)phraseMatcher;
- (void)setMatchers:(id)arg1;
- (void)setPhraseMatcher:(id)arg1;

@end
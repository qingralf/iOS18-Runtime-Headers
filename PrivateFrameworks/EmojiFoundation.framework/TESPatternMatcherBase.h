/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface TESPatternMatcherBase : NSObject <TESPatternMatching> {
    long long  _effectType;
    bool  _matchMustBeWordOrSentenceTerminal;
    long long  _matchType;
    NSString * _pattern;
    NSRegularExpression * _regularExpression;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long effectType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool matchMustBeWordOrSentenceTerminal;
@property (nonatomic) long long matchType;
@property (nonatomic, retain) NSString *pattern;
@property (nonatomic, retain) NSRegularExpression *regularExpression;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configurePrecompiledRegularExpression;
- (id)createMatchResultForMatchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 sourceString:(id)arg2;
- (long long)effectType;
- (id)init;
- (bool)matchMustBeWordOrSentenceTerminal;
- (long long)matchType;
- (id)matchesForString:(id)arg1 searchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)pattern;
- (id)regularExpression;
- (void)setEffectType:(long long)arg1;
- (void)setMatchMustBeWordOrSentenceTerminal:(bool)arg1;
- (void)setMatchType:(long long)arg1;
- (void)setPattern:(id)arg1;
- (void)setRegularExpression:(id)arg1;

@end

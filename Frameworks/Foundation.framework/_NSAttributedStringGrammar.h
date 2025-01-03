/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSAttributedStringGrammar : NSObject <NSCopying, NSMutableCopying> {
    long long  _aspect;
    long long  _deictic;
    long long  _determinationType;
    long long  _gender;
    long long  _grammaticalCase;
    long long  _mood;
    long long  _number;
    long long  _person;
    long long  _position;
    long long  _tense;
    long long  _verbForm;
}

@property long long aspect;
@property long long deictic;
@property long long determinationType;
@property long long gender;
@property long long grammaticalCase;
@property long long mood;
@property long long number;
@property long long person;
@property long long position;
@property long long tense;
@property long long verbForm;

+ (id)identityGrammar;

- (id)_initWithMarkdownDictionary:(id)arg1;
- (long long)aspect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deictic;
- (long long)determinationType;
- (long long)gender;
- (long long)grammaticalCase;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMorphology:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mood;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)number;
- (long long)person;
- (long long)position;
- (void)setAspect:(long long)arg1;
- (void)setDeictic:(long long)arg1;
- (void)setDeterminationType:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setGrammaticalCase:(long long)arg1;
- (void)setMood:(long long)arg1;
- (void)setNumber:(long long)arg1;
- (void)setPerson:(long long)arg1;
- (void)setPosition:(long long)arg1;
- (void)setTense:(long long)arg1;
- (void)setVerbForm:(long long)arg1;
- (long long)tense;
- (long long)verbForm;

@end

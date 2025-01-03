/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface MCSyntheticInput : MCKeyboardInput {
    NSString * _committedText;
    unsigned long long  _cursorIndex;
    bool  _includeSuffixAsSearchString;
    NSArray * _syllables;
    bool  _useSubInputsAsSearchString;
}

@property (nonatomic, readonly) NSString *committedText;
@property (nonatomic, readonly) unsigned long long cursorIndex;
@property (nonatomic) bool includeSuffixAsSearchString;
@property (nonatomic, readonly) NSArray *syllables;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *uncommittedText;
@property (nonatomic) bool useSubInputsAsSearchString;

- (void).cxx_destruct;
- (id)committedText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cursorIndex;
- (id)externalSuffix:(id)arg1;
- (bool)includeSuffixAsSearchString;
- (id)init;
- (id)initWithCommittedText:(id)arg1 syllables:(id)arg2;
- (id)initWithCommittedText:(id)arg1 syllables:(id)arg2 useSubInputsAsSearchString:(bool)arg3;
- (void)setIncludeSuffixAsSearchString:(bool)arg1;
- (void)setUseSubInputsAsSearchString:(bool)arg1;
- (id)shortDescriptionExcludingSubInputs;
- (int)syllableIndex:(int*)arg1;
- (id)syllables;
- (id)syntheticInputWithCommittedText:(id)arg1 syllables:(id)arg2;
- (id)syntheticInputWithCursorIndex:(unsigned long long)arg1;
- (id)text;
- (id)uncommittedText;
- (bool)useSubInputsAsSearchString;

@end

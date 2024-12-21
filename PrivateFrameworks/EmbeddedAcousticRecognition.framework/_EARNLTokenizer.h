/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARNLTokenizer : _EARTokenizer {
    NLTagger * _nlTagger;
    bool  _replacePunctuation;
    unsigned long long  _tagOptions;
    bool  _toLowerCase;
}

@property (nonatomic) bool replacePunctuation;
@property (nonatomic) unsigned long long tagOptions;
@property (nonatomic) bool toLowerCase;

- (void).cxx_destruct;
- (id)init;
- (bool)replacePunctuation;
- (void)setReplacePunctuation:(bool)arg1;
- (void)setTagOptions:(unsigned long long)arg1;
- (void)setToLowerCase:(bool)arg1;
- (unsigned long long)tagOptions;
- (bool)toLowerCase;
- (id)tokenize:(id)arg1;
- (id)tokenize:(id)arg1 limit:(unsigned long long)arg2;

@end
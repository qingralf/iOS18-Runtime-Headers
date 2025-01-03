/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMTokenizer : NSObject {
    NSLocale * _locale;
    struct shared_ptr<semskitbridge::Tokenizer> { 
        struct Tokenizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tokenizer;
}

@property (nonatomic, readonly) struct shared_ptr<semskitbridge::Tokenizer> { struct Tokenizer {} *x1; struct __shared_weak_count {} *x2; } tokenizer;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateTokensOfText:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 assetPath:(id)arg2 normalizeWords:(bool)arg3;
- (id)initWithTokenizerLocale:(id)arg1 error:(id*)arg2;
- (id)locale;
- (id)queryFromText:(id)arg1;
- (struct shared_ptr<semskitbridge::Tokenizer> { struct Tokenizer {} *x1; struct __shared_weak_count {} *x2; })tokenizer;

@end

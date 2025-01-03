/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHBracketsMatchingStep : CHMathPostprocessingStep {
    NSSet * _bracketSymbols;
    struct unique_ptr<CoreHandwriting::LaTeXSyntaxHelper, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { 
        struct __compressed_pair<CoreHandwriting::LaTeXSyntaxHelper *, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { 
            struct LaTeXSyntaxHelper {} *__value_; 
        } __ptr_; 
    }  latexHelper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCodemap:(id)arg1;
- (id)process:(id)arg1 options:(id)arg2;

@end

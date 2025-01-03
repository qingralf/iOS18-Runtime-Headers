/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTransliterateUnmatchedConfusablesStep : CHMathPostprocessingStep {
    NSDictionary * _mathClosingConfusableMappings;
    NSDictionary * _mathOpeningConfusableMappings;
    struct unique_ptr<CoreHandwriting::LaTeXSyntaxHelper, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { 
        struct __compressed_pair<CoreHandwriting::LaTeXSyntaxHelper *, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { 
            struct LaTeXSyntaxHelper {} *__value_; 
        } __ptr_; 
    }  latexHelper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)doesTransliterateAtIndexResolveUnmatchingCase:(id)arg1 atIndex:(long long)arg2 withString:(id)arg3 unmatchingCase:(int)arg4 shouldForceLocaleFormatNumber:(bool)arg5;
- (id)initWithCodemap:(id)arg1;
- (id)process:(id)arg1 options:(id)arg2;
- (bool)updateUnmatchingSymbol:(id)arg1 unmatchingType:(int)arg2 mode:(id)arg3 shouldForceLocaleFormatNumber:(bool)arg4 outUpdatedPathTokens:(id)arg5;

@end

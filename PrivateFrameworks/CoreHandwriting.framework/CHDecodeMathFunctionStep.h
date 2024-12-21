/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHDecodeMathFunctionStep : CHMathPostprocessingStep {
    NSSet * _decoratedFunctions;
    NSDictionary * _mathFunctionNameMapping;
    NSDictionary * _stemFunctionMappings;
}

+ (id)definedMathFunctionNameMapping;
+ (id)definedMathFunctionNameSet;
+ (bool)isFunctionInTranscriptionPathWrappedByAnyStringFromArray:(id)arg1 functionName:(id)arg2 pathTranscription:(id)arg3 functionStartLocation:(long long)arg4;

- (void).cxx_destruct;
- (id)_sortedFunctionNames:(id)arg1;
- (id)init;
- (id)process:(id)arg1 options:(id)arg2;

@end
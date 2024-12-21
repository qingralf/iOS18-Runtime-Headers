/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRTextDecodingUtils : NSObject

+ (id)adjustedBeamSearchDecodedString:(id)arg1 greedyDecodedString:(id)arg2 decodingLocale:(id)arg3;
+ (id)characterRangesForTokens:(id)arg1 fromActivation:(id)arg2 usingCharacterTokens:(bool)arg3;
+ (id)filteredTokensFromTokens:(id)arg1 falsePositiveFiltering:(bool)arg2 keepWhitespaceToken:(bool)arg3;
+ (void)getCharacterBoundariesForActivationRanges:(id)arg1 topPoints:(id*)arg2 bottomPoints:(id*)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 scale:(float)arg5 featureImageSize:(struct CGSize { double x1; double x2; })arg6 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 rotatedRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 radians:(float)arg9 model:(id)arg10 configuration:(id)arg11 paddingLeft:(double)arg12 paddingRight:(double)arg13 rangeOffset:(double)arg14;
+ (id)getTokenPermutationByApplyingReorderingPermutation:(id)arg1 toRanges:(id)arg2;
+ (void)getWordBoundariesForWhiteSpaceRanges:(id)arg1 topPoints:(id*)arg2 bottomPoints:(id*)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 scale:(float)arg5 featureImageSize:(struct CGSize { double x1; double x2; })arg6 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 rotatedRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 radians:(float)arg9 model:(id)arg10 configuration:(id)arg11 paddingLeft:(double)arg12 paddingRight:(double)arg13 rangeOffset:(double)arg14;
+ (id)graphemeClusterTokensFromTokens:(id)arg1;
+ (id)halfWidthToFullWidthNormalizationForTextString:(id)arg1;
+ (id)invertedPermutation:(id)arg1;
+ (id)reversedPermutation:(id)arg1 numTimeSteps:(unsigned long long)arg2;
+ (id)reversedTokens:(id)arg1 numTimeSteps:(unsigned long long)arg2;
+ (id)tokenDelimiterRangesForTokens:(id)arg1 usingCharacterTokens:(bool)arg2;
+ (id)tokenSequenceStringForTokens:(id)arg1 usingCharacterTokens:(bool)arg2;
+ (bool)validateProbability:(id)arg1 precisionThreshold:(double)arg2 withLM:(bool)arg3;
+ (id)wordTokensFromCharacterTokens:(id)arg1;

@end
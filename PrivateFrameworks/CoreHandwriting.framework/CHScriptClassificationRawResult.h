/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHScriptClassificationRawResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _orderedScriptClassification;
    NSDictionary * _probabilityByScriptClassifications;
}

@property (nonatomic, readonly) NSArray *orderedScriptClassification;
@property (nonatomic, readonly) NSDictionary *probabilityByScriptClassifications;

+ (id)changeableTextMathScriptClassifications;
+ (bool)supportsSecureCoding;
+ (id)validFallbackScriptClassificationsForNontext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackScriptClassificationForWeakLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithProbabilityByScriptClassifications:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScriptClassificationRawResult:(id)arg1;
- (bool)isValidScriptClassificationForShapeStroke;
- (double)mathScriptProbability;
- (id)orderedScriptClassification;
- (id)probabilityByScriptClassifications;
- (id)scriptClassificationAtIndex:(long long)arg1;
- (id)scriptProbabilityAtIndex:(long long)arg1;

@end
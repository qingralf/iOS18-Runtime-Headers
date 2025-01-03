/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSPasswordEvaluationCacheEntry : NSObject <NSSecureCoding> {
    WBSPasswordEvaluation * _evaluation;
    NSNumber * _versionNumber;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSNumber *versionNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPasswordEvaluation:(id)arg1 versionNumber:(id)arg2;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPasswordEvaluation:(id)arg1;
- (id)passwordEvaluationWithPassword:(id)arg1;
- (id)versionNumber;

@end

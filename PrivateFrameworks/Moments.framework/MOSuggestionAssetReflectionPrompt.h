/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOSuggestionAssetReflectionPrompt : NSObject <NSCopying, NSSecureCoding> {
    NSString * _reflectionPrompt;
    NSArray * _reflectionPrompts;
    unsigned long long  _reflectionType;
    UIImage * _reflectionVisual;
}

@property (nonatomic, readonly) NSString *reflectionPrompt;
@property (nonatomic, readonly) NSArray *reflectionPrompts;
@property (nonatomic, readonly) unsigned long long reflectionType;
@property (nonatomic, readonly) UIImage *reflectionVisual;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflectionPrompts:(id)arg1 icon:(id)arg2 type:(unsigned long long)arg3;
- (id)reflectionPrompt;
- (id)reflectionPrompts;
- (unsigned long long)reflectionType;
- (id)reflectionVisual;

@end
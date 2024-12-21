/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface _SFModelProperties : NSObject <NSCopying, NSSecureCoding> {
    NSString * _modelQualityType;
    NSURL * _modelRoot;
    NSArray * _modelSamplingRates;
    NSArray * _modelTaskNames;
    NSString * _modelVersion;
}

@property (nonatomic, readonly, copy) NSString *modelQualityType;
@property (nonatomic, readonly, copy) NSURL *modelRoot;
@property (nonatomic, readonly, copy) NSArray *modelSamplingRates;
@property (nonatomic, readonly, copy) NSArray *modelTaskNames;
@property (nonatomic, readonly, copy) NSString *modelVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelRoot:(id)arg1 modelVersion:(id)arg2 modelTaskNames:(id)arg3 modelQualityType:(id)arg4 modelSamplingRates:(id)arg5;
- (id)modelQualityType;
- (id)modelRoot;
- (id)modelSamplingRates;
- (id)modelTaskNames;
- (id)modelVersion;

@end
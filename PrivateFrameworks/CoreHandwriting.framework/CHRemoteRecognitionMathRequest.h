/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRemoteRecognitionMathRequest : CHRemoteRecognitionRequest <NSSecureCoding> {
    NSSet * _declaredVariables;
    NSArray * _locales;
}

@property (nonatomic, copy) NSSet *declaredVariables;
@property (nonatomic, copy) NSArray *locales;

+ (Class)classForKeyedUnarchiver;
+ (id)loadFromFile:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)declaredVariables;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteRecognitionMathRequest:(id)arg1;
- (id)locales;
- (void)setDeclaredVariables:(id)arg1;
- (void)setLocales:(id)arg1;

@end

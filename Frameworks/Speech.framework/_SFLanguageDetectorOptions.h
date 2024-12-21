/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface _SFLanguageDetectorOptions : NSObject <NSCopying, NSSecureCoding> {
    long long  _alternativesCount;
    NSArray * _languageConstraints;
}

@property (nonatomic, readonly) long long alternativesCount;
@property (nonatomic, readonly, copy) NSArray *languageConstraints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)alternativesCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguageConstraints:(id)arg1 alternativesCount:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)languageConstraints;

@end
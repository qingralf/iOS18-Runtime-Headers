/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Translation.framework/Translation
 */

@interface _LTSELFLoggingTranslationLIDData : NSObject <NSSecureCoding> {
    long long  _inputSource;
    NSUUID * _invocationId;
    NSArray * _lowConfidenceLocales;
    NSLocale * _topLocale;
}

@property (nonatomic) long long inputSource;
@property (nonatomic, readonly, copy) NSUUID *invocationId;
@property (nonatomic, retain) NSArray *lowConfidenceLocales;
@property (nonatomic, retain) NSLocale *topLocale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvocationId:(id)arg1 inputSource:(long long)arg2 topLocale:(id)arg3 lowConfidenceLocales:(id)arg4;
- (long long)inputSource;
- (id)invocationId;
- (id)lowConfidenceLocales;
- (void)setInputSource:(long long)arg1;
- (void)setLowConfidenceLocales:(id)arg1;
- (void)setTopLocale:(id)arg1;
- (id)topLocale;

@end

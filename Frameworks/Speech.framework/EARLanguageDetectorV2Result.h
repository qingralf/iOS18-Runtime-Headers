/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface EARLanguageDetectorV2Result : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _confidences;
    unsigned long long  _detectedLangauge;
    NSString * _dominantLocale;
}

@property (nonatomic, copy) NSDictionary *confidences;
@property (nonatomic) unsigned long long detectedLangauge;
@property (nonatomic, copy) NSString *dominantLocale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)confidences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)detectedLangauge;
- (id)dominantLocale;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguageDetectorV2Result:(id)arg1;
- (void)setConfidences:(id)arg1;
- (void)setDetectedLangauge:(unsigned long long)arg1;
- (void)setDominantLocale:(id)arg1;

@end

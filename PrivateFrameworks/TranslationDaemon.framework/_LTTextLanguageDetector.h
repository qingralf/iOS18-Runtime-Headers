/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon
 */

@interface _LTTextLanguageDetector : NSObject {
    NSArray * _availableLocales;
    NLLanguageRecognizer * _recognizer;
}

@property (nonatomic, copy) NSArray *availableLocales;

- (void).cxx_destruct;
- (id)_mapSupportedLocales:(id)arg1;
- (id)availableLocales;
- (id)detectionForString:(id)arg1;
- (id)detectionForStrings:(id)arg1;
- (id)detectionForStrings:(id)arg1 strategy:(unsigned long long)arg2;
- (id)init;
- (id)initWithModel:(unsigned long long)arg1;
- (void)setAvailableLocales:(id)arg1;

@end

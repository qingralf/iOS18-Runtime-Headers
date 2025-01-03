/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRLanguageRecognitionContext : NSObject {
    NSMutableString * _contextString;
    NSString * _defaultLocale;
    NSMutableArray * _featuresAccumulator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _languageRecognitionLock;
    NSString * _recognizedLanguage;
    unsigned long long  _script;
}

- (void).cxx_destruct;

@end
